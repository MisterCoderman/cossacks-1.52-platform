#include "recomp.h"

/* OnInit @ 0x11341005 (5 bytes, 1 insns) */
void f_11341005(void) {
  FTRACE(0x11341005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11341005 jmp 0x11341090 */
  f_11341090(); return;
}

/* thunk_FUN_10001030 @ 0x1134100a (5 bytes, 1 insns) */
void f_1134100a(void) {
  FTRACE(0x1134100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134100a jmp 0x11341030 */
  f_11341030(); return;
}

/* ProcessScenary @ 0x1134100f (5 bytes, 1 insns) */
void f_1134100f(void) {
  FTRACE(0x1134100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1134100f jmp 0x113412d0 */
  f_113412d0(); return;
}

/* FUN_10001030 @ 0x11341030 (67 bytes, 26 insns) */
void f_11341030(void) {
  FTRACE(0x11341030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11341030 push ebp */
  push32((uint32_t)(EBP));
  /* 11341031 mov ebp, esp */
  EBP = (ESP);
  /* 11341033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11341036 push ebx */
  push32((uint32_t)(EBX));
  /* 11341037 push esi */
  push32((uint32_t)(ESI));
  /* 11341038 push edi */
  push32((uint32_t)(EDI));
  /* 11341039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1134103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11341041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11341046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11341048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341052 je 0x11341056 */
  if (C.zf) goto L_11341056;
  /* 11341054 jmp 0x1134105b */
  goto L_1134105b;
L_11341056:;
  /* 11341056 call 0x11341005 */
  push32(0x1134105bu); f_11341005();
L_1134105b:;
  /* 1134105b mov eax, 1 */
  EAX = (0x1u);
  /* 11341060 pop edi */
  EDI = (pop32());
  /* 11341061 pop esi */
  ESI = (pop32());
  /* 11341062 pop ebx */
  EBX = (pop32());
  /* 11341063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341068 call 0x11342040 */
  push32(0x1134106du); f_11342040();
  /* 1134106d mov esp, ebp */
  ESP = (EBP);
  /* 1134106f pop ebp */
  EBP = (pop32());
  /* 11341070 ret 0xc */
  ESPCHK(0x11341030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x11341090 (458 bytes, 129 insns) */
void f_11341090(void) {
  FTRACE(0x11341090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11341090 push ebp */
  push32((uint32_t)(EBP));
  /* 11341091 mov ebp, esp */
  EBP = (ESP);
  /* 11341093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11341096 push ebx */
  push32((uint32_t)(EBX));
  /* 11341097 push esi */
  push32((uint32_t)(ESI));
  /* 11341098 push edi */
  push32((uint32_t)(EDI));
  /* 11341099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1134109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 113410a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 113410a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 113410a8 mov esi, esp */
  ESI = (ESP);
  /* 113410aa push 0x1136a074 */
  push32((uint32_t)(0x1136a074u));
  /* 113410af push 0 */
  push32((uint32_t)(0x0u));
  /* 113410b1 call dword ptr [0x1137147c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137147c))), 0x113410b7u);
  /* 113410b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113410ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113410bc call 0x11342040 */
  push32(0x113410c1u); f_11342040();
  /* 113410c1 mov esi, esp */
  ESI = (ESP);
  /* 113410c3 push 0x1136a06c */
  push32((uint32_t)(0x1136a06cu));
  /* 113410c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 113410ca call dword ptr [0x1137147c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137147c))), 0x113410d0u);
  /* 113410d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113410d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113410d5 call 0x11342040 */
  push32(0x113410dau); f_11342040();
  /* 113410da mov esi, esp */
  ESI = (ESP);
  /* 113410dc push 0x1136a060 */
  push32((uint32_t)(0x1136a060u));
  /* 113410e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 113410e3 call dword ptr [0x1137147c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137147c))), 0x113410e9u);
  /* 113410e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113410ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113410ee call 0x11342040 */
  push32(0x113410f3u); f_11342040();
  /* 113410f3 mov esi, esp */
  ESI = (ESP);
  /* 113410f5 push 0x1136a054 */
  push32((uint32_t)(0x1136a054u));
  /* 113410fa push 3 */
  push32((uint32_t)(0x3u));
  /* 113410fc call dword ptr [0x1137147c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137147c))), 0x11341102u);
  /* 11341102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341107 call 0x11342040 */
  push32(0x1134110cu); f_11342040();
  /* 1134110c mov esi, esp */
  ESI = (ESP);
  /* 1134110e push 0x1136a074 */
  push32((uint32_t)(0x1136a074u));
  /* 11341113 push 5 */
  push32((uint32_t)(0x5u));
  /* 11341115 call dword ptr [0x1137147c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137147c))), 0x1134111bu);
  /* 1134111b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134111e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341120 call 0x11342040 */
  push32(0x11341125u); f_11342040();
  /* 11341125 mov esi, esp */
  ESI = (ESP);
  /* 11341127 push 4 */
  push32((uint32_t)(0x4u));
  /* 11341129 push 0x1136f428 */
  push32((uint32_t)(0x1136f428u));
  /* 1134112e call dword ptr [0x11371480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371480))), 0x11341134u);
  /* 11341134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341137 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341139 call 0x11342040 */
  push32(0x1134113eu); f_11342040();
  /* 1134113e mov esi, esp */
  ESI = (ESP);
  /* 11341140 push 4 */
  push32((uint32_t)(0x4u));
  /* 11341142 push 0x1136f42c */
  push32((uint32_t)(0x1136f42cu));
  /* 11341147 call dword ptr [0x11371480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371480))), 0x1134114du);
  /* 1134114d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341150 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341152 call 0x11342040 */
  push32(0x11341157u); f_11342040();
  /* 11341157 mov esi, esp */
  ESI = (ESP);
  /* 11341159 push 0x1136a048 */
  push32((uint32_t)(0x1136a048u));
  /* 1134115e push 0x1136f3e8 */
  push32((uint32_t)(0x1136f3e8u));
  /* 11341163 call dword ptr [0x11371484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371484))), 0x11341169u);
  /* 11341169 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134116c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134116e call 0x11342040 */
  push32(0x11341173u); f_11342040();
  /* 11341173 mov esi, esp */
  ESI = (ESP);
  /* 11341175 push 0x1136a040 */
  push32((uint32_t)(0x1136a040u));
  /* 1134117a push 0x1136f3f0 */
  push32((uint32_t)(0x1136f3f0u));
  /* 1134117f call dword ptr [0x11371484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371484))), 0x11341185u);
  /* 11341185 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341188 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134118a call 0x11342040 */
  push32(0x1134118fu); f_11342040();
  /* 1134118f mov esi, esp */
  ESI = (ESP);
  /* 11341191 push 0x1136a03c */
  push32((uint32_t)(0x1136a03cu));
  /* 11341196 push 0x1136f400 */
  push32((uint32_t)(0x1136f400u));
  /* 1134119b call dword ptr [0x11371488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371488))), 0x113411a1u);
  /* 113411a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113411a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113411a6 call 0x11342040 */
  push32(0x113411abu); f_11342040();
  /* 113411ab mov esi, esp */
  ESI = (ESP);
  /* 113411ad push 0x1136a038 */
  push32((uint32_t)(0x1136a038u));
  /* 113411b2 push 0x1136f408 */
  push32((uint32_t)(0x1136f408u));
  /* 113411b7 call dword ptr [0x11371488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371488))), 0x113411bdu);
  /* 113411bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113411c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113411c2 call 0x11342040 */
  push32(0x113411c7u); f_11342040();
  /* 113411c7 mov esi, esp */
  ESI = (ESP);
  /* 113411c9 push 0x1136a034 */
  push32((uint32_t)(0x1136a034u));
  /* 113411ce push 0x1136f410 */
  push32((uint32_t)(0x1136f410u));
  /* 113411d3 call dword ptr [0x11371488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371488))), 0x113411d9u);
  /* 113411d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113411dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113411de call 0x11342040 */
  push32(0x113411e3u); f_11342040();
  /* 113411e3 mov esi, esp */
  ESI = (ESP);
  /* 113411e5 push 0x1136a028 */
  push32((uint32_t)(0x1136a028u));
  /* 113411ea push 0x1136f3f8 */
  push32((uint32_t)(0x1136f3f8u));
  /* 113411ef call dword ptr [0x1137148c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137148c))), 0x113411f5u);
  /* 113411f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113411f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113411fa call 0x11342040 */
  push32(0x113411ffu); f_11342040();
  /* 113411ff mov esi, esp */
  ESI = (ESP);
  /* 11341201 push 0x1136a01c */
  push32((uint32_t)(0x1136a01cu));
  /* 11341206 push 0x1136f420 */
  push32((uint32_t)(0x1136f420u));
  /* 1134120b call dword ptr [0x11371490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371490))), 0x11341211u);
  /* 11341211 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341214 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341216 call 0x11342040 */
  push32(0x1134121bu); f_11342040();
  /* 1134121b mov esi, esp */
  ESI = (ESP);
  /* 1134121d push 0x1136f3e0 */
  push32((uint32_t)(0x1136f3e0u));
  /* 11341222 call dword ptr [0x11371494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371494))), 0x11341228u);
  /* 11341228 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134122b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134122d call 0x11342040 */
  push32(0x11341232u); f_11342040();
  /* 11341232 mov esi, esp */
  ESI = (ESP);
  /* 11341234 push 0x1136f418 */
  push32((uint32_t)(0x1136f418u));
  /* 11341239 call dword ptr [0x11371494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371494))), 0x1134123fu);
  /* 1134123f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341242 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341244 call 0x11342040 */
  push32(0x11341249u); f_11342040();
  /* 11341249 pop edi */
  EDI = (pop32());
  /* 1134124a pop esi */
  ESI = (pop32());
  /* 1134124b pop ebx */
  EBX = (pop32());
  /* 1134124c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134124f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341251 call 0x11342040 */
  push32(0x11341256u); f_11342040();
  /* 11341256 mov esp, ebp */
  ESP = (EBP);
  /* 11341258 pop ebp */
  EBP = (pop32());
  /* 11341259 ret  */
  ESPCHK(0x11341090u, _esp0);
  ESP += 4; return;
}

/* FUN_100012d0 @ 0x113412d0 (2583 bytes, 745 insns) */
void f_113412d0(void) {
  FTRACE(0x113412d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113412d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113412d1 mov ebp, esp */
  EBP = (ESP);
  /* 113412d3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113412d6 push ebx */
  push32((uint32_t)(EBX));
  /* 113412d7 push esi */
  push32((uint32_t)(ESI));
  /* 113412d8 push edi */
  push32((uint32_t)(EDI));
  /* 113412d9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 113412dc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 113412e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 113412e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 113412e8 mov esi, esp */
  ESI = (ESP);
  /* 113412ea push 0x63 */
  push32((uint32_t)(0x63u));
  /* 113412ec call dword ptr [0x11371410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371410))), 0x113412f2u);
  /* 113412f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113412f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113412f7 call 0x11342040 */
  push32(0x113412fcu); f_11342040();
  /* 113412fc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11341301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11341303 je 0x113417d6 */
  if (C.zf) goto L_113417d6;
  /* 11341309 mov esi, esp */
  ESI = (ESP);
  /* 1134130b push 0 */
  push32((uint32_t)(0x0u));
  /* 1134130d call dword ptr [0x11371414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371414))), 0x11341313u);
  /* 11341313 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341316 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341318 call 0x11342040 */
  push32(0x1134131du); f_11342040();
  /* 1134131d mov dword ptr [0x1136f428], eax */
  w32((uint32_t)(0x1136f428), (EAX));
  /* 11341322 mov dword ptr [0x1136f42c], 0 */
  w32((uint32_t)(0x1136f42c), (0x0u));
  /* 1134132c mov eax, dword ptr [0x1136f428] */
  EAX = (r32((uint32_t)(0x1136f428)));
  /* 11341331 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11341337 mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 1134133c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134133e mov esi, esp */
  ESI = (ESP);
  /* 11341340 push ecx */
  push32((uint32_t)(ECX));
  /* 11341341 push 3 */
  push32((uint32_t)(0x3u));
  /* 11341343 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341345 call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x1134134bu);
  /* 1134134b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134134e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341350 call 0x11342040 */
  push32(0x11341355u); f_11342040();
  /* 11341355 mov edx, dword ptr [0x1136f428] */
  EDX = (r32((uint32_t)(0x1136f428)));
  /* 1134135b imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11341361 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 11341366 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11341368 mov esi, esp */
  ESI = (ESP);
  /* 1134136a push eax */
  push32((uint32_t)(EAX));
  /* 1134136b push 1 */
  push32((uint32_t)(0x1u));
  /* 1134136d push 0 */
  push32((uint32_t)(0x0u));
  /* 1134136f call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x11341375u);
  /* 11341375 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341378 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134137a call 0x11342040 */
  push32(0x1134137fu); f_11342040();
  /* 1134137f mov ecx, dword ptr [0x1136f428] */
  ECX = (r32((uint32_t)(0x1136f428)));
  /* 11341385 imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134138b mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 11341390 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11341392 mov esi, esp */
  ESI = (ESP);
  /* 11341394 push edx */
  push32((uint32_t)(EDX));
  /* 11341395 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341397 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341399 call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x1134139fu);
  /* 1134139f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113413a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113413a4 call 0x11342040 */
  push32(0x113413a9u); f_11342040();
  /* 113413a9 mov eax, dword ptr [0x1136f428] */
  EAX = (r32((uint32_t)(0x1136f428)));
  /* 113413ae imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113413b4 mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 113413b9 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113413bb mov esi, esp */
  ESI = (ESP);
  /* 113413bd push ecx */
  push32((uint32_t)(ECX));
  /* 113413be push 2 */
  push32((uint32_t)(0x2u));
  /* 113413c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113413c2 call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x113413c8u);
  /* 113413c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113413cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113413cd call 0x11342040 */
  push32(0x113413d2u); f_11342040();
  /* 113413d2 mov edx, dword ptr [0x1136f428] */
  EDX = (r32((uint32_t)(0x1136f428)));
  /* 113413d8 imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113413de mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 113413e3 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113413e5 mov esi, esp */
  ESI = (ESP);
  /* 113413e7 push eax */
  push32((uint32_t)(EAX));
  /* 113413e8 push 5 */
  push32((uint32_t)(0x5u));
  /* 113413ea push 0 */
  push32((uint32_t)(0x0u));
  /* 113413ec call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x113413f2u);
  /* 113413f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113413f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113413f7 call 0x11342040 */
  push32(0x113413fcu); f_11342040();
  /* 113413fc mov ecx, dword ptr [0x1136f428] */
  ECX = (r32((uint32_t)(0x1136f428)));
  /* 11341402 imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11341408 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 1134140d sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134140f mov esi, esp */
  ESI = (ESP);
  /* 11341411 push edx */
  push32((uint32_t)(EDX));
  /* 11341412 push 4 */
  push32((uint32_t)(0x4u));
  /* 11341414 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341416 call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x1134141cu);
  /* 1134141c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134141f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341421 call 0x11342040 */
  push32(0x11341426u); f_11342040();
  /* 11341426 mov esi, esp */
  ESI = (ESP);
  /* 11341428 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1134142d push 3 */
  push32((uint32_t)(0x3u));
  /* 1134142f push 1 */
  push32((uint32_t)(0x1u));
  /* 11341431 call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x11341437u);
  /* 11341437 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134143a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134143c call 0x11342040 */
  push32(0x11341441u); f_11342040();
  /* 11341441 mov esi, esp */
  ESI = (ESP);
  /* 11341443 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11341448 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134144a push 1 */
  push32((uint32_t)(0x1u));
  /* 1134144c call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x11341452u);
  /* 11341452 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341455 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341457 call 0x11342040 */
  push32(0x1134145cu); f_11342040();
  /* 1134145c mov esi, esp */
  ESI = (ESP);
  /* 1134145e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11341463 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341465 push 1 */
  push32((uint32_t)(0x1u));
  /* 11341467 call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x1134146du);
  /* 1134146d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341470 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341472 call 0x11342040 */
  push32(0x11341477u); f_11342040();
  /* 11341477 mov esi, esp */
  ESI = (ESP);
  /* 11341479 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1134147e push 2 */
  push32((uint32_t)(0x2u));
  /* 11341480 push 1 */
  push32((uint32_t)(0x1u));
  /* 11341482 call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x11341488u);
  /* 11341488 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134148b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134148d call 0x11342040 */
  push32(0x11341492u); f_11342040();
  /* 11341492 mov esi, esp */
  ESI = (ESP);
  /* 11341494 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11341499 push 5 */
  push32((uint32_t)(0x5u));
  /* 1134149b push 1 */
  push32((uint32_t)(0x1u));
  /* 1134149d call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x113414a3u);
  /* 113414a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113414a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113414a8 call 0x11342040 */
  push32(0x113414adu); f_11342040();
  /* 113414ad mov esi, esp */
  ESI = (ESP);
  /* 113414af push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113414b4 push 4 */
  push32((uint32_t)(0x4u));
  /* 113414b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113414b8 call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x113414beu);
  /* 113414be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113414c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113414c3 call 0x11342040 */
  push32(0x113414c8u); f_11342040();
  /* 113414c8 mov esi, esp */
  ESI = (ESP);
  /* 113414ca push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113414cf push 3 */
  push32((uint32_t)(0x3u));
  /* 113414d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 113414d3 call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x113414d9u);
  /* 113414d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113414dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113414de call 0x11342040 */
  push32(0x113414e3u); f_11342040();
  /* 113414e3 mov esi, esp */
  ESI = (ESP);
  /* 113414e5 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113414ea push 1 */
  push32((uint32_t)(0x1u));
  /* 113414ec push 2 */
  push32((uint32_t)(0x2u));
  /* 113414ee call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x113414f4u);
  /* 113414f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113414f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113414f9 call 0x11342040 */
  push32(0x113414feu); f_11342040();
  /* 113414fe mov esi, esp */
  ESI = (ESP);
  /* 11341500 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11341505 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341507 push 2 */
  push32((uint32_t)(0x2u));
  /* 11341509 call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x1134150fu);
  /* 1134150f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341512 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341514 call 0x11342040 */
  push32(0x11341519u); f_11342040();
  /* 11341519 mov esi, esp */
  ESI = (ESP);
  /* 1134151b push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11341520 push 2 */
  push32((uint32_t)(0x2u));
  /* 11341522 push 2 */
  push32((uint32_t)(0x2u));
  /* 11341524 call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x1134152au);
  /* 1134152a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134152f call 0x11342040 */
  push32(0x11341534u); f_11342040();
  /* 11341534 mov esi, esp */
  ESI = (ESP);
  /* 11341536 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1134153b push 5 */
  push32((uint32_t)(0x5u));
  /* 1134153d push 2 */
  push32((uint32_t)(0x2u));
  /* 1134153f call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x11341545u);
  /* 11341545 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341548 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134154a call 0x11342040 */
  push32(0x1134154fu); f_11342040();
  /* 1134154f mov esi, esp */
  ESI = (ESP);
  /* 11341551 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11341556 push 4 */
  push32((uint32_t)(0x4u));
  /* 11341558 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134155a call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x11341560u);
  /* 11341560 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341563 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341565 call 0x11342040 */
  push32(0x1134156au); f_11342040();
  /* 1134156a mov esi, esp */
  ESI = (ESP);
  /* 1134156c push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11341571 push 3 */
  push32((uint32_t)(0x3u));
  /* 11341573 push 3 */
  push32((uint32_t)(0x3u));
  /* 11341575 call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x1134157bu);
  /* 1134157b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134157e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341580 call 0x11342040 */
  push32(0x11341585u); f_11342040();
  /* 11341585 mov esi, esp */
  ESI = (ESP);
  /* 11341587 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1134158c push 1 */
  push32((uint32_t)(0x1u));
  /* 1134158e push 3 */
  push32((uint32_t)(0x3u));
  /* 11341590 call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x11341596u);
  /* 11341596 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341599 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134159b call 0x11342040 */
  push32(0x113415a0u); f_11342040();
  /* 113415a0 mov esi, esp */
  ESI = (ESP);
  /* 113415a2 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113415a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113415a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 113415ab call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x113415b1u);
  /* 113415b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113415b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113415b6 call 0x11342040 */
  push32(0x113415bbu); f_11342040();
  /* 113415bb mov esi, esp */
  ESI = (ESP);
  /* 113415bd push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113415c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113415c4 push 3 */
  push32((uint32_t)(0x3u));
  /* 113415c6 call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x113415ccu);
  /* 113415cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113415cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113415d1 call 0x11342040 */
  push32(0x113415d6u); f_11342040();
  /* 113415d6 mov esi, esp */
  ESI = (ESP);
  /* 113415d8 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113415dd push 5 */
  push32((uint32_t)(0x5u));
  /* 113415df push 3 */
  push32((uint32_t)(0x3u));
  /* 113415e1 call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x113415e7u);
  /* 113415e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113415ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113415ec call 0x11342040 */
  push32(0x113415f1u); f_11342040();
  /* 113415f1 mov esi, esp */
  ESI = (ESP);
  /* 113415f3 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113415f8 push 4 */
  push32((uint32_t)(0x4u));
  /* 113415fa push 3 */
  push32((uint32_t)(0x3u));
  /* 113415fc call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x11341602u);
  /* 11341602 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341605 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341607 call 0x11342040 */
  push32(0x1134160cu); f_11342040();
  /* 1134160c mov esi, esp */
  ESI = (ESP);
  /* 1134160e push 0x25 */
  push32((uint32_t)(0x25u));
  /* 11341610 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341612 call dword ptr [0x1137141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137141c))), 0x11341618u);
  /* 11341618 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134161b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134161d call 0x11342040 */
  push32(0x11341622u); f_11342040();
  /* 11341622 mov esi, esp */
  ESI = (ESP);
  /* 11341624 push 0xa */
  push32((uint32_t)(0xau));
  /* 11341626 push 1 */
  push32((uint32_t)(0x1u));
  /* 11341628 call dword ptr [0x1137141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137141c))), 0x1134162eu);
  /* 1134162e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341631 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341633 call 0x11342040 */
  push32(0x11341638u); f_11342040();
  /* 11341638 mov esi, esp */
  ESI = (ESP);
  /* 1134163a push 0x25 */
  push32((uint32_t)(0x25u));
  /* 1134163c push 2 */
  push32((uint32_t)(0x2u));
  /* 1134163e call dword ptr [0x1137141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137141c))), 0x11341644u);
  /* 11341644 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341647 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341649 call 0x11342040 */
  push32(0x1134164eu); f_11342040();
  /* 1134164e mov esi, esp */
  ESI = (ESP);
  /* 11341650 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341652 push 2 */
  push32((uint32_t)(0x2u));
  /* 11341654 push 0x1136f400 */
  push32((uint32_t)(0x1136f400u));
  /* 11341659 call dword ptr [0x11371420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371420))), 0x1134165fu);
  /* 1134165f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341662 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341664 call 0x11342040 */
  push32(0x11341669u); f_11342040();
  /* 11341669 mov esi, esp */
  ESI = (ESP);
  /* 1134166b push 2 */
  push32((uint32_t)(0x2u));
  /* 1134166d call dword ptr [0x11371424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371424))), 0x11341673u);
  /* 11341673 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341676 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341678 call 0x11342040 */
  push32(0x1134167du); f_11342040();
  /* 1134167d mov esi, esp */
  ESI = (ESP);
  /* 1134167f mov eax, dword ptr [0x1136f428] */
  EAX = (r32((uint32_t)(0x1136f428)));
  /* 11341684 push eax */
  push32((uint32_t)(EAX));
  /* 11341685 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341687 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341689 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134168b push 0x1136a0d0 */
  push32((uint32_t)(0x1136a0d0u));
  /* 11341690 push 1 */
  push32((uint32_t)(0x1u));
  /* 11341692 call dword ptr [0x11371428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371428))), 0x11341698u);
  /* 11341698 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134169b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134169d call 0x11342040 */
  push32(0x113416a2u); f_11342040();
  /* 113416a2 mov esi, esp */
  ESI = (ESP);
  /* 113416a4 mov ecx, dword ptr [0x1136f428] */
  ECX = (r32((uint32_t)(0x1136f428)));
  /* 113416aa push ecx */
  push32((uint32_t)(ECX));
  /* 113416ab push 0 */
  push32((uint32_t)(0x0u));
  /* 113416ad push 0 */
  push32((uint32_t)(0x0u));
  /* 113416af push 0 */
  push32((uint32_t)(0x0u));
  /* 113416b1 push 0x1136a0c4 */
  push32((uint32_t)(0x1136a0c4u));
  /* 113416b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 113416b8 call dword ptr [0x11371428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371428))), 0x113416beu);
  /* 113416be add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113416c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113416c3 call 0x11342040 */
  push32(0x113416c8u); f_11342040();
  /* 113416c8 mov esi, esp */
  ESI = (ESP);
  /* 113416ca mov edx, dword ptr [0x1136f428] */
  EDX = (r32((uint32_t)(0x1136f428)));
  /* 113416d0 push edx */
  push32((uint32_t)(EDX));
  /* 113416d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113416d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113416d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 113416d7 push 0x1136a0b8 */
  push32((uint32_t)(0x1136a0b8u));
  /* 113416dc push 3 */
  push32((uint32_t)(0x3u));
  /* 113416de call dword ptr [0x11371428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371428))), 0x113416e4u);
  /* 113416e4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113416e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113416e9 call 0x11342040 */
  push32(0x113416eeu); f_11342040();
  /* 113416ee mov esi, esp */
  ESI = (ESP);
  /* 113416f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113416f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113416f4 push 0x1136f400 */
  push32((uint32_t)(0x1136f400u));
  /* 113416f9 call dword ptr [0x11371420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371420))), 0x113416ffu);
  /* 113416ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341702 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341704 call 0x11342040 */
  push32(0x11341709u); f_11342040();
  /* 11341709 mov esi, esp */
  ESI = (ESP);
  /* 1134170b push 2 */
  push32((uint32_t)(0x2u));
  /* 1134170d call dword ptr [0x11371424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371424))), 0x11341713u);
  /* 11341713 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341716 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341718 call 0x11342040 */
  push32(0x1134171du); f_11342040();
  /* 1134171d mov esi, esp */
  ESI = (ESP);
  /* 1134171f push 0 */
  push32((uint32_t)(0x0u));
  /* 11341721 push 0x1136f3e8 */
  push32((uint32_t)(0x1136f3e8u));
  /* 11341726 call dword ptr [0x1137142c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137142c))), 0x1134172cu);
  /* 1134172c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134172f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341731 call 0x11342040 */
  push32(0x11341736u); f_11342040();
  /* 11341736 mov esi, esp */
  ESI = (ESP);
  /* 11341738 push 5 */
  push32((uint32_t)(0x5u));
  /* 1134173a call dword ptr [0x11371430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371430))), 0x11341740u);
  /* 11341740 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341743 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341745 call 0x11342040 */
  push32(0x1134174au); f_11342040();
  /* 1134174a mov esi, esp */
  ESI = (ESP);
  /* 1134174c push 0x1136a0b0 */
  push32((uint32_t)(0x1136a0b0u));
  /* 11341751 call dword ptr [0x11371434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371434))), 0x11341757u);
  /* 11341757 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134175a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134175c call 0x11342040 */
  push32(0x11341761u); f_11342040();
  /* 11341761 mov esi, esp */
  ESI = (ESP);
  /* 11341763 push 1 */
  push32((uint32_t)(0x1u));
  /* 11341765 push 1 */
  push32((uint32_t)(0x1u));
  /* 11341767 push 0x1136f408 */
  push32((uint32_t)(0x1136f408u));
  /* 1134176c call dword ptr [0x11371438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371438))), 0x11341772u);
  /* 11341772 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341775 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341777 call 0x11342040 */
  push32(0x1134177cu); f_11342040();
  /* 1134177c mov esi, esp */
  ESI = (ESP);
  /* 1134177e push 0 */
  push32((uint32_t)(0x0u));
  /* 11341780 push 0x1136f3f0 */
  push32((uint32_t)(0x1136f3f0u));
  /* 11341785 call dword ptr [0x1137142c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137142c))), 0x1134178bu);
  /* 1134178b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134178e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341790 call 0x11342040 */
  push32(0x11341795u); f_11342040();
  /* 11341795 mov eax, 3 */
  EAX = (0x3u);
  /* 1134179a sub eax, dword ptr [0x1136f428] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1136f428))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113417a0 imul eax, eax, 0x2710 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2710u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113417a6 add eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113417ab mov esi, esp */
  ESI = (ESP);
  /* 113417ad push eax */
  push32((uint32_t)(EAX));
  /* 113417ae push 1 */
  push32((uint32_t)(0x1u));
  /* 113417b0 call dword ptr [0x1137143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137143c))), 0x113417b6u);
  /* 113417b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113417b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113417bb call 0x11342040 */
  push32(0x113417c0u); f_11342040();
  /* 113417c0 mov esi, esp */
  ESI = (ESP);
  /* 113417c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113417c4 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 113417c6 call dword ptr [0x11371440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371440))), 0x113417ccu);
  /* 113417cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113417cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113417d1 call 0x11342040 */
  push32(0x113417d6u); f_11342040();
L_113417d6:;
  /* 113417d6 mov esi, esp */
  ESI = (ESP);
  /* 113417d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 113417da call dword ptr [0x11371444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371444))), 0x113417e0u);
  /* 113417e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113417e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113417e5 call 0x11342040 */
  push32(0x113417eau); f_11342040();
  /* 113417ea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113417ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113417f1 je 0x11341866 */
  if (C.zf) goto L_11341866;
  /* 113417f3 cmp dword ptr [0x1136f42c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f42c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113417fa jne 0x11341841 */
  if (!C.zf) goto L_11341841;
  /* 113417fc mov esi, esp */
  ESI = (ESP);
  /* 113417fe push 0x1136a0a8 */
  push32((uint32_t)(0x1136a0a8u));
  /* 11341803 call dword ptr [0x11371434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371434))), 0x11341809u);
  /* 11341809 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134180c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134180e call 0x11342040 */
  push32(0x11341813u); f_11342040();
  /* 11341813 mov ecx, 3 */
  ECX = (0x3u);
  /* 11341818 sub ecx, dword ptr [0x1136f428] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1136f428))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134181e imul ecx, ecx, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7d0u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11341824 add ecx, 0x4e20 */
  { uint32_t _a=(ECX),_b=(0x4e20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134182a mov esi, esp */
  ESI = (ESP);
  /* 1134182c push ecx */
  push32((uint32_t)(ECX));
  /* 1134182d push 2 */
  push32((uint32_t)(0x2u));
  /* 1134182f call dword ptr [0x1137143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137143c))), 0x11341835u);
  /* 11341835 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341838 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134183a call 0x11342040 */
  push32(0x1134183fu); f_11342040();
  /* 1134183f jmp 0x11341866 */
  goto L_11341866;
L_11341841:;
  /* 11341841 mov esi, esp */
  ESI = (ESP);
  /* 11341843 mov edx, dword ptr [0x1136f42c] */
  EDX = (r32((uint32_t)(0x1136f42c)));
  /* 11341849 push edx */
  push32((uint32_t)(EDX));
  /* 1134184a push 1 */
  push32((uint32_t)(0x1u));
  /* 1134184c call dword ptr [0x1137143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137143c))), 0x11341852u);
  /* 11341852 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341855 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341857 call 0x11342040 */
  push32(0x1134185cu); f_11342040();
  /* 1134185c mov dword ptr [0x1136f42c], 0 */
  w32((uint32_t)(0x1136f42c), (0x0u));
L_11341866:;
  /* 11341866 mov esi, esp */
  ESI = (ESP);
  /* 11341868 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134186a call dword ptr [0x11371444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371444))), 0x11341870u);
  /* 11341870 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341873 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341875 call 0x11342040 */
  push32(0x1134187au); f_11342040();
  /* 1134187a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134187f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11341881 je 0x113418df */
  if (C.zf) goto L_113418df;
  /* 11341883 cmp dword ptr [0x1136f42c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f42c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134188a jne 0x113418bb */
  if (!C.zf) goto L_113418bb;
  /* 1134188c mov esi, esp */
  ESI = (ESP);
  /* 1134188e push 0x1136a0a0 */
  push32((uint32_t)(0x1136a0a0u));
  /* 11341893 call dword ptr [0x11371434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371434))), 0x11341899u);
  /* 11341899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134189c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134189e call 0x11342040 */
  push32(0x113418a3u); f_11342040();
  /* 113418a3 mov esi, esp */
  ESI = (ESP);
  /* 113418a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113418a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113418a9 call dword ptr [0x11371440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371440))), 0x113418afu);
  /* 113418af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113418b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113418b4 call 0x11342040 */
  push32(0x113418b9u); f_11342040();
  /* 113418b9 jmp 0x113418df */
  goto L_113418df;
L_113418bb:;
  /* 113418bb mov esi, esp */
  ESI = (ESP);
  /* 113418bd mov eax, dword ptr [0x1136f42c] */
  EAX = (r32((uint32_t)(0x1136f42c)));
  /* 113418c2 push eax */
  push32((uint32_t)(EAX));
  /* 113418c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113418c5 call dword ptr [0x1137143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137143c))), 0x113418cbu);
  /* 113418cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113418ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113418d0 call 0x11342040 */
  push32(0x113418d5u); f_11342040();
  /* 113418d5 mov dword ptr [0x1136f42c], 0 */
  w32((uint32_t)(0x1136f42c), (0x0u));
L_113418df:;
  /* 113418df mov esi, esp */
  ESI = (ESP);
  /* 113418e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 113418e3 call dword ptr [0x11371410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371410))), 0x113418e9u);
  /* 113418e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113418ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113418ee call 0x11342040 */
  push32(0x113418f3u); f_11342040();
  /* 113418f3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113418f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113418fa jne 0x1134195a */
  if (!C.zf) goto L_1134195a;
  /* 113418fc cmp dword ptr [0x1136f42c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f42c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341903 jne 0x1134191f */
  if (!C.zf) goto L_1134191f;
  /* 11341905 mov esi, esp */
  ESI = (ESP);
  /* 11341907 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341909 push 3 */
  push32((uint32_t)(0x3u));
  /* 1134190b push 2 */
  push32((uint32_t)(0x2u));
  /* 1134190d call dword ptr [0x11371418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371418))), 0x11341913u);
  /* 11341913 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341916 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341918 call 0x11342040 */
  push32(0x1134191du); f_11342040();
  /* 1134191d jmp 0x1134195a */
  goto L_1134195a;
L_1134191f:;
  /* 1134191f mov esi, esp */
  ESI = (ESP);
  /* 11341921 mov ecx, dword ptr [0x1136f42c] */
  ECX = (r32((uint32_t)(0x1136f42c)));
  /* 11341927 push ecx */
  push32((uint32_t)(ECX));
  /* 11341928 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134192a call dword ptr [0x1137143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137143c))), 0x11341930u);
  /* 11341930 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341933 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341935 call 0x11342040 */
  push32(0x1134193au); f_11342040();
  /* 1134193a mov dword ptr [0x1136f42c], 0 */
  w32((uint32_t)(0x1136f42c), (0x0u));
  /* 11341944 mov esi, esp */
  ESI = (ESP);
  /* 11341946 push 1 */
  push32((uint32_t)(0x1u));
  /* 11341948 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134194a call dword ptr [0x11371440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371440))), 0x11341950u);
  /* 11341950 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341953 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341955 call 0x11342040 */
  push32(0x1134195au); f_11342040();
L_1134195a:;
  /* 1134195a mov esi, esp */
  ESI = (ESP);
  /* 1134195c push 1 */
  push32((uint32_t)(0x1u));
  /* 1134195e call dword ptr [0x11371410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371410))), 0x11341964u);
  /* 11341964 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341967 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341969 call 0x11342040 */
  push32(0x1134196eu); f_11342040();
  /* 1134196e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11341973 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11341975 je 0x11341a99 */
  if (C.zf) goto L_11341a99;
  /* 1134197b mov esi, esp */
  ESI = (ESP);
  /* 1134197d push 0x1136f3f0 */
  push32((uint32_t)(0x1136f3f0u));
  /* 11341982 push 0x1136f400 */
  push32((uint32_t)(0x1136f400u));
  /* 11341987 call dword ptr [0x11371448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371448))), 0x1134198du);
  /* 1134198d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341990 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341992 call 0x11342040 */
  push32(0x11341997u); f_11342040();
  /* 11341997 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11341999 jle 0x11341a99 */
  if ((C.zf||C.sf!=C.of)) goto L_11341a99;
  /* 1134199f mov esi, esp */
  ESI = (ESP);
  /* 113419a1 push 0x1136a098 */
  push32((uint32_t)(0x1136a098u));
  /* 113419a6 call dword ptr [0x1137144c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137144c))), 0x113419acu);
  /* 113419ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113419af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113419b1 call 0x11342040 */
  push32(0x113419b6u); f_11342040();
  /* 113419b6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113419bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113419bd je 0x11341a83 */
  if (C.zf) goto L_11341a83;
  /* 113419c3 mov esi, esp */
  ESI = (ESP);
  /* 113419c5 push 3 */
  push32((uint32_t)(0x3u));
  /* 113419c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113419c9 call dword ptr [0x11371450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371450))), 0x113419cfu);
  /* 113419cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113419d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113419d4 call 0x11342040 */
  push32(0x113419d9u); f_11342040();
  /* 113419d9 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113419de jle 0x11341a6c */
  if ((C.zf||C.sf!=C.of)) goto L_11341a6c;
  /* 113419e4 mov esi, esp */
  ESI = (ESP);
  /* 113419e6 push 0xffffd8f0 */
  push32((uint32_t)(0xffffd8f0u));
  /* 113419eb push 3 */
  push32((uint32_t)(0x3u));
  /* 113419ed push 0 */
  push32((uint32_t)(0x0u));
  /* 113419ef call dword ptr [0x11371454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371454))), 0x113419f5u);
  /* 113419f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113419f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113419fa call 0x11342040 */
  push32(0x113419ffu); f_11342040();
  /* 113419ff mov esi, esp */
  ESI = (ESP);
  /* 11341a01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341a03 push 0x1136f400 */
  push32((uint32_t)(0x1136f400u));
  /* 11341a08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341a0a push 0x1136f3f8 */
  push32((uint32_t)(0x1136f3f8u));
  /* 11341a0f push 0x1136f420 */
  push32((uint32_t)(0x1136f420u));
  /* 11341a14 push 0x1136f3e0 */
  push32((uint32_t)(0x1136f3e0u));
  /* 11341a19 call dword ptr [0x11371458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371458))), 0x11341a1fu);
  /* 11341a1f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341a22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341a24 call 0x11342040 */
  push32(0x11341a29u); f_11342040();
  /* 11341a29 mov esi, esp */
  ESI = (ESP);
  /* 11341a2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11341a2d push 0x1136f400 */
  push32((uint32_t)(0x1136f400u));
  /* 11341a32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341a34 push 0x1136f3f8 */
  push32((uint32_t)(0x1136f3f8u));
  /* 11341a39 push 0x1136f420 */
  push32((uint32_t)(0x1136f420u));
  /* 11341a3e push 0x1136f3e0 */
  push32((uint32_t)(0x1136f3e0u));
  /* 11341a43 call dword ptr [0x11371458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371458))), 0x11341a49u);
  /* 11341a49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341a4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341a4e call 0x11342040 */
  push32(0x11341a53u); f_11342040();
  /* 11341a53 mov esi, esp */
  ESI = (ESP);
  /* 11341a55 push 0x1136a090 */
  push32((uint32_t)(0x1136a090u));
  /* 11341a5a call dword ptr [0x11371434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371434))), 0x11341a60u);
  /* 11341a60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341a63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341a65 call 0x11342040 */
  push32(0x11341a6au); f_11342040();
  /* 11341a6a jmp 0x11341a83 */
  goto L_11341a83;
L_11341a6c:;
  /* 11341a6c mov esi, esp */
  ESI = (ESP);
  /* 11341a6e push 0x1136a088 */
  push32((uint32_t)(0x1136a088u));
  /* 11341a73 call dword ptr [0x11371434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371434))), 0x11341a79u);
  /* 11341a79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341a7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341a7e call 0x11342040 */
  push32(0x11341a83u); f_11342040();
L_11341a83:;
  /* 11341a83 mov esi, esp */
  ESI = (ESP);
  /* 11341a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341a87 push 1 */
  push32((uint32_t)(0x1u));
  /* 11341a89 call dword ptr [0x11371440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371440))), 0x11341a8fu);
  /* 11341a8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341a92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341a94 call 0x11342040 */
  push32(0x11341a99u); f_11342040();
L_11341a99:;
  /* 11341a99 mov esi, esp */
  ESI = (ESP);
  /* 11341a9b push 1 */
  push32((uint32_t)(0x1u));
  /* 11341a9d call dword ptr [0x11371410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371410))), 0x11341aa3u);
  /* 11341aa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341aa6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341aa8 call 0x11342040 */
  push32(0x11341aadu); f_11342040();
  /* 11341aad and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11341ab2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11341ab4 jne 0x11341aec */
  if (!C.zf) goto L_11341aec;
  /* 11341ab6 mov esi, esp */
  ESI = (ESP);
  /* 11341ab8 push 0x1136f3f0 */
  push32((uint32_t)(0x1136f3f0u));
  /* 11341abd push 0x1136f400 */
  push32((uint32_t)(0x1136f400u));
  /* 11341ac2 call dword ptr [0x11371448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371448))), 0x11341ac8u);
  /* 11341ac8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341acb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341acd call 0x11342040 */
  push32(0x11341ad2u); f_11342040();
  /* 11341ad2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11341ad4 jne 0x11341aec */
  if (!C.zf) goto L_11341aec;
  /* 11341ad6 mov esi, esp */
  ESI = (ESP);
  /* 11341ad8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11341ada push 1 */
  push32((uint32_t)(0x1u));
  /* 11341adc call dword ptr [0x11371440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371440))), 0x11341ae2u);
  /* 11341ae2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341ae5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341ae7 call 0x11342040 */
  push32(0x11341aecu); f_11342040();
L_11341aec:;
  /* 11341aec mov esi, esp */
  ESI = (ESP);
  /* 11341aee push 0 */
  push32((uint32_t)(0x0u));
  /* 11341af0 push 0x1136f3f8 */
  push32((uint32_t)(0x1136f3f8u));
  /* 11341af5 push 0x1136f408 */
  push32((uint32_t)(0x1136f408u));
  /* 11341afa call dword ptr [0x1137145c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137145c))), 0x11341b00u);
  /* 11341b00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341b03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341b05 call 0x11342040 */
  push32(0x11341b0au); f_11342040();
  /* 11341b0a mov dword ptr [0x1136f430], eax */
  w32((uint32_t)(0x1136f430), (EAX));
  /* 11341b0f cmp dword ptr [0x1136f430], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f430))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341b16 jle 0x11341bee */
  if ((C.zf||C.sf!=C.of)) goto L_11341bee;
  /* 11341b1c mov edx, dword ptr [0x1136f430] */
  EDX = (r32((uint32_t)(0x1136f430)));
  /* 11341b22 imul edx, edx, 0x682 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x682u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11341b28 mov esi, esp */
  ESI = (ESP);
  /* 11341b2a push edx */
  push32((uint32_t)(EDX));
  /* 11341b2b push 3 */
  push32((uint32_t)(0x3u));
  /* 11341b2d push 2 */
  push32((uint32_t)(0x2u));
  /* 11341b2f call dword ptr [0x11371454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371454))), 0x11341b35u);
  /* 11341b35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341b38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341b3a call 0x11342040 */
  push32(0x11341b3fu); f_11342040();
  /* 11341b3f mov esi, esp */
  ESI = (ESP);
  /* 11341b41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341b45 push 0x1136f3f8 */
  push32((uint32_t)(0x1136f3f8u));
  /* 11341b4a push 0x1136f408 */
  push32((uint32_t)(0x1136f408u));
  /* 11341b4f call dword ptr [0x11371460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371460))), 0x11341b55u);
  /* 11341b55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341b58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341b5a call 0x11342040 */
  push32(0x11341b5fu); f_11342040();
  /* 11341b5f mov esi, esp */
  ESI = (ESP);
  /* 11341b61 push 2 */
  push32((uint32_t)(0x2u));
  /* 11341b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341b65 call dword ptr [0x11371464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371464))), 0x11341b6bu);
  /* 11341b6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341b6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341b70 call 0x11342040 */
  push32(0x11341b75u); f_11342040();
  /* 11341b75 mov eax, dword ptr [0x1136f430] */
  EAX = (r32((uint32_t)(0x1136f430)));
  /* 11341b7a imul eax, eax, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1388u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11341b80 mov ecx, dword ptr [0x1136f42c] */
  ECX = (r32((uint32_t)(0x1136f42c)));
  /* 11341b86 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11341b88 mov dword ptr [0x1136f42c], ecx */
  w32((uint32_t)(0x1136f42c), (ECX));
  /* 11341b8e cmp dword ptr [0x1136f42c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f42c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341b95 jne 0x11341bae */
  if (!C.zf) goto L_11341bae;
  /* 11341b97 mov esi, esp */
  ESI = (ESP);
  /* 11341b99 push 0x1136a080 */
  push32((uint32_t)(0x1136a080u));
  /* 11341b9e call dword ptr [0x11371434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371434))), 0x11341ba4u);
  /* 11341ba4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341ba7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341ba9 call 0x11342040 */
  push32(0x11341baeu); f_11342040();
L_11341bae:;
  /* 11341bae mov esi, esp */
  ESI = (ESP);
  /* 11341bb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341bb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11341bb4 push 0x1136f3f8 */
  push32((uint32_t)(0x1136f3f8u));
  /* 11341bb9 push 0x1136f408 */
  push32((uint32_t)(0x1136f408u));
  /* 11341bbe call dword ptr [0x11371460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371460))), 0x11341bc4u);
  /* 11341bc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341bc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341bc9 call 0x11342040 */
  push32(0x11341bceu); f_11342040();
  /* 11341bce mov esi, esp */
  ESI = (ESP);
  /* 11341bd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341bd2 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11341bd7 push 0x1136f410 */
  push32((uint32_t)(0x1136f410u));
  /* 11341bdc push 2 */
  push32((uint32_t)(0x2u));
  /* 11341bde call dword ptr [0x11371468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371468))), 0x11341be4u);
  /* 11341be4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341be7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341be9 call 0x11342040 */
  push32(0x11341beeu); f_11342040();
L_11341bee:;
  /* 11341bee mov esi, esp */
  ESI = (ESP);
  /* 11341bf0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11341bf2 push 0x1136f3f8 */
  push32((uint32_t)(0x1136f3f8u));
  /* 11341bf7 push 0x1136f410 */
  push32((uint32_t)(0x1136f410u));
  /* 11341bfc call dword ptr [0x1137145c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137145c))), 0x11341c02u);
  /* 11341c02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341c05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341c07 call 0x11342040 */
  push32(0x11341c0cu); f_11342040();
  /* 11341c0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11341c0e jle 0x11341c44 */
  if ((C.zf||C.sf!=C.of)) goto L_11341c44;
  /* 11341c10 mov esi, esp */
  ESI = (ESP);
  /* 11341c12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11341c14 push 2 */
  push32((uint32_t)(0x2u));
  /* 11341c16 push 0x1136f3f8 */
  push32((uint32_t)(0x1136f3f8u));
  /* 11341c1b push 0x1136f410 */
  push32((uint32_t)(0x1136f410u));
  /* 11341c20 call dword ptr [0x11371460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371460))), 0x11341c26u);
  /* 11341c26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341c29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341c2b call 0x11342040 */
  push32(0x11341c30u); f_11342040();
  /* 11341c30 mov esi, esp */
  ESI = (ESP);
  /* 11341c32 push 2 */
  push32((uint32_t)(0x2u));
  /* 11341c34 call dword ptr [0x1137146c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137146c))), 0x11341c3au);
  /* 11341c3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341c3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341c3f call 0x11342040 */
  push32(0x11341c44u); f_11342040();
L_11341c44:;
  /* 11341c44 mov esi, esp */
  ESI = (ESP);
  /* 11341c46 push 1 */
  push32((uint32_t)(0x1u));
  /* 11341c48 call dword ptr [0x11371470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371470))), 0x11341c4eu);
  /* 11341c4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341c51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341c53 call 0x11342040 */
  push32(0x11341c58u); f_11342040();
  /* 11341c58 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11341c5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11341c5f je 0x11341c8d */
  if (C.zf) goto L_11341c8d;
  /* 11341c61 mov esi, esp */
  ESI = (ESP);
  /* 11341c63 push 3 */
  push32((uint32_t)(0x3u));
  /* 11341c65 call dword ptr [0x11371470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371470))), 0x11341c6bu);
  /* 11341c6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341c6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341c70 call 0x11342040 */
  push32(0x11341c75u); f_11342040();
  /* 11341c75 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11341c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11341c7c je 0x11341c8d */
  if (C.zf) goto L_11341c8d;
  /* 11341c7e mov esi, esp */
  ESI = (ESP);
  /* 11341c80 call dword ptr [0x11371474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371474))), 0x11341c86u);
  /* 11341c86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341c88 call 0x11342040 */
  push32(0x11341c8du); f_11342040();
L_11341c8d:;
  /* 11341c8d mov esi, esp */
  ESI = (ESP);
  /* 11341c8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11341c91 call dword ptr [0x11371470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371470))), 0x11341c97u);
  /* 11341c97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341c9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341c9c call 0x11342040 */
  push32(0x11341ca1u); f_11342040();
  /* 11341ca1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11341ca6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11341ca8 jne 0x11341cc7 */
  if (!C.zf) goto L_11341cc7;
  /* 11341caa mov esi, esp */
  ESI = (ESP);
  /* 11341cac push 2 */
  push32((uint32_t)(0x2u));
  /* 11341cae call dword ptr [0x11371470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371470))), 0x11341cb4u);
  /* 11341cb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341cb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341cb9 call 0x11342040 */
  push32(0x11341cbeu); f_11342040();
  /* 11341cbe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11341cc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11341cc5 je 0x11341cd6 */
  if (C.zf) goto L_11341cd6;
L_11341cc7:;
  /* 11341cc7 mov esi, esp */
  ESI = (ESP);
  /* 11341cc9 call dword ptr [0x11371478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371478))), 0x11341ccfu);
  /* 11341ccf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341cd1 call 0x11342040 */
  push32(0x11341cd6u); f_11342040();
L_11341cd6:;
  /* 11341cd6 pop edi */
  EDI = (pop32());
  /* 11341cd7 pop esi */
  ESI = (pop32());
  /* 11341cd8 pop ebx */
  EBX = (pop32());
  /* 11341cd9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11341cdc cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11341cde call 0x11342040 */
  push32(0x11341ce3u); f_11342040();
  /* 11341ce3 mov esp, ebp */
  ESP = (EBP);
  /* 11341ce5 pop ebp */
  EBP = (pop32());
  /* 11341ce6 ret  */
  ESPCHK(0x113412d0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11342040 (56 bytes, 28 insns) */
void f_11342040(void) {
  FTRACE(0x11342040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342040 jne 0x11342043 */
  if (!C.zf) goto L_11342043;
  /* 11342042 ret  */
  ESPCHK(0x11342040u, _esp0);
  ESP += 4; return;
L_11342043:;
  /* 11342043 push ebp */
  push32((uint32_t)(EBP));
  /* 11342044 mov ebp, esp */
  EBP = (ESP);
  /* 11342046 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11342049 push eax */
  push32((uint32_t)(EAX));
  /* 1134204a push edx */
  push32((uint32_t)(EDX));
  /* 1134204b push ebx */
  push32((uint32_t)(EBX));
  /* 1134204c push esi */
  push32((uint32_t)(ESI));
  /* 1134204d push edi */
  push32((uint32_t)(EDI));
  /* 1134204e push 0x1136a0f0 */
  push32((uint32_t)(0x1136a0f0u));
  /* 11342053 push 0x1136a0ec */
  push32((uint32_t)(0x1136a0ecu));
  /* 11342058 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1134205a push 0x1136a0dc */
  push32((uint32_t)(0x1136a0dcu));
  /* 1134205f push 1 */
  push32((uint32_t)(0x1u));
  /* 11342061 call 0x11342410 */
  push32(0x11342066u); f_11342410();
  /* 11342066 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342069 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134206c jne 0x1134206f */
  if (!C.zf) goto L_1134206f;
  /* 1134206e int3  */
  x86_unimpl("int3 @ 0x1134206e");
L_1134206f:;
  /* 1134206f pop edi */
  EDI = (pop32());
  /* 11342070 pop esi */
  ESI = (pop32());
  /* 11342071 pop ebx */
  EBX = (pop32());
  /* 11342072 pop edx */
  EDX = (pop32());
  /* 11342073 pop eax */
  EAX = (pop32());
  /* 11342074 mov esp, ebp */
  ESP = (EBP);
  /* 11342076 pop ebp */
  EBP = (pop32());
  /* 11342077 ret  */
  ESPCHK(0x11342040u, _esp0);
  ESP += 4; return;
}

/* FUN_10002080 @ 0x11342080 (313 bytes, 78 insns) */
void f_11342080(void) {
  FTRACE(0x11342080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342080 push ebp */
  push32((uint32_t)(EBP));
  /* 11342081 mov ebp, esp */
  EBP = (ESP);
  /* 11342083 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342087 jne 0x11342147 */
  if (!C.zf) goto L_11342147;
  /* 1134208d call dword ptr [0x11371318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371318))), 0x11342093u);
  /* 11342093 mov dword ptr [0x1136f468], eax */
  w32((uint32_t)(0x1136f468), (EAX));
  /* 11342098 push 1 */
  push32((uint32_t)(0x1u));
  /* 1134209a call 0x11345b40 */
  push32(0x1134209fu); f_11345b40();
  /* 1134209f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113420a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113420a4 jne 0x113420ad */
  if (!C.zf) goto L_113420ad;
  /* 113420a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113420a8 jmp 0x113421b5 */
  goto L_113421b5;
L_113420ad:;
  /* 113420ad mov eax, dword ptr [0x1136f468] */
  EAX = (r32((uint32_t)(0x1136f468)));
  /* 113420b2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 113420b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113420ba mov dword ptr [0x1136f474], eax */
  w32((uint32_t)(0x1136f474), (EAX));
  /* 113420bf mov ecx, dword ptr [0x1136f468] */
  ECX = (r32((uint32_t)(0x1136f468)));
  /* 113420c5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113420cb mov dword ptr [0x1136f470], ecx */
  w32((uint32_t)(0x1136f470), (ECX));
  /* 113420d1 mov edx, dword ptr [0x1136f470] */
  EDX = (r32((uint32_t)(0x1136f470)));
  /* 113420d7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 113420da add edx, dword ptr [0x1136f474] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1136f474))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113420e0 mov dword ptr [0x1136f46c], edx */
  w32((uint32_t)(0x1136f46c), (EDX));
  /* 113420e6 mov eax, dword ptr [0x1136f468] */
  EAX = (r32((uint32_t)(0x1136f468)));
  /* 113420eb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 113420ee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113420f3 mov dword ptr [0x1136f468], eax */
  w32((uint32_t)(0x1136f468), (EAX));
  /* 113420f8 call 0x11342cb0 */
  push32(0x113420fdu); f_11342cb0();
  /* 113420fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113420ff jne 0x1134210d */
  if (!C.zf) goto L_1134210d;
  /* 11342101 call 0x11345b90 */
  push32(0x11342106u); f_11345b90();
  /* 11342106 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11342108 jmp 0x113421b5 */
  goto L_113421b5;
L_1134210d:;
  /* 1134210d call dword ptr [0x11371314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371314))), 0x11342113u);
  /* 11342113 mov dword ptr [0x11370fac], eax */
  w32((uint32_t)(0x11370fac), (EAX));
  /* 11342118 call 0x11345920 */
  push32(0x1134211du); f_11345920();
  /* 1134211d mov dword ptr [0x1136f450], eax */
  w32((uint32_t)(0x1136f450), (EAX));
  /* 11342122 call 0x11342f60 */
  push32(0x11342127u); f_11342f60();
  /* 11342127 call 0x11345410 */
  push32(0x1134212cu); f_11345410();
  /* 1134212c call 0x113452c0 */
  push32(0x11342131u); f_113452c0();
  /* 11342131 call 0x11342ab0 */
  push32(0x11342136u); f_11342ab0();
  /* 11342136 mov ecx, dword ptr [0x1136f44c] */
  ECX = (r32((uint32_t)(0x1136f44c)));
  /* 1134213c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134213f mov dword ptr [0x1136f44c], ecx */
  w32((uint32_t)(0x1136f44c), (ECX));
  /* 11342145 jmp 0x113421b0 */
  goto L_113421b0;
L_11342147:;
  /* 11342147 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134214b jne 0x113421a0 */
  if (!C.zf) goto L_113421a0;
  /* 1134214d cmp dword ptr [0x1136f44c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f44c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342154 jle 0x1134219a */
  if ((C.zf||C.sf!=C.of)) goto L_1134219a;
  /* 11342156 mov edx, dword ptr [0x1136f44c] */
  EDX = (r32((uint32_t)(0x1136f44c)));
  /* 1134215c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134215f mov dword ptr [0x1136f44c], edx */
  w32((uint32_t)(0x1136f44c), (EDX));
  /* 11342165 cmp dword ptr [0x1136f4a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f4a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134216c jne 0x11342173 */
  if (!C.zf) goto L_11342173;
  /* 1134216e call 0x11342b30 */
  push32(0x11342173u); f_11342b30();
L_11342173:;
  /* 11342173 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11342175 call 0x11344860 */
  push32(0x1134217au); f_11344860();
  /* 1134217a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134217d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11342180 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11342182 je 0x11342189 */
  if (C.zf) goto L_11342189;
  /* 11342184 call 0x11345170 */
  push32(0x11342189u); f_11345170();
L_11342189:;
  /* 11342189 call 0x11343290 */
  push32(0x1134218eu); f_11343290();
  /* 1134218e call 0x11342d40 */
  push32(0x11342193u); f_11342d40();
  /* 11342193 call 0x11345b90 */
  push32(0x11342198u); f_11345b90();
  /* 11342198 jmp 0x1134219e */
  goto L_1134219e;
L_1134219a:;
  /* 1134219a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134219c jmp 0x113421b5 */
  goto L_113421b5;
L_1134219e:;
  /* 1134219e jmp 0x113421b0 */
  goto L_113421b0;
L_113421a0:;
  /* 113421a0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113421a4 jne 0x113421b0 */
  if (!C.zf) goto L_113421b0;
  /* 113421a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113421a8 call 0x11342e30 */
  push32(0x113421adu); f_11342e30();
  /* 113421ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113421b0:;
  /* 113421b0 mov eax, 1 */
  EAX = (0x1u);
L_113421b5:;
  /* 113421b5 pop ebp */
  EBP = (pop32());
  /* 113421b6 ret 0xc */
  ESPCHK(0x11342080u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x113421c0 (243 bytes, 86 insns) */
void f_113421c0(void) {
  FTRACE(0x113421c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113421c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113421c1 mov ebp, esp */
  EBP = (ESP);
  /* 113421c3 push ecx */
  push32((uint32_t)(ECX));
  /* 113421c4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113421cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113421cf jne 0x113421e1 */
  if (!C.zf) goto L_113421e1;
  /* 113421d1 cmp dword ptr [0x1136f44c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f44c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113421d8 jne 0x113421e1 */
  if (!C.zf) goto L_113421e1;
  /* 113421da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113421dc jmp 0x113422ad */
  goto L_113422ad;
L_113421e1:;
  /* 113421e1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113421e5 je 0x113421ed */
  if (C.zf) goto L_113421ed;
  /* 113421e7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113421eb jne 0x1134222f */
  if (!C.zf) goto L_1134222f;
L_113421ed:;
  /* 113421ed cmp dword ptr [0x11370fbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11370fbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113421f4 je 0x1134220b */
  if (C.zf) goto L_1134220b;
  /* 113421f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113421f9 push eax */
  push32((uint32_t)(EAX));
  /* 113421fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113421fd push ecx */
  push32((uint32_t)(ECX));
  /* 113421fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342201 push edx */
  push32((uint32_t)(EDX));
  /* 11342202 call dword ptr [0x11370fbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11370fbc))), 0x11342208u);
  /* 11342208 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1134220b:;
  /* 1134220b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134220f je 0x11342225 */
  if (C.zf) goto L_11342225;
  /* 11342211 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11342214 push eax */
  push32((uint32_t)(EAX));
  /* 11342215 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11342218 push ecx */
  push32((uint32_t)(ECX));
  /* 11342219 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134221c push edx */
  push32((uint32_t)(EDX));
  /* 1134221d call 0x11342080 */
  push32(0x11342222u); f_11342080();
  /* 11342222 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11342225:;
  /* 11342225 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342229 jne 0x1134222f */
  if (!C.zf) goto L_1134222f;
  /* 1134222b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134222d jmp 0x113422ad */
  goto L_113422ad;
L_1134222f:;
  /* 1134222f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11342232 push eax */
  push32((uint32_t)(EAX));
  /* 11342233 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11342236 push ecx */
  push32((uint32_t)(ECX));
  /* 11342237 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134223a push edx */
  push32((uint32_t)(EDX));
  /* 1134223b call 0x1134100a */
  push32(0x11342240u); f_1134100a();
  /* 11342240 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11342243 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342247 jne 0x1134225e */
  if (!C.zf) goto L_1134225e;
  /* 11342249 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134224d jne 0x1134225e */
  if (!C.zf) goto L_1134225e;
  /* 1134224f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11342252 push eax */
  push32((uint32_t)(EAX));
  /* 11342253 push 0 */
  push32((uint32_t)(0x0u));
  /* 11342255 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342258 push ecx */
  push32((uint32_t)(ECX));
  /* 11342259 call 0x11342080 */
  push32(0x1134225eu); f_11342080();
L_1134225e:;
  /* 1134225e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342262 je 0x1134226a */
  if (C.zf) goto L_1134226a;
  /* 11342264 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342268 jne 0x113422aa */
  if (!C.zf) goto L_113422aa;
L_1134226a:;
  /* 1134226a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134226d push edx */
  push32((uint32_t)(EDX));
  /* 1134226e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11342271 push eax */
  push32((uint32_t)(EAX));
  /* 11342272 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342275 push ecx */
  push32((uint32_t)(ECX));
  /* 11342276 call 0x11342080 */
  push32(0x1134227bu); f_11342080();
  /* 1134227b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134227d jne 0x11342286 */
  if (!C.zf) goto L_11342286;
  /* 1134227f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11342286:;
  /* 11342286 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134228a je 0x113422aa */
  if (C.zf) goto L_113422aa;
  /* 1134228c cmp dword ptr [0x11370fbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11370fbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342293 je 0x113422aa */
  if (C.zf) goto L_113422aa;
  /* 11342295 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11342298 push edx */
  push32((uint32_t)(EDX));
  /* 11342299 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134229c push eax */
  push32((uint32_t)(EAX));
  /* 1134229d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113422a0 push ecx */
  push32((uint32_t)(ECX));
  /* 113422a1 call dword ptr [0x11370fbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11370fbc))), 0x113422a7u);
  /* 113422a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113422aa:;
  /* 113422aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113422ad:;
  /* 113422ad mov esp, ebp */
  ESP = (EBP);
  /* 113422af pop ebp */
  EBP = (pop32());
  /* 113422b0 ret 0xc */
  ESPCHK(0x113421c0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x113422c0 (58 bytes, 18 insns) */
void f_113422c0(void) {
  FTRACE(0x113422c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113422c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113422c1 mov ebp, esp */
  EBP = (ESP);
  /* 113422c3 cmp dword ptr [0x1136f458], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136f458))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113422ca je 0x113422de */
  if (C.zf) goto L_113422de;
  /* 113422cc cmp dword ptr [0x1136f458], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f458))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113422d3 jne 0x113422e3 */
  if (!C.zf) goto L_113422e3;
  /* 113422d5 cmp dword ptr [0x1136f45c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136f45c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113422dc jne 0x113422e3 */
  if (!C.zf) goto L_113422e3;
L_113422de:;
  /* 113422de call 0x11345c30 */
  push32(0x113422e3u); f_11345c30();
L_113422e3:;
  /* 113422e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113422e6 push eax */
  push32((uint32_t)(EAX));
  /* 113422e7 call 0x11345c80 */
  push32(0x113422ecu); f_11345c80();
  /* 113422ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113422ef push 0xff */
  push32((uint32_t)(0xffu));
  /* 113422f4 call dword ptr [0x1136da30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136da30))), 0x113422fau);
  /* 113422fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113422fd pop ebp */
  EBP = (pop32());
  /* 113422fe ret  */
  ESPCHK(0x113422c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002300 @ 0x11342300 (11 bytes, 5 insns) */
void f_11342300(void) {
  FTRACE(0x11342300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342300 push ebp */
  push32((uint32_t)(EBP));
  /* 11342301 mov ebp, esp */
  EBP = (ESP);
  /* 11342303 call dword ptr [0x1137131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137131c))), 0x11342309u);
  /* 11342309 pop ebp */
  EBP = (pop32());
  /* 1134230a ret  */
  ESPCHK(0x11342300u, _esp0);
  ESP += 4; return;
}

/* FUN_10002310 @ 0x11342310 (87 bytes, 30 insns) */
void f_11342310(void) {
  FTRACE(0x11342310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342310 push ebp */
  push32((uint32_t)(EBP));
  /* 11342311 mov ebp, esp */
  EBP = (ESP);
  /* 11342313 push ecx */
  push32((uint32_t)(ECX));
  /* 11342314 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342318 jl 0x11342320 */
  if ((C.sf!=C.of)) goto L_11342320;
  /* 1134231a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134231e jl 0x11342325 */
  if ((C.sf!=C.of)) goto L_11342325;
L_11342320:;
  /* 11342320 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11342323 jmp 0x11342363 */
  goto L_11342363;
L_11342325:;
  /* 11342325 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342329 jne 0x11342337 */
  if (!C.zf) goto L_11342337;
  /* 1134232b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134232e mov eax, dword ptr [eax*4 + 0x1136da38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1136da38)));
  /* 11342335 jmp 0x11342363 */
  goto L_11342363;
L_11342337:;
  /* 11342337 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134233a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1134233d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134233f je 0x11342346 */
  if (C.zf) goto L_11342346;
  /* 11342341 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11342344 jmp 0x11342363 */
  goto L_11342363;
L_11342346:;
  /* 11342346 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342349 mov eax, dword ptr [edx*4 + 0x1136da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1136da38)));
  /* 11342350 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11342353 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342356 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11342359 mov dword ptr [ecx*4 + 0x1136da38], edx */
  w32((uint32_t)(ECX*4 + 0x1136da38), (EDX));
  /* 11342360 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11342363:;
  /* 11342363 mov esp, ebp */
  ESP = (EBP);
  /* 11342365 pop ebp */
  EBP = (pop32());
  /* 11342366 ret  */
  ESPCHK(0x11342310u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11342370 (126 bytes, 38 insns) */
void f_11342370(void) {
  FTRACE(0x11342370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342370 push ebp */
  push32((uint32_t)(EBP));
  /* 11342371 mov ebp, esp */
  EBP = (ESP);
  /* 11342373 push ecx */
  push32((uint32_t)(ECX));
  /* 11342374 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342378 jl 0x11342380 */
  if ((C.sf!=C.of)) goto L_11342380;
  /* 1134237a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134237e jl 0x11342387 */
  if ((C.sf!=C.of)) goto L_11342387;
L_11342380:;
  /* 11342380 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11342385 jmp 0x113423ea */
  goto L_113423ea;
L_11342387:;
  /* 11342387 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134238b jne 0x11342399 */
  if (!C.zf) goto L_11342399;
  /* 1134238d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342390 mov eax, dword ptr [eax*4 + 0x1136da44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1136da44)));
  /* 11342397 jmp 0x113423ea */
  goto L_113423ea;
L_11342399:;
  /* 11342399 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134239c mov edx, dword ptr [ecx*4 + 0x1136da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1136da44)));
  /* 113423a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113423a6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113423aa jne 0x113423c0 */
  if (!C.zf) goto L_113423c0;
  /* 113423ac push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 113423ae call dword ptr [0x11371320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371320))), 0x113423b4u);
  /* 113423b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113423b7 mov dword ptr [ecx*4 + 0x1136da44], eax */
  w32((uint32_t)(ECX*4 + 0x1136da44), (EAX));
  /* 113423be jmp 0x113423e7 */
  goto L_113423e7;
L_113423c0:;
  /* 113423c0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113423c4 jne 0x113423da */
  if (!C.zf) goto L_113423da;
  /* 113423c6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 113423c8 call dword ptr [0x11371320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371320))), 0x113423ceu);
  /* 113423ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113423d1 mov dword ptr [edx*4 + 0x1136da44], eax */
  w32((uint32_t)(EDX*4 + 0x1136da44), (EAX));
  /* 113423d8 jmp 0x113423e7 */
  goto L_113423e7;
L_113423da:;
  /* 113423da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113423dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113423e0 mov dword ptr [eax*4 + 0x1136da44], ecx */
  w32((uint32_t)(EAX*4 + 0x1136da44), (ECX));
L_113423e7:;
  /* 113423e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113423ea:;
  /* 113423ea mov esp, ebp */
  ESP = (EBP);
  /* 113423ec pop ebp */
  EBP = (pop32());
  /* 113423ed ret  */
  ESPCHK(0x11342370u, _esp0);
  ESP += 4; return;
}

/* FUN_100023f0 @ 0x113423f0 (28 bytes, 11 insns) */
void f_113423f0(void) {
  FTRACE(0x113423f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113423f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113423f1 mov ebp, esp */
  EBP = (ESP);
  /* 113423f3 push ecx */
  push32((uint32_t)(ECX));
  /* 113423f4 mov eax, dword ptr [0x11370fa0] */
  EAX = (r32((uint32_t)(0x11370fa0)));
  /* 113423f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113423fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113423ff mov dword ptr [0x11370fa0], ecx */
  w32((uint32_t)(0x11370fa0), (ECX));
  /* 11342405 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342408 mov esp, ebp */
  ESP = (EBP);
  /* 1134240a pop ebp */
  EBP = (pop32());
  /* 1134240b ret  */
  ESPCHK(0x113423f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002410 @ 0x11342410 (912 bytes, 248 insns) */
void f_11342410(void) {
  FTRACE(0x11342410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342410 push ebp */
  push32((uint32_t)(EBP));
  /* 11342411 mov ebp, esp */
  EBP = (ESP);
  /* 11342413 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11342418 call 0x113464f0 */
  push32(0x1134241du); f_113464f0();
  /* 1134241d push edi */
  push32((uint32_t)(EDI));
  /* 1134241e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11342425 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1134242a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134242c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11342432 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11342434 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11342436 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11342437 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1134243e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11342443 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11342445 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1134244b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1134244d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1134244f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11342450 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11342457 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1134245c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134245e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11342464 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11342466 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11342468 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11342469 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 1134246c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11342472 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342476 jl 0x1134247e */
  if ((C.sf!=C.of)) goto L_1134247e;
  /* 11342478 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134247c jl 0x11342486 */
  if ((C.sf!=C.of)) goto L_11342486;
L_1134247e:;
  /* 1134247e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11342481 jmp 0x1134279b */
  goto L_1134279b;
L_11342486:;
  /* 11342486 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134248a jne 0x11342530 */
  if (!C.zf) goto L_11342530;
  /* 11342490 push 0x1136da34 */
  push32((uint32_t)(0x1136da34u));
  /* 11342495 call dword ptr [0x11371338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371338))), 0x1134249bu);
  /* 1134249b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134249d jle 0x11342530 */
  if ((C.zf||C.sf!=C.of)) goto L_11342530;
  /* 113424a3 cmp dword ptr [0x1136f460], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f460))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113424aa jne 0x113424ee */
  if (!C.zf) goto L_113424ee;
  /* 113424ac push 0x1136a298 */
  push32((uint32_t)(0x1136a298u));
  /* 113424b1 call dword ptr [0x11371334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371334))), 0x113424b7u);
  /* 113424b7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 113424bd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113424c4 je 0x113424e6 */
  if (C.zf) goto L_113424e6;
  /* 113424c6 push 0x1136a28c */
  push32((uint32_t)(0x1136a28cu));
  /* 113424cb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 113424d1 push ecx */
  push32((uint32_t)(ECX));
  /* 113424d2 call dword ptr [0x11371330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371330))), 0x113424d8u);
  /* 113424d8 mov dword ptr [0x1136f460], eax */
  w32((uint32_t)(0x1136f460), (EAX));
  /* 113424dd cmp dword ptr [0x1136f460], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f460))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113424e4 jne 0x113424ee */
  if (!C.zf) goto L_113424ee;
L_113424e6:;
  /* 113424e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113424e9 jmp 0x1134279b */
  goto L_1134279b;
L_113424ee:;
  /* 113424ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113424f1 push edx */
  push32((uint32_t)(EDX));
  /* 113424f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113424f5 push eax */
  push32((uint32_t)(EAX));
  /* 113424f6 push 0x1136a258 */
  push32((uint32_t)(0x1136a258u));
  /* 113424fb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11342501 push ecx */
  push32((uint32_t)(ECX));
  /* 11342502 call dword ptr [0x1136f460] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136f460))), 0x11342508u);
  /* 11342508 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134250b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11342511 push edx */
  push32((uint32_t)(EDX));
  /* 11342512 call dword ptr [0x1137132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137132c))), 0x11342518u);
  /* 11342518 push 0x1136da34 */
  push32((uint32_t)(0x1136da34u));
  /* 1134251d call dword ptr [0x11371328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371328))), 0x11342523u);
  /* 11342523 call 0x11342300 */
  push32(0x11342528u); f_11342300();
  /* 11342528 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134252b jmp 0x1134279b */
  goto L_1134279b;
L_11342530:;
  /* 11342530 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342534 je 0x1134256d */
  if (C.zf) goto L_1134256d;
  /* 11342536 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1134253c push eax */
  push32((uint32_t)(EAX));
  /* 1134253d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11342540 push ecx */
  push32((uint32_t)(ECX));
  /* 11342541 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11342546 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 1134254c push edx */
  push32((uint32_t)(EDX));
  /* 1134254d call 0x113463f0 */
  push32(0x11342552u); f_113463f0();
  /* 11342552 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342555 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11342557 jge 0x1134256d */
  if ((C.sf==C.of)) goto L_1134256d;
  /* 11342559 push 0x1136a22c */
  push32((uint32_t)(0x1136a22cu));
  /* 1134255e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11342564 push eax */
  push32((uint32_t)(EAX));
  /* 11342565 call 0x11346300 */
  push32(0x1134256au); f_11346300();
  /* 1134256a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134256d:;
  /* 1134256d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342571 jne 0x113425a5 */
  if (!C.zf) goto L_113425a5;
  /* 11342573 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342577 je 0x11342585 */
  if (C.zf) goto L_11342585;
  /* 11342579 mov dword ptr [ebp - 0x3028], 0x1136a218 */
  w32((uint32_t)(EBP + -0x3028), (0x1136a218u));
  /* 11342583 jmp 0x1134258f */
  goto L_1134258f;
L_11342585:;
  /* 11342585 mov dword ptr [ebp - 0x3028], 0x1136a204 */
  w32((uint32_t)(EBP + -0x3028), (0x1136a204u));
L_1134258f:;
  /* 1134258f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11342595 push ecx */
  push32((uint32_t)(ECX));
  /* 11342596 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1134259c push edx */
  push32((uint32_t)(EDX));
  /* 1134259d call 0x11346300 */
  push32(0x113425a2u); f_11346300();
  /* 113425a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113425a5:;
  /* 113425a5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 113425ab push eax */
  push32((uint32_t)(EAX));
  /* 113425ac lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 113425b2 push ecx */
  push32((uint32_t)(ECX));
  /* 113425b3 call 0x11346310 */
  push32(0x113425b8u); f_11346310();
  /* 113425b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113425bb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113425bf jne 0x113425fa */
  if (!C.zf) goto L_113425fa;
  /* 113425c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113425c4 mov eax, dword ptr [edx*4 + 0x1136da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1136da38)));
  /* 113425cb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 113425ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113425d0 je 0x113425e6 */
  if (C.zf) goto L_113425e6;
  /* 113425d2 push 0x1136a200 */
  push32((uint32_t)(0x1136a200u));
  /* 113425d7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 113425dd push ecx */
  push32((uint32_t)(ECX));
  /* 113425de call 0x11346310 */
  push32(0x113425e3u); f_11346310();
  /* 113425e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113425e6:;
  /* 113425e6 push 0x1136a1fc */
  push32((uint32_t)(0x1136a1fcu));
  /* 113425eb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 113425f1 push edx */
  push32((uint32_t)(EDX));
  /* 113425f2 call 0x11346310 */
  push32(0x113425f7u); f_11346310();
  /* 113425f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113425fa:;
  /* 113425fa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113425fe je 0x11342642 */
  if (C.zf) goto L_11342642;
  /* 11342600 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11342606 push eax */
  push32((uint32_t)(EAX));
  /* 11342607 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134260a push ecx */
  push32((uint32_t)(ECX));
  /* 1134260b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134260e push edx */
  push32((uint32_t)(EDX));
  /* 1134260f push 0x1136a1f0 */
  push32((uint32_t)(0x1136a1f0u));
  /* 11342614 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11342619 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1134261f push eax */
  push32((uint32_t)(EAX));
  /* 11342620 call 0x11346200 */
  push32(0x11342625u); f_11346200();
  /* 11342625 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342628 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134262a jge 0x11342640 */
  if ((C.sf==C.of)) goto L_11342640;
  /* 1134262c push 0x1136a22c */
  push32((uint32_t)(0x1136a22cu));
  /* 11342631 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11342637 push ecx */
  push32((uint32_t)(ECX));
  /* 11342638 call 0x11346300 */
  push32(0x1134263du); f_11346300();
  /* 1134263d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11342640:;
  /* 11342640 jmp 0x11342658 */
  goto L_11342658;
L_11342642:;
  /* 11342642 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11342648 push edx */
  push32((uint32_t)(EDX));
  /* 11342649 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1134264f push eax */
  push32((uint32_t)(EAX));
  /* 11342650 call 0x11346300 */
  push32(0x11342655u); f_11346300();
  /* 11342655 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11342658:;
  /* 11342658 cmp dword ptr [0x11370fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11370fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134265f je 0x1134269c */
  if (C.zf) goto L_1134269c;
  /* 11342661 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11342667 push ecx */
  push32((uint32_t)(ECX));
  /* 11342668 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1134266e push edx */
  push32((uint32_t)(EDX));
  /* 1134266f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342672 push eax */
  push32((uint32_t)(EAX));
  /* 11342673 call dword ptr [0x11370fa0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11370fa0))), 0x11342679u);
  /* 11342679 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134267c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134267e je 0x1134269c */
  if (C.zf) goto L_1134269c;
  /* 11342680 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342684 jne 0x11342691 */
  if (!C.zf) goto L_11342691;
  /* 11342686 push 0x1136da34 */
  push32((uint32_t)(0x1136da34u));
  /* 1134268b call dword ptr [0x11371328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371328))), 0x11342691u);
L_11342691:;
  /* 11342691 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11342697 jmp 0x1134279b */
  goto L_1134279b;
L_1134269c:;
  /* 1134269c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134269f mov edx, dword ptr [ecx*4 + 0x1136da38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1136da38)));
  /* 113426a6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 113426a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113426ab je 0x113426eb */
  if (C.zf) goto L_113426eb;
  /* 113426ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113426b0 cmp dword ptr [eax*4 + 0x1136da44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1136da44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113426b8 je 0x113426eb */
  if (C.zf) goto L_113426eb;
  /* 113426ba push 0 */
  push32((uint32_t)(0x0u));
  /* 113426bc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 113426c2 push ecx */
  push32((uint32_t)(ECX));
  /* 113426c3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 113426c9 push edx */
  push32((uint32_t)(EDX));
  /* 113426ca call 0x11346180 */
  push32(0x113426cfu); f_11346180();
  /* 113426cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113426d2 push eax */
  push32((uint32_t)(EAX));
  /* 113426d3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 113426d9 push eax */
  push32((uint32_t)(EAX));
  /* 113426da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113426dd mov edx, dword ptr [ecx*4 + 0x1136da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1136da44)));
  /* 113426e4 push edx */
  push32((uint32_t)(EDX));
  /* 113426e5 call dword ptr [0x11371324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371324))), 0x113426ebu);
L_113426eb:;
  /* 113426eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113426ee mov ecx, dword ptr [eax*4 + 0x1136da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1136da38)));
  /* 113426f5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 113426f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113426fa je 0x11342709 */
  if (C.zf) goto L_11342709;
  /* 113426fc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11342702 push edx */
  push32((uint32_t)(EDX));
  /* 11342703 call dword ptr [0x1137132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137132c))), 0x11342709u);
L_11342709:;
  /* 11342709 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134270c mov ecx, dword ptr [eax*4 + 0x1136da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1136da38)));
  /* 11342713 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11342716 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11342718 je 0x11342788 */
  if (C.zf) goto L_11342788;
  /* 1134271a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134271e je 0x1134273d */
  if (C.zf) goto L_1134273d;
  /* 11342720 push 0xa */
  push32((uint32_t)(0xau));
  /* 11342722 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11342728 push edx */
  push32((uint32_t)(EDX));
  /* 11342729 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134272c push eax */
  push32((uint32_t)(EAX));
  /* 1134272d call 0x11345e90 */
  push32(0x11342732u); f_11345e90();
  /* 11342732 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342735 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1134273b jmp 0x11342747 */
  goto L_11342747;
L_1134273d:;
  /* 1134273d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11342747:;
  /* 11342747 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 1134274d push ecx */
  push32((uint32_t)(ECX));
  /* 1134274e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11342751 push edx */
  push32((uint32_t)(EDX));
  /* 11342752 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11342758 push eax */
  push32((uint32_t)(EAX));
  /* 11342759 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134275c push ecx */
  push32((uint32_t)(ECX));
  /* 1134275d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342760 push edx */
  push32((uint32_t)(EDX));
  /* 11342761 call 0x113427a0 */
  push32(0x11342766u); f_113427a0();
  /* 11342766 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342769 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 1134276f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342773 jne 0x11342780 */
  if (!C.zf) goto L_11342780;
  /* 11342775 push 0x1136da34 */
  push32((uint32_t)(0x1136da34u));
  /* 1134277a call dword ptr [0x11371328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371328))), 0x11342780u);
L_11342780:;
  /* 11342780 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11342786 jmp 0x1134279b */
  goto L_1134279b;
L_11342788:;
  /* 11342788 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134278c jne 0x11342799 */
  if (!C.zf) goto L_11342799;
  /* 1134278e push 0x1136da34 */
  push32((uint32_t)(0x1136da34u));
  /* 11342793 call dword ptr [0x11371328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371328))), 0x11342799u);
L_11342799:;
  /* 11342799 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1134279b:;
  /* 1134279b pop edi */
  EDI = (pop32());
  /* 1134279c mov esp, ebp */
  ESP = (EBP);
  /* 1134279e pop ebp */
  EBP = (pop32());
  /* 1134279f ret  */
  ESPCHK(0x11342410u, _esp0);
  ESP += 4; return;
}

/* FUN_100027a0 @ 0x113427a0 (780 bytes, 197 insns) */
void f_113427a0(void) {
  FTRACE(0x113427a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113427a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113427a1 mov ebp, esp */
  EBP = (ESP);
  /* 113427a3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 113427a8 call 0x113464f0 */
  push32(0x113427adu); f_113464f0();
L_113427ad:;
  /* 113427ad cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113427b1 jne 0x113427d8 */
  if (!C.zf) goto L_113427d8;
  /* 113427b3 push 0x1136a3e8 */
  push32((uint32_t)(0x1136a3e8u));
  /* 113427b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113427ba push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 113427bf push 0x1136a3dc */
  push32((uint32_t)(0x1136a3dcu));
  /* 113427c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 113427c6 call 0x11342410 */
  push32(0x113427cbu); f_11342410();
  /* 113427cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113427ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113427d1 jne 0x113427d8 */
  if (!C.zf) goto L_113427d8;
  /* 113427d3 call 0x11342300 */
  push32(0x113427d8u); f_11342300();
L_113427d8:;
  /* 113427d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113427da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113427dc jne 0x113427ad */
  if (!C.zf) goto L_113427ad;
  /* 113427de push 0x104 */
  push32((uint32_t)(0x104u));
  /* 113427e3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 113427e9 push ecx */
  push32((uint32_t)(ECX));
  /* 113427ea push 0 */
  push32((uint32_t)(0x0u));
  /* 113427ec call dword ptr [0x1137133c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137133c))), 0x113427f2u);
  /* 113427f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113427f4 jne 0x1134280a */
  if (!C.zf) goto L_1134280a;
  /* 113427f6 push 0x1136a3c4 */
  push32((uint32_t)(0x1136a3c4u));
  /* 113427fb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11342801 push edx */
  push32((uint32_t)(EDX));
  /* 11342802 call 0x11346300 */
  push32(0x11342807u); f_11346300();
  /* 11342807 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134280a:;
  /* 1134280a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11342810 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11342813 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342816 push ecx */
  push32((uint32_t)(ECX));
  /* 11342817 call 0x11346180 */
  push32(0x1134281cu); f_11346180();
  /* 1134281c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134281f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342822 jbe 0x1134284d */
  if ((C.cf||C.zf)) goto L_1134284d;
  /* 11342824 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342827 push edx */
  push32((uint32_t)(EDX));
  /* 11342828 call 0x11346180 */
  push32(0x1134282du); f_11346180();
  /* 1134282d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342830 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342833 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11342837 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1134283a push 3 */
  push32((uint32_t)(0x3u));
  /* 1134283c push 0x1136a3c0 */
  push32((uint32_t)(0x1136a3c0u));
  /* 11342841 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342844 push eax */
  push32((uint32_t)(EAX));
  /* 11342845 call 0x11346b70 */
  push32(0x1134284au); f_11346b70();
  /* 1134284a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134284d:;
  /* 1134284d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11342850 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11342856 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134285d je 0x113428a8 */
  if (C.zf) goto L_113428a8;
  /* 1134285f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11342865 push edx */
  push32((uint32_t)(EDX));
  /* 11342866 call 0x11346180 */
  push32(0x1134286bu); f_11346180();
  /* 1134286b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134286e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342871 jbe 0x113428a8 */
  if ((C.cf||C.zf)) goto L_113428a8;
  /* 11342873 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11342879 push eax */
  push32((uint32_t)(EAX));
  /* 1134287a call 0x11346180 */
  push32(0x1134287fu); f_11346180();
  /* 1134287f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342882 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11342888 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1134288c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11342892 push 3 */
  push32((uint32_t)(0x3u));
  /* 11342894 push 0x1136a3c0 */
  push32((uint32_t)(0x1136a3c0u));
  /* 11342899 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1134289f push eax */
  push32((uint32_t)(EAX));
  /* 113428a0 call 0x11346b70 */
  push32(0x113428a5u); f_11346b70();
  /* 113428a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113428a8:;
  /* 113428a8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113428ac jne 0x113428ba */
  if (!C.zf) goto L_113428ba;
  /* 113428ae mov dword ptr [ebp - 0x1114], 0x1136a34c */
  w32((uint32_t)(EBP + -0x1114), (0x1136a34cu));
  /* 113428b8 jmp 0x113428c4 */
  goto L_113428c4;
L_113428ba:;
  /* 113428ba mov dword ptr [ebp - 0x1114], 0x1136a0ec */
  w32((uint32_t)(EBP + -0x1114), (0x1136a0ecu));
L_113428c4:;
  /* 113428c4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113428c7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113428ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113428cc je 0x113428d9 */
  if (C.zf) goto L_113428d9;
  /* 113428ce mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113428d1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 113428d7 jmp 0x113428e3 */
  goto L_113428e3;
L_113428d9:;
  /* 113428d9 mov dword ptr [ebp - 0x1118], 0x1136a0ec */
  w32((uint32_t)(EBP + -0x1118), (0x1136a0ecu));
L_113428e3:;
  /* 113428e3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113428e6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113428e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113428eb je 0x113428ff */
  if (C.zf) goto L_113428ff;
  /* 113428ed cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113428f1 jne 0x113428ff */
  if (!C.zf) goto L_113428ff;
  /* 113428f3 mov dword ptr [ebp - 0x111c], 0x1136a33c */
  w32((uint32_t)(EBP + -0x111c), (0x1136a33cu));
  /* 113428fd jmp 0x11342909 */
  goto L_11342909;
L_113428ff:;
  /* 113428ff mov dword ptr [ebp - 0x111c], 0x1136a0ec */
  w32((uint32_t)(EBP + -0x111c), (0x1136a0ecu));
L_11342909:;
  /* 11342909 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1134290c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134290f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11342911 je 0x1134291f */
  if (C.zf) goto L_1134291f;
  /* 11342913 mov dword ptr [ebp - 0x1120], 0x1136a338 */
  w32((uint32_t)(EBP + -0x1120), (0x1136a338u));
  /* 1134291d jmp 0x11342929 */
  goto L_11342929;
L_1134291f:;
  /* 1134291f mov dword ptr [ebp - 0x1120], 0x1136a0ec */
  w32((uint32_t)(EBP + -0x1120), (0x1136a0ecu));
L_11342929:;
  /* 11342929 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134292d je 0x1134293a */
  if (C.zf) goto L_1134293a;
  /* 1134292f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11342932 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11342938 jmp 0x11342944 */
  goto L_11342944;
L_1134293a:;
  /* 1134293a mov dword ptr [ebp - 0x1124], 0x1136a0ec */
  w32((uint32_t)(EBP + -0x1124), (0x1136a0ecu));
L_11342944:;
  /* 11342944 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342948 je 0x11342956 */
  if (C.zf) goto L_11342956;
  /* 1134294a mov dword ptr [ebp - 0x1128], 0x1136a330 */
  w32((uint32_t)(EBP + -0x1128), (0x1136a330u));
  /* 11342954 jmp 0x11342960 */
  goto L_11342960;
L_11342956:;
  /* 11342956 mov dword ptr [ebp - 0x1128], 0x1136a0ec */
  w32((uint32_t)(EBP + -0x1128), (0x1136a0ecu));
L_11342960:;
  /* 11342960 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342964 je 0x11342971 */
  if (C.zf) goto L_11342971;
  /* 11342966 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11342969 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1134296f jmp 0x1134297b */
  goto L_1134297b;
L_11342971:;
  /* 11342971 mov dword ptr [ebp - 0x112c], 0x1136a0ec */
  w32((uint32_t)(EBP + -0x112c), (0x1136a0ecu));
L_1134297b:;
  /* 1134297b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134297f je 0x1134298d */
  if (C.zf) goto L_1134298d;
  /* 11342981 mov dword ptr [ebp - 0x1130], 0x1136a328 */
  w32((uint32_t)(EBP + -0x1130), (0x1136a328u));
  /* 1134298b jmp 0x11342997 */
  goto L_11342997;
L_1134298d:;
  /* 1134298d mov dword ptr [ebp - 0x1130], 0x1136a0ec */
  w32((uint32_t)(EBP + -0x1130), (0x1136a0ecu));
L_11342997:;
  /* 11342997 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134299e je 0x113429ae */
  if (C.zf) goto L_113429ae;
  /* 113429a0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 113429a6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 113429ac jmp 0x113429b8 */
  goto L_113429b8;
L_113429ae:;
  /* 113429ae mov dword ptr [ebp - 0x1134], 0x1136a0ec */
  w32((uint32_t)(EBP + -0x1134), (0x1136a0ecu));
L_113429b8:;
  /* 113429b8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113429bf je 0x113429cd */
  if (C.zf) goto L_113429cd;
  /* 113429c1 mov dword ptr [ebp - 0x1138], 0x1136a31c */
  w32((uint32_t)(EBP + -0x1138), (0x1136a31cu));
  /* 113429cb jmp 0x113429d7 */
  goto L_113429d7;
L_113429cd:;
  /* 113429cd mov dword ptr [ebp - 0x1138], 0x1136a0ec */
  w32((uint32_t)(EBP + -0x1138), (0x1136a0ecu));
L_113429d7:;
  /* 113429d7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 113429dd push edx */
  push32((uint32_t)(EDX));
  /* 113429de mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 113429e4 push eax */
  push32((uint32_t)(EAX));
  /* 113429e5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 113429eb push ecx */
  push32((uint32_t)(ECX));
  /* 113429ec mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 113429f2 push edx */
  push32((uint32_t)(EDX));
  /* 113429f3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 113429f9 push eax */
  push32((uint32_t)(EAX));
  /* 113429fa mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11342a00 push ecx */
  push32((uint32_t)(ECX));
  /* 11342a01 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11342a07 push edx */
  push32((uint32_t)(EDX));
  /* 11342a08 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11342a0e push eax */
  push32((uint32_t)(EAX));
  /* 11342a0f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11342a15 push ecx */
  push32((uint32_t)(ECX));
  /* 11342a16 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11342a1c push edx */
  push32((uint32_t)(EDX));
  /* 11342a1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342a20 push eax */
  push32((uint32_t)(EAX));
  /* 11342a21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342a24 mov edx, dword ptr [ecx*4 + 0x1136da50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1136da50)));
  /* 11342a2b push edx */
  push32((uint32_t)(EDX));
  /* 11342a2c push 0x1136a2c8 */
  push32((uint32_t)(0x1136a2c8u));
  /* 11342a31 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11342a36 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11342a3c push eax */
  push32((uint32_t)(EAX));
  /* 11342a3d call 0x11346200 */
  push32(0x11342a42u); f_11346200();
  /* 11342a42 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342a45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11342a47 jge 0x11342a5d */
  if ((C.sf==C.of)) goto L_11342a5d;
  /* 11342a49 push 0x1136a22c */
  push32((uint32_t)(0x1136a22cu));
  /* 11342a4e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11342a54 push ecx */
  push32((uint32_t)(ECX));
  /* 11342a55 call 0x11346300 */
  push32(0x11342a5au); f_11346300();
  /* 11342a5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11342a5d:;
  /* 11342a5d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11342a62 push 0x1136a2a4 */
  push32((uint32_t)(0x1136a2a4u));
  /* 11342a67 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11342a6d push edx */
  push32((uint32_t)(EDX));
  /* 11342a6e call 0x11346ab0 */
  push32(0x11342a73u); f_11346ab0();
  /* 11342a73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342a76 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11342a7c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342a83 jne 0x11342a96 */
  if (!C.zf) goto L_11342a96;
  /* 11342a85 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11342a87 call 0x113467f0 */
  push32(0x11342a8cu); f_113467f0();
  /* 11342a8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342a8f push 3 */
  push32((uint32_t)(0x3u));
  /* 11342a91 call 0x11342b10 */
  push32(0x11342a96u); f_11342b10();
L_11342a96:;
  /* 11342a96 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342a9d jne 0x11342aa6 */
  if (!C.zf) goto L_11342aa6;
  /* 11342a9f mov eax, 1 */
  EAX = (0x1u);
  /* 11342aa4 jmp 0x11342aa8 */
  goto L_11342aa8;
L_11342aa6:;
  /* 11342aa6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11342aa8:;
  /* 11342aa8 mov esp, ebp */
  ESP = (EBP);
  /* 11342aaa pop ebp */
  EBP = (pop32());
  /* 11342aab ret  */
  ESPCHK(0x113427a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ab0 @ 0x11342ab0 (56 bytes, 15 insns) */
void f_11342ab0(void) {
  FTRACE(0x11342ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11342ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11342ab3 cmp dword ptr [0x11370f9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11370f9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342aba je 0x11342ac2 */
  if (C.zf) goto L_11342ac2;
  /* 11342abc call dword ptr [0x11370f9c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11370f9c))), 0x11342ac2u);
L_11342ac2:;
  /* 11342ac2 push 0x1136d418 */
  push32((uint32_t)(0x1136d418u));
  /* 11342ac7 push 0x1136d208 */
  push32((uint32_t)(0x1136d208u));
  /* 11342acc call 0x11342c80 */
  push32(0x11342ad1u); f_11342c80();
  /* 11342ad1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342ad4 push 0x1136d104 */
  push32((uint32_t)(0x1136d104u));
  /* 11342ad9 push 0x1136d000 */
  push32((uint32_t)(0x1136d000u));
  /* 11342ade call 0x11342c80 */
  push32(0x11342ae3u); f_11342c80();
  /* 11342ae3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342ae6 pop ebp */
  EBP = (pop32());
  /* 11342ae7 ret  */
  ESPCHK(0x11342ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002af0 @ 0x11342af0 (21 bytes, 10 insns) */
void f_11342af0(void) {
  FTRACE(0x11342af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11342af1 mov ebp, esp */
  EBP = (ESP);
  /* 11342af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11342af5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11342af7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342afa push eax */
  push32((uint32_t)(EAX));
  /* 11342afb call 0x11342b70 */
  push32(0x11342b00u); f_11342b70();
  /* 11342b00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342b03 pop ebp */
  EBP = (pop32());
  /* 11342b04 ret  */
  ESPCHK(0x11342af0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11342b10 (21 bytes, 10 insns) */
void f_11342b10(void) {
  FTRACE(0x11342b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11342b11 mov ebp, esp */
  EBP = (ESP);
  /* 11342b13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11342b15 push 1 */
  push32((uint32_t)(0x1u));
  /* 11342b17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342b1a push eax */
  push32((uint32_t)(EAX));
  /* 11342b1b call 0x11342b70 */
  push32(0x11342b20u); f_11342b70();
  /* 11342b20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342b23 pop ebp */
  EBP = (pop32());
  /* 11342b24 ret  */
  ESPCHK(0x11342b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b30 @ 0x11342b30 (19 bytes, 9 insns) */
void f_11342b30(void) {
  FTRACE(0x11342b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11342b31 mov ebp, esp */
  EBP = (ESP);
  /* 11342b33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11342b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11342b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11342b39 call 0x11342b70 */
  push32(0x11342b3eu); f_11342b70();
  /* 11342b3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342b41 pop ebp */
  EBP = (pop32());
  /* 11342b42 ret  */
  ESPCHK(0x11342b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b50 @ 0x11342b50 (19 bytes, 9 insns) */
void f_11342b50(void) {
  FTRACE(0x11342b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11342b51 mov ebp, esp */
  EBP = (ESP);
  /* 11342b53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11342b55 push 1 */
  push32((uint32_t)(0x1u));
  /* 11342b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11342b59 call 0x11342b70 */
  push32(0x11342b5eu); f_11342b70();
  /* 11342b5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342b61 pop ebp */
  EBP = (pop32());
  /* 11342b62 ret  */
  ESPCHK(0x11342b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b70 @ 0x11342b70 (227 bytes, 61 insns) */
void f_11342b70(void) {
  FTRACE(0x11342b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11342b71 mov ebp, esp */
  EBP = (ESP);
  /* 11342b73 push ecx */
  push32((uint32_t)(ECX));
  /* 11342b74 call 0x11342c60 */
  push32(0x11342b79u); f_11342c60();
  /* 11342b79 cmp dword ptr [0x1136f4a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136f4a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342b80 jne 0x11342b93 */
  if (!C.zf) goto L_11342b93;
  /* 11342b82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342b85 push eax */
  push32((uint32_t)(EAX));
  /* 11342b86 call dword ptr [0x11371348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371348))), 0x11342b8cu);
  /* 11342b8c push eax */
  push32((uint32_t)(EAX));
  /* 11342b8d call dword ptr [0x11371344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371344))), 0x11342b93u);
L_11342b93:;
  /* 11342b93 mov dword ptr [0x1136f4a0], 1 */
  w32((uint32_t)(0x1136f4a0), (0x1u));
  /* 11342b9d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11342ba0 mov byte ptr [0x1136f49c], cl */
  w8((uint32_t)(0x1136f49c), (CL));
  /* 11342ba6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342baa jne 0x11342bf3 */
  if (!C.zf) goto L_11342bf3;
  /* 11342bac cmp dword ptr [0x11370f98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11370f98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342bb3 je 0x11342be1 */
  if (C.zf) goto L_11342be1;
  /* 11342bb5 mov edx, dword ptr [0x11370f94] */
  EDX = (r32((uint32_t)(0x11370f94)));
  /* 11342bbb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11342bbe:;
  /* 11342bbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342bc1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11342bc4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11342bc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342bca cmp ecx, dword ptr [0x11370f98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11370f98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342bd0 jb 0x11342be1 */
  if (C.cf) goto L_11342be1;
  /* 11342bd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342bd5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342bd8 je 0x11342bdf */
  if (C.zf) goto L_11342bdf;
  /* 11342bda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342bdd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11342bdfu);
L_11342bdf:;
  /* 11342bdf jmp 0x11342bbe */
  goto L_11342bbe;
L_11342be1:;
  /* 11342be1 push 0x1136d724 */
  push32((uint32_t)(0x1136d724u));
  /* 11342be6 push 0x1136d51c */
  push32((uint32_t)(0x1136d51cu));
  /* 11342beb call 0x11342c80 */
  push32(0x11342bf0u); f_11342c80();
  /* 11342bf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11342bf3:;
  /* 11342bf3 push 0x1136d92c */
  push32((uint32_t)(0x1136d92cu));
  /* 11342bf8 push 0x1136d828 */
  push32((uint32_t)(0x1136d828u));
  /* 11342bfd call 0x11342c80 */
  push32(0x11342c02u); f_11342c80();
  /* 11342c02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342c05 cmp dword ptr [0x1136f4a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f4a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342c0c jne 0x11342c2e */
  if (!C.zf) goto L_11342c2e;
  /* 11342c0e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11342c10 call 0x11344860 */
  push32(0x11342c15u); f_11344860();
  /* 11342c15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342c18 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11342c1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11342c1d je 0x11342c2e */
  if (C.zf) goto L_11342c2e;
  /* 11342c1f mov dword ptr [0x1136f4a8], 1 */
  w32((uint32_t)(0x1136f4a8), (0x1u));
  /* 11342c29 call 0x11345170 */
  push32(0x11342c2eu); f_11345170();
L_11342c2e:;
  /* 11342c2e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342c32 je 0x11342c3b */
  if (C.zf) goto L_11342c3b;
  /* 11342c34 call 0x11342c70 */
  push32(0x11342c39u); f_11342c70();
  /* 11342c39 jmp 0x11342c4f */
  goto L_11342c4f;
L_11342c3b:;
  /* 11342c3b mov dword ptr [0x1136f4a4], 1 */
  w32((uint32_t)(0x1136f4a4), (0x1u));
  /* 11342c45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342c48 push ecx */
  push32((uint32_t)(ECX));
  /* 11342c49 call dword ptr [0x11371340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371340))), 0x11342c4fu);
L_11342c4f:;
  /* 11342c4f mov esp, ebp */
  ESP = (EBP);
  /* 11342c51 pop ebp */
  EBP = (pop32());
  /* 11342c52 ret  */
  ESPCHK(0x11342b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c60 @ 0x11342c60 (15 bytes, 7 insns) */
void f_11342c60(void) {
  FTRACE(0x11342c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342c60 push ebp */
  push32((uint32_t)(EBP));
  /* 11342c61 mov ebp, esp */
  EBP = (ESP);
  /* 11342c63 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11342c65 call 0x11346d50 */
  push32(0x11342c6au); f_11346d50();
  /* 11342c6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342c6d pop ebp */
  EBP = (pop32());
  /* 11342c6e ret  */
  ESPCHK(0x11342c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c70 @ 0x11342c70 (15 bytes, 7 insns) */
void f_11342c70(void) {
  FTRACE(0x11342c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11342c71 mov ebp, esp */
  EBP = (ESP);
  /* 11342c73 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11342c75 call 0x11346df0 */
  push32(0x11342c7au); f_11346df0();
  /* 11342c7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342c7d pop ebp */
  EBP = (pop32());
  /* 11342c7e ret  */
  ESPCHK(0x11342c70u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11342c80 (37 bytes, 16 insns) */
void f_11342c80(void) {
  FTRACE(0x11342c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342c80 push ebp */
  push32((uint32_t)(EBP));
  /* 11342c81 mov ebp, esp */
  EBP = (ESP);
L_11342c83:;
  /* 11342c83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342c86 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342c89 jae 0x11342ca3 */
  if (!C.cf) goto L_11342ca3;
  /* 11342c8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342c8e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342c91 je 0x11342c98 */
  if (C.zf) goto L_11342c98;
  /* 11342c93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342c96 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11342c98u);
L_11342c98:;
  /* 11342c98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342c9b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11342c9e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11342ca1 jmp 0x11342c83 */
  goto L_11342c83;
L_11342ca3:;
  /* 11342ca3 pop ebp */
  EBP = (pop32());
  /* 11342ca4 ret  */
  ESPCHK(0x11342c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cb0 @ 0x11342cb0 (130 bytes, 42 insns) */
void f_11342cb0(void) {
  FTRACE(0x11342cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11342cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11342cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11342cb4 call 0x11346c70 */
  push32(0x11342cb9u); f_11346c70();
  /* 11342cb9 call dword ptr [0x11371354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371354))), 0x11342cbfu);
  /* 11342cbf mov dword ptr [0x1136da5c], eax */
  w32((uint32_t)(0x1136da5c), (EAX));
  /* 11342cc4 cmp dword ptr [0x1136da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1136da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342ccb jne 0x11342cd1 */
  if (!C.zf) goto L_11342cd1;
  /* 11342ccd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11342ccf jmp 0x11342d2e */
  goto L_11342d2e;
L_11342cd1:;
  /* 11342cd1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11342cd3 push 0x1136a400 */
  push32((uint32_t)(0x1136a400u));
  /* 11342cd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11342cda push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11342cdc push 1 */
  push32((uint32_t)(0x1u));
  /* 11342cde call 0x11343760 */
  push32(0x11342ce3u); f_11343760();
  /* 11342ce3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342ce6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11342ce9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342ced je 0x11342d04 */
  if (C.zf) goto L_11342d04;
  /* 11342cef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342cf2 push eax */
  push32((uint32_t)(EAX));
  /* 11342cf3 mov ecx, dword ptr [0x1136da5c] */
  ECX = (r32((uint32_t)(0x1136da5c)));
  /* 11342cf9 push ecx */
  push32((uint32_t)(ECX));
  /* 11342cfa call dword ptr [0x11371350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371350))), 0x11342d00u);
  /* 11342d00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11342d02 jne 0x11342d08 */
  if (!C.zf) goto L_11342d08;
L_11342d04:;
  /* 11342d04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11342d06 jmp 0x11342d2e */
  goto L_11342d2e;
L_11342d08:;
  /* 11342d08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342d0b push edx */
  push32((uint32_t)(EDX));
  /* 11342d0c call 0x11342d70 */
  push32(0x11342d11u); f_11342d70();
  /* 11342d11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342d14 call dword ptr [0x1137134c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137134c))), 0x11342d1au);
  /* 11342d1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342d1d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11342d1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342d22 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11342d29 mov eax, 1 */
  EAX = (0x1u);
L_11342d2e:;
  /* 11342d2e mov esp, ebp */
  ESP = (EBP);
  /* 11342d30 pop ebp */
  EBP = (pop32());
  /* 11342d31 ret  */
  ESPCHK(0x11342cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d40 @ 0x11342d40 (41 bytes, 11 insns) */
void f_11342d40(void) {
  FTRACE(0x11342d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11342d41 mov ebp, esp */
  EBP = (ESP);
  /* 11342d43 call 0x11346cb0 */
  push32(0x11342d48u); f_11346cb0();
  /* 11342d48 cmp dword ptr [0x1136da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1136da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342d4f je 0x11342d67 */
  if (C.zf) goto L_11342d67;
  /* 11342d51 mov eax, dword ptr [0x1136da5c] */
  EAX = (r32((uint32_t)(0x1136da5c)));
  /* 11342d56 push eax */
  push32((uint32_t)(EAX));
  /* 11342d57 call dword ptr [0x11371358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371358))), 0x11342d5du);
  /* 11342d5d mov dword ptr [0x1136da5c], 0xffffffff */
  w32((uint32_t)(0x1136da5c), (0xffffffffu));
L_11342d67:;
  /* 11342d67 pop ebp */
  EBP = (pop32());
  /* 11342d68 ret  */
  ESPCHK(0x11342d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d70 @ 0x11342d70 (25 bytes, 8 insns) */
void f_11342d70(void) {
  FTRACE(0x11342d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11342d71 mov ebp, esp */
  EBP = (ESP);
  /* 11342d73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342d76 mov dword ptr [eax + 0x50], 0x1136dc00 */
  w32((uint32_t)(EAX + 0x50), (0x1136dc00u));
  /* 11342d7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342d80 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11342d87 pop ebp */
  EBP = (pop32());
  /* 11342d88 ret  */
  ESPCHK(0x11342d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d90 @ 0x11342d90 (152 bytes, 48 insns) */
void f_11342d90(void) {
  FTRACE(0x11342d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11342d91 mov ebp, esp */
  EBP = (ESP);
  /* 11342d93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11342d96 call dword ptr [0x11371364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371364))), 0x11342d9cu);
  /* 11342d9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11342d9f mov eax, dword ptr [0x1136da5c] */
  EAX = (r32((uint32_t)(0x1136da5c)));
  /* 11342da4 push eax */
  push32((uint32_t)(EAX));
  /* 11342da5 call dword ptr [0x1137128c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137128c))), 0x11342dabu);
  /* 11342dab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11342dae cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342db2 jne 0x11342e17 */
  if (!C.zf) goto L_11342e17;
  /* 11342db4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11342db9 push 0x1136a400 */
  push32((uint32_t)(0x1136a400u));
  /* 11342dbe push 2 */
  push32((uint32_t)(0x2u));
  /* 11342dc0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11342dc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11342dc4 call 0x11343760 */
  push32(0x11342dc9u); f_11343760();
  /* 11342dc9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342dcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11342dcf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342dd3 je 0x11342e0d */
  if (C.zf) goto L_11342e0d;
  /* 11342dd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342dd8 push ecx */
  push32((uint32_t)(ECX));
  /* 11342dd9 mov edx, dword ptr [0x1136da5c] */
  EDX = (r32((uint32_t)(0x1136da5c)));
  /* 11342ddf push edx */
  push32((uint32_t)(EDX));
  /* 11342de0 call dword ptr [0x11371350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371350))), 0x11342de6u);
  /* 11342de6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11342de8 je 0x11342e0d */
  if (C.zf) goto L_11342e0d;
  /* 11342dea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342ded push eax */
  push32((uint32_t)(EAX));
  /* 11342dee call 0x11342d70 */
  push32(0x11342df3u); f_11342d70();
  /* 11342df3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342df6 call dword ptr [0x1137134c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137134c))), 0x11342dfcu);
  /* 11342dfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342dff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11342e01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342e04 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11342e0b jmp 0x11342e17 */
  goto L_11342e17;
L_11342e0d:;
  /* 11342e0d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11342e0f call 0x113422c0 */
  push32(0x11342e14u); f_113422c0();
  /* 11342e14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11342e17:;
  /* 11342e17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11342e1a push eax */
  push32((uint32_t)(EAX));
  /* 11342e1b call dword ptr [0x11371290] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371290))), 0x11342e21u);
  /* 11342e21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11342e24 mov esp, ebp */
  ESP = (EBP);
  /* 11342e26 pop ebp */
  EBP = (pop32());
  /* 11342e27 ret  */
  ESPCHK(0x11342d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e30 @ 0x11342e30 (263 bytes, 86 insns) */
void f_11342e30(void) {
  FTRACE(0x11342e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11342e31 mov ebp, esp */
  EBP = (ESP);
  /* 11342e33 cmp dword ptr [0x1136da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1136da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342e3a je 0x11342f35 */
  if (C.zf) goto L_11342f35;
  /* 11342e40 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342e44 jne 0x11342e55 */
  if (!C.zf) goto L_11342e55;
  /* 11342e46 mov eax, dword ptr [0x1136da5c] */
  EAX = (r32((uint32_t)(0x1136da5c)));
  /* 11342e4b push eax */
  push32((uint32_t)(EAX));
  /* 11342e4c call dword ptr [0x1137128c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137128c))), 0x11342e52u);
  /* 11342e52 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11342e55:;
  /* 11342e55 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342e59 je 0x11342f26 */
  if (C.zf) goto L_11342f26;
  /* 11342e5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342e62 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342e66 je 0x11342e79 */
  if (C.zf) goto L_11342e79;
  /* 11342e68 push 2 */
  push32((uint32_t)(0x2u));
  /* 11342e6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342e6d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11342e70 push eax */
  push32((uint32_t)(EAX));
  /* 11342e71 call 0x11343de0 */
  push32(0x11342e76u); f_11343de0();
  /* 11342e76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11342e79:;
  /* 11342e79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342e7c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342e80 je 0x11342e93 */
  if (C.zf) goto L_11342e93;
  /* 11342e82 push 2 */
  push32((uint32_t)(0x2u));
  /* 11342e84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342e87 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11342e8a push eax */
  push32((uint32_t)(EAX));
  /* 11342e8b call 0x11343de0 */
  push32(0x11342e90u); f_11343de0();
  /* 11342e90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11342e93:;
  /* 11342e93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342e96 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342e9a je 0x11342ead */
  if (C.zf) goto L_11342ead;
  /* 11342e9c push 2 */
  push32((uint32_t)(0x2u));
  /* 11342e9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342ea1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11342ea4 push eax */
  push32((uint32_t)(EAX));
  /* 11342ea5 call 0x11343de0 */
  push32(0x11342eaau); f_11343de0();
  /* 11342eaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11342ead:;
  /* 11342ead mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342eb0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342eb4 je 0x11342ec7 */
  if (C.zf) goto L_11342ec7;
  /* 11342eb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11342eb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342ebb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11342ebe push eax */
  push32((uint32_t)(EAX));
  /* 11342ebf call 0x11343de0 */
  push32(0x11342ec4u); f_11343de0();
  /* 11342ec4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11342ec7:;
  /* 11342ec7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342eca cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342ece je 0x11342ee1 */
  if (C.zf) goto L_11342ee1;
  /* 11342ed0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11342ed2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342ed5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11342ed8 push eax */
  push32((uint32_t)(EAX));
  /* 11342ed9 call 0x11343de0 */
  push32(0x11342edeu); f_11343de0();
  /* 11342ede add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11342ee1:;
  /* 11342ee1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342ee4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342ee8 je 0x11342efb */
  if (C.zf) goto L_11342efb;
  /* 11342eea push 2 */
  push32((uint32_t)(0x2u));
  /* 11342eec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342eef mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11342ef2 push eax */
  push32((uint32_t)(EAX));
  /* 11342ef3 call 0x11343de0 */
  push32(0x11342ef8u); f_11343de0();
  /* 11342ef8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11342efb:;
  /* 11342efb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342efe cmp dword ptr [ecx + 0x50], 0x1136dc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1136dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342f05 je 0x11342f18 */
  if (C.zf) goto L_11342f18;
  /* 11342f07 push 2 */
  push32((uint32_t)(0x2u));
  /* 11342f09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342f0c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11342f0f push eax */
  push32((uint32_t)(EAX));
  /* 11342f10 call 0x11343de0 */
  push32(0x11342f15u); f_11343de0();
  /* 11342f15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11342f18:;
  /* 11342f18 push 2 */
  push32((uint32_t)(0x2u));
  /* 11342f1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11342f1d push ecx */
  push32((uint32_t)(ECX));
  /* 11342f1e call 0x11343de0 */
  push32(0x11342f23u); f_11343de0();
  /* 11342f23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11342f26:;
  /* 11342f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11342f28 mov edx, dword ptr [0x1136da5c] */
  EDX = (r32((uint32_t)(0x1136da5c)));
  /* 11342f2e push edx */
  push32((uint32_t)(EDX));
  /* 11342f2f call dword ptr [0x11371350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371350))), 0x11342f35u);
L_11342f35:;
  /* 11342f35 pop ebp */
  EBP = (pop32());
  /* 11342f36 ret  */
  ESPCHK(0x11342e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f40 @ 0x11342f40 (11 bytes, 5 insns) */
void f_11342f40(void) {
  FTRACE(0x11342f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11342f41 mov ebp, esp */
  EBP = (ESP);
  /* 11342f43 call dword ptr [0x1137134c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137134c))), 0x11342f49u);
  /* 11342f49 pop ebp */
  EBP = (pop32());
  /* 11342f4a ret  */
  ESPCHK(0x11342f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f50 @ 0x11342f50 (11 bytes, 5 insns) */
void f_11342f50(void) {
  FTRACE(0x11342f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11342f51 mov ebp, esp */
  EBP = (ESP);
  /* 11342f53 call dword ptr [0x11371368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371368))), 0x11342f59u);
  /* 11342f59 pop ebp */
  EBP = (pop32());
  /* 11342f5a ret  */
  ESPCHK(0x11342f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f60 @ 0x11342f60 (804 bytes, 236 insns) */
void f_11342f60(void) {
  FTRACE(0x11342f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11342f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11342f61 mov ebp, esp */
  EBP = (ESP);
  /* 11342f63 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11342f66 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11342f6b push 0x1136a40c */
  push32((uint32_t)(0x1136a40cu));
  /* 11342f70 push 2 */
  push32((uint32_t)(0x2u));
  /* 11342f72 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11342f77 call 0x11343350 */
  push32(0x11342f7cu); f_11343350();
  /* 11342f7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11342f7f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11342f82 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342f86 jne 0x11342f92 */
  if (!C.zf) goto L_11342f92;
  /* 11342f88 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11342f8a call 0x113422c0 */
  push32(0x11342f8fu); f_113422c0();
  /* 11342f8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11342f92:;
  /* 11342f92 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11342f95 mov dword ptr [0x11370e40], eax */
  w32((uint32_t)(0x11370e40), (EAX));
  /* 11342f9a mov dword ptr [0x11370f7c], 0x20 */
  w32((uint32_t)(0x11370f7c), (0x20u));
  /* 11342fa4 jmp 0x11342faf */
  goto L_11342faf;
L_11342fa6:;
  /* 11342fa6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11342fa9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11342fac mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_11342faf:;
  /* 11342faf mov edx, dword ptr [0x11370e40] */
  EDX = (r32((uint32_t)(0x11370e40)));
  /* 11342fb5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11342fbb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11342fbe jae 0x11342fe3 */
  if (!C.cf) goto L_11342fe3;
  /* 11342fc0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11342fc3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11342fc7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11342fca mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11342fd0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11342fd3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11342fd7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11342fda mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11342fe1 jmp 0x11342fa6 */
  goto L_11342fa6;
L_11342fe3:;
  /* 11342fe3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11342fe6 push ecx */
  push32((uint32_t)(ECX));
  /* 11342fe7 call dword ptr [0x11371374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371374))), 0x11342fedu);
  /* 11342fed mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11342ff0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11342ff6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11342ff8 je 0x11343185 */
  if (C.zf) goto L_11343185;
  /* 11342ffe cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343002 je 0x11343185 */
  if (C.zf) goto L_11343185;
  /* 11343008 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1134300b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1134300d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11343010 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11343013 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11343016 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11343019 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134301c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134301f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11343022 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343029 jge 0x11343033 */
  if ((C.sf==C.of)) goto L_11343033;
  /* 1134302b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1134302e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11343031 jmp 0x1134303a */
  goto L_1134303a;
L_11343033:;
  /* 11343033 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1134303a:;
  /* 1134303a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1134303d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11343040 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11343047 jmp 0x11343052 */
  goto L_11343052;
L_11343049:;
  /* 11343049 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1134304c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134304f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11343052:;
  /* 11343052 mov ecx, dword ptr [0x11370f7c] */
  ECX = (r32((uint32_t)(0x11370f7c)));
  /* 11343058 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134305b jge 0x113430f2 */
  if ((C.sf==C.of)) goto L_113430f2;
  /* 11343061 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11343066 push 0x1136a40c */
  push32((uint32_t)(0x1136a40cu));
  /* 1134306b push 2 */
  push32((uint32_t)(0x2u));
  /* 1134306d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11343072 call 0x11343350 */
  push32(0x11343077u); f_11343350();
  /* 11343077 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134307a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1134307d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343081 jne 0x1134308e */
  if (!C.zf) goto L_1134308e;
  /* 11343083 mov edx, dword ptr [0x11370f7c] */
  EDX = (r32((uint32_t)(0x11370f7c)));
  /* 11343089 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1134308c jmp 0x113430f2 */
  goto L_113430f2;
L_1134308e:;
  /* 1134308e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11343091 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11343094 mov dword ptr [eax*4 + 0x11370e40], ecx */
  w32((uint32_t)(EAX*4 + 0x11370e40), (ECX));
  /* 1134309b mov edx, dword ptr [0x11370f7c] */
  EDX = (r32((uint32_t)(0x11370f7c)));
  /* 113430a1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113430a4 mov dword ptr [0x11370f7c], edx */
  w32((uint32_t)(0x11370f7c), (EDX));
  /* 113430aa jmp 0x113430b5 */
  goto L_113430b5;
L_113430ac:;
  /* 113430ac mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113430af add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113430b2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_113430b5:;
  /* 113430b5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 113430b8 mov edx, dword ptr [ecx*4 + 0x11370e40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11370e40)));
  /* 113430bf add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113430c5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113430c8 jae 0x113430ed */
  if (!C.cf) goto L_113430ed;
  /* 113430ca mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113430cd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 113430d1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 113430d4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 113430da mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113430dd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 113430e1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113430e4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 113430eb jmp 0x113430ac */
  goto L_113430ac;
L_113430ed:;
  /* 113430ed jmp 0x11343049 */
  goto L_11343049;
L_113430f2:;
  /* 113430f2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 113430f9 jmp 0x11343116 */
  goto L_11343116;
L_113430fb:;
  /* 113430fb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 113430fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11343101 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11343104 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343107 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134310a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1134310d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11343110 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11343113 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11343116:;
  /* 11343116 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11343119 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134311c jge 0x11343185 */
  if ((C.sf==C.of)) goto L_11343185;
  /* 1134311e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11343121 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343124 je 0x11343180 */
  if (C.zf) goto L_11343180;
  /* 11343126 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343129 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134312c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1134312f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11343131 je 0x11343180 */
  if (C.zf) goto L_11343180;
  /* 11343133 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343136 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11343139 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1134313c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134313e jne 0x11343150 */
  if (!C.zf) goto L_11343150;
  /* 11343140 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11343143 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11343145 push edx */
  push32((uint32_t)(EDX));
  /* 11343146 call dword ptr [0x11371370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371370))), 0x1134314cu);
  /* 1134314c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134314e je 0x11343180 */
  if (C.zf) goto L_11343180;
L_11343150:;
  /* 11343150 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11343153 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11343156 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11343159 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1134315c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134315f mov edx, dword ptr [eax*4 + 0x11370e40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11370e40)));
  /* 11343166 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11343168 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1134316b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1134316e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11343171 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11343173 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11343175 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11343178 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134317b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1134317d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11343180:;
  /* 11343180 jmp 0x113430fb */
  goto L_113430fb;
L_11343185:;
  /* 11343185 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1134318c jmp 0x11343197 */
  goto L_11343197;
L_1134318e:;
  /* 1134318e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11343191 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11343194 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11343197:;
  /* 11343197 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134319b jge 0x11343274 */
  if ((C.sf==C.of)) goto L_11343274;
  /* 113431a1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 113431a4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113431a7 mov edx, dword ptr [0x11370e40] */
  EDX = (r32((uint32_t)(0x11370e40)));
  /* 113431ad add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113431af mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 113431b2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113431b5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113431b8 jne 0x11343260 */
  if (!C.zf) goto L_11343260;
  /* 113431be mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 113431c1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 113431c5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113431c9 jne 0x113431d4 */
  if (!C.zf) goto L_113431d4;
  /* 113431cb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 113431d2 jmp 0x113431e4 */
  goto L_113431e4;
L_113431d4:;
  /* 113431d4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 113431d7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113431da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 113431dc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113431de add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113431e1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_113431e4:;
  /* 113431e4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 113431e7 push eax */
  push32((uint32_t)(EAX));
  /* 113431e8 call dword ptr [0x11371320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371320))), 0x113431eeu);
  /* 113431ee mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 113431f1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113431f5 je 0x1134324f */
  if (C.zf) goto L_1134324f;
  /* 113431f7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 113431fa push ecx */
  push32((uint32_t)(ECX));
  /* 113431fb call dword ptr [0x11371370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371370))), 0x11343201u);
  /* 11343201 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11343204 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343208 je 0x1134324f */
  if (C.zf) goto L_1134324f;
  /* 1134320a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1134320d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11343210 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11343212 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11343215 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1134321b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134321e jne 0x11343230 */
  if (!C.zf) goto L_11343230;
  /* 11343220 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11343223 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11343226 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11343228 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1134322b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1134322e jmp 0x1134324d */
  goto L_1134324d;
L_11343230:;
  /* 11343230 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11343233 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11343239 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134323c jne 0x1134324d */
  if (!C.zf) goto L_1134324d;
  /* 1134323e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11343241 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11343244 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11343247 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1134324a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1134324d:;
  /* 1134324d jmp 0x1134325e */
  goto L_1134325e;
L_1134324f:;
  /* 1134324f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11343252 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11343255 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11343258 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1134325b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1134325e:;
  /* 1134325e jmp 0x1134326f */
  goto L_1134326f;
L_11343260:;
  /* 11343260 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11343263 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11343266 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11343269 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1134326c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1134326f:;
  /* 1134326f jmp 0x1134318e */
  goto L_1134318e;
L_11343274:;
  /* 11343274 mov eax, dword ptr [0x11370f7c] */
  EAX = (r32((uint32_t)(0x11370f7c)));
  /* 11343279 push eax */
  push32((uint32_t)(EAX));
  /* 1134327a call dword ptr [0x1137136c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137136c))), 0x11343280u);
  /* 11343280 mov esp, ebp */
  ESP = (EBP);
  /* 11343282 pop ebp */
  EBP = (pop32());
  /* 11343283 ret  */
  ESPCHK(0x11342f60u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11343290 (155 bytes, 45 insns) */
void f_11343290(void) {
  FTRACE(0x11343290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11343290 push ebp */
  push32((uint32_t)(EBP));
  /* 11343291 mov ebp, esp */
  EBP = (ESP);
  /* 11343293 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11343296 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1134329d jmp 0x113432a8 */
  goto L_113432a8;
L_1134329f:;
  /* 1134329f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113432a2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113432a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113432a8:;
  /* 113432a8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113432ac jge 0x11343327 */
  if ((C.sf==C.of)) goto L_11343327;
  /* 113432ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113432b1 cmp dword ptr [ecx*4 + 0x11370e40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11370e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113432b9 je 0x11343322 */
  if (C.zf) goto L_11343322;
  /* 113432bb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113432be mov eax, dword ptr [edx*4 + 0x11370e40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11370e40)));
  /* 113432c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113432c8 jmp 0x113432d3 */
  goto L_113432d3;
L_113432ca:;
  /* 113432ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113432cd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113432d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113432d3:;
  /* 113432d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113432d6 mov eax, dword ptr [edx*4 + 0x11370e40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11370e40)));
  /* 113432dd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113432e2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113432e5 jae 0x113432ff */
  if (!C.cf) goto L_113432ff;
  /* 113432e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113432ea cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113432ee je 0x113432fd */
  if (C.zf) goto L_113432fd;
  /* 113432f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113432f3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113432f6 push edx */
  push32((uint32_t)(EDX));
  /* 113432f7 call dword ptr [0x11371378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371378))), 0x113432fdu);
L_113432fd:;
  /* 113432fd jmp 0x113432ca */
  goto L_113432ca;
L_113432ff:;
  /* 113432ff push 2 */
  push32((uint32_t)(0x2u));
  /* 11343301 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11343304 mov ecx, dword ptr [eax*4 + 0x11370e40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11370e40)));
  /* 1134330b push ecx */
  push32((uint32_t)(ECX));
  /* 1134330c call 0x11343de0 */
  push32(0x11343311u); f_11343de0();
  /* 11343311 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343314 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11343317 mov dword ptr [edx*4 + 0x11370e40], 0 */
  w32((uint32_t)(EDX*4 + 0x11370e40), (0x0u));
L_11343322:;
  /* 11343322 jmp 0x1134329f */
  goto L_1134329f;
L_11343327:;
  /* 11343327 mov esp, ebp */
  ESP = (EBP);
  /* 11343329 pop ebp */
  EBP = (pop32());
  /* 1134332a ret  */
  ESPCHK(0x11343290u, _esp0);
  ESP += 4; return;
}

/* FUN_10003330 @ 0x11343330 (29 bytes, 13 insns) */
void f_11343330(void) {
  FTRACE(0x11343330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11343330 push ebp */
  push32((uint32_t)(EBP));
  /* 11343331 mov ebp, esp */
  EBP = (ESP);
  /* 11343333 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343335 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343337 push 1 */
  push32((uint32_t)(0x1u));
  /* 11343339 mov eax, dword ptr [0x1136f650] */
  EAX = (r32((uint32_t)(0x1136f650)));
  /* 1134333e push eax */
  push32((uint32_t)(EAX));
  /* 1134333f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11343342 push ecx */
  push32((uint32_t)(ECX));
  /* 11343343 call 0x113433a0 */
  push32(0x11343348u); f_113433a0();
  /* 11343348 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134334b pop ebp */
  EBP = (pop32());
  /* 1134334c ret  */
  ESPCHK(0x11343330u, _esp0);
  ESP += 4; return;
}

/* FUN_10003350 @ 0x11343350 (35 bytes, 16 insns) */
void f_11343350(void) {
  FTRACE(0x11343350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11343350 push ebp */
  push32((uint32_t)(EBP));
  /* 11343351 mov ebp, esp */
  EBP = (ESP);
  /* 11343353 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11343356 push eax */
  push32((uint32_t)(EAX));
  /* 11343357 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134335a push ecx */
  push32((uint32_t)(ECX));
  /* 1134335b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134335e push edx */
  push32((uint32_t)(EDX));
  /* 1134335f mov eax, dword ptr [0x1136f650] */
  EAX = (r32((uint32_t)(0x1136f650)));
  /* 11343364 push eax */
  push32((uint32_t)(EAX));
  /* 11343365 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11343368 push ecx */
  push32((uint32_t)(ECX));
  /* 11343369 call 0x113433a0 */
  push32(0x1134336eu); f_113433a0();
  /* 1134336e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343371 pop ebp */
  EBP = (pop32());
  /* 11343372 ret  */
  ESPCHK(0x11343350u, _esp0);
  ESP += 4; return;
}

/* FUN_10003380 @ 0x11343380 (27 bytes, 13 insns) */
void f_11343380(void) {
  FTRACE(0x11343380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11343380 push ebp */
  push32((uint32_t)(EBP));
  /* 11343381 mov ebp, esp */
  EBP = (ESP);
  /* 11343383 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343385 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343387 push 1 */
  push32((uint32_t)(0x1u));
  /* 11343389 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134338c push eax */
  push32((uint32_t)(EAX));
  /* 1134338d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11343390 push ecx */
  push32((uint32_t)(ECX));
  /* 11343391 call 0x113433a0 */
  push32(0x11343396u); f_113433a0();
  /* 11343396 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343399 pop ebp */
  EBP = (pop32());
  /* 1134339a ret  */
  ESPCHK(0x11343380u, _esp0);
  ESP += 4; return;
}

/* FUN_100033a0 @ 0x113433a0 (94 bytes, 38 insns) */
void f_113433a0(void) {
  FTRACE(0x113433a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113433a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113433a1 mov ebp, esp */
  EBP = (ESP);
  /* 113433a3 push ecx */
  push32((uint32_t)(ECX));
L_113433a4:;
  /* 113433a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 113433a6 call 0x11346d50 */
  push32(0x113433abu); f_11346d50();
  /* 113433ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113433ae mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113433b1 push eax */
  push32((uint32_t)(EAX));
  /* 113433b2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113433b5 push ecx */
  push32((uint32_t)(ECX));
  /* 113433b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113433b9 push edx */
  push32((uint32_t)(EDX));
  /* 113433ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113433bd push eax */
  push32((uint32_t)(EAX));
  /* 113433be call 0x11343420 */
  push32(0x113433c3u); f_11343420();
  /* 113433c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113433c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113433c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 113433cb call 0x11346df0 */
  push32(0x113433d0u); f_11346df0();
  /* 113433d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113433d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113433d7 jne 0x113433df */
  if (!C.zf) goto L_113433df;
  /* 113433d9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113433dd jne 0x113433e4 */
  if (!C.zf) goto L_113433e4;
L_113433df:;
  /* 113433df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113433e2 jmp 0x113433fa */
  goto L_113433fa;
L_113433e4:;
  /* 113433e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113433e7 push ecx */
  push32((uint32_t)(ECX));
  /* 113433e8 call 0x11347090 */
  push32(0x113433edu); f_11347090();
  /* 113433ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113433f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113433f2 jne 0x113433f8 */
  if (!C.zf) goto L_113433f8;
  /* 113433f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113433f6 jmp 0x113433fa */
  goto L_113433fa;
L_113433f8:;
  /* 113433f8 jmp 0x113433a4 */
  goto L_113433a4;
L_113433fa:;
  /* 113433fa mov esp, ebp */
  ESP = (EBP);
  /* 113433fc pop ebp */
  EBP = (pop32());
  /* 113433fd ret  */
  ESPCHK(0x113433a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003400 @ 0x11343400 (23 bytes, 11 insns) */
void f_11343400(void) {
  FTRACE(0x11343400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11343400 push ebp */
  push32((uint32_t)(EBP));
  /* 11343401 mov ebp, esp */
  EBP = (ESP);
  /* 11343403 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343405 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343407 push 1 */
  push32((uint32_t)(0x1u));
  /* 11343409 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134340c push eax */
  push32((uint32_t)(EAX));
  /* 1134340d call 0x11343420 */
  push32(0x11343412u); f_11343420();
  /* 11343412 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343415 pop ebp */
  EBP = (pop32());
  /* 11343416 ret  */
  ESPCHK(0x11343400u, _esp0);
  ESP += 4; return;
}

/* FUN_10003420 @ 0x11343420 (787 bytes, 254 insns) */
void f_11343420(void) {
  FTRACE(0x11343420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11343420 push ebp */
  push32((uint32_t)(EBP));
  /* 11343421 mov ebp, esp */
  EBP = (ESP);
  /* 11343423 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11343426 push ebx */
  push32((uint32_t)(EBX));
  /* 11343427 push esi */
  push32((uint32_t)(ESI));
  /* 11343428 push edi */
  push32((uint32_t)(EDI));
  /* 11343429 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11343430 mov eax, dword ptr [0x1136da84] */
  EAX = (r32((uint32_t)(0x1136da84)));
  /* 11343435 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11343438 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134343a je 0x1134346c */
  if (C.zf) goto L_1134346c;
L_1134343c:;
  /* 1134343c call 0x113444f0 */
  push32(0x11343441u); f_113444f0();
  /* 11343441 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11343443 jne 0x11343466 */
  if (!C.zf) goto L_11343466;
  /* 11343445 push 0x1136a500 */
  push32((uint32_t)(0x1136a500u));
  /* 1134344a push 0 */
  push32((uint32_t)(0x0u));
  /* 1134344c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11343451 push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 11343456 push 2 */
  push32((uint32_t)(0x2u));
  /* 11343458 call 0x11342410 */
  push32(0x1134345du); f_11342410();
  /* 1134345d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343460 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343463 jne 0x11343466 */
  if (!C.zf) goto L_11343466;
  /* 11343465 int3  */
  x86_unimpl("int3 @ 0x11343465");
L_11343466:;
  /* 11343466 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11343468 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134346a jne 0x1134343c */
  if (!C.zf) goto L_1134343c;
L_1134346c:;
  /* 1134346c mov edx, dword ptr [0x1136da88] */
  EDX = (r32((uint32_t)(0x1136da88)));
  /* 11343472 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11343475 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11343478 cmp eax, dword ptr [0x1136da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1136da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134347e jne 0x11343481 */
  if (!C.zf) goto L_11343481;
  /* 11343480 int3  */
  x86_unimpl("int3 @ 0x11343480");
L_11343481:;
  /* 11343481 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11343484 push ecx */
  push32((uint32_t)(ECX));
  /* 11343485 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11343488 push edx */
  push32((uint32_t)(EDX));
  /* 11343489 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134348c push eax */
  push32((uint32_t)(EAX));
  /* 1134348d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11343490 push ecx */
  push32((uint32_t)(ECX));
  /* 11343491 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11343494 push edx */
  push32((uint32_t)(EDX));
  /* 11343495 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343497 push 1 */
  push32((uint32_t)(0x1u));
  /* 11343499 call dword ptr [0x1136dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136dc90))), 0x1134349fu);
  /* 1134349f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113434a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113434a4 jne 0x11343504 */
  if (!C.zf) goto L_11343504;
  /* 113434a6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113434aa je 0x113434d7 */
  if (C.zf) goto L_113434d7;
L_113434ac:;
  /* 113434ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113434af push eax */
  push32((uint32_t)(EAX));
  /* 113434b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113434b3 push ecx */
  push32((uint32_t)(ECX));
  /* 113434b4 push 0x1136a4bc */
  push32((uint32_t)(0x1136a4bcu));
  /* 113434b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113434bb push 0 */
  push32((uint32_t)(0x0u));
  /* 113434bd push 0 */
  push32((uint32_t)(0x0u));
  /* 113434bf push 0 */
  push32((uint32_t)(0x0u));
  /* 113434c1 call 0x11342410 */
  push32(0x113434c6u); f_11342410();
  /* 113434c6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113434c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113434cc jne 0x113434cf */
  if (!C.zf) goto L_113434cf;
  /* 113434ce int3  */
  x86_unimpl("int3 @ 0x113434ce");
L_113434cf:;
  /* 113434cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113434d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113434d3 jne 0x113434ac */
  if (!C.zf) goto L_113434ac;
  /* 113434d5 jmp 0x113434fd */
  goto L_113434fd;
L_113434d7:;
  /* 113434d7 push 0x1136a498 */
  push32((uint32_t)(0x1136a498u));
  /* 113434dc push 0x1136a494 */
  push32((uint32_t)(0x1136a494u));
  /* 113434e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113434e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113434e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113434e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113434e9 call 0x11342410 */
  push32(0x113434eeu); f_11342410();
  /* 113434ee add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113434f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113434f4 jne 0x113434f7 */
  if (!C.zf) goto L_113434f7;
  /* 113434f6 int3  */
  x86_unimpl("int3 @ 0x113434f6");
L_113434f7:;
  /* 113434f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113434f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113434fb jne 0x113434d7 */
  if (!C.zf) goto L_113434d7;
L_113434fd:;
  /* 113434fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113434ff jmp 0x1134372c */
  goto L_1134372c;
L_11343504:;
  /* 11343504 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11343507 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1134350d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343510 je 0x11343526 */
  if (C.zf) goto L_11343526;
  /* 11343512 mov edx, dword ptr [0x1136da84] */
  EDX = (r32((uint32_t)(0x1136da84)));
  /* 11343518 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1134351b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134351d jne 0x11343526 */
  if (!C.zf) goto L_11343526;
  /* 1134351f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11343526:;
  /* 11343526 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134352a ja 0x11343537 */
  if ((!C.cf&&!C.zf)) goto L_11343537;
  /* 1134352c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134352f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11343532 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343535 jbe 0x11343563 */
  if ((C.cf||C.zf)) goto L_11343563;
L_11343537:;
  /* 11343537 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134353a push ecx */
  push32((uint32_t)(ECX));
  /* 1134353b push 0x1136a470 */
  push32((uint32_t)(0x1136a470u));
  /* 11343540 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343542 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343544 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343546 push 1 */
  push32((uint32_t)(0x1u));
  /* 11343548 call 0x11342410 */
  push32(0x1134354du); f_11342410();
  /* 1134354d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343550 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343553 jne 0x11343556 */
  if (!C.zf) goto L_11343556;
  /* 11343555 int3  */
  x86_unimpl("int3 @ 0x11343555");
L_11343556:;
  /* 11343556 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11343558 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134355a jne 0x11343537 */
  if (!C.zf) goto L_11343537;
  /* 1134355c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134355e jmp 0x1134372c */
  goto L_1134372c;
L_11343563:;
  /* 11343563 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11343566 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1134356b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134356e je 0x113435b0 */
  if (C.zf) goto L_113435b0;
  /* 11343570 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343574 je 0x113435b0 */
  if (C.zf) goto L_113435b0;
  /* 11343576 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11343579 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1134357f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343582 je 0x113435b0 */
  if (C.zf) goto L_113435b0;
  /* 11343584 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343588 je 0x113435b0 */
  if (C.zf) goto L_113435b0;
L_1134358a:;
  /* 1134358a push 0x1136a43c */
  push32((uint32_t)(0x1136a43cu));
  /* 1134358f push 0x1136a494 */
  push32((uint32_t)(0x1136a494u));
  /* 11343594 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343596 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343598 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134359a push 1 */
  push32((uint32_t)(0x1u));
  /* 1134359c call 0x11342410 */
  push32(0x113435a1u); f_11342410();
  /* 113435a1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113435a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113435a7 jne 0x113435aa */
  if (!C.zf) goto L_113435aa;
  /* 113435a9 int3  */
  x86_unimpl("int3 @ 0x113435a9");
L_113435aa:;
  /* 113435aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113435ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113435ae jne 0x1134358a */
  if (!C.zf) goto L_1134358a;
L_113435b0:;
  /* 113435b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113435b3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113435b6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113435b9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113435bc push ecx */
  push32((uint32_t)(ECX));
  /* 113435bd call 0x113471a0 */
  push32(0x113435c2u); f_113471a0();
  /* 113435c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113435c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113435c8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113435cc jne 0x113435d5 */
  if (!C.zf) goto L_113435d5;
  /* 113435ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113435d0 jmp 0x1134372c */
  goto L_1134372c;
L_113435d5:;
  /* 113435d5 mov edx, dword ptr [0x1136da88] */
  EDX = (r32((uint32_t)(0x1136da88)));
  /* 113435db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113435de mov dword ptr [0x1136da88], edx */
  w32((uint32_t)(0x1136da88), (EDX));
  /* 113435e4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113435e8 je 0x11343633 */
  if (C.zf) goto L_11343633;
  /* 113435ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113435ed mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113435f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113435f6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 113435fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343600 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11343607 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134360a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11343611 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343614 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11343617 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1134361a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134361d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11343624 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343627 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1134362e jmp 0x113436d3 */
  goto L_113436d3;
L_11343633:;
  /* 11343633 mov edx, dword ptr [0x1136f4b0] */
  EDX = (r32((uint32_t)(0x1136f4b0)));
  /* 11343639 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134363c mov dword ptr [0x1136f4b0], edx */
  w32((uint32_t)(0x1136f4b0), (EDX));
  /* 11343642 mov eax, dword ptr [0x1136f4b8] */
  EAX = (r32((uint32_t)(0x1136f4b8)));
  /* 11343647 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134364a mov dword ptr [0x1136f4b8], eax */
  w32((uint32_t)(0x1136f4b8), (EAX));
  /* 1134364f mov ecx, dword ptr [0x1136f4b8] */
  ECX = (r32((uint32_t)(0x1136f4b8)));
  /* 11343655 cmp ecx, dword ptr [0x1136f4bc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1136f4bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134365b jbe 0x11343669 */
  if ((C.cf||C.zf)) goto L_11343669;
  /* 1134365d mov edx, dword ptr [0x1136f4b8] */
  EDX = (r32((uint32_t)(0x1136f4b8)));
  /* 11343663 mov dword ptr [0x1136f4bc], edx */
  w32((uint32_t)(0x1136f4bc), (EDX));
L_11343669:;
  /* 11343669 cmp dword ptr [0x1136f4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343670 je 0x1134367f */
  if (C.zf) goto L_1134367f;
  /* 11343672 mov eax, dword ptr [0x1136f4b4] */
  EAX = (r32((uint32_t)(0x1136f4b4)));
  /* 11343677 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134367a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1134367d jmp 0x11343688 */
  goto L_11343688;
L_1134367f:;
  /* 1134367f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343682 mov dword ptr [0x1136f4ac], edx */
  w32((uint32_t)(0x1136f4ac), (EDX));
L_11343688:;
  /* 11343688 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134368b mov ecx, dword ptr [0x1136f4b4] */
  ECX = (r32((uint32_t)(0x1136f4b4)));
  /* 11343691 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11343693 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343696 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 1134369d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113436a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113436a3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 113436a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113436a9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113436ac mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 113436af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113436b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113436b5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 113436b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113436bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113436be mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 113436c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113436c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113436c7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 113436ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113436cd mov dword ptr [0x1136f4b4], ecx */
  w32((uint32_t)(0x1136f4b4), (ECX));
L_113436d3:;
  /* 113436d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 113436d5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113436d7 mov dl, byte ptr [0x1136da90] */
  DL = (r8((uint32_t)(0x1136da90)));
  /* 113436dd push edx */
  push32((uint32_t)(EDX));
  /* 113436de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113436e1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113436e4 push eax */
  push32((uint32_t)(EAX));
  /* 113436e5 call 0x113470c0 */
  push32(0x113436eau); f_113470c0();
  /* 113436ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113436ed push 4 */
  push32((uint32_t)(0x4u));
  /* 113436ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113436f1 mov cl, byte ptr [0x1136da90] */
  CL = (r8((uint32_t)(0x1136da90)));
  /* 113436f7 push ecx */
  push32((uint32_t)(ECX));
  /* 113436f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113436fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113436fe lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11343702 push ecx */
  push32((uint32_t)(ECX));
  /* 11343703 call 0x113470c0 */
  push32(0x11343708u); f_113470c0();
  /* 11343708 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134370b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134370e push edx */
  push32((uint32_t)(EDX));
  /* 1134370f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11343711 mov al, byte ptr [0x1136da92] */
  AL = (r8((uint32_t)(0x1136da92)));
  /* 11343716 push eax */
  push32((uint32_t)(EAX));
  /* 11343717 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134371a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134371d push ecx */
  push32((uint32_t)(ECX));
  /* 1134371e call 0x113470c0 */
  push32(0x11343723u); f_113470c0();
  /* 11343723 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343726 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343729 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1134372c:;
  /* 1134372c pop edi */
  EDI = (pop32());
  /* 1134372d pop esi */
  ESI = (pop32());
  /* 1134372e pop ebx */
  EBX = (pop32());
  /* 1134372f mov esp, ebp */
  ESP = (EBP);
  /* 11343731 pop ebp */
  EBP = (pop32());
  /* 11343732 ret  */
  ESPCHK(0x11343420u, _esp0);
  ESP += 4; return;
}

/* FUN_10003740 @ 0x11343740 (27 bytes, 13 insns) */
void f_11343740(void) {
  FTRACE(0x11343740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11343740 push ebp */
  push32((uint32_t)(EBP));
  /* 11343741 mov ebp, esp */
  EBP = (ESP);
  /* 11343743 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343745 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343747 push 1 */
  push32((uint32_t)(0x1u));
  /* 11343749 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134374c push eax */
  push32((uint32_t)(EAX));
  /* 1134374d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11343750 push ecx */
  push32((uint32_t)(ECX));
  /* 11343751 call 0x11343760 */
  push32(0x11343756u); f_11343760();
  /* 11343756 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343759 pop ebp */
  EBP = (pop32());
  /* 1134375a ret  */
  ESPCHK(0x11343740u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11343760 (96 bytes, 37 insns) */
void f_11343760(void) {
  FTRACE(0x11343760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11343760 push ebp */
  push32((uint32_t)(EBP));
  /* 11343761 mov ebp, esp */
  EBP = (ESP);
  /* 11343763 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11343766 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11343769 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134376d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11343770 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11343773 push ecx */
  push32((uint32_t)(ECX));
  /* 11343774 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11343777 push edx */
  push32((uint32_t)(EDX));
  /* 11343778 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134377b push eax */
  push32((uint32_t)(EAX));
  /* 1134377c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134377f push ecx */
  push32((uint32_t)(ECX));
  /* 11343780 call 0x11343350 */
  push32(0x11343785u); f_11343350();
  /* 11343785 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343788 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1134378b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134378f je 0x113437b9 */
  if (C.zf) goto L_113437b9;
  /* 11343791 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11343794 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11343797 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134379a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134379d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113437a0:;
  /* 113437a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113437a3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113437a6 jae 0x113437b9 */
  if (!C.cf) goto L_113437b9;
  /* 113437a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113437ab mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 113437ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113437b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113437b4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113437b7 jmp 0x113437a0 */
  goto L_113437a0;
L_113437b9:;
  /* 113437b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113437bc mov esp, ebp */
  ESP = (EBP);
  /* 113437be pop ebp */
  EBP = (pop32());
  /* 113437bf ret  */
  ESPCHK(0x11343760u, _esp0);
  ESP += 4; return;
}

/* FUN_100037c0 @ 0x113437c0 (27 bytes, 13 insns) */
void f_113437c0(void) {
  FTRACE(0x113437c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113437c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113437c1 mov ebp, esp */
  EBP = (ESP);
  /* 113437c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113437c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113437c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 113437c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113437cc push eax */
  push32((uint32_t)(EAX));
  /* 113437cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113437d0 push ecx */
  push32((uint32_t)(ECX));
  /* 113437d1 call 0x113437e0 */
  push32(0x113437d6u); f_113437e0();
  /* 113437d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113437d9 pop ebp */
  EBP = (pop32());
  /* 113437da ret  */
  ESPCHK(0x113437c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100037e0 @ 0x113437e0 (64 bytes, 27 insns) */
void f_113437e0(void) {
  FTRACE(0x113437e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113437e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113437e1 mov ebp, esp */
  EBP = (ESP);
  /* 113437e3 push ecx */
  push32((uint32_t)(ECX));
  /* 113437e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 113437e6 call 0x11346d50 */
  push32(0x113437ebu); f_11346d50();
  /* 113437eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113437ee push 1 */
  push32((uint32_t)(0x1u));
  /* 113437f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113437f3 push eax */
  push32((uint32_t)(EAX));
  /* 113437f4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113437f7 push ecx */
  push32((uint32_t)(ECX));
  /* 113437f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113437fb push edx */
  push32((uint32_t)(EDX));
  /* 113437fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113437ff push eax */
  push32((uint32_t)(EAX));
  /* 11343800 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11343803 push ecx */
  push32((uint32_t)(ECX));
  /* 11343804 call 0x11343820 */
  push32(0x11343809u); f_11343820();
  /* 11343809 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134380c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134380f push 9 */
  push32((uint32_t)(0x9u));
  /* 11343811 call 0x11346df0 */
  push32(0x11343816u); f_11346df0();
  /* 11343816 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343819 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134381c mov esp, ebp */
  ESP = (EBP);
  /* 1134381e pop ebp */
  EBP = (pop32());
  /* 1134381f ret  */
  ESPCHK(0x113437e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003820 @ 0x11343820 (1297 bytes, 431 insns) */
void f_11343820(void) {
  FTRACE(0x11343820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11343820 push ebp */
  push32((uint32_t)(EBP));
  /* 11343821 mov ebp, esp */
  EBP = (ESP);
  /* 11343823 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11343826 push ebx */
  push32((uint32_t)(EBX));
  /* 11343827 push esi */
  push32((uint32_t)(ESI));
  /* 11343828 push edi */
  push32((uint32_t)(EDI));
  /* 11343829 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11343830 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343834 jne 0x11343853 */
  if (!C.zf) goto L_11343853;
  /* 11343836 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11343839 push eax */
  push32((uint32_t)(EAX));
  /* 1134383a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134383d push ecx */
  push32((uint32_t)(ECX));
  /* 1134383e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11343841 push edx */
  push32((uint32_t)(EDX));
  /* 11343842 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11343845 push eax */
  push32((uint32_t)(EAX));
  /* 11343846 call 0x11343350 */
  push32(0x1134384bu); f_11343350();
  /* 1134384b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134384e jmp 0x11343d2a */
  goto L_11343d2a;
L_11343853:;
  /* 11343853 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343857 je 0x11343876 */
  if (C.zf) goto L_11343876;
  /* 11343859 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134385d jne 0x11343876 */
  if (!C.zf) goto L_11343876;
  /* 1134385f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11343862 push ecx */
  push32((uint32_t)(ECX));
  /* 11343863 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11343866 push edx */
  push32((uint32_t)(EDX));
  /* 11343867 call 0x11343de0 */
  push32(0x1134386cu); f_11343de0();
  /* 1134386c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134386f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11343871 jmp 0x11343d2a */
  goto L_11343d2a;
L_11343876:;
  /* 11343876 mov eax, dword ptr [0x1136da84] */
  EAX = (r32((uint32_t)(0x1136da84)));
  /* 1134387b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1134387e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11343880 je 0x113438b2 */
  if (C.zf) goto L_113438b2;
L_11343882:;
  /* 11343882 call 0x113444f0 */
  push32(0x11343887u); f_113444f0();
  /* 11343887 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11343889 jne 0x113438ac */
  if (!C.zf) goto L_113438ac;
  /* 1134388b push 0x1136a500 */
  push32((uint32_t)(0x1136a500u));
  /* 11343890 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343892 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11343897 push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 1134389c push 2 */
  push32((uint32_t)(0x2u));
  /* 1134389e call 0x11342410 */
  push32(0x113438a3u); f_11342410();
  /* 113438a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113438a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113438a9 jne 0x113438ac */
  if (!C.zf) goto L_113438ac;
  /* 113438ab int3  */
  x86_unimpl("int3 @ 0x113438ab");
L_113438ac:;
  /* 113438ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113438ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113438b0 jne 0x11343882 */
  if (!C.zf) goto L_11343882;
L_113438b2:;
  /* 113438b2 mov edx, dword ptr [0x1136da88] */
  EDX = (r32((uint32_t)(0x1136da88)));
  /* 113438b8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 113438bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113438be cmp eax, dword ptr [0x1136da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1136da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113438c4 jne 0x113438c7 */
  if (!C.zf) goto L_113438c7;
  /* 113438c6 int3  */
  x86_unimpl("int3 @ 0x113438c6");
L_113438c7:;
  /* 113438c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113438ca push ecx */
  push32((uint32_t)(ECX));
  /* 113438cb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113438ce push edx */
  push32((uint32_t)(EDX));
  /* 113438cf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113438d2 push eax */
  push32((uint32_t)(EAX));
  /* 113438d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113438d6 push ecx */
  push32((uint32_t)(ECX));
  /* 113438d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113438da push edx */
  push32((uint32_t)(EDX));
  /* 113438db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113438de push eax */
  push32((uint32_t)(EAX));
  /* 113438df push 2 */
  push32((uint32_t)(0x2u));
  /* 113438e1 call dword ptr [0x1136dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136dc90))), 0x113438e7u);
  /* 113438e7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113438ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113438ec jne 0x1134394c */
  if (!C.zf) goto L_1134394c;
  /* 113438ee cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113438f2 je 0x1134391f */
  if (C.zf) goto L_1134391f;
L_113438f4:;
  /* 113438f4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113438f7 push ecx */
  push32((uint32_t)(ECX));
  /* 113438f8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113438fb push edx */
  push32((uint32_t)(EDX));
  /* 113438fc push 0x1136a67c */
  push32((uint32_t)(0x1136a67cu));
  /* 11343901 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343903 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343905 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343907 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343909 call 0x11342410 */
  push32(0x1134390eu); f_11342410();
  /* 1134390e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343911 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343914 jne 0x11343917 */
  if (!C.zf) goto L_11343917;
  /* 11343916 int3  */
  x86_unimpl("int3 @ 0x11343916");
L_11343917:;
  /* 11343917 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11343919 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134391b jne 0x113438f4 */
  if (!C.zf) goto L_113438f4;
  /* 1134391d jmp 0x11343945 */
  goto L_11343945;
L_1134391f:;
  /* 1134391f push 0x1136a658 */
  push32((uint32_t)(0x1136a658u));
  /* 11343924 push 0x1136a494 */
  push32((uint32_t)(0x1136a494u));
  /* 11343929 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134392b push 0 */
  push32((uint32_t)(0x0u));
  /* 1134392d push 0 */
  push32((uint32_t)(0x0u));
  /* 1134392f push 0 */
  push32((uint32_t)(0x0u));
  /* 11343931 call 0x11342410 */
  push32(0x11343936u); f_11342410();
  /* 11343936 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343939 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134393c jne 0x1134393f */
  if (!C.zf) goto L_1134393f;
  /* 1134393e int3  */
  x86_unimpl("int3 @ 0x1134393e");
L_1134393f:;
  /* 1134393f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11343941 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11343943 jne 0x1134391f */
  if (!C.zf) goto L_1134391f;
L_11343945:;
  /* 11343945 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11343947 jmp 0x11343d2a */
  goto L_11343d2a;
L_1134394c:;
  /* 1134394c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343950 jbe 0x1134397e */
  if ((C.cf||C.zf)) goto L_1134397e;
L_11343952:;
  /* 11343952 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11343955 push edx */
  push32((uint32_t)(EDX));
  /* 11343956 push 0x1136a628 */
  push32((uint32_t)(0x1136a628u));
  /* 1134395b push 0 */
  push32((uint32_t)(0x0u));
  /* 1134395d push 0 */
  push32((uint32_t)(0x0u));
  /* 1134395f push 0 */
  push32((uint32_t)(0x0u));
  /* 11343961 push 1 */
  push32((uint32_t)(0x1u));
  /* 11343963 call 0x11342410 */
  push32(0x11343968u); f_11342410();
  /* 11343968 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134396b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134396e jne 0x11343971 */
  if (!C.zf) goto L_11343971;
  /* 11343970 int3  */
  x86_unimpl("int3 @ 0x11343970");
L_11343971:;
  /* 11343971 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11343973 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11343975 jne 0x11343952 */
  if (!C.zf) goto L_11343952;
  /* 11343977 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11343979 jmp 0x11343d2a */
  goto L_11343d2a;
L_1134397e:;
  /* 1134397e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343982 je 0x113439c6 */
  if (C.zf) goto L_113439c6;
  /* 11343984 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11343987 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1134398d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343990 je 0x113439c6 */
  if (C.zf) goto L_113439c6;
  /* 11343992 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11343995 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1134399b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134399e je 0x113439c6 */
  if (C.zf) goto L_113439c6;
L_113439a0:;
  /* 113439a0 push 0x1136a43c */
  push32((uint32_t)(0x1136a43cu));
  /* 113439a5 push 0x1136a494 */
  push32((uint32_t)(0x1136a494u));
  /* 113439aa push 0 */
  push32((uint32_t)(0x0u));
  /* 113439ac push 0 */
  push32((uint32_t)(0x0u));
  /* 113439ae push 0 */
  push32((uint32_t)(0x0u));
  /* 113439b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 113439b2 call 0x11342410 */
  push32(0x113439b7u); f_11342410();
  /* 113439b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113439ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113439bd jne 0x113439c0 */
  if (!C.zf) goto L_113439c0;
  /* 113439bf int3  */
  x86_unimpl("int3 @ 0x113439bf");
L_113439c0:;
  /* 113439c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113439c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113439c4 jne 0x113439a0 */
  if (!C.zf) goto L_113439a0;
L_113439c6:;
  /* 113439c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113439c9 push ecx */
  push32((uint32_t)(ECX));
  /* 113439ca call 0x11344950 */
  push32(0x113439cfu); f_11344950();
  /* 113439cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113439d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113439d4 jne 0x113439f7 */
  if (!C.zf) goto L_113439f7;
  /* 113439d6 push 0x1136a604 */
  push32((uint32_t)(0x1136a604u));
  /* 113439db push 0 */
  push32((uint32_t)(0x0u));
  /* 113439dd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 113439e2 push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 113439e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113439e9 call 0x11342410 */
  push32(0x113439eeu); f_11342410();
  /* 113439ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113439f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113439f4 jne 0x113439f7 */
  if (!C.zf) goto L_113439f7;
  /* 113439f6 int3  */
  x86_unimpl("int3 @ 0x113439f6");
L_113439f7:;
  /* 113439f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113439f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113439fb jne 0x113439c6 */
  if (!C.zf) goto L_113439c6;
  /* 113439fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11343a00 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11343a03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11343a06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11343a09 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343a0d jne 0x11343a16 */
  if (!C.zf) goto L_11343a16;
  /* 11343a0f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11343a16:;
  /* 11343a16 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343a1a je 0x11343a5a */
  if (C.zf) goto L_11343a5a;
L_11343a1c:;
  /* 11343a1c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11343a1f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343a26 jne 0x11343a31 */
  if (!C.zf) goto L_11343a31;
  /* 11343a28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11343a2b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343a2f je 0x11343a52 */
  if (C.zf) goto L_11343a52;
L_11343a31:;
  /* 11343a31 push 0x1136a5bc */
  push32((uint32_t)(0x1136a5bcu));
  /* 11343a36 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343a38 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11343a3d push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 11343a42 push 2 */
  push32((uint32_t)(0x2u));
  /* 11343a44 call 0x11342410 */
  push32(0x11343a49u); f_11342410();
  /* 11343a49 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343a4c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343a4f jne 0x11343a52 */
  if (!C.zf) goto L_11343a52;
  /* 11343a51 int3  */
  x86_unimpl("int3 @ 0x11343a51");
L_11343a52:;
  /* 11343a52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11343a54 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11343a56 jne 0x11343a1c */
  if (!C.zf) goto L_11343a1c;
  /* 11343a58 jmp 0x11343abe */
  goto L_11343abe;
L_11343a5a:;
  /* 11343a5a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11343a5d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11343a60 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11343a65 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343a68 jne 0x11343a7f */
  if (!C.zf) goto L_11343a7f;
  /* 11343a6a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11343a6d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11343a73 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343a76 jne 0x11343a7f */
  if (!C.zf) goto L_11343a7f;
  /* 11343a78 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11343a7f:;
  /* 11343a7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11343a82 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11343a85 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11343a8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11343a8d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11343a93 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343a95 je 0x11343ab8 */
  if (C.zf) goto L_11343ab8;
  /* 11343a97 push 0x1136a580 */
  push32((uint32_t)(0x1136a580u));
  /* 11343a9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11343a9e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11343aa3 push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 11343aa8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11343aaa call 0x11342410 */
  push32(0x11343aafu); f_11342410();
  /* 11343aaf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343ab2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343ab5 jne 0x11343ab8 */
  if (!C.zf) goto L_11343ab8;
  /* 11343ab7 int3  */
  x86_unimpl("int3 @ 0x11343ab7");
L_11343ab8:;
  /* 11343ab8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11343aba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11343abc jne 0x11343a7f */
  if (!C.zf) goto L_11343a7f;
L_11343abe:;
  /* 11343abe cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343ac2 je 0x11343ae9 */
  if (C.zf) goto L_11343ae9;
  /* 11343ac4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11343ac7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11343aca push eax */
  push32((uint32_t)(EAX));
  /* 11343acb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11343ace push ecx */
  push32((uint32_t)(ECX));
  /* 11343acf call 0x113472d0 */
  push32(0x11343ad4u); f_113472d0();
  /* 11343ad4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343ad7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11343ada cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343ade jne 0x11343ae7 */
  if (!C.zf) goto L_11343ae7;
  /* 11343ae0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11343ae2 jmp 0x11343d2a */
  goto L_11343d2a;
L_11343ae7:;
  /* 11343ae7 jmp 0x11343b0c */
  goto L_11343b0c;
L_11343ae9:;
  /* 11343ae9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11343aec add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11343aef push edx */
  push32((uint32_t)(EDX));
  /* 11343af0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11343af3 push eax */
  push32((uint32_t)(EAX));
  /* 11343af4 call 0x11347220 */
  push32(0x11343af9u); f_11347220();
  /* 11343af9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343afc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11343aff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343b03 jne 0x11343b0c */
  if (!C.zf) goto L_11343b0c;
  /* 11343b05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11343b07 jmp 0x11343d2a */
  goto L_11343d2a;
L_11343b0c:;
  /* 11343b0c mov ecx, dword ptr [0x1136da88] */
  ECX = (r32((uint32_t)(0x1136da88)));
  /* 11343b12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11343b15 mov dword ptr [0x1136da88], ecx */
  w32((uint32_t)(0x1136da88), (ECX));
  /* 11343b1b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343b1f jne 0x11343b77 */
  if (!C.zf) goto L_11343b77;
  /* 11343b21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343b24 mov eax, dword ptr [0x1136f4b0] */
  EAX = (r32((uint32_t)(0x1136f4b0)));
  /* 11343b29 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11343b2c mov dword ptr [0x1136f4b0], eax */
  w32((uint32_t)(0x1136f4b0), (EAX));
  /* 11343b31 mov ecx, dword ptr [0x1136f4b0] */
  ECX = (r32((uint32_t)(0x1136f4b0)));
  /* 11343b37 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11343b3a mov dword ptr [0x1136f4b0], ecx */
  w32((uint32_t)(0x1136f4b0), (ECX));
  /* 11343b40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343b43 mov eax, dword ptr [0x1136f4b8] */
  EAX = (r32((uint32_t)(0x1136f4b8)));
  /* 11343b48 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11343b4b mov dword ptr [0x1136f4b8], eax */
  w32((uint32_t)(0x1136f4b8), (EAX));
  /* 11343b50 mov ecx, dword ptr [0x1136f4b8] */
  ECX = (r32((uint32_t)(0x1136f4b8)));
  /* 11343b56 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11343b59 mov dword ptr [0x1136f4b8], ecx */
  w32((uint32_t)(0x1136f4b8), (ECX));
  /* 11343b5f mov edx, dword ptr [0x1136f4b8] */
  EDX = (r32((uint32_t)(0x1136f4b8)));
  /* 11343b65 cmp edx, dword ptr [0x1136f4bc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1136f4bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343b6b jbe 0x11343b77 */
  if ((C.cf||C.zf)) goto L_11343b77;
  /* 11343b6d mov eax, dword ptr [0x1136f4b8] */
  EAX = (r32((uint32_t)(0x1136f4b8)));
  /* 11343b72 mov dword ptr [0x1136f4bc], eax */
  w32((uint32_t)(0x1136f4bc), (EAX));
L_11343b77:;
  /* 11343b77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343b7a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11343b7d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11343b80 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343b83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11343b86 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343b89 jbe 0x11343baf */
  if ((C.cf||C.zf)) goto L_11343baf;
  /* 11343b8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343b8e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11343b91 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11343b94 push edx */
  push32((uint32_t)(EDX));
  /* 11343b95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11343b97 mov al, byte ptr [0x1136da92] */
  AL = (r8((uint32_t)(0x1136da92)));
  /* 11343b9c push eax */
  push32((uint32_t)(EAX));
  /* 11343b9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343ba0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343ba3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11343ba6 push edx */
  push32((uint32_t)(EDX));
  /* 11343ba7 call 0x113470c0 */
  push32(0x11343bacu); f_113470c0();
  /* 11343bac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11343baf:;
  /* 11343baf push 4 */
  push32((uint32_t)(0x4u));
  /* 11343bb1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11343bb3 mov al, byte ptr [0x1136da90] */
  AL = (r8((uint32_t)(0x1136da90)));
  /* 11343bb8 push eax */
  push32((uint32_t)(EAX));
  /* 11343bb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343bbc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11343bbf push ecx */
  push32((uint32_t)(ECX));
  /* 11343bc0 call 0x113470c0 */
  push32(0x11343bc5u); f_113470c0();
  /* 11343bc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343bc8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343bcc jne 0x11343be9 */
  if (!C.zf) goto L_11343be9;
  /* 11343bce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343bd1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11343bd4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11343bd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343bda mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11343bdd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11343be0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343be3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11343be6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11343be9:;
  /* 11343be9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343bec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11343bef mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11343bf2:;
  /* 11343bf2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343bf6 jne 0x11343c27 */
  if (!C.zf) goto L_11343c27;
  /* 11343bf8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343bfc jne 0x11343c06 */
  if (!C.zf) goto L_11343c06;
  /* 11343bfe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343c01 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343c04 je 0x11343c27 */
  if (C.zf) goto L_11343c27;
L_11343c06:;
  /* 11343c06 push 0x1136a54c */
  push32((uint32_t)(0x1136a54cu));
  /* 11343c0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11343c0d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11343c12 push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 11343c17 push 2 */
  push32((uint32_t)(0x2u));
  /* 11343c19 call 0x11342410 */
  push32(0x11343c1eu); f_11342410();
  /* 11343c1e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343c21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343c24 jne 0x11343c27 */
  if (!C.zf) goto L_11343c27;
  /* 11343c26 int3  */
  x86_unimpl("int3 @ 0x11343c26");
L_11343c27:;
  /* 11343c27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11343c29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11343c2b jne 0x11343bf2 */
  if (!C.zf) goto L_11343bf2;
  /* 11343c2d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343c30 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343c33 je 0x11343c3b */
  if (C.zf) goto L_11343c3b;
  /* 11343c35 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343c39 je 0x11343c43 */
  if (C.zf) goto L_11343c43;
L_11343c3b:;
  /* 11343c3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343c3e jmp 0x11343d2a */
  goto L_11343d2a;
L_11343c43:;
  /* 11343c43 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343c46 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343c49 je 0x11343c5b */
  if (C.zf) goto L_11343c5b;
  /* 11343c4b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343c4e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11343c50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343c53 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11343c56 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11343c59 jmp 0x11343c97 */
  goto L_11343c97;
L_11343c5b:;
  /* 11343c5b mov eax, dword ptr [0x1136f4ac] */
  EAX = (r32((uint32_t)(0x1136f4ac)));
  /* 11343c60 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343c63 je 0x11343c86 */
  if (C.zf) goto L_11343c86;
  /* 11343c65 push 0x1136a530 */
  push32((uint32_t)(0x1136a530u));
  /* 11343c6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11343c6c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11343c71 push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 11343c76 push 2 */
  push32((uint32_t)(0x2u));
  /* 11343c78 call 0x11342410 */
  push32(0x11343c7du); f_11342410();
  /* 11343c7d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343c80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343c83 jne 0x11343c86 */
  if (!C.zf) goto L_11343c86;
  /* 11343c85 int3  */
  x86_unimpl("int3 @ 0x11343c85");
L_11343c86:;
  /* 11343c86 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11343c88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11343c8a jne 0x11343c5b */
  if (!C.zf) goto L_11343c5b;
  /* 11343c8c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343c8f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11343c92 mov dword ptr [0x1136f4ac], eax */
  w32((uint32_t)(0x1136f4ac), (EAX));
L_11343c97:;
  /* 11343c97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343c9a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343c9e je 0x11343caf */
  if (C.zf) goto L_11343caf;
  /* 11343ca0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343ca3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11343ca6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343ca9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11343cab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11343cad jmp 0x11343cea */
  goto L_11343cea;
L_11343caf:;
  /* 11343caf mov eax, dword ptr [0x1136f4b4] */
  EAX = (r32((uint32_t)(0x1136f4b4)));
  /* 11343cb4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343cb7 je 0x11343cda */
  if (C.zf) goto L_11343cda;
  /* 11343cb9 push 0x1136a514 */
  push32((uint32_t)(0x1136a514u));
  /* 11343cbe push 0 */
  push32((uint32_t)(0x0u));
  /* 11343cc0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11343cc5 push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 11343cca push 2 */
  push32((uint32_t)(0x2u));
  /* 11343ccc call 0x11342410 */
  push32(0x11343cd1u); f_11342410();
  /* 11343cd1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343cd4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343cd7 jne 0x11343cda */
  if (!C.zf) goto L_11343cda;
  /* 11343cd9 int3  */
  x86_unimpl("int3 @ 0x11343cd9");
L_11343cda:;
  /* 11343cda xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11343cdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11343cde jne 0x11343caf */
  if (!C.zf) goto L_11343caf;
  /* 11343ce0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343ce3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11343ce5 mov dword ptr [0x1136f4b4], eax */
  w32((uint32_t)(0x1136f4b4), (EAX));
L_11343cea:;
  /* 11343cea cmp dword ptr [0x1136f4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343cf1 je 0x11343d01 */
  if (C.zf) goto L_11343d01;
  /* 11343cf3 mov ecx, dword ptr [0x1136f4b4] */
  ECX = (r32((uint32_t)(0x1136f4b4)));
  /* 11343cf9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343cfc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11343cff jmp 0x11343d09 */
  goto L_11343d09;
L_11343d01:;
  /* 11343d01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343d04 mov dword ptr [0x1136f4ac], eax */
  w32((uint32_t)(0x1136f4ac), (EAX));
L_11343d09:;
  /* 11343d09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343d0c mov edx, dword ptr [0x1136f4b4] */
  EDX = (r32((uint32_t)(0x1136f4b4)));
  /* 11343d12 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11343d14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343d17 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11343d1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11343d21 mov dword ptr [0x1136f4b4], ecx */
  w32((uint32_t)(0x1136f4b4), (ECX));
  /* 11343d27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11343d2a:;
  /* 11343d2a pop edi */
  EDI = (pop32());
  /* 11343d2b pop esi */
  ESI = (pop32());
  /* 11343d2c pop ebx */
  EBX = (pop32());
  /* 11343d2d mov esp, ebp */
  ESP = (EBP);
  /* 11343d2f pop ebp */
  EBP = (pop32());
  /* 11343d30 ret  */
  ESPCHK(0x11343820u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d40 @ 0x11343d40 (27 bytes, 13 insns) */
void f_11343d40(void) {
  FTRACE(0x11343d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11343d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11343d41 mov ebp, esp */
  EBP = (ESP);
  /* 11343d43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343d45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343d47 push 1 */
  push32((uint32_t)(0x1u));
  /* 11343d49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11343d4c push eax */
  push32((uint32_t)(EAX));
  /* 11343d4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11343d50 push ecx */
  push32((uint32_t)(ECX));
  /* 11343d51 call 0x11343d60 */
  push32(0x11343d56u); f_11343d60();
  /* 11343d56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343d59 pop ebp */
  EBP = (pop32());
  /* 11343d5a ret  */
  ESPCHK(0x11343d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d60 @ 0x11343d60 (64 bytes, 27 insns) */
void f_11343d60(void) {
  FTRACE(0x11343d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11343d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11343d61 mov ebp, esp */
  EBP = (ESP);
  /* 11343d63 push ecx */
  push32((uint32_t)(ECX));
  /* 11343d64 push 9 */
  push32((uint32_t)(0x9u));
  /* 11343d66 call 0x11346d50 */
  push32(0x11343d6bu); f_11346d50();
  /* 11343d6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343d6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11343d70 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11343d73 push eax */
  push32((uint32_t)(EAX));
  /* 11343d74 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11343d77 push ecx */
  push32((uint32_t)(ECX));
  /* 11343d78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11343d7b push edx */
  push32((uint32_t)(EDX));
  /* 11343d7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11343d7f push eax */
  push32((uint32_t)(EAX));
  /* 11343d80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11343d83 push ecx */
  push32((uint32_t)(ECX));
  /* 11343d84 call 0x11343820 */
  push32(0x11343d89u); f_11343820();
  /* 11343d89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343d8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11343d8f push 9 */
  push32((uint32_t)(0x9u));
  /* 11343d91 call 0x11346df0 */
  push32(0x11343d96u); f_11346df0();
  /* 11343d96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343d99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343d9c mov esp, ebp */
  ESP = (EBP);
  /* 11343d9e pop ebp */
  EBP = (pop32());
  /* 11343d9f ret  */
  ESPCHK(0x11343d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003da0 @ 0x11343da0 (19 bytes, 9 insns) */
void f_11343da0(void) {
  FTRACE(0x11343da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11343da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11343da1 mov ebp, esp */
  EBP = (ESP);
  /* 11343da3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11343da5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11343da8 push eax */
  push32((uint32_t)(EAX));
  /* 11343da9 call 0x11343de0 */
  push32(0x11343daeu); f_11343de0();
  /* 11343dae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343db1 pop ebp */
  EBP = (pop32());
  /* 11343db2 ret  */
  ESPCHK(0x11343da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dc0 @ 0x11343dc0 (19 bytes, 9 insns) */
void f_11343dc0(void) {
  FTRACE(0x11343dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11343dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11343dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11343dc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11343dc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11343dc8 push eax */
  push32((uint32_t)(EAX));
  /* 11343dc9 call 0x11343e10 */
  push32(0x11343dceu); f_11343e10();
  /* 11343dce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343dd1 pop ebp */
  EBP = (pop32());
  /* 11343dd2 ret  */
  ESPCHK(0x11343dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003de0 @ 0x11343de0 (41 bytes, 16 insns) */
void f_11343de0(void) {
  FTRACE(0x11343de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11343de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11343de1 mov ebp, esp */
  EBP = (ESP);
  /* 11343de3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11343de5 call 0x11346d50 */
  push32(0x11343deau); f_11346d50();
  /* 11343dea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343ded mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11343df0 push eax */
  push32((uint32_t)(EAX));
  /* 11343df1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11343df4 push ecx */
  push32((uint32_t)(ECX));
  /* 11343df5 call 0x11343e10 */
  push32(0x11343dfau); f_11343e10();
  /* 11343dfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343dfd push 9 */
  push32((uint32_t)(0x9u));
  /* 11343dff call 0x11346df0 */
  push32(0x11343e04u); f_11346df0();
  /* 11343e04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343e07 pop ebp */
  EBP = (pop32());
  /* 11343e08 ret  */
  ESPCHK(0x11343de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e10 @ 0x11343e10 (1004 bytes, 342 insns) */
void f_11343e10(void) {
  FTRACE(0x11343e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11343e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11343e11 mov ebp, esp */
  EBP = (ESP);
  /* 11343e13 push ecx */
  push32((uint32_t)(ECX));
  /* 11343e14 push ebx */
  push32((uint32_t)(EBX));
  /* 11343e15 push esi */
  push32((uint32_t)(ESI));
  /* 11343e16 push edi */
  push32((uint32_t)(EDI));
  /* 11343e17 mov eax, dword ptr [0x1136da84] */
  EAX = (r32((uint32_t)(0x1136da84)));
  /* 11343e1c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11343e1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11343e21 je 0x11343e53 */
  if (C.zf) goto L_11343e53;
L_11343e23:;
  /* 11343e23 call 0x113444f0 */
  push32(0x11343e28u); f_113444f0();
  /* 11343e28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11343e2a jne 0x11343e4d */
  if (!C.zf) goto L_11343e4d;
  /* 11343e2c push 0x1136a500 */
  push32((uint32_t)(0x1136a500u));
  /* 11343e31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343e33 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11343e38 push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 11343e3d push 2 */
  push32((uint32_t)(0x2u));
  /* 11343e3f call 0x11342410 */
  push32(0x11343e44u); f_11342410();
  /* 11343e44 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343e47 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343e4a jne 0x11343e4d */
  if (!C.zf) goto L_11343e4d;
  /* 11343e4c int3  */
  x86_unimpl("int3 @ 0x11343e4c");
L_11343e4d:;
  /* 11343e4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11343e4f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11343e51 jne 0x11343e23 */
  if (!C.zf) goto L_11343e23;
L_11343e53:;
  /* 11343e53 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343e57 jne 0x11343e5e */
  if (!C.zf) goto L_11343e5e;
  /* 11343e59 jmp 0x113441f5 */
  goto L_113441f5;
L_11343e5e:;
  /* 11343e5e push 0 */
  push32((uint32_t)(0x0u));
  /* 11343e60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343e62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343e64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11343e67 push edx */
  push32((uint32_t)(EDX));
  /* 11343e68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343e6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11343e6d push eax */
  push32((uint32_t)(EAX));
  /* 11343e6e push 3 */
  push32((uint32_t)(0x3u));
  /* 11343e70 call dword ptr [0x1136dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136dc90))), 0x11343e76u);
  /* 11343e76 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343e79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11343e7b jne 0x11343ea8 */
  if (!C.zf) goto L_11343ea8;
L_11343e7d:;
  /* 11343e7d push 0x1136a7c4 */
  push32((uint32_t)(0x1136a7c4u));
  /* 11343e82 push 0x1136a494 */
  push32((uint32_t)(0x1136a494u));
  /* 11343e87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343e89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343e8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11343e8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11343e8f call 0x11342410 */
  push32(0x11343e94u); f_11342410();
  /* 11343e94 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343e97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343e9a jne 0x11343e9d */
  if (!C.zf) goto L_11343e9d;
  /* 11343e9c int3  */
  x86_unimpl("int3 @ 0x11343e9c");
L_11343e9d:;
  /* 11343e9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11343e9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11343ea1 jne 0x11343e7d */
  if (!C.zf) goto L_11343e7d;
  /* 11343ea3 jmp 0x113441f5 */
  goto L_113441f5;
L_11343ea8:;
  /* 11343ea8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11343eab push edx */
  push32((uint32_t)(EDX));
  /* 11343eac call 0x11344950 */
  push32(0x11343eb1u); f_11344950();
  /* 11343eb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343eb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11343eb6 jne 0x11343ed9 */
  if (!C.zf) goto L_11343ed9;
  /* 11343eb8 push 0x1136a604 */
  push32((uint32_t)(0x1136a604u));
  /* 11343ebd push 0 */
  push32((uint32_t)(0x0u));
  /* 11343ebf push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11343ec4 push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 11343ec9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11343ecb call 0x11342410 */
  push32(0x11343ed0u); f_11342410();
  /* 11343ed0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343ed3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343ed6 jne 0x11343ed9 */
  if (!C.zf) goto L_11343ed9;
  /* 11343ed8 int3  */
  x86_unimpl("int3 @ 0x11343ed8");
L_11343ed9:;
  /* 11343ed9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11343edb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11343edd jne 0x11343ea8 */
  if (!C.zf) goto L_11343ea8;
  /* 11343edf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11343ee2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11343ee5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11343ee8:;
  /* 11343ee8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343eeb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11343eee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11343ef3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343ef6 je 0x11343f3b */
  if (C.zf) goto L_11343f3b;
  /* 11343ef8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343efb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343eff je 0x11343f3b */
  if (C.zf) goto L_11343f3b;
  /* 11343f01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343f04 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11343f07 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11343f0c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343f0f je 0x11343f3b */
  if (C.zf) goto L_11343f3b;
  /* 11343f11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343f14 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343f18 je 0x11343f3b */
  if (C.zf) goto L_11343f3b;
  /* 11343f1a push 0x1136a79c */
  push32((uint32_t)(0x1136a79cu));
  /* 11343f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11343f21 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11343f26 push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 11343f2b push 2 */
  push32((uint32_t)(0x2u));
  /* 11343f2d call 0x11342410 */
  push32(0x11343f32u); f_11342410();
  /* 11343f32 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343f35 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343f38 jne 0x11343f3b */
  if (!C.zf) goto L_11343f3b;
  /* 11343f3a int3  */
  x86_unimpl("int3 @ 0x11343f3a");
L_11343f3b:;
  /* 11343f3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11343f3d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11343f3f jne 0x11343ee8 */
  if (!C.zf) goto L_11343ee8;
  /* 11343f41 mov eax, dword ptr [0x1136da84] */
  EAX = (r32((uint32_t)(0x1136da84)));
  /* 11343f46 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11343f49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11343f4b jne 0x11344016 */
  if (!C.zf) goto L_11344016;
  /* 11343f51 push 4 */
  push32((uint32_t)(0x4u));
  /* 11343f53 mov cl, byte ptr [0x1136da90] */
  CL = (r8((uint32_t)(0x1136da90)));
  /* 11343f59 push ecx */
  push32((uint32_t)(ECX));
  /* 11343f5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343f5d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11343f60 push edx */
  push32((uint32_t)(EDX));
  /* 11343f61 call 0x11344460 */
  push32(0x11343f66u); f_11344460();
  /* 11343f66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343f69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11343f6b jne 0x11343fb0 */
  if (!C.zf) goto L_11343fb0;
L_11343f6d:;
  /* 11343f6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343f70 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11343f73 push eax */
  push32((uint32_t)(EAX));
  /* 11343f74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343f77 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11343f7a push edx */
  push32((uint32_t)(EDX));
  /* 11343f7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343f7e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11343f81 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11343f87 mov edx, dword ptr [ecx*4 + 0x1136da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1136da94)));
  /* 11343f8e push edx */
  push32((uint32_t)(EDX));
  /* 11343f8f push 0x1136a770 */
  push32((uint32_t)(0x1136a770u));
  /* 11343f94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343f96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343f98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11343f9a push 1 */
  push32((uint32_t)(0x1u));
  /* 11343f9c call 0x11342410 */
  push32(0x11343fa1u); f_11342410();
  /* 11343fa1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343fa4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11343fa7 jne 0x11343faa */
  if (!C.zf) goto L_11343faa;
  /* 11343fa9 int3  */
  x86_unimpl("int3 @ 0x11343fa9");
L_11343faa:;
  /* 11343faa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11343fac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11343fae jne 0x11343f6d */
  if (!C.zf) goto L_11343f6d;
L_11343fb0:;
  /* 11343fb0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11343fb2 mov cl, byte ptr [0x1136da90] */
  CL = (r8((uint32_t)(0x1136da90)));
  /* 11343fb8 push ecx */
  push32((uint32_t)(ECX));
  /* 11343fb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343fbc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11343fbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343fc2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11343fc6 push edx */
  push32((uint32_t)(EDX));
  /* 11343fc7 call 0x11344460 */
  push32(0x11343fccu); f_11344460();
  /* 11343fcc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11343fcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11343fd1 jne 0x11344016 */
  if (!C.zf) goto L_11344016;
L_11343fd3:;
  /* 11343fd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343fd6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11343fd9 push eax */
  push32((uint32_t)(EAX));
  /* 11343fda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343fdd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11343fe0 push edx */
  push32((uint32_t)(EDX));
  /* 11343fe1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11343fe4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11343fe7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11343fed mov edx, dword ptr [ecx*4 + 0x1136da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1136da94)));
  /* 11343ff4 push edx */
  push32((uint32_t)(EDX));
  /* 11343ff5 push 0x1136a744 */
  push32((uint32_t)(0x1136a744u));
  /* 11343ffa push 0 */
  push32((uint32_t)(0x0u));
  /* 11343ffc push 0 */
  push32((uint32_t)(0x0u));
  /* 11343ffe push 0 */
  push32((uint32_t)(0x0u));
  /* 11344000 push 1 */
  push32((uint32_t)(0x1u));
  /* 11344002 call 0x11342410 */
  push32(0x11344007u); f_11342410();
  /* 11344007 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134400a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134400d jne 0x11344010 */
  if (!C.zf) goto L_11344010;
  /* 1134400f int3  */
  x86_unimpl("int3 @ 0x1134400f");
L_11344010:;
  /* 11344010 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11344012 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11344014 jne 0x11343fd3 */
  if (!C.zf) goto L_11343fd3;
L_11344016:;
  /* 11344016 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344019 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134401d jne 0x1134408b */
  if (!C.zf) goto L_1134408b;
L_1134401f:;
  /* 1134401f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344022 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344029 jne 0x11344034 */
  if (!C.zf) goto L_11344034;
  /* 1134402b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134402e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344032 je 0x11344055 */
  if (C.zf) goto L_11344055;
L_11344034:;
  /* 11344034 push 0x1136a704 */
  push32((uint32_t)(0x1136a704u));
  /* 11344039 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134403b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11344040 push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 11344045 push 2 */
  push32((uint32_t)(0x2u));
  /* 11344047 call 0x11342410 */
  push32(0x1134404cu); f_11342410();
  /* 1134404c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134404f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344052 jne 0x11344055 */
  if (!C.zf) goto L_11344055;
  /* 11344054 int3  */
  x86_unimpl("int3 @ 0x11344054");
L_11344055:;
  /* 11344055 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11344057 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11344059 jne 0x1134401f */
  if (!C.zf) goto L_1134401f;
  /* 1134405b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134405e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11344061 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11344064 push eax */
  push32((uint32_t)(EAX));
  /* 11344065 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11344067 mov cl, byte ptr [0x1136da91] */
  CL = (r8((uint32_t)(0x1136da91)));
  /* 1134406d push ecx */
  push32((uint32_t)(ECX));
  /* 1134406e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344071 push edx */
  push32((uint32_t)(EDX));
  /* 11344072 call 0x113470c0 */
  push32(0x11344077u); f_113470c0();
  /* 11344077 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134407a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134407d push eax */
  push32((uint32_t)(EAX));
  /* 1134407e call 0x113474c0 */
  push32(0x11344083u); f_113474c0();
  /* 11344083 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344086 jmp 0x113441f5 */
  goto L_113441f5;
L_1134408b:;
  /* 1134408b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134408e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344092 jne 0x113440a1 */
  if (!C.zf) goto L_113440a1;
  /* 11344094 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344098 jne 0x113440a1 */
  if (!C.zf) goto L_113440a1;
  /* 1134409a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_113440a1:;
  /* 113440a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113440a4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113440a7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113440aa je 0x113440cd */
  if (C.zf) goto L_113440cd;
  /* 113440ac push 0x1136a6e4 */
  push32((uint32_t)(0x1136a6e4u));
  /* 113440b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113440b3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 113440b8 push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 113440bd push 2 */
  push32((uint32_t)(0x2u));
  /* 113440bf call 0x11342410 */
  push32(0x113440c4u); f_11342410();
  /* 113440c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113440c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113440ca jne 0x113440cd */
  if (!C.zf) goto L_113440cd;
  /* 113440cc int3  */
  x86_unimpl("int3 @ 0x113440cc");
L_113440cd:;
  /* 113440cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113440cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113440d1 jne 0x113440a1 */
  if (!C.zf) goto L_113440a1;
  /* 113440d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113440d6 mov eax, dword ptr [0x1136f4b8] */
  EAX = (r32((uint32_t)(0x1136f4b8)));
  /* 113440db sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113440de mov dword ptr [0x1136f4b8], eax */
  w32((uint32_t)(0x1136f4b8), (EAX));
  /* 113440e3 mov ecx, dword ptr [0x1136da84] */
  ECX = (r32((uint32_t)(0x1136da84)));
  /* 113440e9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 113440ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113440ee jne 0x113441cc */
  if (!C.zf) goto L_113441cc;
  /* 113440f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113440f7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113440fa je 0x1134410c */
  if (C.zf) goto L_1134410c;
  /* 113440fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113440ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11344101 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344104 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11344107 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1134410a jmp 0x1134414a */
  goto L_1134414a;
L_1134410c:;
  /* 1134410c mov ecx, dword ptr [0x1136f4ac] */
  ECX = (r32((uint32_t)(0x1136f4ac)));
  /* 11344112 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344115 je 0x11344138 */
  if (C.zf) goto L_11344138;
  /* 11344117 push 0x1136a6cc */
  push32((uint32_t)(0x1136a6ccu));
  /* 1134411c push 0 */
  push32((uint32_t)(0x0u));
  /* 1134411e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11344123 push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 11344128 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134412a call 0x11342410 */
  push32(0x1134412fu); f_11342410();
  /* 1134412f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344132 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344135 jne 0x11344138 */
  if (!C.zf) goto L_11344138;
  /* 11344137 int3  */
  x86_unimpl("int3 @ 0x11344137");
L_11344138:;
  /* 11344138 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1134413a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134413c jne 0x1134410c */
  if (!C.zf) goto L_1134410c;
  /* 1134413e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344141 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11344144 mov dword ptr [0x1136f4ac], ecx */
  w32((uint32_t)(0x1136f4ac), (ECX));
L_1134414a:;
  /* 1134414a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134414d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344151 je 0x11344162 */
  if (C.zf) goto L_11344162;
  /* 11344153 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344156 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11344159 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134415c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1134415e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11344160 jmp 0x1134419f */
  goto L_1134419f;
L_11344162:;
  /* 11344162 mov ecx, dword ptr [0x1136f4b4] */
  ECX = (r32((uint32_t)(0x1136f4b4)));
  /* 11344168 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134416b je 0x1134418e */
  if (C.zf) goto L_1134418e;
  /* 1134416d push 0x1136a6b4 */
  push32((uint32_t)(0x1136a6b4u));
  /* 11344172 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344174 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11344179 push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 1134417e push 2 */
  push32((uint32_t)(0x2u));
  /* 11344180 call 0x11342410 */
  push32(0x11344185u); f_11342410();
  /* 11344185 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344188 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134418b jne 0x1134418e */
  if (!C.zf) goto L_1134418e;
  /* 1134418d int3  */
  x86_unimpl("int3 @ 0x1134418d");
L_1134418e:;
  /* 1134418e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11344190 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11344192 jne 0x11344162 */
  if (!C.zf) goto L_11344162;
  /* 11344194 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344197 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11344199 mov dword ptr [0x1136f4b4], ecx */
  w32((uint32_t)(0x1136f4b4), (ECX));
L_1134419f:;
  /* 1134419f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113441a2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113441a5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113441a8 push eax */
  push32((uint32_t)(EAX));
  /* 113441a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113441ab mov cl, byte ptr [0x1136da91] */
  CL = (r8((uint32_t)(0x1136da91)));
  /* 113441b1 push ecx */
  push32((uint32_t)(ECX));
  /* 113441b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113441b5 push edx */
  push32((uint32_t)(EDX));
  /* 113441b6 call 0x113470c0 */
  push32(0x113441bbu); f_113470c0();
  /* 113441bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113441be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113441c1 push eax */
  push32((uint32_t)(EAX));
  /* 113441c2 call 0x113474c0 */
  push32(0x113441c7u); f_113474c0();
  /* 113441c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113441ca jmp 0x113441f5 */
  goto L_113441f5;
L_113441cc:;
  /* 113441cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113441cf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 113441d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113441d9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113441dc push eax */
  push32((uint32_t)(EAX));
  /* 113441dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113441df mov cl, byte ptr [0x1136da91] */
  CL = (r8((uint32_t)(0x1136da91)));
  /* 113441e5 push ecx */
  push32((uint32_t)(ECX));
  /* 113441e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113441e9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113441ec push edx */
  push32((uint32_t)(EDX));
  /* 113441ed call 0x113470c0 */
  push32(0x113441f2u); f_113470c0();
  /* 113441f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113441f5:;
  /* 113441f5 pop edi */
  EDI = (pop32());
  /* 113441f6 pop esi */
  ESI = (pop32());
  /* 113441f7 pop ebx */
  EBX = (pop32());
  /* 113441f8 mov esp, ebp */
  ESP = (EBP);
  /* 113441fa pop ebp */
  EBP = (pop32());
  /* 113441fb ret  */
  ESPCHK(0x11343e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004200 @ 0x11344200 (19 bytes, 9 insns) */
void f_11344200(void) {
  FTRACE(0x11344200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11344200 push ebp */
  push32((uint32_t)(EBP));
  /* 11344201 mov ebp, esp */
  EBP = (ESP);
  /* 11344203 push 1 */
  push32((uint32_t)(0x1u));
  /* 11344205 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344208 push eax */
  push32((uint32_t)(EAX));
  /* 11344209 call 0x11344220 */
  push32(0x1134420eu); f_11344220();
  /* 1134420e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344211 pop ebp */
  EBP = (pop32());
  /* 11344212 ret  */
  ESPCHK(0x11344200u, _esp0);
  ESP += 4; return;
}

/* FUN_10004220 @ 0x11344220 (342 bytes, 119 insns) */
void f_11344220(void) {
  FTRACE(0x11344220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11344220 push ebp */
  push32((uint32_t)(EBP));
  /* 11344221 mov ebp, esp */
  EBP = (ESP);
  /* 11344223 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11344226 push ebx */
  push32((uint32_t)(EBX));
  /* 11344227 push esi */
  push32((uint32_t)(ESI));
  /* 11344228 push edi */
  push32((uint32_t)(EDI));
  /* 11344229 mov eax, dword ptr [0x1136da84] */
  EAX = (r32((uint32_t)(0x1136da84)));
  /* 1134422e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11344231 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11344233 je 0x11344265 */
  if (C.zf) goto L_11344265;
L_11344235:;
  /* 11344235 call 0x113444f0 */
  push32(0x1134423au); f_113444f0();
  /* 1134423a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134423c jne 0x1134425f */
  if (!C.zf) goto L_1134425f;
  /* 1134423e push 0x1136a500 */
  push32((uint32_t)(0x1136a500u));
  /* 11344243 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344245 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1134424a push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 1134424f push 2 */
  push32((uint32_t)(0x2u));
  /* 11344251 call 0x11342410 */
  push32(0x11344256u); f_11342410();
  /* 11344256 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344259 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134425c jne 0x1134425f */
  if (!C.zf) goto L_1134425f;
  /* 1134425e int3  */
  x86_unimpl("int3 @ 0x1134425e");
L_1134425f:;
  /* 1134425f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11344261 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11344263 jne 0x11344235 */
  if (!C.zf) goto L_11344235;
L_11344265:;
  /* 11344265 push 9 */
  push32((uint32_t)(0x9u));
  /* 11344267 call 0x11346d50 */
  push32(0x1134426cu); f_11346d50();
  /* 1134426c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134426f:;
  /* 1134426f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344272 push edx */
  push32((uint32_t)(EDX));
  /* 11344273 call 0x11344950 */
  push32(0x11344278u); f_11344950();
  /* 11344278 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134427b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134427d jne 0x113442a0 */
  if (!C.zf) goto L_113442a0;
  /* 1134427f push 0x1136a604 */
  push32((uint32_t)(0x1136a604u));
  /* 11344284 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344286 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1134428b push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 11344290 push 2 */
  push32((uint32_t)(0x2u));
  /* 11344292 call 0x11342410 */
  push32(0x11344297u); f_11342410();
  /* 11344297 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134429a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134429d jne 0x113442a0 */
  if (!C.zf) goto L_113442a0;
  /* 1134429f int3  */
  x86_unimpl("int3 @ 0x1134429f");
L_113442a0:;
  /* 113442a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113442a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113442a4 jne 0x1134426f */
  if (!C.zf) goto L_1134426f;
  /* 113442a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113442a9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113442ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_113442af:;
  /* 113442af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113442b2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113442b5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113442ba cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113442bd je 0x11344302 */
  if (C.zf) goto L_11344302;
  /* 113442bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113442c2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113442c6 je 0x11344302 */
  if (C.zf) goto L_11344302;
  /* 113442c8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113442cb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113442ce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113442d3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113442d6 je 0x11344302 */
  if (C.zf) goto L_11344302;
  /* 113442d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113442db cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113442df je 0x11344302 */
  if (C.zf) goto L_11344302;
  /* 113442e1 push 0x1136a79c */
  push32((uint32_t)(0x1136a79cu));
  /* 113442e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113442e8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 113442ed push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 113442f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113442f4 call 0x11342410 */
  push32(0x113442f9u); f_11342410();
  /* 113442f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113442fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113442ff jne 0x11344302 */
  if (!C.zf) goto L_11344302;
  /* 11344301 int3  */
  x86_unimpl("int3 @ 0x11344301");
L_11344302:;
  /* 11344302 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11344304 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11344306 jne 0x113442af */
  if (!C.zf) goto L_113442af;
  /* 11344308 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134430b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134430f jne 0x1134431e */
  if (!C.zf) goto L_1134431e;
  /* 11344311 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344315 jne 0x1134431e */
  if (!C.zf) goto L_1134431e;
  /* 11344317 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1134431e:;
  /* 1134431e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344321 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344325 je 0x11344359 */
  if (C.zf) goto L_11344359;
L_11344327:;
  /* 11344327 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134432a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1134432d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344330 je 0x11344353 */
  if (C.zf) goto L_11344353;
  /* 11344332 push 0x1136a6e4 */
  push32((uint32_t)(0x1136a6e4u));
  /* 11344337 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344339 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1134433e push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 11344343 push 2 */
  push32((uint32_t)(0x2u));
  /* 11344345 call 0x11342410 */
  push32(0x1134434au); f_11342410();
  /* 1134434a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134434d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344350 jne 0x11344353 */
  if (!C.zf) goto L_11344353;
  /* 11344352 int3  */
  x86_unimpl("int3 @ 0x11344352");
L_11344353:;
  /* 11344353 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11344355 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11344357 jne 0x11344327 */
  if (!C.zf) goto L_11344327;
L_11344359:;
  /* 11344359 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134435c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1134435f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11344362 push 9 */
  push32((uint32_t)(0x9u));
  /* 11344364 call 0x11346df0 */
  push32(0x11344369u); f_11346df0();
  /* 11344369 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134436c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134436f pop edi */
  EDI = (pop32());
  /* 11344370 pop esi */
  ESI = (pop32());
  /* 11344371 pop ebx */
  EBX = (pop32());
  /* 11344372 mov esp, ebp */
  ESP = (EBP);
  /* 11344374 pop ebp */
  EBP = (pop32());
  /* 11344375 ret  */
  ESPCHK(0x11344220u, _esp0);
  ESP += 4; return;
}

/* FUN_10004380 @ 0x11344380 (28 bytes, 11 insns) */
void f_11344380(void) {
  FTRACE(0x11344380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11344380 push ebp */
  push32((uint32_t)(EBP));
  /* 11344381 mov ebp, esp */
  EBP = (ESP);
  /* 11344383 push ecx */
  push32((uint32_t)(ECX));
  /* 11344384 mov eax, dword ptr [0x1136da8c] */
  EAX = (r32((uint32_t)(0x1136da8c)));
  /* 11344389 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134438c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134438f mov dword ptr [0x1136da8c], ecx */
  w32((uint32_t)(0x1136da8c), (ECX));
  /* 11344395 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344398 mov esp, ebp */
  ESP = (EBP);
  /* 1134439a pop ebp */
  EBP = (pop32());
  /* 1134439b ret  */
  ESPCHK(0x11344380u, _esp0);
  ESP += 4; return;
}

/* FUN_100043a0 @ 0x113443a0 (157 bytes, 59 insns) */
void f_113443a0(void) {
  FTRACE(0x113443a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113443a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113443a1 mov ebp, esp */
  EBP = (ESP);
  /* 113443a3 push ecx */
  push32((uint32_t)(ECX));
  /* 113443a4 push ebx */
  push32((uint32_t)(EBX));
  /* 113443a5 push esi */
  push32((uint32_t)(ESI));
  /* 113443a6 push edi */
  push32((uint32_t)(EDI));
  /* 113443a7 push 9 */
  push32((uint32_t)(0x9u));
  /* 113443a9 call 0x11346d50 */
  push32(0x113443aeu); f_11346d50();
  /* 113443ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113443b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113443b4 push eax */
  push32((uint32_t)(EAX));
  /* 113443b5 call 0x11344950 */
  push32(0x113443bau); f_11344950();
  /* 113443ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113443bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113443bf je 0x1134442c */
  if (C.zf) goto L_1134442c;
  /* 113443c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113443c4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113443c7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113443ca:;
  /* 113443ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113443cd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113443d0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113443d5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113443d8 je 0x1134441d */
  if (C.zf) goto L_1134441d;
  /* 113443da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113443dd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113443e1 je 0x1134441d */
  if (C.zf) goto L_1134441d;
  /* 113443e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113443e6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113443e9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113443ee cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113443f1 je 0x1134441d */
  if (C.zf) goto L_1134441d;
  /* 113443f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113443f6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113443fa je 0x1134441d */
  if (C.zf) goto L_1134441d;
  /* 113443fc push 0x1136a79c */
  push32((uint32_t)(0x1136a79cu));
  /* 11344401 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344403 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11344408 push 0x1136a4f4 */
  push32((uint32_t)(0x1136a4f4u));
  /* 1134440d push 2 */
  push32((uint32_t)(0x2u));
  /* 1134440f call 0x11342410 */
  push32(0x11344414u); f_11342410();
  /* 11344414 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344417 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134441a jne 0x1134441d */
  if (!C.zf) goto L_1134441d;
  /* 1134441c int3  */
  x86_unimpl("int3 @ 0x1134441c");
L_1134441d:;
  /* 1134441d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1134441f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11344421 jne 0x113443ca */
  if (!C.zf) goto L_113443ca;
  /* 11344423 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344426 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11344429 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1134442c:;
  /* 1134442c push 9 */
  push32((uint32_t)(0x9u));
  /* 1134442e call 0x11346df0 */
  push32(0x11344433u); f_11346df0();
  /* 11344433 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344436 pop edi */
  EDI = (pop32());
  /* 11344437 pop esi */
  ESI = (pop32());
  /* 11344438 pop ebx */
  EBX = (pop32());
  /* 11344439 mov esp, ebp */
  ESP = (EBP);
  /* 1134443b pop ebp */
  EBP = (pop32());
  /* 1134443c ret  */
  ESPCHK(0x113443a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004440 @ 0x11344440 (28 bytes, 11 insns) */
void f_11344440(void) {
  FTRACE(0x11344440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11344440 push ebp */
  push32((uint32_t)(EBP));
  /* 11344441 mov ebp, esp */
  EBP = (ESP);
  /* 11344443 push ecx */
  push32((uint32_t)(ECX));
  /* 11344444 mov eax, dword ptr [0x1136dc90] */
  EAX = (r32((uint32_t)(0x1136dc90)));
  /* 11344449 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134444c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134444f mov dword ptr [0x1136dc90], ecx */
  w32((uint32_t)(0x1136dc90), (ECX));
  /* 11344455 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344458 mov esp, ebp */
  ESP = (EBP);
  /* 1134445a pop ebp */
  EBP = (pop32());
  /* 1134445b ret  */
  ESPCHK(0x11344440u, _esp0);
  ESP += 4; return;
}

/* FUN_10004460 @ 0x11344460 (136 bytes, 55 insns) */
void f_11344460(void) {
  FTRACE(0x11344460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11344460 push ebp */
  push32((uint32_t)(EBP));
  /* 11344461 mov ebp, esp */
  EBP = (ESP);
  /* 11344463 push ecx */
  push32((uint32_t)(ECX));
  /* 11344464 push ebx */
  push32((uint32_t)(EBX));
  /* 11344465 push esi */
  push32((uint32_t)(ESI));
  /* 11344466 push edi */
  push32((uint32_t)(EDI));
  /* 11344467 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1134446e:;
  /* 1134446e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11344471 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11344474 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11344477 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1134447a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134447c je 0x113444de */
  if (C.zf) goto L_113444de;
  /* 1134447e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344481 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11344483 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11344485 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11344488 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1134448e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344491 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11344494 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11344497 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344499 je 0x113444dc */
  if (C.zf) goto L_113444dc;
L_1134449b:;
  /* 1134449b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134449e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113444a3 push eax */
  push32((uint32_t)(EAX));
  /* 113444a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113444a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113444a9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 113444ac push edx */
  push32((uint32_t)(EDX));
  /* 113444ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113444b0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113444b3 push eax */
  push32((uint32_t)(EAX));
  /* 113444b4 push 0x1136a7e0 */
  push32((uint32_t)(0x1136a7e0u));
  /* 113444b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113444bb push 0 */
  push32((uint32_t)(0x0u));
  /* 113444bd push 0 */
  push32((uint32_t)(0x0u));
  /* 113444bf push 0 */
  push32((uint32_t)(0x0u));
  /* 113444c1 call 0x11342410 */
  push32(0x113444c6u); f_11342410();
  /* 113444c6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113444c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113444cc jne 0x113444cf */
  if (!C.zf) goto L_113444cf;
  /* 113444ce int3  */
  x86_unimpl("int3 @ 0x113444ce");
L_113444cf:;
  /* 113444cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113444d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113444d3 jne 0x1134449b */
  if (!C.zf) goto L_1134449b;
  /* 113444d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113444dc:;
  /* 113444dc jmp 0x1134446e */
  goto L_1134446e;
L_113444de:;
  /* 113444de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113444e1 pop edi */
  EDI = (pop32());
  /* 113444e2 pop esi */
  ESI = (pop32());
  /* 113444e3 pop ebx */
  EBX = (pop32());
  /* 113444e4 mov esp, ebp */
  ESP = (EBP);
  /* 113444e6 pop ebp */
  EBP = (pop32());
  /* 113444e7 ret  */
  ESPCHK(0x11344460u, _esp0);
  ESP += 4; return;
}

/* FUN_100044f0 @ 0x113444f0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_113444f0(void) {
  FTRACE(0x113444f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113444f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113444f1 mov ebp, esp */
  EBP = (ESP);
  /* 113444f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113444f6 push ebx */
  push32((uint32_t)(EBX));
  /* 113444f7 push esi */
  push32((uint32_t)(ESI));
  /* 113444f8 push edi */
  push32((uint32_t)(EDI));
  /* 113444f9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11344500 mov eax, dword ptr [0x1136da84] */
  EAX = (r32((uint32_t)(0x1136da84)));
  /* 11344505 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11344508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134450a jne 0x11344516 */
  if (!C.zf) goto L_11344516;
  /* 1134450c mov eax, 1 */
  EAX = (0x1u);
  /* 11344511 jmp 0x11344848 */
  goto L_11344848;
L_11344516:;
  /* 11344516 push 9 */
  push32((uint32_t)(0x9u));
  /* 11344518 call 0x11346d50 */
  push32(0x1134451du); f_11346d50();
  /* 1134451d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344520 call 0x11347530 */
  push32(0x11344525u); f_11347530();
  /* 11344525 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11344528 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134452c je 0x11344639 */
  if (C.zf) goto L_11344639;
  /* 11344532 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344536 je 0x11344639 */
  if (C.zf) goto L_11344639;
  /* 1134453c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134453f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11344542 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11344545 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11344548 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1134454b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134454f ja 0x11344602 */
  if ((!C.cf&&!C.zf)) goto L_11344602;
  /* 11344555 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11344558 jmp dword ptr [eax*4 + 0x1134484f] */
  switch (EAX) {
    case 0: goto L_113445da;
    case 1: goto L_113445b2;
    case 2: goto L_1134458a;
    case 3: goto L_1134455f;
    default: x86_unimpl("switch@0x11344558 out of table"); return;
  }
L_1134455f:;
  /* 1134455f push 0x1136a934 */
  push32((uint32_t)(0x1136a934u));
  /* 11344564 push 0x1136a494 */
  push32((uint32_t)(0x1136a494u));
  /* 11344569 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134456b push 0 */
  push32((uint32_t)(0x0u));
  /* 1134456d push 0 */
  push32((uint32_t)(0x0u));
  /* 1134456f push 0 */
  push32((uint32_t)(0x0u));
  /* 11344571 call 0x11342410 */
  push32(0x11344576u); f_11342410();
  /* 11344576 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344579 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134457c jne 0x1134457f */
  if (!C.zf) goto L_1134457f;
  /* 1134457e int3  */
  x86_unimpl("int3 @ 0x1134457e");
L_1134457f:;
  /* 1134457f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11344581 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11344583 jne 0x1134455f */
  if (!C.zf) goto L_1134455f;
  /* 11344585 jmp 0x11344628 */
  goto L_11344628;
L_1134458a:;
  /* 1134458a push 0x1136a910 */
  push32((uint32_t)(0x1136a910u));
  /* 1134458f push 0x1136a494 */
  push32((uint32_t)(0x1136a494u));
  /* 11344594 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344596 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344598 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134459a push 0 */
  push32((uint32_t)(0x0u));
  /* 1134459c call 0x11342410 */
  push32(0x113445a1u); f_11342410();
  /* 113445a1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113445a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113445a7 jne 0x113445aa */
  if (!C.zf) goto L_113445aa;
  /* 113445a9 int3  */
  x86_unimpl("int3 @ 0x113445a9");
L_113445aa:;
  /* 113445aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113445ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113445ae jne 0x1134458a */
  if (!C.zf) goto L_1134458a;
  /* 113445b0 jmp 0x11344628 */
  goto L_11344628;
L_113445b2:;
  /* 113445b2 push 0x1136a8ec */
  push32((uint32_t)(0x1136a8ecu));
  /* 113445b7 push 0x1136a494 */
  push32((uint32_t)(0x1136a494u));
  /* 113445bc push 0 */
  push32((uint32_t)(0x0u));
  /* 113445be push 0 */
  push32((uint32_t)(0x0u));
  /* 113445c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113445c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113445c4 call 0x11342410 */
  push32(0x113445c9u); f_11342410();
  /* 113445c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113445cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113445cf jne 0x113445d2 */
  if (!C.zf) goto L_113445d2;
  /* 113445d1 int3  */
  x86_unimpl("int3 @ 0x113445d1");
L_113445d2:;
  /* 113445d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113445d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113445d6 jne 0x113445b2 */
  if (!C.zf) goto L_113445b2;
  /* 113445d8 jmp 0x11344628 */
  goto L_11344628;
L_113445da:;
  /* 113445da push 0x1136a8c8 */
  push32((uint32_t)(0x1136a8c8u));
  /* 113445df push 0x1136a494 */
  push32((uint32_t)(0x1136a494u));
  /* 113445e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113445e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113445e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113445ea push 0 */
  push32((uint32_t)(0x0u));
  /* 113445ec call 0x11342410 */
  push32(0x113445f1u); f_11342410();
  /* 113445f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113445f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113445f7 jne 0x113445fa */
  if (!C.zf) goto L_113445fa;
  /* 113445f9 int3  */
  x86_unimpl("int3 @ 0x113445f9");
L_113445fa:;
  /* 113445fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113445fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113445fe jne 0x113445da */
  if (!C.zf) goto L_113445da;
  /* 11344600 jmp 0x11344628 */
  goto L_11344628;
L_11344602:;
  /* 11344602 push 0x1136a89c */
  push32((uint32_t)(0x1136a89cu));
  /* 11344607 push 0x1136a494 */
  push32((uint32_t)(0x1136a494u));
  /* 1134460c push 0 */
  push32((uint32_t)(0x0u));
  /* 1134460e push 0 */
  push32((uint32_t)(0x0u));
  /* 11344610 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344612 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344614 call 0x11342410 */
  push32(0x11344619u); f_11342410();
  /* 11344619 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134461c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134461f jne 0x11344622 */
  if (!C.zf) goto L_11344622;
  /* 11344621 int3  */
  x86_unimpl("int3 @ 0x11344621");
L_11344622:;
  /* 11344622 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11344624 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11344626 jne 0x11344602 */
  if (!C.zf) goto L_11344602;
L_11344628:;
  /* 11344628 push 9 */
  push32((uint32_t)(0x9u));
  /* 1134462a call 0x11346df0 */
  push32(0x1134462fu); f_11346df0();
  /* 1134462f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344632 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11344634 jmp 0x11344848 */
  goto L_11344848;
L_11344639:;
  /* 11344639 mov eax, dword ptr [0x1136f4b4] */
  EAX = (r32((uint32_t)(0x1136f4b4)));
  /* 1134463e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11344641 jmp 0x1134464b */
  goto L_1134464b;
L_11344643:;
  /* 11344643 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344646 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11344648 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1134464b:;
  /* 1134464b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134464f je 0x1134483b */
  if (C.zf) goto L_1134483b;
  /* 11344655 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1134465c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134465f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11344662 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11344668 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134466b je 0x11344690 */
  if (C.zf) goto L_11344690;
  /* 1134466d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344670 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344674 je 0x11344690 */
  if (C.zf) goto L_11344690;
  /* 11344676 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344679 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1134467c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11344682 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344685 je 0x11344690 */
  if (C.zf) goto L_11344690;
  /* 11344687 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134468a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134468e jne 0x113446a8 */
  if (!C.zf) goto L_113446a8;
L_11344690:;
  /* 11344690 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344693 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11344696 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1134469c mov edx, dword ptr [ecx*4 + 0x1136da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1136da94)));
  /* 113446a3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113446a6 jmp 0x113446af */
  goto L_113446af;
L_113446a8:;
  /* 113446a8 mov dword ptr [ebp - 0x14], 0x1136a894 */
  w32((uint32_t)(EBP + -0x14), (0x1136a894u));
L_113446af:;
  /* 113446af push 4 */
  push32((uint32_t)(0x4u));
  /* 113446b1 mov al, byte ptr [0x1136da90] */
  AL = (r8((uint32_t)(0x1136da90)));
  /* 113446b6 push eax */
  push32((uint32_t)(EAX));
  /* 113446b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113446ba add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113446bd push ecx */
  push32((uint32_t)(ECX));
  /* 113446be call 0x11344460 */
  push32(0x113446c3u); f_11344460();
  /* 113446c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113446c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113446c8 jne 0x11344704 */
  if (!C.zf) goto L_11344704;
L_113446ca:;
  /* 113446ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113446cd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113446d0 push edx */
  push32((uint32_t)(EDX));
  /* 113446d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113446d4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 113446d7 push ecx */
  push32((uint32_t)(ECX));
  /* 113446d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113446db push edx */
  push32((uint32_t)(EDX));
  /* 113446dc push 0x1136a770 */
  push32((uint32_t)(0x1136a770u));
  /* 113446e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113446e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113446e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113446e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113446e9 call 0x11342410 */
  push32(0x113446eeu); f_11342410();
  /* 113446ee add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113446f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113446f4 jne 0x113446f7 */
  if (!C.zf) goto L_113446f7;
  /* 113446f6 int3  */
  x86_unimpl("int3 @ 0x113446f6");
L_113446f7:;
  /* 113446f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113446f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113446fb jne 0x113446ca */
  if (!C.zf) goto L_113446ca;
  /* 113446fd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11344704:;
  /* 11344704 push 4 */
  push32((uint32_t)(0x4u));
  /* 11344706 mov cl, byte ptr [0x1136da90] */
  CL = (r8((uint32_t)(0x1136da90)));
  /* 1134470c push ecx */
  push32((uint32_t)(ECX));
  /* 1134470d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344710 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11344713 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344716 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1134471a push edx */
  push32((uint32_t)(EDX));
  /* 1134471b call 0x11344460 */
  push32(0x11344720u); f_11344460();
  /* 11344720 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344723 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11344725 jne 0x11344761 */
  if (!C.zf) goto L_11344761;
L_11344727:;
  /* 11344727 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134472a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134472d push eax */
  push32((uint32_t)(EAX));
  /* 1134472e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344731 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11344734 push edx */
  push32((uint32_t)(EDX));
  /* 11344735 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11344738 push eax */
  push32((uint32_t)(EAX));
  /* 11344739 push 0x1136a744 */
  push32((uint32_t)(0x1136a744u));
  /* 1134473e push 0 */
  push32((uint32_t)(0x0u));
  /* 11344740 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344742 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344744 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344746 call 0x11342410 */
  push32(0x1134474bu); f_11342410();
  /* 1134474b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134474e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344751 jne 0x11344754 */
  if (!C.zf) goto L_11344754;
  /* 11344753 int3  */
  x86_unimpl("int3 @ 0x11344753");
L_11344754:;
  /* 11344754 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11344756 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11344758 jne 0x11344727 */
  if (!C.zf) goto L_11344727;
  /* 1134475a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11344761:;
  /* 11344761 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344764 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344768 jne 0x113447ba */
  if (!C.zf) goto L_113447ba;
  /* 1134476a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134476d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11344770 push ecx */
  push32((uint32_t)(ECX));
  /* 11344771 mov dl, byte ptr [0x1136da91] */
  DL = (r8((uint32_t)(0x1136da91)));
  /* 11344777 push edx */
  push32((uint32_t)(EDX));
  /* 11344778 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134477b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134477e push eax */
  push32((uint32_t)(EAX));
  /* 1134477f call 0x11344460 */
  push32(0x11344784u); f_11344460();
  /* 11344784 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344787 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11344789 jne 0x113447ba */
  if (!C.zf) goto L_113447ba;
L_1134478b:;
  /* 1134478b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134478e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11344791 push ecx */
  push32((uint32_t)(ECX));
  /* 11344792 push 0x1136a868 */
  push32((uint32_t)(0x1136a868u));
  /* 11344797 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344799 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134479b push 0 */
  push32((uint32_t)(0x0u));
  /* 1134479d push 0 */
  push32((uint32_t)(0x0u));
  /* 1134479f call 0x11342410 */
  push32(0x113447a4u); f_11342410();
  /* 113447a4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113447a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113447aa jne 0x113447ad */
  if (!C.zf) goto L_113447ad;
  /* 113447ac int3  */
  x86_unimpl("int3 @ 0x113447ac");
L_113447ad:;
  /* 113447ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113447af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113447b1 jne 0x1134478b */
  if (!C.zf) goto L_1134478b;
  /* 113447b3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_113447ba:;
  /* 113447ba cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113447be jne 0x11344836 */
  if (!C.zf) goto L_11344836;
  /* 113447c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113447c3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113447c7 je 0x113447fc */
  if (C.zf) goto L_113447fc;
L_113447c9:;
  /* 113447c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113447cc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113447cf push edx */
  push32((uint32_t)(EDX));
  /* 113447d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113447d3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113447d6 push ecx */
  push32((uint32_t)(ECX));
  /* 113447d7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113447da push edx */
  push32((uint32_t)(EDX));
  /* 113447db push 0x1136a848 */
  push32((uint32_t)(0x1136a848u));
  /* 113447e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113447e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113447e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113447e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113447e8 call 0x11342410 */
  push32(0x113447edu); f_11342410();
  /* 113447ed add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113447f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113447f3 jne 0x113447f6 */
  if (!C.zf) goto L_113447f6;
  /* 113447f5 int3  */
  x86_unimpl("int3 @ 0x113447f5");
L_113447f6:;
  /* 113447f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113447f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113447fa jne 0x113447c9 */
  if (!C.zf) goto L_113447c9;
L_113447fc:;
  /* 113447fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113447ff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11344802 push edx */
  push32((uint32_t)(EDX));
  /* 11344803 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344806 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11344809 push eax */
  push32((uint32_t)(EAX));
  /* 1134480a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1134480d push ecx */
  push32((uint32_t)(ECX));
  /* 1134480e push 0x1136a81c */
  push32((uint32_t)(0x1136a81cu));
  /* 11344813 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344815 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344817 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344819 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134481b call 0x11342410 */
  push32(0x11344820u); f_11342410();
  /* 11344820 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344823 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344826 jne 0x11344829 */
  if (!C.zf) goto L_11344829;
  /* 11344828 int3  */
  x86_unimpl("int3 @ 0x11344828");
L_11344829:;
  /* 11344829 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1134482b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134482d jne 0x113447fc */
  if (!C.zf) goto L_113447fc;
  /* 1134482f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11344836:;
  /* 11344836 jmp 0x11344643 */
  goto L_11344643;
L_1134483b:;
  /* 1134483b push 9 */
  push32((uint32_t)(0x9u));
  /* 1134483d call 0x11346df0 */
  push32(0x11344842u); f_11346df0();
  /* 11344842 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344845 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11344848:;
  /* 11344848 pop edi */
  EDI = (pop32());
  /* 11344849 pop esi */
  ESI = (pop32());
  /* 1134484a pop ebx */
  EBX = (pop32());
  /* 1134484b mov esp, ebp */
  ESP = (EBP);
  /* 1134484d pop ebp */
  EBP = (pop32());
  /* 1134484e ret  */
  ESPCHK(0x113444f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004860 @ 0x11344860 (34 bytes, 13 insns) */
void f_11344860(void) {
  FTRACE(0x11344860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11344860 push ebp */
  push32((uint32_t)(EBP));
  /* 11344861 mov ebp, esp */
  EBP = (ESP);
  /* 11344863 push ecx */
  push32((uint32_t)(ECX));
  /* 11344864 mov eax, dword ptr [0x1136da84] */
  EAX = (r32((uint32_t)(0x1136da84)));
  /* 11344869 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134486c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344870 je 0x1134487b */
  if (C.zf) goto L_1134487b;
  /* 11344872 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344875 mov dword ptr [0x1136da84], ecx */
  w32((uint32_t)(0x1136da84), (ECX));
L_1134487b:;
  /* 1134487b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134487e mov esp, ebp */
  ESP = (EBP);
  /* 11344880 pop ebp */
  EBP = (pop32());
  /* 11344881 ret  */
  ESPCHK(0x11344860u, _esp0);
  ESP += 4; return;
}

/* FUN_10004890 @ 0x11344890 (103 bytes, 38 insns) */
void f_11344890(void) {
  FTRACE(0x11344890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11344890 push ebp */
  push32((uint32_t)(EBP));
  /* 11344891 mov ebp, esp */
  EBP = (ESP);
  /* 11344893 push ecx */
  push32((uint32_t)(ECX));
  /* 11344894 mov eax, dword ptr [0x1136da84] */
  EAX = (r32((uint32_t)(0x1136da84)));
  /* 11344899 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1134489c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134489e jne 0x113448a2 */
  if (!C.zf) goto L_113448a2;
  /* 113448a0 jmp 0x113448f3 */
  goto L_113448f3;
L_113448a2:;
  /* 113448a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 113448a4 call 0x11346d50 */
  push32(0x113448a9u); f_11346d50();
  /* 113448a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113448ac mov ecx, dword ptr [0x1136f4b4] */
  ECX = (r32((uint32_t)(0x1136f4b4)));
  /* 113448b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113448b5 jmp 0x113448bf */
  goto L_113448bf;
L_113448b7:;
  /* 113448b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113448ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113448bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113448bf:;
  /* 113448bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113448c3 je 0x113448e9 */
  if (C.zf) goto L_113448e9;
  /* 113448c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113448c8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 113448cb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113448d1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113448d4 jne 0x113448e7 */
  if (!C.zf) goto L_113448e7;
  /* 113448d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113448d9 push eax */
  push32((uint32_t)(EAX));
  /* 113448da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113448dd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113448e0 push ecx */
  push32((uint32_t)(ECX));
  /* 113448e1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x113448e4u);
  /* 113448e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113448e7:;
  /* 113448e7 jmp 0x113448b7 */
  goto L_113448b7;
L_113448e9:;
  /* 113448e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 113448eb call 0x11346df0 */
  push32(0x113448f0u); f_11346df0();
  /* 113448f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113448f3:;
  /* 113448f3 mov esp, ebp */
  ESP = (EBP);
  /* 113448f5 pop ebp */
  EBP = (pop32());
  /* 113448f6 ret  */
  ESPCHK(0x11344890u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11344900 (75 bytes, 28 insns) */
void f_11344900(void) {
  FTRACE(0x11344900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11344900 push ebp */
  push32((uint32_t)(EBP));
  /* 11344901 mov ebp, esp */
  EBP = (ESP);
  /* 11344903 push ecx */
  push32((uint32_t)(ECX));
  /* 11344904 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344908 je 0x1134493d */
  if (C.zf) goto L_1134493d;
  /* 1134490a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134490d push eax */
  push32((uint32_t)(EAX));
  /* 1134490e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344911 push ecx */
  push32((uint32_t)(ECX));
  /* 11344912 call dword ptr [0x11371380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371380))), 0x11344918u);
  /* 11344918 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134491a jne 0x1134493d */
  if (!C.zf) goto L_1134493d;
  /* 1134491c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344920 je 0x11344934 */
  if (C.zf) goto L_11344934;
  /* 11344922 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11344925 push edx */
  push32((uint32_t)(EDX));
  /* 11344926 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344929 push eax */
  push32((uint32_t)(EAX));
  /* 1134492a call dword ptr [0x1137137c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137137c))), 0x11344930u);
  /* 11344930 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11344932 jne 0x1134493d */
  if (!C.zf) goto L_1134493d;
L_11344934:;
  /* 11344934 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1134493b jmp 0x11344944 */
  goto L_11344944;
L_1134493d:;
  /* 1134493d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11344944:;
  /* 11344944 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344947 mov esp, ebp */
  ESP = (EBP);
  /* 11344949 pop ebp */
  EBP = (pop32());
  /* 1134494a ret  */
  ESPCHK(0x11344900u, _esp0);
  ESP += 4; return;
}

/* FUN_10004950 @ 0x11344950 (134 bytes, 50 insns) */
void f_11344950(void) {
  FTRACE(0x11344950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11344950 push ebp */
  push32((uint32_t)(EBP));
  /* 11344951 mov ebp, esp */
  EBP = (ESP);
  /* 11344953 push ecx */
  push32((uint32_t)(ECX));
  /* 11344954 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344958 jne 0x1134495e */
  if (!C.zf) goto L_1134495e;
  /* 1134495a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134495c jmp 0x113449d2 */
  goto L_113449d2;
L_1134495e:;
  /* 1134495e push 1 */
  push32((uint32_t)(0x1u));
  /* 11344960 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11344962 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344965 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11344968 push eax */
  push32((uint32_t)(EAX));
  /* 11344969 call 0x11344900 */
  push32(0x1134496eu); f_11344900();
  /* 1134496e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344971 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11344973 jne 0x11344979 */
  if (!C.zf) goto L_11344979;
  /* 11344975 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11344977 jmp 0x113449d2 */
  goto L_113449d2;
L_11344979:;
  /* 11344979 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134497c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1134497f push ecx */
  push32((uint32_t)(ECX));
  /* 11344980 call 0x11347650 */
  push32(0x11344985u); f_11347650();
  /* 11344985 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344988 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134498b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134498f je 0x113449a6 */
  if (C.zf) goto L_113449a6;
  /* 11344991 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344994 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11344997 push edx */
  push32((uint32_t)(EDX));
  /* 11344998 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134499b push eax */
  push32((uint32_t)(EAX));
  /* 1134499c call 0x113476b0 */
  push32(0x113449a1u); f_113476b0();
  /* 113449a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113449a4 jmp 0x113449d2 */
  goto L_113449d2;
L_113449a6:;
  /* 113449a6 mov ecx, dword ptr [0x1136f468] */
  ECX = (r32((uint32_t)(0x1136f468)));
  /* 113449ac and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 113449b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113449b4 je 0x113449bd */
  if (C.zf) goto L_113449bd;
  /* 113449b6 mov eax, 1 */
  EAX = (0x1u);
  /* 113449bb jmp 0x113449d2 */
  goto L_113449d2;
L_113449bd:;
  /* 113449bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113449c0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113449c3 push edx */
  push32((uint32_t)(EDX));
  /* 113449c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113449c6 mov eax, dword ptr [0x11370e0c] */
  EAX = (r32((uint32_t)(0x11370e0c)));
  /* 113449cb push eax */
  push32((uint32_t)(EAX));
  /* 113449cc call dword ptr [0x11371384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371384))), 0x113449d2u);
L_113449d2:;
  /* 113449d2 mov esp, ebp */
  ESP = (EBP);
  /* 113449d4 pop ebp */
  EBP = (pop32());
  /* 113449d5 ret  */
  ESPCHK(0x11344950u, _esp0);
  ESP += 4; return;
}

/* FUN_100049e0 @ 0x113449e0 (227 bytes, 80 insns) */
void f_113449e0(void) {
  FTRACE(0x113449e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113449e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113449e1 mov ebp, esp */
  EBP = (ESP);
  /* 113449e3 push ecx */
  push32((uint32_t)(ECX));
  /* 113449e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113449e7 push eax */
  push32((uint32_t)(EAX));
  /* 113449e8 call 0x11344950 */
  push32(0x113449edu); f_11344950();
  /* 113449ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113449f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113449f2 jne 0x113449fb */
  if (!C.zf) goto L_113449fb;
  /* 113449f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113449f6 jmp 0x11344abf */
  goto L_11344abf;
L_113449fb:;
  /* 113449fb push 9 */
  push32((uint32_t)(0x9u));
  /* 113449fd call 0x11346d50 */
  push32(0x11344a02u); f_11346d50();
  /* 11344a02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344a05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344a08 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11344a0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11344a0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344a11 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11344a14 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11344a19 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344a1c je 0x11344a40 */
  if (C.zf) goto L_11344a40;
  /* 11344a1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344a21 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344a25 je 0x11344a40 */
  if (C.zf) goto L_11344a40;
  /* 11344a27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344a2a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11344a2d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11344a32 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344a35 je 0x11344a40 */
  if (C.zf) goto L_11344a40;
  /* 11344a37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344a3a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344a3e jne 0x11344ab3 */
  if (!C.zf) goto L_11344ab3;
L_11344a40:;
  /* 11344a40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11344a42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11344a45 push edx */
  push32((uint32_t)(EDX));
  /* 11344a46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344a49 push eax */
  push32((uint32_t)(EAX));
  /* 11344a4a call 0x11344900 */
  push32(0x11344a4fu); f_11344900();
  /* 11344a4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344a52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11344a54 je 0x11344ab3 */
  if (C.zf) goto L_11344ab3;
  /* 11344a56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344a59 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11344a5c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344a5f jne 0x11344ab3 */
  if (!C.zf) goto L_11344ab3;
  /* 11344a61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344a64 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11344a67 cmp ecx, dword ptr [0x1136da88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1136da88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344a6d jg 0x11344ab3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11344ab3;
  /* 11344a6f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344a73 je 0x11344a80 */
  if (C.zf) goto L_11344a80;
  /* 11344a75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11344a78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344a7b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11344a7e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11344a80:;
  /* 11344a80 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344a84 je 0x11344a91 */
  if (C.zf) goto L_11344a91;
  /* 11344a86 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11344a89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344a8c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11344a8f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11344a91:;
  /* 11344a91 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344a95 je 0x11344aa2 */
  if (C.zf) goto L_11344aa2;
  /* 11344a97 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11344a9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344a9d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11344aa0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11344aa2:;
  /* 11344aa2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11344aa4 call 0x11346df0 */
  push32(0x11344aa9u); f_11346df0();
  /* 11344aa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344aac mov eax, 1 */
  EAX = (0x1u);
  /* 11344ab1 jmp 0x11344abf */
  goto L_11344abf;
L_11344ab3:;
  /* 11344ab3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11344ab5 call 0x11346df0 */
  push32(0x11344abau); f_11346df0();
  /* 11344aba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344abd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11344abf:;
  /* 11344abf mov esp, ebp */
  ESP = (EBP);
  /* 11344ac1 pop ebp */
  EBP = (pop32());
  /* 11344ac2 ret  */
  ESPCHK(0x113449e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ad0 @ 0x11344ad0 (28 bytes, 11 insns) */
void f_11344ad0(void) {
  FTRACE(0x11344ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11344ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11344ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11344ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 11344ad4 mov eax, dword ptr [0x11370e18] */
  EAX = (r32((uint32_t)(0x11370e18)));
  /* 11344ad9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11344adc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344adf mov dword ptr [0x11370e18], ecx */
  w32((uint32_t)(0x11370e18), (ECX));
  /* 11344ae5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344ae8 mov esp, ebp */
  ESP = (EBP);
  /* 11344aea pop ebp */
  EBP = (pop32());
  /* 11344aeb ret  */
  ESPCHK(0x11344ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004af0 @ 0x11344af0 (362 bytes, 116 insns) */
void f_11344af0(void) {
  FTRACE(0x11344af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11344af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11344af1 mov ebp, esp */
  EBP = (ESP);
  /* 11344af3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11344af6 push ebx */
  push32((uint32_t)(EBX));
  /* 11344af7 push esi */
  push32((uint32_t)(ESI));
  /* 11344af8 push edi */
  push32((uint32_t)(EDI));
  /* 11344af9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344afd jne 0x11344b2a */
  if (!C.zf) goto L_11344b2a;
L_11344aff:;
  /* 11344aff push 0x1136a97c */
  push32((uint32_t)(0x1136a97cu));
  /* 11344b04 push 0x1136a494 */
  push32((uint32_t)(0x1136a494u));
  /* 11344b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344b0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11344b0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11344b0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11344b11 call 0x11342410 */
  push32(0x11344b16u); f_11342410();
  /* 11344b16 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344b19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344b1c jne 0x11344b1f */
  if (!C.zf) goto L_11344b1f;
  /* 11344b1e int3  */
  x86_unimpl("int3 @ 0x11344b1e");
L_11344b1f:;
  /* 11344b1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11344b21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11344b23 jne 0x11344aff */
  if (!C.zf) goto L_11344aff;
  /* 11344b25 jmp 0x11344c53 */
  goto L_11344c53;
L_11344b2a:;
  /* 11344b2a push 9 */
  push32((uint32_t)(0x9u));
  /* 11344b2c call 0x11346d50 */
  push32(0x11344b31u); f_11346d50();
  /* 11344b31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344b34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344b37 mov edx, dword ptr [0x1136f4b4] */
  EDX = (r32((uint32_t)(0x1136f4b4)));
  /* 11344b3d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11344b3f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11344b46 jmp 0x11344b51 */
  goto L_11344b51;
L_11344b48:;
  /* 11344b48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344b4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11344b4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11344b51:;
  /* 11344b51 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344b55 jge 0x11344b75 */
  if ((C.sf==C.of)) goto L_11344b75;
  /* 11344b57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344b5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344b5d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11344b65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344b68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344b6b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11344b73 jmp 0x11344b48 */
  goto L_11344b48;
L_11344b75:;
  /* 11344b75 mov edx, dword ptr [0x1136f4b4] */
  EDX = (r32((uint32_t)(0x1136f4b4)));
  /* 11344b7b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11344b7e jmp 0x11344b88 */
  goto L_11344b88;
L_11344b80:;
  /* 11344b80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344b83 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11344b85 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11344b88:;
  /* 11344b88 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344b8c je 0x11344c31 */
  if (C.zf) goto L_11344c31;
  /* 11344b92 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344b95 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11344b98 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11344b9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11344b9f jl 0x11344c07 */
  if ((C.sf!=C.of)) goto L_11344c07;
  /* 11344ba1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344ba4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11344ba7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11344bad cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344bb0 jge 0x11344c07 */
  if ((C.sf==C.of)) goto L_11344c07;
  /* 11344bb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344bb5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11344bb8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11344bbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344bc1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11344bc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11344bc8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344bcb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11344bce and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11344bd4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344bd7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11344bdb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344bde mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11344be1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11344be6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344be9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11344bed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344bf0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11344bf3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344bf6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11344bf9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11344bfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344c01 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11344c05 jmp 0x11344c2c */
  goto L_11344c2c;
L_11344c07:;
  /* 11344c07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344c0a push edx */
  push32((uint32_t)(EDX));
  /* 11344c0b push 0x1136a958 */
  push32((uint32_t)(0x1136a958u));
  /* 11344c10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344c12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344c14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344c18 call 0x11342410 */
  push32(0x11344c1du); f_11342410();
  /* 11344c1d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344c20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344c23 jne 0x11344c26 */
  if (!C.zf) goto L_11344c26;
  /* 11344c25 int3  */
  x86_unimpl("int3 @ 0x11344c25");
L_11344c26:;
  /* 11344c26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11344c28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11344c2a jne 0x11344c07 */
  if (!C.zf) goto L_11344c07;
L_11344c2c:;
  /* 11344c2c jmp 0x11344b80 */
  goto L_11344b80;
L_11344c31:;
  /* 11344c31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344c34 mov edx, dword ptr [0x1136f4bc] */
  EDX = (r32((uint32_t)(0x1136f4bc)));
  /* 11344c3a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11344c3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344c40 mov ecx, dword ptr [0x1136f4b0] */
  ECX = (r32((uint32_t)(0x1136f4b0)));
  /* 11344c46 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11344c49 push 9 */
  push32((uint32_t)(0x9u));
  /* 11344c4b call 0x11346df0 */
  push32(0x11344c50u); f_11346df0();
  /* 11344c50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11344c53:;
  /* 11344c53 pop edi */
  EDI = (pop32());
  /* 11344c54 pop esi */
  ESI = (pop32());
  /* 11344c55 pop ebx */
  EBX = (pop32());
  /* 11344c56 mov esp, ebp */
  ESP = (EBP);
  /* 11344c58 pop ebp */
  EBP = (pop32());
  /* 11344c59 ret  */
  ESPCHK(0x11344af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c60 @ 0x11344c60 (291 bytes, 95 insns) */
void f_11344c60(void) {
  FTRACE(0x11344c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11344c60 push ebp */
  push32((uint32_t)(EBP));
  /* 11344c61 mov ebp, esp */
  EBP = (ESP);
  /* 11344c63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11344c66 push ebx */
  push32((uint32_t)(EBX));
  /* 11344c67 push esi */
  push32((uint32_t)(ESI));
  /* 11344c68 push edi */
  push32((uint32_t)(EDI));
  /* 11344c69 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11344c70 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344c74 je 0x11344c82 */
  if (C.zf) goto L_11344c82;
  /* 11344c76 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344c7a je 0x11344c82 */
  if (C.zf) goto L_11344c82;
  /* 11344c7c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344c80 jne 0x11344cb0 */
  if (!C.zf) goto L_11344cb0;
L_11344c82:;
  /* 11344c82 push 0x1136a9a4 */
  push32((uint32_t)(0x1136a9a4u));
  /* 11344c87 push 0x1136a494 */
  push32((uint32_t)(0x1136a494u));
  /* 11344c8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11344c8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11344c90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344c92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344c94 call 0x11342410 */
  push32(0x11344c99u); f_11342410();
  /* 11344c99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344c9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344c9f jne 0x11344ca2 */
  if (!C.zf) goto L_11344ca2;
  /* 11344ca1 int3  */
  x86_unimpl("int3 @ 0x11344ca1");
L_11344ca2:;
  /* 11344ca2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11344ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11344ca6 jne 0x11344c82 */
  if (!C.zf) goto L_11344c82;
  /* 11344ca8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11344cab jmp 0x11344d7c */
  goto L_11344d7c;
L_11344cb0:;
  /* 11344cb0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11344cb7 jmp 0x11344cc2 */
  goto L_11344cc2;
L_11344cb9:;
  /* 11344cb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344cbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11344cbf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11344cc2:;
  /* 11344cc2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344cc6 jge 0x11344d4c */
  if ((C.sf==C.of)) goto L_11344d4c;
  /* 11344ccc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344ccf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11344cd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344cd5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11344cd8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11344cdc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11344ce0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344ce3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344ce6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11344cea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344ced mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11344cf0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344cf3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11344cf6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11344cfa sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11344cfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344d01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344d04 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11344d08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344d0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344d0e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344d13 jne 0x11344d22 */
  if (!C.zf) goto L_11344d22;
  /* 11344d15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344d18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344d1b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344d20 je 0x11344d47 */
  if (C.zf) goto L_11344d47;
L_11344d22:;
  /* 11344d22 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344d26 je 0x11344d47 */
  if (C.zf) goto L_11344d47;
  /* 11344d28 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344d2c jne 0x11344d40 */
  if (!C.zf) goto L_11344d40;
  /* 11344d2e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344d32 jne 0x11344d47 */
  if (!C.zf) goto L_11344d47;
  /* 11344d34 mov eax, dword ptr [0x1136da84] */
  EAX = (r32((uint32_t)(0x1136da84)));
  /* 11344d39 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11344d3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11344d3e je 0x11344d47 */
  if (C.zf) goto L_11344d47;
L_11344d40:;
  /* 11344d40 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11344d47:;
  /* 11344d47 jmp 0x11344cb9 */
  goto L_11344cb9;
L_11344d4c:;
  /* 11344d4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11344d4f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11344d52 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11344d55 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11344d58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344d5b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11344d5e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11344d61 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11344d64 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11344d67 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11344d6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344d6d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11344d70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344d73 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11344d79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11344d7c:;
  /* 11344d7c pop edi */
  EDI = (pop32());
  /* 11344d7d pop esi */
  ESI = (pop32());
  /* 11344d7e pop ebx */
  EBX = (pop32());
  /* 11344d7f mov esp, ebp */
  ESP = (EBP);
  /* 11344d81 pop ebp */
  EBP = (pop32());
  /* 11344d82 ret  */
  ESPCHK(0x11344c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d90 @ 0x11344d90 (697 bytes, 253 insns) */
void f_11344d90(void) {
  FTRACE(0x11344d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11344d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11344d91 mov ebp, esp */
  EBP = (ESP);
  /* 11344d93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11344d96 push ebx */
  push32((uint32_t)(EBX));
  /* 11344d97 push esi */
  push32((uint32_t)(ESI));
  /* 11344d98 push edi */
  push32((uint32_t)(EDI));
  /* 11344d99 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11344da0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11344da2 call 0x11346d50 */
  push32(0x11344da7u); f_11346d50();
  /* 11344da7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11344daa:;
  /* 11344daa push 0x1136aa9c */
  push32((uint32_t)(0x1136aa9cu));
  /* 11344daf push 0x1136a494 */
  push32((uint32_t)(0x1136a494u));
  /* 11344db4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344db8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344dba push 0 */
  push32((uint32_t)(0x0u));
  /* 11344dbc call 0x11342410 */
  push32(0x11344dc1u); f_11342410();
  /* 11344dc1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344dc4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344dc7 jne 0x11344dca */
  if (!C.zf) goto L_11344dca;
  /* 11344dc9 int3  */
  x86_unimpl("int3 @ 0x11344dc9");
L_11344dca:;
  /* 11344dca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11344dcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11344dce jne 0x11344daa */
  if (!C.zf) goto L_11344daa;
  /* 11344dd0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344dd4 je 0x11344dde */
  if (C.zf) goto L_11344dde;
  /* 11344dd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11344dd9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11344ddb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11344dde:;
  /* 11344dde mov eax, dword ptr [0x1136f4b4] */
  EAX = (r32((uint32_t)(0x1136f4b4)));
  /* 11344de3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11344de6 jmp 0x11344df0 */
  goto L_11344df0;
L_11344de8:;
  /* 11344de8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344deb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11344ded mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11344df0:;
  /* 11344df0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344df4 je 0x11345012 */
  if (C.zf) goto L_11345012;
  /* 11344dfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344dfd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344e00 je 0x11345012 */
  if (C.zf) goto L_11345012;
  /* 11344e06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344e09 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11344e0c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11344e12 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344e15 je 0x11344e44 */
  if (C.zf) goto L_11344e44;
  /* 11344e17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344e1a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11344e1d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11344e23 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11344e25 je 0x11344e44 */
  if (C.zf) goto L_11344e44;
  /* 11344e27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344e2a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11344e2d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11344e32 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344e35 jne 0x11344e49 */
  if (!C.zf) goto L_11344e49;
  /* 11344e37 mov ecx, dword ptr [0x1136da84] */
  ECX = (r32((uint32_t)(0x1136da84)));
  /* 11344e3d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11344e40 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11344e42 jne 0x11344e49 */
  if (!C.zf) goto L_11344e49;
L_11344e44:;
  /* 11344e44 jmp 0x1134500d */
  goto L_1134500d;
L_11344e49:;
  /* 11344e49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344e4c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344e50 je 0x11344ec2 */
  if (C.zf) goto L_11344ec2;
  /* 11344e52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344e54 push 1 */
  push32((uint32_t)(0x1u));
  /* 11344e56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344e59 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11344e5c push ecx */
  push32((uint32_t)(ECX));
  /* 11344e5d call 0x11344900 */
  push32(0x11344e62u); f_11344900();
  /* 11344e62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344e65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11344e67 jne 0x11344e93 */
  if (!C.zf) goto L_11344e93;
L_11344e69:;
  /* 11344e69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344e6c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11344e6f push eax */
  push32((uint32_t)(EAX));
  /* 11344e70 push 0x1136aa88 */
  push32((uint32_t)(0x1136aa88u));
  /* 11344e75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344e77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344e79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344e7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11344e7d call 0x11342410 */
  push32(0x11344e82u); f_11342410();
  /* 11344e82 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344e85 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344e88 jne 0x11344e8b */
  if (!C.zf) goto L_11344e8b;
  /* 11344e8a int3  */
  x86_unimpl("int3 @ 0x11344e8a");
L_11344e8b:;
  /* 11344e8b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11344e8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11344e8f jne 0x11344e69 */
  if (!C.zf) goto L_11344e69;
  /* 11344e91 jmp 0x11344ec2 */
  goto L_11344ec2;
L_11344e93:;
  /* 11344e93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344e96 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11344e99 push eax */
  push32((uint32_t)(EAX));
  /* 11344e9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344e9d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11344ea0 push edx */
  push32((uint32_t)(EDX));
  /* 11344ea1 push 0x1136aa7c */
  push32((uint32_t)(0x1136aa7cu));
  /* 11344ea6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344ea8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344eaa push 0 */
  push32((uint32_t)(0x0u));
  /* 11344eac push 0 */
  push32((uint32_t)(0x0u));
  /* 11344eae call 0x11342410 */
  push32(0x11344eb3u); f_11342410();
  /* 11344eb3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344eb6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344eb9 jne 0x11344ebc */
  if (!C.zf) goto L_11344ebc;
  /* 11344ebb int3  */
  x86_unimpl("int3 @ 0x11344ebb");
L_11344ebc:;
  /* 11344ebc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11344ebe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11344ec0 jne 0x11344e93 */
  if (!C.zf) goto L_11344e93;
L_11344ec2:;
  /* 11344ec2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344ec5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11344ec8 push edx */
  push32((uint32_t)(EDX));
  /* 11344ec9 push 0x1136aa74 */
  push32((uint32_t)(0x1136aa74u));
  /* 11344ece push 0 */
  push32((uint32_t)(0x0u));
  /* 11344ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344ed4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344ed6 call 0x11342410 */
  push32(0x11344edbu); f_11342410();
  /* 11344edb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344ede cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344ee1 jne 0x11344ee4 */
  if (!C.zf) goto L_11344ee4;
  /* 11344ee3 int3  */
  x86_unimpl("int3 @ 0x11344ee3");
L_11344ee4:;
  /* 11344ee4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11344ee6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11344ee8 jne 0x11344ec2 */
  if (!C.zf) goto L_11344ec2;
  /* 11344eea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344eed mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11344ef0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11344ef6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344ef9 jne 0x11344f6c */
  if (!C.zf) goto L_11344f6c;
L_11344efb:;
  /* 11344efb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344efe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11344f01 push ecx */
  push32((uint32_t)(ECX));
  /* 11344f02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344f05 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11344f08 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11344f0b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11344f10 push eax */
  push32((uint32_t)(EAX));
  /* 11344f11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344f14 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11344f17 push ecx */
  push32((uint32_t)(ECX));
  /* 11344f18 push 0x1136aa40 */
  push32((uint32_t)(0x1136aa40u));
  /* 11344f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11344f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11344f21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344f25 call 0x11342410 */
  push32(0x11344f2au); f_11342410();
  /* 11344f2a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344f2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344f30 jne 0x11344f33 */
  if (!C.zf) goto L_11344f33;
  /* 11344f32 int3  */
  x86_unimpl("int3 @ 0x11344f32");
L_11344f33:;
  /* 11344f33 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11344f35 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11344f37 jne 0x11344efb */
  if (!C.zf) goto L_11344efb;
  /* 11344f39 cmp dword ptr [0x11370e18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11370e18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344f40 je 0x11344f5b */
  if (C.zf) goto L_11344f5b;
  /* 11344f42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344f45 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11344f48 push ecx */
  push32((uint32_t)(ECX));
  /* 11344f49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344f4c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11344f4f push edx */
  push32((uint32_t)(EDX));
  /* 11344f50 call dword ptr [0x11370e18] */
  call_ind((uint32_t)(r32((uint32_t)(0x11370e18))), 0x11344f56u);
  /* 11344f56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344f59 jmp 0x11344f67 */
  goto L_11344f67;
L_11344f5b:;
  /* 11344f5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344f5e push eax */
  push32((uint32_t)(EAX));
  /* 11344f5f call 0x11345050 */
  push32(0x11344f64u); f_11345050();
  /* 11344f64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11344f67:;
  /* 11344f67 jmp 0x1134500d */
  goto L_1134500d;
L_11344f6c:;
  /* 11344f6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344f6f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344f73 jne 0x11344fb2 */
  if (!C.zf) goto L_11344fb2;
L_11344f75:;
  /* 11344f75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344f78 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11344f7b push eax */
  push32((uint32_t)(EAX));
  /* 11344f7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344f7f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11344f82 push ecx */
  push32((uint32_t)(ECX));
  /* 11344f83 push 0x1136aa18 */
  push32((uint32_t)(0x1136aa18u));
  /* 11344f88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344f8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11344f8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11344f8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11344f90 call 0x11342410 */
  push32(0x11344f95u); f_11342410();
  /* 11344f95 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344f98 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344f9b jne 0x11344f9e */
  if (!C.zf) goto L_11344f9e;
  /* 11344f9d int3  */
  x86_unimpl("int3 @ 0x11344f9d");
L_11344f9e:;
  /* 11344f9e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11344fa0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11344fa2 jne 0x11344f75 */
  if (!C.zf) goto L_11344f75;
  /* 11344fa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344fa7 push eax */
  push32((uint32_t)(EAX));
  /* 11344fa8 call 0x11345050 */
  push32(0x11344fadu); f_11345050();
  /* 11344fad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344fb0 jmp 0x1134500d */
  goto L_1134500d;
L_11344fb2:;
  /* 11344fb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344fb5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11344fb8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11344fbe cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344fc1 jne 0x1134500d */
  if (!C.zf) goto L_1134500d;
L_11344fc3:;
  /* 11344fc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344fc6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11344fc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11344fca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344fcd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11344fd0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11344fd3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11344fd8 push eax */
  push32((uint32_t)(EAX));
  /* 11344fd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11344fdc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11344fdf push ecx */
  push32((uint32_t)(ECX));
  /* 11344fe0 push 0x1136a9e4 */
  push32((uint32_t)(0x1136a9e4u));
  /* 11344fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344fe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344fe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11344feb push 0 */
  push32((uint32_t)(0x0u));
  /* 11344fed call 0x11342410 */
  push32(0x11344ff2u); f_11342410();
  /* 11344ff2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11344ff5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11344ff8 jne 0x11344ffb */
  if (!C.zf) goto L_11344ffb;
  /* 11344ffa int3  */
  x86_unimpl("int3 @ 0x11344ffa");
L_11344ffb:;
  /* 11344ffb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11344ffd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11344fff jne 0x11344fc3 */
  if (!C.zf) goto L_11344fc3;
  /* 11345001 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345004 push eax */
  push32((uint32_t)(EAX));
  /* 11345005 call 0x11345050 */
  push32(0x1134500au); f_11345050();
  /* 1134500a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134500d:;
  /* 1134500d jmp 0x11344de8 */
  goto L_11344de8;
L_11345012:;
  /* 11345012 push 9 */
  push32((uint32_t)(0x9u));
  /* 11345014 call 0x11346df0 */
  push32(0x11345019u); f_11346df0();
  /* 11345019 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1134501c:;
  /* 1134501c push 0x1136a9cc */
  push32((uint32_t)(0x1136a9ccu));
  /* 11345021 push 0x1136a494 */
  push32((uint32_t)(0x1136a494u));
  /* 11345026 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345028 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134502a push 0 */
  push32((uint32_t)(0x0u));
  /* 1134502c push 0 */
  push32((uint32_t)(0x0u));
  /* 1134502e call 0x11342410 */
  push32(0x11345033u); f_11342410();
  /* 11345033 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345036 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345039 jne 0x1134503c */
  if (!C.zf) goto L_1134503c;
  /* 1134503b int3  */
  x86_unimpl("int3 @ 0x1134503b");
L_1134503c:;
  /* 1134503c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134503e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11345040 jne 0x1134501c */
  if (!C.zf) goto L_1134501c;
  /* 11345042 pop edi */
  EDI = (pop32());
  /* 11345043 pop esi */
  ESI = (pop32());
  /* 11345044 pop ebx */
  EBX = (pop32());
  /* 11345045 mov esp, ebp */
  ESP = (EBP);
  /* 11345047 pop ebp */
  EBP = (pop32());
  /* 11345048 ret  */
  ESPCHK(0x11344d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005050 @ 0x11345050 (276 bytes, 89 insns) */
void f_11345050(void) {
  FTRACE(0x11345050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11345050 push ebp */
  push32((uint32_t)(EBP));
  /* 11345051 mov ebp, esp */
  EBP = (ESP);
  /* 11345053 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11345056 push ebx */
  push32((uint32_t)(EBX));
  /* 11345057 push esi */
  push32((uint32_t)(ESI));
  /* 11345058 push edi */
  push32((uint32_t)(EDI));
  /* 11345059 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11345060 jmp 0x1134506b */
  goto L_1134506b;
L_11345062:;
  /* 11345062 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11345065 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345068 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1134506b:;
  /* 1134506b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134506e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345072 jge 0x1134507f */
  if ((C.sf==C.of)) goto L_1134507f;
  /* 11345074 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11345077 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1134507a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1134507d jmp 0x11345086 */
  goto L_11345086;
L_1134507f:;
  /* 1134507f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11345086:;
  /* 11345086 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11345089 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134508c jge 0x1134512c */
  if ((C.sf==C.of)) goto L_1134512c;
  /* 11345092 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11345095 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345098 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1134509b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1134509e cmp dword ptr [0x1136dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113450a5 jle 0x113450c3 */
  if ((C.zf||C.sf!=C.of)) goto L_113450c3;
  /* 113450a7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 113450ac mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 113450af and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113450b5 push ecx */
  push32((uint32_t)(ECX));
  /* 113450b6 call 0x11349360 */
  push32(0x113450bbu); f_11349360();
  /* 113450bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113450be mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 113450c1 jmp 0x113450e0 */
  goto L_113450e0;
L_113450c3:;
  /* 113450c3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113450c6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113450cc mov eax, dword ptr [0x1136dc98] */
  EAX = (r32((uint32_t)(0x1136dc98)));
  /* 113450d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113450d3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 113450d7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 113450dd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_113450e0:;
  /* 113450e0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113450e4 je 0x113450f4 */
  if (C.zf) goto L_113450f4;
  /* 113450e6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113450e9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113450ef mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 113450f2 jmp 0x113450fb */
  goto L_113450fb;
L_113450f4:;
  /* 113450f4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_113450fb:;
  /* 113450fb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 113450fe mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11345101 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11345105 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11345108 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1134510e push edx */
  push32((uint32_t)(EDX));
  /* 1134510f push 0x1136aac0 */
  push32((uint32_t)(0x1136aac0u));
  /* 11345114 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11345117 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134511a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1134511e push ecx */
  push32((uint32_t)(ECX));
  /* 1134511f call 0x11349260 */
  push32(0x11345124u); f_11349260();
  /* 11345124 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345127 jmp 0x11345062 */
  goto L_11345062;
L_1134512c:;
  /* 1134512c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1134512f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11345134:;
  /* 11345134 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11345137 push eax */
  push32((uint32_t)(EAX));
  /* 11345138 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1134513b push ecx */
  push32((uint32_t)(ECX));
  /* 1134513c push 0x1136aab0 */
  push32((uint32_t)(0x1136aab0u));
  /* 11345141 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345143 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345145 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345147 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345149 call 0x11342410 */
  push32(0x1134514eu); f_11342410();
  /* 1134514e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345151 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345154 jne 0x11345157 */
  if (!C.zf) goto L_11345157;
  /* 11345156 int3  */
  x86_unimpl("int3 @ 0x11345156");
L_11345157:;
  /* 11345157 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11345159 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134515b jne 0x11345134 */
  if (!C.zf) goto L_11345134;
  /* 1134515d pop edi */
  EDI = (pop32());
  /* 1134515e pop esi */
  ESI = (pop32());
  /* 1134515f pop ebx */
  EBX = (pop32());
  /* 11345160 mov esp, ebp */
  ESP = (EBP);
  /* 11345162 pop ebp */
  EBP = (pop32());
  /* 11345163 ret  */
  ESPCHK(0x11345050u, _esp0);
  ESP += 4; return;
}

/* FUN_10005170 @ 0x11345170 (116 bytes, 46 insns) */
void f_11345170(void) {
  FTRACE(0x11345170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11345170 push ebp */
  push32((uint32_t)(EBP));
  /* 11345171 mov ebp, esp */
  EBP = (ESP);
  /* 11345173 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11345176 push ebx */
  push32((uint32_t)(EBX));
  /* 11345177 push esi */
  push32((uint32_t)(ESI));
  /* 11345178 push edi */
  push32((uint32_t)(EDI));
  /* 11345179 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1134517c push eax */
  push32((uint32_t)(EAX));
  /* 1134517d call 0x11344af0 */
  push32(0x11345182u); f_11344af0();
  /* 11345182 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345185 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345189 jne 0x113451a4 */
  if (!C.zf) goto L_113451a4;
  /* 1134518b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134518f jne 0x113451a4 */
  if (!C.zf) goto L_113451a4;
  /* 11345191 mov ecx, dword ptr [0x1136da84] */
  ECX = (r32((uint32_t)(0x1136da84)));
  /* 11345197 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1134519a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134519c je 0x113451db */
  if (C.zf) goto L_113451db;
  /* 1134519e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113451a2 je 0x113451db */
  if (C.zf) goto L_113451db;
L_113451a4:;
  /* 113451a4 push 0x1136aac8 */
  push32((uint32_t)(0x1136aac8u));
  /* 113451a9 push 0x1136a494 */
  push32((uint32_t)(0x1136a494u));
  /* 113451ae push 0 */
  push32((uint32_t)(0x0u));
  /* 113451b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113451b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113451b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113451b6 call 0x11342410 */
  push32(0x113451bbu); f_11342410();
  /* 113451bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113451be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113451c1 jne 0x113451c4 */
  if (!C.zf) goto L_113451c4;
  /* 113451c3 int3  */
  x86_unimpl("int3 @ 0x113451c3");
L_113451c4:;
  /* 113451c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113451c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113451c8 jne 0x113451a4 */
  if (!C.zf) goto L_113451a4;
  /* 113451ca push 0 */
  push32((uint32_t)(0x0u));
  /* 113451cc call 0x11344d90 */
  push32(0x113451d1u); f_11344d90();
  /* 113451d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113451d4 mov eax, 1 */
  EAX = (0x1u);
  /* 113451d9 jmp 0x113451dd */
  goto L_113451dd;
L_113451db:;
  /* 113451db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113451dd:;
  /* 113451dd pop edi */
  EDI = (pop32());
  /* 113451de pop esi */
  ESI = (pop32());
  /* 113451df pop ebx */
  EBX = (pop32());
  /* 113451e0 mov esp, ebp */
  ESP = (EBP);
  /* 113451e2 pop ebp */
  EBP = (pop32());
  /* 113451e3 ret  */
  ESPCHK(0x11345170u, _esp0);
  ESP += 4; return;
}

/* FUN_100051f0 @ 0x113451f0 (197 bytes, 79 insns) */
void f_113451f0(void) {
  FTRACE(0x113451f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113451f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113451f1 mov ebp, esp */
  EBP = (ESP);
  /* 113451f3 push ecx */
  push32((uint32_t)(ECX));
  /* 113451f4 push ebx */
  push32((uint32_t)(EBX));
  /* 113451f5 push esi */
  push32((uint32_t)(ESI));
  /* 113451f6 push edi */
  push32((uint32_t)(EDI));
  /* 113451f7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113451fb jne 0x11345202 */
  if (!C.zf) goto L_11345202;
  /* 113451fd jmp 0x113452ae */
  goto L_113452ae;
L_11345202:;
  /* 11345202 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11345209 jmp 0x11345214 */
  goto L_11345214;
L_1134520b:;
  /* 1134520b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134520e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345211 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11345214:;
  /* 11345214 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345218 jge 0x1134525e */
  if ((C.sf==C.of)) goto L_1134525e;
L_1134521a:;
  /* 1134521a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134521d mov edx, dword ptr [ecx*4 + 0x1136da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1136da94)));
  /* 11345224 push edx */
  push32((uint32_t)(EDX));
  /* 11345225 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345228 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134522b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1134522f push edx */
  push32((uint32_t)(EDX));
  /* 11345230 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345233 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11345236 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1134523a push edx */
  push32((uint32_t)(EDX));
  /* 1134523b push 0x1136ab24 */
  push32((uint32_t)(0x1136ab24u));
  /* 11345240 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345242 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345244 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345246 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345248 call 0x11342410 */
  push32(0x1134524du); f_11342410();
  /* 1134524d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345250 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345253 jne 0x11345256 */
  if (!C.zf) goto L_11345256;
  /* 11345255 int3  */
  x86_unimpl("int3 @ 0x11345255");
L_11345256:;
  /* 11345256 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11345258 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134525a jne 0x1134521a */
  if (!C.zf) goto L_1134521a;
  /* 1134525c jmp 0x1134520b */
  goto L_1134520b;
L_1134525e:;
  /* 1134525e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11345261 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11345264 push edx */
  push32((uint32_t)(EDX));
  /* 11345265 push 0x1136ab00 */
  push32((uint32_t)(0x1136ab00u));
  /* 1134526a push 0 */
  push32((uint32_t)(0x0u));
  /* 1134526c push 0 */
  push32((uint32_t)(0x0u));
  /* 1134526e push 0 */
  push32((uint32_t)(0x0u));
  /* 11345270 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345272 call 0x11342410 */
  push32(0x11345277u); f_11342410();
  /* 11345277 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134527a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134527d jne 0x11345280 */
  if (!C.zf) goto L_11345280;
  /* 1134527f int3  */
  x86_unimpl("int3 @ 0x1134527f");
L_11345280:;
  /* 11345280 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11345282 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11345284 jne 0x1134525e */
  if (!C.zf) goto L_1134525e;
L_11345286:;
  /* 11345286 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11345289 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1134528c push edx */
  push32((uint32_t)(EDX));
  /* 1134528d push 0x1136aae0 */
  push32((uint32_t)(0x1136aae0u));
  /* 11345292 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345294 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345296 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345298 push 0 */
  push32((uint32_t)(0x0u));
  /* 1134529a call 0x11342410 */
  push32(0x1134529fu); f_11342410();
  /* 1134529f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113452a2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113452a5 jne 0x113452a8 */
  if (!C.zf) goto L_113452a8;
  /* 113452a7 int3  */
  x86_unimpl("int3 @ 0x113452a7");
L_113452a8:;
  /* 113452a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113452aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113452ac jne 0x11345286 */
  if (!C.zf) goto L_11345286;
L_113452ae:;
  /* 113452ae pop edi */
  EDI = (pop32());
  /* 113452af pop esi */
  ESI = (pop32());
  /* 113452b0 pop ebx */
  EBX = (pop32());
  /* 113452b1 mov esp, ebp */
  ESP = (EBP);
  /* 113452b3 pop ebp */
  EBP = (pop32());
  /* 113452b4 ret  */
  ESPCHK(0x113451f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100052c0 @ 0x113452c0 (329 bytes, 102 insns) */
void f_113452c0(void) {
  FTRACE(0x113452c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113452c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113452c1 mov ebp, esp */
  EBP = (ESP);
  /* 113452c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113452c6 cmp dword ptr [0x11370f90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11370f90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113452cd jne 0x113452d4 */
  if (!C.zf) goto L_113452d4;
  /* 113452cf call 0x11349c00 */
  push32(0x113452d4u); f_11349c00();
L_113452d4:;
  /* 113452d4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113452db mov eax, dword ptr [0x1136f450] */
  EAX = (r32((uint32_t)(0x1136f450)));
  /* 113452e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113452e3:;
  /* 113452e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113452e6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113452e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113452eb je 0x11345319 */
  if (C.zf) goto L_11345319;
  /* 113452ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113452f0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113452f3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113452f6 je 0x11345301 */
  if (C.zf) goto L_11345301;
  /* 113452f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113452fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113452fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11345301:;
  /* 11345301 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345304 push eax */
  push32((uint32_t)(EAX));
  /* 11345305 call 0x11346180 */
  push32(0x1134530au); f_11346180();
  /* 1134530a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134530d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345310 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11345314 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11345317 jmp 0x113452e3 */
  goto L_113452e3;
L_11345319:;
  /* 11345319 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1134531b push 0x1136ab44 */
  push32((uint32_t)(0x1136ab44u));
  /* 11345320 push 2 */
  push32((uint32_t)(0x2u));
  /* 11345322 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11345325 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1134532c push ecx */
  push32((uint32_t)(ECX));
  /* 1134532d call 0x11343350 */
  push32(0x11345332u); f_11343350();
  /* 11345332 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345335 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11345338 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134533b mov dword ptr [0x1136f484], edx */
  w32((uint32_t)(0x1136f484), (EDX));
  /* 11345341 cmp dword ptr [0x1136f484], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f484))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345348 jne 0x11345354 */
  if (!C.zf) goto L_11345354;
  /* 1134534a push 9 */
  push32((uint32_t)(0x9u));
  /* 1134534c call 0x113422c0 */
  push32(0x11345351u); f_113422c0();
  /* 11345351 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11345354:;
  /* 11345354 mov eax, dword ptr [0x1136f450] */
  EAX = (r32((uint32_t)(0x1136f450)));
  /* 11345359 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134535c jmp 0x11345367 */
  goto L_11345367;
L_1134535e:;
  /* 1134535e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345361 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345364 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11345367:;
  /* 11345367 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134536a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1134536d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134536f je 0x113453d7 */
  if (C.zf) goto L_113453d7;
  /* 11345371 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345374 push ecx */
  push32((uint32_t)(ECX));
  /* 11345375 call 0x11346180 */
  push32(0x1134537au); f_11346180();
  /* 1134537a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134537d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345380 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11345383 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345386 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11345389 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134538c je 0x113453d5 */
  if (C.zf) goto L_113453d5;
  /* 1134538e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11345390 push 0x1136ab44 */
  push32((uint32_t)(0x1136ab44u));
  /* 11345395 push 2 */
  push32((uint32_t)(0x2u));
  /* 11345397 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134539a push ecx */
  push32((uint32_t)(ECX));
  /* 1134539b call 0x11343350 */
  push32(0x113453a0u); f_11343350();
  /* 113453a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113453a3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113453a6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 113453a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113453ab cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113453ae jne 0x113453ba */
  if (!C.zf) goto L_113453ba;
  /* 113453b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 113453b2 call 0x113422c0 */
  push32(0x113453b7u); f_113422c0();
  /* 113453b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113453ba:;
  /* 113453ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113453bd push ecx */
  push32((uint32_t)(ECX));
  /* 113453be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113453c1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113453c3 push eax */
  push32((uint32_t)(EAX));
  /* 113453c4 call 0x11346300 */
  push32(0x113453c9u); f_11346300();
  /* 113453c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113453cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113453cf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113453d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_113453d5:;
  /* 113453d5 jmp 0x1134535e */
  goto L_1134535e;
L_113453d7:;
  /* 113453d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113453d9 mov edx, dword ptr [0x1136f450] */
  EDX = (r32((uint32_t)(0x1136f450)));
  /* 113453df push edx */
  push32((uint32_t)(EDX));
  /* 113453e0 call 0x11343de0 */
  push32(0x113453e5u); f_11343de0();
  /* 113453e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113453e8 mov dword ptr [0x1136f450], 0 */
  w32((uint32_t)(0x1136f450), (0x0u));
  /* 113453f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113453f5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113453fb mov dword ptr [0x11370f80], 1 */
  w32((uint32_t)(0x11370f80), (0x1u));
  /* 11345405 mov esp, ebp */
  ESP = (EBP);
  /* 11345407 pop ebp */
  EBP = (pop32());
  /* 11345408 ret  */
  ESPCHK(0x113452c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005410 @ 0x11345410 (216 bytes, 69 insns) */
void f_11345410(void) {
  FTRACE(0x11345410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11345410 push ebp */
  push32((uint32_t)(EBP));
  /* 11345411 mov ebp, esp */
  EBP = (ESP);
  /* 11345413 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11345416 cmp dword ptr [0x11370f90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11370f90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134541d jne 0x11345424 */
  if (!C.zf) goto L_11345424;
  /* 1134541f call 0x11349c00 */
  push32(0x11345424u); f_11349c00();
L_11345424:;
  /* 11345424 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11345429 push 0x1136f4c0 */
  push32((uint32_t)(0x1136f4c0u));
  /* 1134542e push 0 */
  push32((uint32_t)(0x0u));
  /* 11345430 call dword ptr [0x1137133c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137133c))), 0x11345436u);
  /* 11345436 mov dword ptr [0x1136f494], 0x1136f4c0 */
  w32((uint32_t)(0x1136f494), (0x1136f4c0u));
  /* 11345440 mov eax, dword ptr [0x11370fac] */
  EAX = (r32((uint32_t)(0x11370fac)));
  /* 11345445 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11345448 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134544a jne 0x11345457 */
  if (!C.zf) goto L_11345457;
  /* 1134544c mov edx, dword ptr [0x1136f494] */
  EDX = (r32((uint32_t)(0x1136f494)));
  /* 11345452 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11345455 jmp 0x1134545f */
  goto L_1134545f;
L_11345457:;
  /* 11345457 mov eax, dword ptr [0x11370fac] */
  EAX = (r32((uint32_t)(0x11370fac)));
  /* 1134545c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1134545f:;
  /* 1134545f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11345462 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11345465 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11345468 push edx */
  push32((uint32_t)(EDX));
  /* 11345469 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1134546c push eax */
  push32((uint32_t)(EAX));
  /* 1134546d push 0 */
  push32((uint32_t)(0x0u));
  /* 1134546f push 0 */
  push32((uint32_t)(0x0u));
  /* 11345471 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11345474 push ecx */
  push32((uint32_t)(ECX));
  /* 11345475 call 0x113454f0 */
  push32(0x1134547au); f_113454f0();
  /* 1134547a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134547d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11345482 push 0x1136ab50 */
  push32((uint32_t)(0x1136ab50u));
  /* 11345487 push 2 */
  push32((uint32_t)(0x2u));
  /* 11345489 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134548c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134548f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11345492 push ecx */
  push32((uint32_t)(ECX));
  /* 11345493 call 0x11343350 */
  push32(0x11345498u); f_11343350();
  /* 11345498 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134549b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1134549e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113454a2 jne 0x113454ae */
  if (!C.zf) goto L_113454ae;
  /* 113454a4 push 8 */
  push32((uint32_t)(0x8u));
  /* 113454a6 call 0x113422c0 */
  push32(0x113454abu); f_113422c0();
  /* 113454ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113454ae:;
  /* 113454ae lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 113454b1 push edx */
  push32((uint32_t)(EDX));
  /* 113454b2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 113454b5 push eax */
  push32((uint32_t)(EAX));
  /* 113454b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113454b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113454bc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 113454bf push eax */
  push32((uint32_t)(EAX));
  /* 113454c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113454c3 push ecx */
  push32((uint32_t)(ECX));
  /* 113454c4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113454c7 push edx */
  push32((uint32_t)(EDX));
  /* 113454c8 call 0x113454f0 */
  push32(0x113454cdu); f_113454f0();
  /* 113454cd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113454d0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113454d3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113454d6 mov dword ptr [0x1136f478], eax */
  w32((uint32_t)(0x1136f478), (EAX));
  /* 113454db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113454de mov dword ptr [0x1136f47c], ecx */
  w32((uint32_t)(0x1136f47c), (ECX));
  /* 113454e4 mov esp, ebp */
  ESP = (EBP);
  /* 113454e6 pop ebp */
  EBP = (pop32());
  /* 113454e7 ret  */
  ESPCHK(0x11345410u, _esp0);
  ESP += 4; return;
}

/* FUN_100054f0 @ 0x113454f0 (1060 bytes, 360 insns) */
void f_113454f0(void) {
  FTRACE(0x113454f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113454f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113454f1 mov ebp, esp */
  EBP = (ESP);
  /* 113454f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113454f6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113454f9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113454ff mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11345502 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11345508 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134550b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1134550e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345512 je 0x11345525 */
  if (C.zf) goto L_11345525;
  /* 11345514 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11345517 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134551a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1134551c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134551f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345522 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11345525:;
  /* 11345525 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345528 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134552b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134552e jne 0x113455fd */
  if (!C.zf) goto L_113455fd;
L_11345534:;
  /* 11345534 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345537 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134553a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1134553d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345540 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11345543 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345546 je 0x113455c2 */
  if (C.zf) goto L_113455c2;
  /* 11345548 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134554b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1134554e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11345550 je 0x113455c2 */
  if (C.zf) goto L_113455c2;
  /* 11345552 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345555 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11345557 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11345559 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134555b mov al, byte ptr [edx + 0x11370ce1] */
  AL = (r8((uint32_t)(EDX + 0x11370ce1)));
  /* 11345561 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11345564 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11345566 je 0x11345597 */
  if (C.zf) goto L_11345597;
  /* 11345568 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1134556b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1134556d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345570 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11345573 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11345575 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345579 je 0x11345597 */
  if (C.zf) goto L_11345597;
  /* 1134557b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134557e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345581 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11345583 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11345585 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11345588 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134558b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1134558e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345591 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345594 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11345597:;
  /* 11345597 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1134559a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1134559c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134559f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113455a2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113455a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113455a8 je 0x113455bd */
  if (C.zf) goto L_113455bd;
  /* 113455aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113455ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113455b0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113455b2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113455b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113455b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113455ba mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_113455bd:;
  /* 113455bd jmp 0x11345534 */
  goto L_11345534;
L_113455c2:;
  /* 113455c2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113455c5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113455c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113455ca mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113455cd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113455cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113455d3 je 0x113455e4 */
  if (C.zf) goto L_113455e4;
  /* 113455d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113455d8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 113455db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113455de add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113455e1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_113455e4:;
  /* 113455e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113455e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113455ea cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113455ed jne 0x113455f8 */
  if (!C.zf) goto L_113455f8;
  /* 113455ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113455f2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113455f5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113455f8:;
  /* 113455f8 jmp 0x113456cc */
  goto L_113456cc;
L_113455fd:;
  /* 113455fd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11345600 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11345602 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345605 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11345608 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1134560a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134560e je 0x11345623 */
  if (C.zf) goto L_11345623;
  /* 11345610 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11345613 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345616 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11345618 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1134561a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134561d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345620 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11345623:;
  /* 11345623 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345626 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11345628 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1134562b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134562e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345631 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11345634 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11345637 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1134563d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1134563f mov dl, byte ptr [ecx + 0x11370ce1] */
  DL = (r8((uint32_t)(ECX + 0x11370ce1)));
  /* 11345645 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11345648 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134564a je 0x1134567b */
  if (C.zf) goto L_1134567b;
  /* 1134564c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1134564f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11345651 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345654 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11345657 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11345659 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134565d je 0x11345672 */
  if (C.zf) goto L_11345672;
  /* 1134565f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11345662 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345665 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11345667 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11345669 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134566c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134566f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11345672:;
  /* 11345672 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345675 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345678 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1134567b:;
  /* 1134567b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134567e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11345684 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345687 je 0x113456a7 */
  if (C.zf) goto L_113456a7;
  /* 11345689 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134568c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11345691 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11345693 je 0x113456a7 */
  if (C.zf) goto L_113456a7;
  /* 11345695 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11345698 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1134569e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113456a1 jne 0x113455fd */
  if (!C.zf) goto L_113455fd;
L_113456a7:;
  /* 113456a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113456aa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113456b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113456b2 jne 0x113456bf */
  if (!C.zf) goto L_113456bf;
  /* 113456b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113456b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113456ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113456bd jmp 0x113456cc */
  goto L_113456cc;
L_113456bf:;
  /* 113456bf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113456c3 je 0x113456cc */
  if (C.zf) goto L_113456cc;
  /* 113456c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113456c8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_113456cc:;
  /* 113456cc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_113456d3:;
  /* 113456d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113456d6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113456d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113456db je 0x113456fe */
  if (C.zf) goto L_113456fe;
L_113456dd:;
  /* 113456dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113456e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113456e3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113456e6 je 0x113456f3 */
  if (C.zf) goto L_113456f3;
  /* 113456e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113456eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113456ee cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113456f1 jne 0x113456fe */
  if (!C.zf) goto L_113456fe;
L_113456f3:;
  /* 113456f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113456f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113456f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113456fc jmp 0x113456dd */
  goto L_113456dd;
L_113456fe:;
  /* 113456fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345701 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11345704 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11345706 jne 0x1134570d */
  if (!C.zf) goto L_1134570d;
  /* 11345708 jmp 0x113458eb */
  goto L_113458eb;
L_1134570d:;
  /* 1134570d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345711 je 0x11345724 */
  if (C.zf) goto L_11345724;
  /* 11345713 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11345716 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11345719 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1134571b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134571e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345721 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11345724:;
  /* 11345724 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11345727 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11345729 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134572c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134572f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11345731:;
  /* 11345731 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11345738 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1134573f:;
  /* 1134573f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345742 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11345745 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345748 jne 0x1134575e */
  if (!C.zf) goto L_1134575e;
  /* 1134574a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134574d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345750 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11345753 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11345756 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345759 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1134575c jmp 0x1134573f */
  goto L_1134573f;
L_1134575e:;
  /* 1134575e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345761 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11345764 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345767 jne 0x113457ba */
  if (!C.zf) goto L_113457ba;
  /* 11345769 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134576c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1134576e mov ecx, 2 */
  ECX = (0x2u);
  /* 11345773 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11345775 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11345777 jne 0x113457b2 */
  if (!C.zf) goto L_113457b2;
  /* 11345779 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134577d je 0x1134579f */
  if (C.zf) goto L_1134579f;
  /* 1134577f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345782 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11345786 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345789 jne 0x11345796 */
  if (!C.zf) goto L_11345796;
  /* 1134578b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134578e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345791 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11345794 jmp 0x1134579d */
  goto L_1134579d;
L_11345796:;
  /* 11345796 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1134579d:;
  /* 1134579d jmp 0x113457a6 */
  goto L_113457a6;
L_1134579f:;
  /* 1134579f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_113457a6:;
  /* 113457a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113457a8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113457ac sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 113457af mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_113457b2:;
  /* 113457b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113457b5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113457b7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_113457ba:;
  /* 113457ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113457bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113457c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113457c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 113457c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113457c8 je 0x113457ee */
  if (C.zf) goto L_113457ee;
  /* 113457ca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113457ce je 0x113457df */
  if (C.zf) goto L_113457df;
  /* 113457d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113457d3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 113457d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113457d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113457dc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_113457df:;
  /* 113457df mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113457e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113457e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113457e7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113457ea mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113457ec jmp 0x113457ba */
  goto L_113457ba;
L_113457ee:;
  /* 113457ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113457f1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113457f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113457f6 je 0x11345814 */
  if (C.zf) goto L_11345814;
  /* 113457f8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113457fc jne 0x11345819 */
  if (!C.zf) goto L_11345819;
  /* 113457fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345801 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11345804 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345807 je 0x11345814 */
  if (C.zf) goto L_11345814;
  /* 11345809 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134580c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1134580f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345812 jne 0x11345819 */
  if (!C.zf) goto L_11345819;
L_11345814:;
  /* 11345814 jmp 0x113458c4 */
  goto L_113458c4;
L_11345819:;
  /* 11345819 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134581d je 0x113458b6 */
  if (C.zf) goto L_113458b6;
  /* 11345823 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345827 je 0x1134587d */
  if (C.zf) goto L_1134587d;
  /* 11345829 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134582c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134582e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11345830 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11345832 mov cl, byte ptr [eax + 0x11370ce1] */
  CL = (r8((uint32_t)(EAX + 0x11370ce1)));
  /* 11345838 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1134583b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1134583d je 0x11345868 */
  if (C.zf) goto L_11345868;
  /* 1134583f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11345842 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345845 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11345847 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11345849 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134584c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134584f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11345852 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345855 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345858 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134585b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1134585e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11345860 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345863 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11345866 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11345868:;
  /* 11345868 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134586b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134586e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11345870 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11345872 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11345875 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345878 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1134587b jmp 0x113458a9 */
  goto L_113458a9;
L_1134587d:;
  /* 1134587d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345880 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11345882 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11345884 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11345886 mov cl, byte ptr [eax + 0x11370ce1] */
  CL = (r8((uint32_t)(EAX + 0x11370ce1)));
  /* 1134588c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1134588f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11345891 je 0x113458a9 */
  if (C.zf) goto L_113458a9;
  /* 11345893 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345896 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345899 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1134589c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1134589f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113458a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113458a4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113458a7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_113458a9:;
  /* 113458a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113458ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113458ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113458b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113458b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_113458b6:;
  /* 113458b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113458b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113458bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113458bf jmp 0x11345731 */
  goto L_11345731;
L_113458c4:;
  /* 113458c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113458c8 je 0x113458d9 */
  if (C.zf) goto L_113458d9;
  /* 113458ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113458cd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 113458d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113458d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113458d6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_113458d9:;
  /* 113458d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113458dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113458de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113458e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113458e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113458e6 jmp 0x113456d3 */
  goto L_113456d3;
L_113458eb:;
  /* 113458eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113458ef je 0x11345903 */
  if (C.zf) goto L_11345903;
  /* 113458f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113458f4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113458fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113458fd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345900 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11345903:;
  /* 11345903 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11345906 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11345908 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134590b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134590e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11345910 mov esp, ebp */
  ESP = (EBP);
  /* 11345912 pop ebp */
  EBP = (pop32());
  /* 11345913 ret  */
  ESPCHK(0x113454f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005920 @ 0x11345920 (537 bytes, 173 insns) */
void f_11345920(void) {
  FTRACE(0x11345920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11345920 push ebp */
  push32((uint32_t)(EBP));
  /* 11345921 mov ebp, esp */
  EBP = (ESP);
  /* 11345923 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11345926 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1134592d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11345934 cmp dword ptr [0x1136f5c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f5c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134593b jne 0x1134597a */
  if (!C.zf) goto L_1134597a;
  /* 1134593d call dword ptr [0x11371398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371398))), 0x11345943u);
  /* 11345943 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11345946 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134594a je 0x11345958 */
  if (C.zf) goto L_11345958;
  /* 1134594c mov dword ptr [0x1136f5c4], 1 */
  w32((uint32_t)(0x1136f5c4), (0x1u));
  /* 11345956 jmp 0x1134597a */
  goto L_1134597a;
L_11345958:;
  /* 11345958 call dword ptr [0x11371394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371394))), 0x1134595eu);
  /* 1134595e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11345961 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345965 je 0x11345973 */
  if (C.zf) goto L_11345973;
  /* 11345967 mov dword ptr [0x1136f5c4], 2 */
  w32((uint32_t)(0x1136f5c4), (0x2u));
  /* 11345971 jmp 0x1134597a */
  goto L_1134597a;
L_11345973:;
  /* 11345973 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11345975 jmp 0x11345b35 */
  goto L_11345b35;
L_1134597a:;
  /* 1134597a cmp dword ptr [0x1136f5c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136f5c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345981 jne 0x11345a7e */
  if (!C.zf) goto L_11345a7e;
  /* 11345987 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134598b jne 0x113459a3 */
  if (!C.zf) goto L_113459a3;
  /* 1134598d call dword ptr [0x11371398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371398))), 0x11345993u);
  /* 11345993 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11345996 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134599a jne 0x113459a3 */
  if (!C.zf) goto L_113459a3;
  /* 1134599c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134599e jmp 0x11345b35 */
  goto L_11345b35;
L_113459a3:;
  /* 113459a3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113459a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113459a9:;
  /* 113459a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113459ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113459ae mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 113459b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113459b3 je 0x113459d5 */
  if (C.zf) goto L_113459d5;
  /* 113459b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113459b8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113459bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113459be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113459c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113459c3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 113459c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113459c8 jne 0x113459d3 */
  if (!C.zf) goto L_113459d3;
  /* 113459ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113459cd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113459d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113459d3:;
  /* 113459d3 jmp 0x113459a9 */
  goto L_113459a9;
L_113459d5:;
  /* 113459d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113459d8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113459db sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 113459dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113459e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113459e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113459e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113459e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113459e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113459eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113459ee push edx */
  push32((uint32_t)(EDX));
  /* 113459ef mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113459f2 push eax */
  push32((uint32_t)(EAX));
  /* 113459f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113459f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113459f7 call dword ptr [0x11371390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371390))), 0x113459fdu);
  /* 113459fd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11345a00 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345a04 je 0x11345a24 */
  if (C.zf) goto L_11345a24;
  /* 11345a06 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11345a08 push 0x1136ab5c */
  push32((uint32_t)(0x1136ab5cu));
  /* 11345a0d push 2 */
  push32((uint32_t)(0x2u));
  /* 11345a0f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11345a12 push ecx */
  push32((uint32_t)(ECX));
  /* 11345a13 call 0x11343350 */
  push32(0x11345a18u); f_11343350();
  /* 11345a18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345a1b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11345a1e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345a22 jne 0x11345a35 */
  if (!C.zf) goto L_11345a35;
L_11345a24:;
  /* 11345a24 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11345a27 push edx */
  push32((uint32_t)(EDX));
  /* 11345a28 call dword ptr [0x1137138c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137138c))), 0x11345a2eu);
  /* 11345a2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11345a30 jmp 0x11345b35 */
  goto L_11345b35;
L_11345a35:;
  /* 11345a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345a37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345a39 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11345a3c push eax */
  push32((uint32_t)(EAX));
  /* 11345a3d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11345a40 push ecx */
  push32((uint32_t)(ECX));
  /* 11345a41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345a44 push edx */
  push32((uint32_t)(EDX));
  /* 11345a45 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11345a48 push eax */
  push32((uint32_t)(EAX));
  /* 11345a49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345a4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11345a4d call dword ptr [0x11371390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371390))), 0x11345a53u);
  /* 11345a53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11345a55 jne 0x11345a6c */
  if (!C.zf) goto L_11345a6c;
  /* 11345a57 push 2 */
  push32((uint32_t)(0x2u));
  /* 11345a59 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11345a5c push ecx */
  push32((uint32_t)(ECX));
  /* 11345a5d call 0x11343de0 */
  push32(0x11345a62u); f_11343de0();
  /* 11345a62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345a65 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11345a6c:;
  /* 11345a6c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11345a6f push edx */
  push32((uint32_t)(EDX));
  /* 11345a70 call dword ptr [0x1137138c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137138c))), 0x11345a76u);
  /* 11345a76 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11345a79 jmp 0x11345b35 */
  goto L_11345b35;
L_11345a7e:;
  /* 11345a7e cmp dword ptr [0x1136f5c4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1136f5c4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345a85 jne 0x11345b33 */
  if (!C.zf) goto L_11345b33;
  /* 11345a8b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345a8f jne 0x11345aa7 */
  if (!C.zf) goto L_11345aa7;
  /* 11345a91 call dword ptr [0x11371394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371394))), 0x11345a97u);
  /* 11345a97 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11345a9a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345a9e jne 0x11345aa7 */
  if (!C.zf) goto L_11345aa7;
  /* 11345aa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11345aa2 jmp 0x11345b35 */
  goto L_11345b35;
L_11345aa7:;
  /* 11345aa7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11345aaa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11345aad:;
  /* 11345aad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11345ab0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11345ab3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11345ab5 je 0x11345ad5 */
  if (C.zf) goto L_11345ad5;
  /* 11345ab7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11345aba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345abd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11345ac0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11345ac3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11345ac6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11345ac8 jne 0x11345ad3 */
  if (!C.zf) goto L_11345ad3;
  /* 11345aca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11345acd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345ad0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11345ad3:;
  /* 11345ad3 jmp 0x11345aad */
  goto L_11345aad;
L_11345ad5:;
  /* 11345ad5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11345ad8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11345adb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345ade mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11345ae1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11345ae6 push 0x1136ab5c */
  push32((uint32_t)(0x1136ab5cu));
  /* 11345aeb push 2 */
  push32((uint32_t)(0x2u));
  /* 11345aed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11345af0 push edx */
  push32((uint32_t)(EDX));
  /* 11345af1 call 0x11343350 */
  push32(0x11345af6u); f_11343350();
  /* 11345af6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345af9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11345afc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345b00 jne 0x11345b10 */
  if (!C.zf) goto L_11345b10;
  /* 11345b02 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11345b05 push eax */
  push32((uint32_t)(EAX));
  /* 11345b06 call dword ptr [0x11371360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371360))), 0x11345b0cu);
  /* 11345b0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11345b0e jmp 0x11345b35 */
  goto L_11345b35;
L_11345b10:;
  /* 11345b10 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11345b13 push ecx */
  push32((uint32_t)(ECX));
  /* 11345b14 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11345b17 push edx */
  push32((uint32_t)(EDX));
  /* 11345b18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11345b1b push eax */
  push32((uint32_t)(EAX));
  /* 11345b1c call 0x11349c30 */
  push32(0x11345b21u); f_11349c30();
  /* 11345b21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345b24 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11345b27 push ecx */
  push32((uint32_t)(ECX));
  /* 11345b28 call dword ptr [0x11371360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371360))), 0x11345b2eu);
  /* 11345b2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11345b31 jmp 0x11345b35 */
  goto L_11345b35;
L_11345b33:;
  /* 11345b33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11345b35:;
  /* 11345b35 mov esp, ebp */
  ESP = (EBP);
  /* 11345b37 pop ebp */
  EBP = (pop32());
  /* 11345b38 ret  */
  ESPCHK(0x11345920u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b40 @ 0x11345b40 (77 bytes, 25 insns) */
void f_11345b40(void) {
  FTRACE(0x11345b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11345b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11345b41 mov ebp, esp */
  EBP = (ESP);
  /* 11345b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345b45 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11345b4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11345b4c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345b50 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11345b53 push eax */
  push32((uint32_t)(EAX));
  /* 11345b54 call dword ptr [0x1137139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137139c))), 0x11345b5au);
  /* 11345b5a mov dword ptr [0x11370e0c], eax */
  w32((uint32_t)(0x11370e0c), (EAX));
  /* 11345b5f cmp dword ptr [0x11370e0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11370e0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345b66 jne 0x11345b6c */
  if (!C.zf) goto L_11345b6c;
  /* 11345b68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11345b6a jmp 0x11345b8b */
  goto L_11345b8b;
L_11345b6c:;
  /* 11345b6c call 0x113475f0 */
  push32(0x11345b71u); f_113475f0();
  /* 11345b71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11345b73 jne 0x11345b86 */
  if (!C.zf) goto L_11345b86;
  /* 11345b75 mov ecx, dword ptr [0x11370e0c] */
  ECX = (r32((uint32_t)(0x11370e0c)));
  /* 11345b7b push ecx */
  push32((uint32_t)(ECX));
  /* 11345b7c call dword ptr [0x11371388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371388))), 0x11345b82u);
  /* 11345b82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11345b84 jmp 0x11345b8b */
  goto L_11345b8b;
L_11345b86:;
  /* 11345b86 mov eax, 1 */
  EAX = (0x1u);
L_11345b8b:;
  /* 11345b8b pop ebp */
  EBP = (pop32());
  /* 11345b8c ret  */
  ESPCHK(0x11345b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b90 @ 0x11345b90 (156 bytes, 48 insns) */
void f_11345b90(void) {
  FTRACE(0x11345b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11345b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11345b91 mov ebp, esp */
  EBP = (ESP);
  /* 11345b93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11345b96 mov eax, dword ptr [0x11370e08] */
  EAX = (r32((uint32_t)(0x11370e08)));
  /* 11345b9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11345b9e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11345ba5 jmp 0x11345bb0 */
  goto L_11345bb0;
L_11345ba7:;
  /* 11345ba7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345baa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345bad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11345bb0:;
  /* 11345bb0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345bb3 cmp edx, dword ptr [0x11370e04] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11370e04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345bb9 jge 0x11345c06 */
  if ((C.sf==C.of)) goto L_11345c06;
  /* 11345bbb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11345bc0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11345bc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11345bc8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11345bcb push ecx */
  push32((uint32_t)(ECX));
  /* 11345bcc call dword ptr [0x113713a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113713a4))), 0x11345bd2u);
  /* 11345bd2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11345bd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345bd9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11345bdc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11345bdf push eax */
  push32((uint32_t)(EAX));
  /* 11345be0 call dword ptr [0x113713a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113713a4))), 0x11345be6u);
  /* 11345be6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11345be9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11345bec push edx */
  push32((uint32_t)(EDX));
  /* 11345bed push 0 */
  push32((uint32_t)(0x0u));
  /* 11345bef mov eax, dword ptr [0x11370e0c] */
  EAX = (r32((uint32_t)(0x11370e0c)));
  /* 11345bf4 push eax */
  push32((uint32_t)(EAX));
  /* 11345bf5 call dword ptr [0x113713a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113713a0))), 0x11345bfbu);
  /* 11345bfb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11345bfe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345c01 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11345c04 jmp 0x11345ba7 */
  goto L_11345ba7;
L_11345c06:;
  /* 11345c06 mov edx, dword ptr [0x11370e08] */
  EDX = (r32((uint32_t)(0x11370e08)));
  /* 11345c0c push edx */
  push32((uint32_t)(EDX));
  /* 11345c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11345c0f mov eax, dword ptr [0x11370e0c] */
  EAX = (r32((uint32_t)(0x11370e0c)));
  /* 11345c14 push eax */
  push32((uint32_t)(EAX));
  /* 11345c15 call dword ptr [0x113713a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113713a0))), 0x11345c1bu);
  /* 11345c1b mov ecx, dword ptr [0x11370e0c] */
  ECX = (r32((uint32_t)(0x11370e0c)));
  /* 11345c21 push ecx */
  push32((uint32_t)(ECX));
  /* 11345c22 call dword ptr [0x11371388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371388))), 0x11345c28u);
  /* 11345c28 mov esp, ebp */
  ESP = (EBP);
  /* 11345c2a pop ebp */
  EBP = (pop32());
  /* 11345c2b ret  */
  ESPCHK(0x11345b90u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11345c30 (73 bytes, 19 insns) */
void f_11345c30(void) {
  FTRACE(0x11345c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11345c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11345c31 mov ebp, esp */
  EBP = (ESP);
  /* 11345c33 cmp dword ptr [0x1136f458], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136f458))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345c3a je 0x11345c4e */
  if (C.zf) goto L_11345c4e;
  /* 11345c3c cmp dword ptr [0x1136f458], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f458))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345c43 jne 0x11345c77 */
  if (!C.zf) goto L_11345c77;
  /* 11345c45 cmp dword ptr [0x1136f45c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136f45c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345c4c jne 0x11345c77 */
  if (!C.zf) goto L_11345c77;
L_11345c4e:;
  /* 11345c4e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11345c53 call 0x11345c80 */
  push32(0x11345c58u); f_11345c80();
  /* 11345c58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345c5b cmp dword ptr [0x1136f5c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f5c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345c62 je 0x11345c6a */
  if (C.zf) goto L_11345c6a;
  /* 11345c64 call dword ptr [0x1136f5c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136f5c8))), 0x11345c6au);
L_11345c6a:;
  /* 11345c6a push 0xff */
  push32((uint32_t)(0xffu));
  /* 11345c6f call 0x11345c80 */
  push32(0x11345c74u); f_11345c80();
  /* 11345c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11345c77:;
  /* 11345c77 pop ebp */
  EBP = (pop32());
  /* 11345c78 ret  */
  ESPCHK(0x11345c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c80 @ 0x11345c80 (447 bytes, 131 insns) */
void f_11345c80(void) {
  FTRACE(0x11345c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11345c80 push ebp */
  push32((uint32_t)(EBP));
  /* 11345c81 mov ebp, esp */
  EBP = (ESP);
  /* 11345c83 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11345c89 push ebx */
  push32((uint32_t)(EBX));
  /* 11345c8a push esi */
  push32((uint32_t)(ESI));
  /* 11345c8b push edi */
  push32((uint32_t)(EDI));
  /* 11345c8c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11345c93 jmp 0x11345c9e */
  goto L_11345c9e;
L_11345c95:;
  /* 11345c95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11345c98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345c9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11345c9e:;
  /* 11345c9e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345ca2 jae 0x11345cb7 */
  if (!C.cf) goto L_11345cb7;
  /* 11345ca4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11345ca7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11345caa cmp edx, dword ptr [ecx*8 + 0x1136dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1136dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345cb1 jne 0x11345cb5 */
  if (!C.zf) goto L_11345cb5;
  /* 11345cb3 jmp 0x11345cb7 */
  goto L_11345cb7;
L_11345cb5:;
  /* 11345cb5 jmp 0x11345c95 */
  goto L_11345c95;
L_11345cb7:;
  /* 11345cb7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11345cba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11345cbd cmp ecx, dword ptr [eax*8 + 0x1136dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1136dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345cc4 jne 0x11345e38 */
  if (!C.zf) goto L_11345e38;
  /* 11345cca cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345cd1 je 0x11345cf4 */
  if (C.zf) goto L_11345cf4;
  /* 11345cd3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11345cd6 mov eax, dword ptr [edx*8 + 0x1136dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1136dab4)));
  /* 11345cdd push eax */
  push32((uint32_t)(EAX));
  /* 11345cde push 0 */
  push32((uint32_t)(0x0u));
  /* 11345ce0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345ce2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345ce4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11345ce6 call 0x11342410 */
  push32(0x11345cebu); f_11342410();
  /* 11345ceb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345cee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345cf1 jne 0x11345cf4 */
  if (!C.zf) goto L_11345cf4;
  /* 11345cf3 int3  */
  x86_unimpl("int3 @ 0x11345cf3");
L_11345cf4:;
  /* 11345cf4 cmp dword ptr [0x1136f458], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136f458))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345cfb je 0x11345d0f */
  if (C.zf) goto L_11345d0f;
  /* 11345cfd cmp dword ptr [0x1136f458], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f458))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345d04 jne 0x11345d48 */
  if (!C.zf) goto L_11345d48;
  /* 11345d06 cmp dword ptr [0x1136f45c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136f45c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345d0d jne 0x11345d48 */
  if (!C.zf) goto L_11345d48;
L_11345d0f:;
  /* 11345d0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11345d11 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11345d14 push ecx */
  push32((uint32_t)(ECX));
  /* 11345d15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11345d18 mov eax, dword ptr [edx*8 + 0x1136dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1136dab4)));
  /* 11345d1f push eax */
  push32((uint32_t)(EAX));
  /* 11345d20 call 0x11346180 */
  push32(0x11345d25u); f_11346180();
  /* 11345d25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345d28 push eax */
  push32((uint32_t)(EAX));
  /* 11345d29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11345d2c mov edx, dword ptr [ecx*8 + 0x1136dab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1136dab4)));
  /* 11345d33 push edx */
  push32((uint32_t)(EDX));
  /* 11345d34 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11345d36 call dword ptr [0x11371320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371320))), 0x11345d3cu);
  /* 11345d3c push eax */
  push32((uint32_t)(EAX));
  /* 11345d3d call dword ptr [0x11371324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371324))), 0x11345d43u);
  /* 11345d43 jmp 0x11345e38 */
  goto L_11345e38;
L_11345d48:;
  /* 11345d48 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345d4f je 0x11345e38 */
  if (C.zf) goto L_11345e38;
  /* 11345d55 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11345d5a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11345d60 push eax */
  push32((uint32_t)(EAX));
  /* 11345d61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345d63 call dword ptr [0x1137133c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137133c))), 0x11345d69u);
  /* 11345d69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11345d6b jne 0x11345d81 */
  if (!C.zf) goto L_11345d81;
  /* 11345d6d push 0x1136a3c4 */
  push32((uint32_t)(0x1136a3c4u));
  /* 11345d72 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11345d78 push ecx */
  push32((uint32_t)(ECX));
  /* 11345d79 call 0x11346300 */
  push32(0x11345d7eu); f_11346300();
  /* 11345d7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11345d81:;
  /* 11345d81 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11345d87 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11345d8a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11345d8d push eax */
  push32((uint32_t)(EAX));
  /* 11345d8e call 0x11346180 */
  push32(0x11345d93u); f_11346180();
  /* 11345d93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345d96 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345d99 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345d9c jbe 0x11345dca */
  if ((C.cf||C.zf)) goto L_11345dca;
  /* 11345d9e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11345da4 push ecx */
  push32((uint32_t)(ECX));
  /* 11345da5 call 0x11346180 */
  push32(0x11345daau); f_11346180();
  /* 11345daa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345dad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11345db0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11345db4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11345db7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11345db9 push 0x1136a3c0 */
  push32((uint32_t)(0x1136a3c0u));
  /* 11345dbe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11345dc1 push ecx */
  push32((uint32_t)(ECX));
  /* 11345dc2 call 0x11346b70 */
  push32(0x11345dc7u); f_11346b70();
  /* 11345dc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11345dca:;
  /* 11345dca push 0x1136ae18 */
  push32((uint32_t)(0x1136ae18u));
  /* 11345dcf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11345dd5 push edx */
  push32((uint32_t)(EDX));
  /* 11345dd6 call 0x11346300 */
  push32(0x11345ddbu); f_11346300();
  /* 11345ddb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345dde mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11345de1 push eax */
  push32((uint32_t)(EAX));
  /* 11345de2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11345de8 push ecx */
  push32((uint32_t)(ECX));
  /* 11345de9 call 0x11346310 */
  push32(0x11345deeu); f_11346310();
  /* 11345dee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345df1 push 0x1136a338 */
  push32((uint32_t)(0x1136a338u));
  /* 11345df6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11345dfc push edx */
  push32((uint32_t)(EDX));
  /* 11345dfd call 0x11346310 */
  push32(0x11345e02u); f_11346310();
  /* 11345e02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345e05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11345e08 mov ecx, dword ptr [eax*8 + 0x1136dab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1136dab4)));
  /* 11345e0f push ecx */
  push32((uint32_t)(ECX));
  /* 11345e10 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11345e16 push edx */
  push32((uint32_t)(EDX));
  /* 11345e17 call 0x11346310 */
  push32(0x11345e1cu); f_11346310();
  /* 11345e1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345e1f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11345e24 push 0x1136adf0 */
  push32((uint32_t)(0x1136adf0u));
  /* 11345e29 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11345e2f push eax */
  push32((uint32_t)(EAX));
  /* 11345e30 call 0x11346ab0 */
  push32(0x11345e35u); f_11346ab0();
  /* 11345e35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11345e38:;
  /* 11345e38 pop edi */
  EDI = (pop32());
  /* 11345e39 pop esi */
  ESI = (pop32());
  /* 11345e3a pop ebx */
  EBX = (pop32());
  /* 11345e3b mov esp, ebp */
  ESP = (EBP);
  /* 11345e3d pop ebp */
  EBP = (pop32());
  /* 11345e3e ret  */
  ESPCHK(0x11345c80u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11345e40 (80 bytes, 27 insns) */
void f_11345e40(void) {
  FTRACE(0x11345e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11345e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11345e41 mov ebp, esp */
  EBP = (ESP);
  /* 11345e43 push ecx */
  push32((uint32_t)(ECX));
  /* 11345e44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11345e4b jmp 0x11345e56 */
  goto L_11345e56;
L_11345e4d:;
  /* 11345e4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345e50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345e53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11345e56:;
  /* 11345e56 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345e5a jae 0x11345e6f */
  if (!C.cf) goto L_11345e6f;
  /* 11345e5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345e5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11345e62 cmp edx, dword ptr [ecx*8 + 0x1136dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1136dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345e69 jne 0x11345e6d */
  if (!C.zf) goto L_11345e6d;
  /* 11345e6b jmp 0x11345e6f */
  goto L_11345e6f;
L_11345e6d:;
  /* 11345e6d jmp 0x11345e4d */
  goto L_11345e4d;
L_11345e6f:;
  /* 11345e6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345e72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11345e75 cmp ecx, dword ptr [eax*8 + 0x1136dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1136dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345e7c jne 0x11345e8a */
  if (!C.zf) goto L_11345e8a;
  /* 11345e7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345e81 mov eax, dword ptr [edx*8 + 0x1136dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1136dab4)));
  /* 11345e88 jmp 0x11345e8c */
  goto L_11345e8c;
L_11345e8a:;
  /* 11345e8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11345e8c:;
  /* 11345e8c mov esp, ebp */
  ESP = (EBP);
  /* 11345e8e pop ebp */
  EBP = (pop32());
  /* 11345e8f ret  */
  ESPCHK(0x11345e40u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11345e90 (66 bytes, 28 insns) */
void f_11345e90(void) {
  FTRACE(0x11345e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11345e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11345e91 mov ebp, esp */
  EBP = (ESP);
  /* 11345e93 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345e97 jne 0x11345eb7 */
  if (!C.zf) goto L_11345eb7;
  /* 11345e99 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345e9d jge 0x11345eb7 */
  if ((C.sf==C.of)) goto L_11345eb7;
  /* 11345e9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11345ea1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11345ea4 push eax */
  push32((uint32_t)(EAX));
  /* 11345ea5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11345ea8 push ecx */
  push32((uint32_t)(ECX));
  /* 11345ea9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11345eac push edx */
  push32((uint32_t)(EDX));
  /* 11345ead call 0x11345ee0 */
  push32(0x11345eb2u); f_11345ee0();
  /* 11345eb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345eb5 jmp 0x11345ecd */
  goto L_11345ecd;
L_11345eb7:;
  /* 11345eb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345eb9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11345ebc push eax */
  push32((uint32_t)(EAX));
  /* 11345ebd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11345ec0 push ecx */
  push32((uint32_t)(ECX));
  /* 11345ec1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11345ec4 push edx */
  push32((uint32_t)(EDX));
  /* 11345ec5 call 0x11345ee0 */
  push32(0x11345ecau); f_11345ee0();
  /* 11345eca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11345ecd:;
  /* 11345ecd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11345ed0 pop ebp */
  EBP = (pop32());
  /* 11345ed1 ret  */
  ESPCHK(0x11345e90u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11345ee0 (194 bytes, 71 insns) */
void f_11345ee0(void) {
  FTRACE(0x11345ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11345ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11345ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11345ee3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11345ee6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11345ee9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11345eec cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345ef0 je 0x11345f09 */
  if (C.zf) goto L_11345f09;
  /* 11345ef2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345ef5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11345ef8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345efb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345efe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11345f01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11345f04 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11345f06 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11345f09:;
  /* 11345f09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345f0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11345f0f:;
  /* 11345f0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11345f12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11345f14 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11345f17 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11345f1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11345f1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11345f1f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11345f22 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11345f25 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345f29 jbe 0x11345f41 */
  if ((C.cf||C.zf)) goto L_11345f41;
  /* 11345f2b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11345f2e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345f31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345f34 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11345f36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345f39 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345f3c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11345f3f jmp 0x11345f55 */
  goto L_11345f55;
L_11345f41:;
  /* 11345f41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11345f44 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345f47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345f4a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11345f4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345f4f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345f52 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11345f55:;
  /* 11345f55 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345f59 ja 0x11345f0f */
  if ((!C.cf&&!C.zf)) goto L_11345f0f;
  /* 11345f5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345f5e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11345f61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345f64 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11345f67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11345f6a:;
  /* 11345f6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345f6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11345f6f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11345f72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345f75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11345f78 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11345f7a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11345f7c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11345f7f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11345f82 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11345f84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345f87 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11345f8a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11345f8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11345f90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11345f93 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11345f96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11345f99 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345f9c jb 0x11345f6a */
  if (C.cf) goto L_11345f6a;
  /* 11345f9e mov esp, ebp */
  ESP = (EBP);
  /* 11345fa0 pop ebp */
  EBP = (pop32());
  /* 11345fa1 ret  */
  ESPCHK(0x11345ee0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11345fb0 (63 bytes, 24 insns) */
void f_11345fb0(void) {
  FTRACE(0x11345fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11345fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11345fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11345fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11345fb4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345fb8 jne 0x11345fc9 */
  if (!C.zf) goto L_11345fc9;
  /* 11345fba cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11345fbe jge 0x11345fc9 */
  if ((C.sf==C.of)) goto L_11345fc9;
  /* 11345fc0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11345fc7 jmp 0x11345fd0 */
  goto L_11345fd0;
L_11345fc9:;
  /* 11345fc9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11345fd0:;
  /* 11345fd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11345fd3 push eax */
  push32((uint32_t)(EAX));
  /* 11345fd4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11345fd7 push ecx */
  push32((uint32_t)(ECX));
  /* 11345fd8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11345fdb push edx */
  push32((uint32_t)(EDX));
  /* 11345fdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11345fdf push eax */
  push32((uint32_t)(EAX));
  /* 11345fe0 call 0x11345ee0 */
  push32(0x11345fe5u); f_11345ee0();
  /* 11345fe5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11345fe8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11345feb mov esp, ebp */
  ESP = (EBP);
  /* 11345fed pop ebp */
  EBP = (pop32());
  /* 11345fee ret  */
  ESPCHK(0x11345fb0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11345ff0 (30 bytes, 14 insns) */
void f_11345ff0(void) {
  FTRACE(0x11345ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11345ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11345ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11345ff3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11345ff5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11345ff8 push eax */
  push32((uint32_t)(EAX));
  /* 11345ff9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11345ffc push ecx */
  push32((uint32_t)(ECX));
  /* 11345ffd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11346000 push edx */
  push32((uint32_t)(EDX));
  /* 11346001 call 0x11345ee0 */
  push32(0x11346006u); f_11345ee0();
  /* 11346006 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11346009 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134600c pop ebp */
  EBP = (pop32());
  /* 1134600d ret  */
  ESPCHK(0x11345ff0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11346010 (72 bytes, 28 insns) */
void f_11346010(void) {
  FTRACE(0x11346010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346010 push ebp */
  push32((uint32_t)(EBP));
  /* 11346011 mov ebp, esp */
  EBP = (ESP);
  /* 11346013 push ecx */
  push32((uint32_t)(ECX));
  /* 11346014 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346018 jne 0x11346031 */
  if (!C.zf) goto L_11346031;
  /* 1134601a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134601e jg 0x11346031 */
  if ((!C.zf&&C.sf==C.of)) goto L_11346031;
  /* 11346020 jl 0x11346028 */
  if ((C.sf!=C.of)) goto L_11346028;
  /* 11346022 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346026 jae 0x11346031 */
  if (!C.cf) goto L_11346031;
L_11346028:;
  /* 11346028 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1134602f jmp 0x11346038 */
  goto L_11346038;
L_11346031:;
  /* 11346031 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11346038:;
  /* 11346038 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134603b push eax */
  push32((uint32_t)(EAX));
  /* 1134603c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134603f push ecx */
  push32((uint32_t)(ECX));
  /* 11346040 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11346043 push edx */
  push32((uint32_t)(EDX));
  /* 11346044 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11346047 push eax */
  push32((uint32_t)(EAX));
  /* 11346048 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134604b push ecx */
  push32((uint32_t)(ECX));
  /* 1134604c call 0x11346060 */
  push32(0x11346051u); f_11346060();
  /* 11346051 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11346054 mov esp, ebp */
  ESP = (EBP);
  /* 11346056 pop ebp */
  EBP = (pop32());
  /* 11346057 ret  */
  ESPCHK(0x11346010u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11346060 (242 bytes, 91 insns) */
void f_11346060(void) {
  FTRACE(0x11346060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346060 push ebp */
  push32((uint32_t)(EBP));
  /* 11346061 mov ebp, esp */
  EBP = (ESP);
  /* 11346063 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11346066 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11346069 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134606c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346070 je 0x11346094 */
  if (C.zf) goto L_11346094;
  /* 11346072 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346075 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11346078 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134607b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134607e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11346081 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11346084 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11346086 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11346089 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134608c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1134608e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11346091 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11346094:;
  /* 11346094 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346097 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1134609a:;
  /* 1134609a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134609d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1134609f push ecx */
  push32((uint32_t)(ECX));
  /* 113460a0 push eax */
  push32((uint32_t)(EAX));
  /* 113460a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113460a4 push edx */
  push32((uint32_t)(EDX));
  /* 113460a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113460a8 push eax */
  push32((uint32_t)(EAX));
  /* 113460a9 call 0x11349fe0 */
  push32(0x113460aeu); f_11349fe0();
  /* 113460ae mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113460b1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113460b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113460b6 push edx */
  push32((uint32_t)(EDX));
  /* 113460b7 push ecx */
  push32((uint32_t)(ECX));
  /* 113460b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113460bb push eax */
  push32((uint32_t)(EAX));
  /* 113460bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113460bf push ecx */
  push32((uint32_t)(ECX));
  /* 113460c0 call 0x11349f70 */
  push32(0x113460c5u); f_11349f70();
  /* 113460c5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113460c8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 113460cb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113460cf jbe 0x113460e7 */
  if ((C.cf||C.zf)) goto L_113460e7;
  /* 113460d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113460d4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113460d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113460da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113460dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113460df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113460e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113460e5 jmp 0x113460fb */
  goto L_113460fb;
L_113460e7:;
  /* 113460e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113460ea add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113460ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113460f0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113460f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113460f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113460f8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113460fb:;
  /* 113460fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113460ff ja 0x1134609a */
  if ((!C.cf&&!C.zf)) goto L_1134609a;
  /* 11346101 jb 0x11346109 */
  if (C.cf) goto L_11346109;
  /* 11346103 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346107 ja 0x1134609a */
  if ((!C.cf&&!C.zf)) goto L_1134609a;
L_11346109:;
  /* 11346109 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134610c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1134610f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346112 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11346115 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11346118:;
  /* 11346118 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134611b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1134611d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11346120 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346123 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346126 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11346128 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1134612a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134612d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11346130 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11346132 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346135 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11346138 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1134613b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134613e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11346141 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11346144 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346147 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134614a jb 0x11346118 */
  if (C.cf) goto L_11346118;
  /* 1134614c mov esp, ebp */
  ESP = (EBP);
  /* 1134614e pop ebp */
  EBP = (pop32());
  /* 1134614f ret 0x14 */
  ESPCHK(0x11346060u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11346160 (31 bytes, 15 insns) */
void f_11346160(void) {
  FTRACE(0x11346160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346160 push ebp */
  push32((uint32_t)(EBP));
  /* 11346161 mov ebp, esp */
  EBP = (ESP);
  /* 11346163 push 0 */
  push32((uint32_t)(0x0u));
  /* 11346165 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11346168 push eax */
  push32((uint32_t)(EAX));
  /* 11346169 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134616c push ecx */
  push32((uint32_t)(ECX));
  /* 1134616d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11346170 push edx */
  push32((uint32_t)(EDX));
  /* 11346171 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11346174 push eax */
  push32((uint32_t)(EAX));
  /* 11346175 call 0x11346060 */
  push32(0x1134617au); f_11346060();
  /* 1134617a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134617d pop ebp */
  EBP = (pop32());
  /* 1134617e ret  */
  ESPCHK(0x11346160u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11346180 (123 bytes, 44 insns) */
void f_11346180(void) {
  FTRACE(0x11346180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346180 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11346184 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1134618a je 0x113461a0 */
  if (C.zf) goto L_113461a0;
L_1134618c:;
  /* 1134618c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1134618e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1134618f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11346191 je 0x113461d3 */
  if (C.zf) goto L_113461d3;
  /* 11346193 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11346199 jne 0x1134618c */
  if (!C.zf) goto L_1134618c;
  /* 1134619b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_113461a0:;
  /* 113461a0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 113461a2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 113461a7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113461a9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113461ac xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113461ae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113461b1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 113461b6 je 0x113461a0 */
  if (C.zf) goto L_113461a0;
  /* 113461b8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 113461bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113461bd je 0x113461f1 */
  if (C.zf) goto L_113461f1;
  /* 113461bf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 113461c1 je 0x113461e7 */
  if (C.zf) goto L_113461e7;
  /* 113461c3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 113461c8 je 0x113461dd */
  if (C.zf) goto L_113461dd;
  /* 113461ca test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 113461cf je 0x113461d3 */
  if (C.zf) goto L_113461d3;
  /* 113461d1 jmp 0x113461a0 */
  goto L_113461a0;
L_113461d3:;
  /* 113461d3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 113461d6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 113461da sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113461dc ret  */
  ESPCHK(0x11346180u, _esp0);
  ESP += 4; return;
L_113461dd:;
  /* 113461dd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 113461e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 113461e4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113461e6 ret  */
  ESPCHK(0x11346180u, _esp0);
  ESP += 4; return;
L_113461e7:;
  /* 113461e7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 113461ea mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 113461ee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113461f0 ret  */
  ESPCHK(0x11346180u, _esp0);
  ESP += 4; return;
L_113461f1:;
  /* 113461f1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 113461f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 113461f8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113461fa ret  */
  ESPCHK(0x11346180u, _esp0);
  ESP += 4; return;
}

/* FUN_10006200 @ 0x11346200 (249 bytes, 93 insns) */
void f_11346200(void) {
  FTRACE(0x11346200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346200 push ebp */
  push32((uint32_t)(EBP));
  /* 11346201 mov ebp, esp */
  EBP = (ESP);
  /* 11346203 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11346206 push ebx */
  push32((uint32_t)(EBX));
  /* 11346207 push esi */
  push32((uint32_t)(ESI));
  /* 11346208 push edi */
  push32((uint32_t)(EDI));
  /* 11346209 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1134620c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1134620f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11346212 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11346215:;
  /* 11346215 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346219 jne 0x11346239 */
  if (!C.zf) goto L_11346239;
  /* 1134621b push 0x1136ae50 */
  push32((uint32_t)(0x1136ae50u));
  /* 11346220 push 0 */
  push32((uint32_t)(0x0u));
  /* 11346222 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11346224 push 0x1136ae44 */
  push32((uint32_t)(0x1136ae44u));
  /* 11346229 push 2 */
  push32((uint32_t)(0x2u));
  /* 1134622b call 0x11342410 */
  push32(0x11346230u); f_11342410();
  /* 11346230 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11346233 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346236 jne 0x11346239 */
  if (!C.zf) goto L_11346239;
  /* 11346238 int3  */
  x86_unimpl("int3 @ 0x11346238");
L_11346239:;
  /* 11346239 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1134623b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1134623d jne 0x11346215 */
  if (!C.zf) goto L_11346215;
L_1134623f:;
  /* 1134623f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346243 jne 0x11346263 */
  if (!C.zf) goto L_11346263;
  /* 11346245 push 0x1136ae34 */
  push32((uint32_t)(0x1136ae34u));
  /* 1134624a push 0 */
  push32((uint32_t)(0x0u));
  /* 1134624c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1134624e push 0x1136ae44 */
  push32((uint32_t)(0x1136ae44u));
  /* 11346253 push 2 */
  push32((uint32_t)(0x2u));
  /* 11346255 call 0x11342410 */
  push32(0x1134625au); f_11342410();
  /* 1134625a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134625d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346260 jne 0x11346263 */
  if (!C.zf) goto L_11346263;
  /* 11346262 int3  */
  x86_unimpl("int3 @ 0x11346262");
L_11346263:;
  /* 11346263 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11346265 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11346267 jne 0x1134623f */
  if (!C.zf) goto L_1134623f;
  /* 11346269 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1134626c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11346273 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11346276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11346279 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1134627c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1134627f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11346282 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11346284 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11346287 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134628a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1134628d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11346290 push edx */
  push32((uint32_t)(EDX));
  /* 11346291 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11346294 push eax */
  push32((uint32_t)(EAX));
  /* 11346295 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11346298 push ecx */
  push32((uint32_t)(ECX));
  /* 11346299 call 0x1134a2e0 */
  push32(0x1134629eu); f_1134a2e0();
  /* 1134629e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113462a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 113462a4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113462a7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 113462aa sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113462ad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113462b0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 113462b3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113462b6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113462ba jl 0x113462de */
  if ((C.sf!=C.of)) goto L_113462de;
  /* 113462bc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113462bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113462c1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 113462c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113462c6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113462cc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 113462cf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113462d2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113462d4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113462d7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113462da mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113462dc jmp 0x113462ef */
  goto L_113462ef;
L_113462de:;
  /* 113462de mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113462e1 push eax */
  push32((uint32_t)(EAX));
  /* 113462e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113462e4 call 0x1134a060 */
  push32(0x113462e9u); f_1134a060();
  /* 113462e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113462ec mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_113462ef:;
  /* 113462ef mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113462f2 pop edi */
  EDI = (pop32());
  /* 113462f3 pop esi */
  ESI = (pop32());
  /* 113462f4 pop ebx */
  EBX = (pop32());
  /* 113462f5 mov esp, ebp */
  ESP = (EBP);
  /* 113462f7 pop ebp */
  EBP = (pop32());
  /* 113462f8 ret  */
  ESPCHK(0x11346200u, _esp0);
  ESP += 4; return;
}

/* FUN_10006300 @ 0x11346300 (7 bytes, 3 insns) */
void f_11346300(void) {
  FTRACE(0x11346300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346300 push edi */
  push32((uint32_t)(EDI));
  /* 11346301 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11346305 jmp 0x11346371 */
  jmp_ind(0x11346371u); return;
}

/* FUN_10006310 @ 0x11346310 (224 bytes, 84 insns) */
void f_11346310(void) {
  FTRACE(0x11346310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346310 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11346314 push edi */
  push32((uint32_t)(EDI));
  /* 11346315 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1134631b je 0x1134632c */
  if (C.zf) goto L_1134632c;
L_1134631d:;
  /* 1134631d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1134631f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11346320 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11346322 je 0x1134635f */
  if (C.zf) goto L_1134635f;
  /* 11346324 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1134632a jne 0x1134631d */
  if (!C.zf) goto L_1134631d;
L_1134632c:;
  /* 1134632c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1134632e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11346333 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11346335 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11346338 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1134633a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134633d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11346342 je 0x1134632c */
  if (C.zf) goto L_1134632c;
  /* 11346344 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11346347 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11346349 je 0x1134636e */
  if (C.zf) goto L_1134636e;
  /* 1134634b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1134634d je 0x11346369 */
  if (C.zf) goto L_11346369;
  /* 1134634f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11346354 je 0x11346364 */
  if (C.zf) goto L_11346364;
  /* 11346356 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1134635b je 0x1134635f */
  if (C.zf) goto L_1134635f;
  /* 1134635d jmp 0x1134632c */
  goto L_1134632c;
L_1134635f:;
  /* 1134635f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11346362 jmp 0x11346371 */
  goto L_11346371;
L_11346364:;
  /* 11346364 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11346367 jmp 0x11346371 */
  goto L_11346371;
L_11346369:;
  /* 11346369 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1134636c jmp 0x11346371 */
  goto L_11346371;
L_1134636e:;
  /* 1134636e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11346371:;
  /* 11346371 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11346375 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1134637b je 0x11346396 */
  if (C.zf) goto L_11346396;
L_1134637d:;
  /* 1134637d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1134637f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11346380 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11346382 je 0x113463e8 */
  if (C.zf) goto L_113463e8;
  /* 11346384 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11346386 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11346387 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1134638d jne 0x1134637d */
  if (!C.zf) goto L_1134637d;
  /* 1134638f jmp 0x11346396 */
  goto L_11346396;
L_11346391:;
  /* 11346391 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11346393 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11346396:;
  /* 11346396 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1134639b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1134639d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134639f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113463a2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113463a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113463a6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113463a9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 113463ae je 0x11346391 */
  if (C.zf) goto L_11346391;
  /* 113463b0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 113463b2 je 0x113463e8 */
  if (C.zf) goto L_113463e8;
  /* 113463b4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 113463b6 je 0x113463df */
  if (C.zf) goto L_113463df;
  /* 113463b8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 113463be je 0x113463d2 */
  if (C.zf) goto L_113463d2;
  /* 113463c0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 113463c6 je 0x113463ca */
  if (C.zf) goto L_113463ca;
  /* 113463c8 jmp 0x11346391 */
  goto L_11346391;
L_113463ca:;
  /* 113463ca mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 113463cc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113463d0 pop edi */
  EDI = (pop32());
  /* 113463d1 ret  */
  ESPCHK(0x11346310u, _esp0);
  ESP += 4; return;
L_113463d2:;
  /* 113463d2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 113463d5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113463d9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 113463dd pop edi */
  EDI = (pop32());
  /* 113463de ret  */
  ESPCHK(0x11346310u, _esp0);
  ESP += 4; return;
L_113463df:;
  /* 113463df mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 113463e2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113463e6 pop edi */
  EDI = (pop32());
  /* 113463e7 ret  */
  ESPCHK(0x11346310u, _esp0);
  ESP += 4; return;
L_113463e8:;
  /* 113463e8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 113463ea mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113463ee pop edi */
  EDI = (pop32());
  /* 113463ef ret  */
  ESPCHK(0x11346310u, _esp0);
  ESP += 4; return;
}

/* FUN_100063f0 @ 0x113463f0 (243 bytes, 91 insns) */
void f_113463f0(void) {
  FTRACE(0x113463f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113463f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113463f1 mov ebp, esp */
  EBP = (ESP);
  /* 113463f3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113463f6 push ebx */
  push32((uint32_t)(EBX));
  /* 113463f7 push esi */
  push32((uint32_t)(ESI));
  /* 113463f8 push edi */
  push32((uint32_t)(EDI));
  /* 113463f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 113463fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_113463ff:;
  /* 113463ff cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346403 jne 0x11346423 */
  if (!C.zf) goto L_11346423;
  /* 11346405 push 0x1136ae50 */
  push32((uint32_t)(0x1136ae50u));
  /* 1134640a push 0 */
  push32((uint32_t)(0x0u));
  /* 1134640c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1134640e push 0x1136ae60 */
  push32((uint32_t)(0x1136ae60u));
  /* 11346413 push 2 */
  push32((uint32_t)(0x2u));
  /* 11346415 call 0x11342410 */
  push32(0x1134641au); f_11342410();
  /* 1134641a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134641d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346420 jne 0x11346423 */
  if (!C.zf) goto L_11346423;
  /* 11346422 int3  */
  x86_unimpl("int3 @ 0x11346422");
L_11346423:;
  /* 11346423 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11346425 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11346427 jne 0x113463ff */
  if (!C.zf) goto L_113463ff;
L_11346429:;
  /* 11346429 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134642d jne 0x1134644d */
  if (!C.zf) goto L_1134644d;
  /* 1134642f push 0x1136ae34 */
  push32((uint32_t)(0x1136ae34u));
  /* 11346434 push 0 */
  push32((uint32_t)(0x0u));
  /* 11346436 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11346438 push 0x1136ae60 */
  push32((uint32_t)(0x1136ae60u));
  /* 1134643d push 2 */
  push32((uint32_t)(0x2u));
  /* 1134643f call 0x11342410 */
  push32(0x11346444u); f_11342410();
  /* 11346444 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11346447 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134644a jne 0x1134644d */
  if (!C.zf) goto L_1134644d;
  /* 1134644c int3  */
  x86_unimpl("int3 @ 0x1134644c");
L_1134644d:;
  /* 1134644d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1134644f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11346451 jne 0x11346429 */
  if (!C.zf) goto L_11346429;
  /* 11346453 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11346456 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1134645d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11346460 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11346463 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11346466 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11346469 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134646c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1134646e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11346471 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11346474 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11346477 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1134647a push ecx */
  push32((uint32_t)(ECX));
  /* 1134647b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1134647e push edx */
  push32((uint32_t)(EDX));
  /* 1134647f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11346482 push eax */
  push32((uint32_t)(EAX));
  /* 11346483 call 0x1134a2e0 */
  push32(0x11346488u); f_1134a2e0();
  /* 11346488 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134648b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1134648e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11346491 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11346494 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11346497 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1134649a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1134649d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113464a0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113464a4 jl 0x113464c8 */
  if ((C.sf!=C.of)) goto L_113464c8;
  /* 113464a6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113464a9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113464ab mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 113464ae xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113464b0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113464b6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 113464b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113464bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113464be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113464c1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113464c4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113464c6 jmp 0x113464d9 */
  goto L_113464d9;
L_113464c8:;
  /* 113464c8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113464cb push edx */
  push32((uint32_t)(EDX));
  /* 113464cc push 0 */
  push32((uint32_t)(0x0u));
  /* 113464ce call 0x1134a060 */
  push32(0x113464d3u); f_1134a060();
  /* 113464d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113464d6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_113464d9:;
  /* 113464d9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113464dc pop edi */
  EDI = (pop32());
  /* 113464dd pop esi */
  ESI = (pop32());
  /* 113464de pop ebx */
  EBX = (pop32());
  /* 113464df mov esp, ebp */
  ESP = (EBP);
  /* 113464e1 pop ebp */
  EBP = (pop32());
  /* 113464e2 ret  */
  ESPCHK(0x113463f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064f0 @ 0x113464f0 (47 bytes, 17 insns) */
void f_113464f0(void) {
  FTRACE(0x113464f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113464f0 push ecx */
  push32((uint32_t)(ECX));
  /* 113464f1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113464f6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 113464fa jb 0x11346510 */
  if (C.cf) goto L_11346510;
L_113464fc:;
  /* 113464fc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11346502 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11346507 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11346509 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134650e jae 0x113464fc */
  if (!C.cf) goto L_113464fc;
L_11346510:;
  /* 11346510 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11346512 mov eax, esp */
  EAX = (ESP);
  /* 11346514 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11346516 mov esp, ecx */
  ESP = (ECX);
  /* 11346518 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1134651a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1134651d push eax */
  push32((uint32_t)(EAX));
  /* 1134651e ret  */
  ESPCHK(0x113464f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006520 @ 0x11346520 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11346520(void) {
  FTRACE(0x11346520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346520 push ebp */
  push32((uint32_t)(EBP));
  /* 11346521 mov ebp, esp */
  EBP = (ESP);
  /* 11346523 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11346526 push esi */
  push32((uint32_t)(ESI));
  /* 11346527 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134652b je 0x11346533 */
  if (C.zf) goto L_11346533;
  /* 1134652d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346531 jne 0x11346538 */
  if (!C.zf) goto L_11346538;
L_11346533:;
  /* 11346533 jmp 0x11346708 */
  goto L_11346708;
L_11346538:;
  /* 11346538 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134653c je 0x11346554 */
  if (C.zf) goto L_11346554;
  /* 1134653e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346542 je 0x11346554 */
  if (C.zf) goto L_11346554;
  /* 11346544 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346548 je 0x11346554 */
  if (C.zf) goto L_11346554;
  /* 1134654a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134654e jne 0x11346631 */
  if (!C.zf) goto L_11346631;
L_11346554:;
  /* 11346554 push 1 */
  push32((uint32_t)(0x1u));
  /* 11346556 call 0x11346d50 */
  push32(0x1134655bu); f_11346d50();
  /* 1134655b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134655e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346562 je 0x1134656a */
  if (C.zf) goto L_1134656a;
  /* 11346564 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346568 jne 0x113465af */
  if (!C.zf) goto L_113465af;
L_1134656a:;
  /* 1134656a cmp dword ptr [0x1136f5dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f5dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346571 jne 0x113465af */
  if (!C.zf) goto L_113465af;
  /* 11346573 push 1 */
  push32((uint32_t)(0x1u));
  /* 11346575 push 0x11346750 */
  push32((uint32_t)(0x11346750u));
  /* 1134657a call dword ptr [0x113713a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113713a8))), 0x11346580u);
  /* 11346580 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346583 jne 0x11346591 */
  if (!C.zf) goto L_11346591;
  /* 11346585 mov dword ptr [0x1136f5dc], 1 */
  w32((uint32_t)(0x1136f5dc), (0x1u));
  /* 1134658f jmp 0x113465af */
  goto L_113465af;
L_11346591:;
  /* 11346591 call dword ptr [0x11371364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371364))), 0x11346597u);
  /* 11346597 mov esi, eax */
  ESI = (EAX);
  /* 11346599 call 0x1134b230 */
  push32(0x1134659eu); f_1134b230();
  /* 1134659e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 113465a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 113465a2 call 0x11346df0 */
  push32(0x113465a7u); f_11346df0();
  /* 113465a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113465aa jmp 0x11346708 */
  goto L_11346708;
L_113465af:;
  /* 113465af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113465b2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113465b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113465b8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113465bb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113465be cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113465c2 ja 0x11346622 */
  if ((!C.cf&&!C.zf)) goto L_11346622;
  /* 113465c4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113465c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113465c9 mov dl, byte ptr [eax + 0x1134672f] */
  DL = (r8((uint32_t)(EAX + 0x1134672f)));
  /* 113465cf jmp dword ptr [edx*4 + 0x1134671b] */
  switch (EDX) {
    case 0: goto L_113465d6;
    case 1: goto L_11346610;
    case 2: goto L_113465ea;
    case 3: goto L_113465fd;
    case 4: goto L_11346622;
    default: x86_unimpl("switch@0x113465cf out of table"); return;
  }
L_113465d6:;
  /* 113465d6 mov ecx, dword ptr [0x1136f5cc] */
  ECX = (r32((uint32_t)(0x1136f5cc)));
  /* 113465dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113465df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113465e2 mov dword ptr [0x1136f5cc], edx */
  w32((uint32_t)(0x1136f5cc), (EDX));
  /* 113465e8 jmp 0x11346622 */
  goto L_11346622;
L_113465ea:;
  /* 113465ea mov eax, dword ptr [0x1136f5d0] */
  EAX = (r32((uint32_t)(0x1136f5d0)));
  /* 113465ef mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113465f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113465f5 mov dword ptr [0x1136f5d0], ecx */
  w32((uint32_t)(0x1136f5d0), (ECX));
  /* 113465fb jmp 0x11346622 */
  goto L_11346622;
L_113465fd:;
  /* 113465fd mov edx, dword ptr [0x1136f5d4] */
  EDX = (r32((uint32_t)(0x1136f5d4)));
  /* 11346603 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11346606 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11346609 mov dword ptr [0x1136f5d4], eax */
  w32((uint32_t)(0x1136f5d4), (EAX));
  /* 1134660e jmp 0x11346622 */
  goto L_11346622;
L_11346610:;
  /* 11346610 mov ecx, dword ptr [0x1136f5d8] */
  ECX = (r32((uint32_t)(0x1136f5d8)));
  /* 11346616 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11346619 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134661c mov dword ptr [0x1136f5d8], edx */
  w32((uint32_t)(0x1136f5d8), (EDX));
L_11346622:;
  /* 11346622 push 1 */
  push32((uint32_t)(0x1u));
  /* 11346624 call 0x11346df0 */
  push32(0x11346629u); f_11346df0();
  /* 11346629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134662c jmp 0x11346703 */
  goto L_11346703;
L_11346631:;
  /* 11346631 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346635 je 0x11346648 */
  if (C.zf) goto L_11346648;
  /* 11346637 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134663b je 0x11346648 */
  if (C.zf) goto L_11346648;
  /* 1134663d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346641 je 0x11346648 */
  if (C.zf) goto L_11346648;
  /* 11346643 jmp 0x11346708 */
  goto L_11346708;
L_11346648:;
  /* 11346648 call 0x11342d90 */
  push32(0x1134664du); f_11342d90();
  /* 1134664d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11346650 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346653 cmp dword ptr [eax + 0x50], 0x1136dc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1136dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134665a jne 0x113466a5 */
  if (!C.zf) goto L_113466a5;
  /* 1134665c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11346661 push 0x1136ae6c */
  push32((uint32_t)(0x1136ae6cu));
  /* 11346666 push 2 */
  push32((uint32_t)(0x2u));
  /* 11346668 mov ecx, dword ptr [0x1136dc80] */
  ECX = (r32((uint32_t)(0x1136dc80)));
  /* 1134666e push ecx */
  push32((uint32_t)(ECX));
  /* 1134666f call 0x11343350 */
  push32(0x11346674u); f_11343350();
  /* 11346674 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11346677 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134667a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1134667d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346680 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346684 je 0x113466a3 */
  if (C.zf) goto L_113466a3;
  /* 11346686 mov ecx, dword ptr [0x1136dc80] */
  ECX = (r32((uint32_t)(0x1136dc80)));
  /* 1134668c push ecx */
  push32((uint32_t)(ECX));
  /* 1134668d push 0x1136dc00 */
  push32((uint32_t)(0x1136dc00u));
  /* 11346692 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346695 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11346698 push eax */
  push32((uint32_t)(EAX));
  /* 11346699 call 0x11349c30 */
  push32(0x1134669eu); f_11349c30();
  /* 1134669e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113466a1 jmp 0x113466a5 */
  goto L_113466a5;
L_113466a3:;
  /* 113466a3 jmp 0x11346708 */
  goto L_11346708;
L_113466a5:;
  /* 113466a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113466a8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 113466ab push edx */
  push32((uint32_t)(EDX));
  /* 113466ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113466af push eax */
  push32((uint32_t)(EAX));
  /* 113466b0 call 0x11346a30 */
  push32(0x113466b5u); f_11346a30();
  /* 113466b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113466b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113466bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113466bf jne 0x113466c3 */
  if (!C.zf) goto L_113466c3;
  /* 113466c1 jmp 0x11346708 */
  goto L_11346708;
L_113466c3:;
  /* 113466c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113466c6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113466c9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_113466cc:;
  /* 113466cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113466cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113466d2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113466d5 jne 0x11346703 */
  if (!C.zf) goto L_11346703;
  /* 113466d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113466da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113466dd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 113466e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113466e3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113466e6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113466e9 mov edx, dword ptr [0x1136dc84] */
  EDX = (r32((uint32_t)(0x1136dc84)));
  /* 113466ef imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113466f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113466f5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 113466f8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113466fa cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113466fd jb 0x11346701 */
  if (C.cf) goto L_11346701;
  /* 113466ff jmp 0x11346703 */
  goto L_11346703;
L_11346701:;
  /* 11346701 jmp 0x113466cc */
  goto L_113466cc;
L_11346703:;
  /* 11346703 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11346706 jmp 0x11346716 */
  goto L_11346716;
L_11346708:;
  /* 11346708 call 0x1134b220 */
  push32(0x1134670du); f_1134b220();
  /* 1134670d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11346713 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11346716:;
  /* 11346716 pop esi */
  ESI = (pop32());
  /* 11346717 mov esp, ebp */
  ESP = (EBP);
  /* 11346719 pop ebp */
  EBP = (pop32());
  /* 1134671a ret  */
  ESPCHK(0x11346520u, _esp0);
  ESP += 4; return;
}

/* FUN_10006750 @ 0x11346750 (146 bytes, 45 insns) */
void f_11346750(void) {
  FTRACE(0x11346750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346750 push ebp */
  push32((uint32_t)(EBP));
  /* 11346751 mov ebp, esp */
  EBP = (ESP);
  /* 11346753 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11346756 push 1 */
  push32((uint32_t)(0x1u));
  /* 11346758 call 0x11346d50 */
  push32(0x1134675du); f_11346d50();
  /* 1134675d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11346760 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346764 jne 0x1134677e */
  if (!C.zf) goto L_1134677e;
  /* 11346766 mov dword ptr [ebp - 8], 0x1136f5cc */
  w32((uint32_t)(EBP + -0x8), (0x1136f5ccu));
  /* 1134676d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346770 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11346772 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11346775 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1134677c jmp 0x11346794 */
  goto L_11346794;
L_1134677e:;
  /* 1134677e mov dword ptr [ebp - 8], 0x1136f5d0 */
  w32((uint32_t)(EBP + -0x8), (0x1136f5d0u));
  /* 11346785 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346788 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1134678a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1134678d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11346794:;
  /* 11346794 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346798 jne 0x113467a8 */
  if (!C.zf) goto L_113467a8;
  /* 1134679a push 1 */
  push32((uint32_t)(0x1u));
  /* 1134679c call 0x11346df0 */
  push32(0x113467a1u); f_11346df0();
  /* 113467a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113467a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113467a6 jmp 0x113467dc */
  goto L_113467dc;
L_113467a8:;
  /* 113467a8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113467ac je 0x113467cd */
  if (C.zf) goto L_113467cd;
  /* 113467ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113467b1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 113467b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 113467b9 call 0x11346df0 */
  push32(0x113467beu); f_11346df0();
  /* 113467be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113467c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113467c4 push edx */
  push32((uint32_t)(EDX));
  /* 113467c5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x113467c8u);
  /* 113467c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113467cb jmp 0x113467d7 */
  goto L_113467d7;
L_113467cd:;
  /* 113467cd push 1 */
  push32((uint32_t)(0x1u));
  /* 113467cf call 0x11346df0 */
  push32(0x113467d4u); f_11346df0();
  /* 113467d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113467d7:;
  /* 113467d7 mov eax, 1 */
  EAX = (0x1u);
L_113467dc:;
  /* 113467dc mov esp, ebp */
  ESP = (EBP);
  /* 113467de pop ebp */
  EBP = (pop32());
  /* 113467df ret 4 */
  ESPCHK(0x11346750u, _esp0);
  ESP += 8; return;
}

/* FUN_100067f0 @ 0x113467f0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_113467f0(void) {
  FTRACE(0x113467f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113467f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113467f1 mov ebp, esp */
  EBP = (ESP);
  /* 113467f3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113467f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113467fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11346800 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11346803 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11346806 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11346809 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1134680c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346810 ja 0x113468be */
  if ((!C.cf&&!C.zf)) goto L_113468be;
  /* 11346816 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11346819 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1134681b mov dl, byte ptr [eax + 0x11346a12] */
  DL = (r8((uint32_t)(EAX + 0x11346a12)));
  /* 11346821 jmp dword ptr [edx*4 + 0x113469fa] */
  switch (EDX) {
    case 0: goto L_11346828;
    case 1: goto L_11346893;
    case 2: goto L_11346879;
    case 3: goto L_11346845;
    case 4: goto L_1134685f;
    case 5: goto L_113468be;
    default: x86_unimpl("switch@0x11346821 out of table"); return;
  }
L_11346828:;
  /* 11346828 mov dword ptr [ebp - 0x18], 0x1136f5cc */
  w32((uint32_t)(EBP + -0x18), (0x1136f5ccu));
  /* 1134682f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11346832 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11346834 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11346837 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134683a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134683d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11346840 jmp 0x113468c6 */
  goto L_113468c6;
L_11346845:;
  /* 11346845 mov dword ptr [ebp - 0x18], 0x1136f5d0 */
  w32((uint32_t)(EBP + -0x18), (0x1136f5d0u));
  /* 1134684c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1134684f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11346851 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11346854 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11346857 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134685a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1134685d jmp 0x113468c6 */
  goto L_113468c6;
L_1134685f:;
  /* 1134685f mov dword ptr [ebp - 0x18], 0x1136f5d4 */
  w32((uint32_t)(EBP + -0x18), (0x1136f5d4u));
  /* 11346866 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11346869 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1134686b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1134686e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11346871 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11346874 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11346877 jmp 0x113468c6 */
  goto L_113468c6;
L_11346879:;
  /* 11346879 mov dword ptr [ebp - 0x18], 0x1136f5d8 */
  w32((uint32_t)(EBP + -0x18), (0x1136f5d8u));
  /* 11346880 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11346883 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11346885 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11346888 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1134688b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134688e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11346891 jmp 0x113468c6 */
  goto L_113468c6;
L_11346893:;
  /* 11346893 call 0x11342d90 */
  push32(0x11346898u); f_11342d90();
  /* 11346898 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134689b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134689e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 113468a1 push edx */
  push32((uint32_t)(EDX));
  /* 113468a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113468a5 push eax */
  push32((uint32_t)(EAX));
  /* 113468a6 call 0x11346a30 */
  push32(0x113468abu); f_11346a30();
  /* 113468ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113468ae add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113468b1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113468b4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113468b7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113468b9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 113468bc jmp 0x113468c6 */
  goto L_113468c6;
L_113468be:;
  /* 113468be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113468c1 jmp 0x113469f6 */
  goto L_113469f6;
L_113468c6:;
  /* 113468c6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113468ca je 0x113468d6 */
  if (C.zf) goto L_113468d6;
  /* 113468cc push 1 */
  push32((uint32_t)(0x1u));
  /* 113468ce call 0x11346d50 */
  push32(0x113468d3u); f_11346d50();
  /* 113468d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113468d6:;
  /* 113468d6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113468da jne 0x113468f3 */
  if (!C.zf) goto L_113468f3;
  /* 113468dc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113468e0 je 0x113468ec */
  if (C.zf) goto L_113468ec;
  /* 113468e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 113468e4 call 0x11346df0 */
  push32(0x113468e9u); f_11346df0();
  /* 113468e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113468ec:;
  /* 113468ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113468ee jmp 0x113469f6 */
  goto L_113469f6;
L_113468f3:;
  /* 113468f3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113468f7 jne 0x11346910 */
  if (!C.zf) goto L_11346910;
  /* 113468f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113468fd je 0x11346909 */
  if (C.zf) goto L_11346909;
  /* 113468ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11346901 call 0x11346df0 */
  push32(0x11346906u); f_11346df0();
  /* 11346906 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11346909:;
  /* 11346909 push 3 */
  push32((uint32_t)(0x3u));
  /* 1134690b call 0x11342b10 */
  push32(0x11346910u); f_11342b10();
L_11346910:;
  /* 11346910 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346914 je 0x11346922 */
  if (C.zf) goto L_11346922;
  /* 11346916 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134691a je 0x11346922 */
  if (C.zf) goto L_11346922;
  /* 1134691c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346920 jne 0x1134694e */
  if (!C.zf) goto L_1134694e;
L_11346922:;
  /* 11346922 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346925 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11346928 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1134692b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134692e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11346935 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346939 jne 0x1134694e */
  if (!C.zf) goto L_1134694e;
  /* 1134693b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134693e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11346941 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11346944 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346947 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1134694e:;
  /* 1134694e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346952 jne 0x11346990 */
  if (!C.zf) goto L_11346990;
  /* 11346954 mov eax, dword ptr [0x1136dc78] */
  EAX = (r32((uint32_t)(0x1136dc78)));
  /* 11346959 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1134695c jmp 0x11346967 */
  goto L_11346967;
L_1134695e:;
  /* 1134695e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11346961 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11346964 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11346967:;
  /* 11346967 mov edx, dword ptr [0x1136dc78] */
  EDX = (r32((uint32_t)(0x1136dc78)));
  /* 1134696d add edx, dword ptr [0x1136dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1136dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11346973 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346976 jge 0x1134698e */
  if ((C.sf==C.of)) goto L_1134698e;
  /* 11346978 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134697b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134697e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346981 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11346984 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1134698c jmp 0x1134695e */
  goto L_1134695e;
L_1134698e:;
  /* 1134698e jmp 0x11346999 */
  goto L_11346999;
L_11346990:;
  /* 11346990 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11346993 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11346999:;
  /* 11346999 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134699d je 0x113469a9 */
  if (C.zf) goto L_113469a9;
  /* 1134699f push 1 */
  push32((uint32_t)(0x1u));
  /* 113469a1 call 0x11346df0 */
  push32(0x113469a6u); f_11346df0();
  /* 113469a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113469a9:;
  /* 113469a9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113469ad jne 0x113469c0 */
  if (!C.zf) goto L_113469c0;
  /* 113469af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113469b2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 113469b5 push edx */
  push32((uint32_t)(EDX));
  /* 113469b6 push 8 */
  push32((uint32_t)(0x8u));
  /* 113469b8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x113469bbu);
  /* 113469bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113469be jmp 0x113469ca */
  goto L_113469ca;
L_113469c0:;
  /* 113469c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113469c3 push eax */
  push32((uint32_t)(EAX));
  /* 113469c4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x113469c7u);
  /* 113469c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113469ca:;
  /* 113469ca cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113469ce je 0x113469dc */
  if (C.zf) goto L_113469dc;
  /* 113469d0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113469d4 je 0x113469dc */
  if (C.zf) goto L_113469dc;
  /* 113469d6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113469da jne 0x113469f4 */
  if (!C.zf) goto L_113469f4;
L_113469dc:;
  /* 113469dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113469df mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113469e2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 113469e5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113469e9 jne 0x113469f4 */
  if (!C.zf) goto L_113469f4;
  /* 113469eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113469ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113469f1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_113469f4:;
  /* 113469f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113469f6:;
  /* 113469f6 mov esp, ebp */
  ESP = (EBP);
  /* 113469f8 pop ebp */
  EBP = (pop32());
  /* 113469f9 ret  */
  ESPCHK(0x113467f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a30 @ 0x11346a30 (91 bytes, 35 insns) */
void f_11346a30(void) {
  FTRACE(0x11346a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11346a31 mov ebp, esp */
  EBP = (ESP);
  /* 11346a33 push ecx */
  push32((uint32_t)(ECX));
  /* 11346a34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11346a37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11346a3a:;
  /* 11346a3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346a3d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11346a40 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346a43 je 0x11346a63 */
  if (C.zf) goto L_11346a63;
  /* 11346a45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346a48 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11346a4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11346a4e mov ecx, dword ptr [0x1136dc84] */
  ECX = (r32((uint32_t)(0x1136dc84)));
  /* 11346a54 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11346a57 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11346a5a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11346a5c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346a5f jae 0x11346a63 */
  if (!C.cf) goto L_11346a63;
  /* 11346a61 jmp 0x11346a3a */
  goto L_11346a3a;
L_11346a63:;
  /* 11346a63 mov eax, dword ptr [0x1136dc84] */
  EAX = (r32((uint32_t)(0x1136dc84)));
  /* 11346a68 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11346a6b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11346a6e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11346a70 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346a73 jae 0x11346a85 */
  if (!C.cf) goto L_11346a85;
  /* 11346a75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346a78 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11346a7b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346a7e jne 0x11346a85 */
  if (!C.zf) goto L_11346a85;
  /* 11346a80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346a83 jmp 0x11346a87 */
  goto L_11346a87;
L_11346a85:;
  /* 11346a85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11346a87:;
  /* 11346a87 mov esp, ebp */
  ESP = (EBP);
  /* 11346a89 pop ebp */
  EBP = (pop32());
  /* 11346a8a ret  */
  ESPCHK(0x11346a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a90 @ 0x11346a90 (13 bytes, 6 insns) */
void f_11346a90(void) {
  FTRACE(0x11346a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11346a91 mov ebp, esp */
  EBP = (ESP);
  /* 11346a93 call 0x11342d90 */
  push32(0x11346a98u); f_11342d90();
  /* 11346a98 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11346a9b pop ebp */
  EBP = (pop32());
  /* 11346a9c ret  */
  ESPCHK(0x11346a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006aa0 @ 0x11346aa0 (13 bytes, 6 insns) */
void f_11346aa0(void) {
  FTRACE(0x11346aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11346aa1 mov ebp, esp */
  EBP = (ESP);
  /* 11346aa3 call 0x11342d90 */
  push32(0x11346aa8u); f_11342d90();
  /* 11346aa8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11346aab pop ebp */
  EBP = (pop32());
  /* 11346aac ret  */
  ESPCHK(0x11346aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ab0 @ 0x11346ab0 (187 bytes, 54 insns) */
void f_11346ab0(void) {
  FTRACE(0x11346ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11346ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11346ab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11346ab6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11346abd cmp dword ptr [0x1136f5e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f5e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346ac4 jne 0x11346b23 */
  if (!C.zf) goto L_11346b23;
  /* 11346ac6 push 0x1136a298 */
  push32((uint32_t)(0x1136a298u));
  /* 11346acb call dword ptr [0x11371334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371334))), 0x11346ad1u);
  /* 11346ad1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11346ad4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346ad8 je 0x11346af7 */
  if (C.zf) goto L_11346af7;
  /* 11346ada push 0x1136ae9c */
  push32((uint32_t)(0x1136ae9cu));
  /* 11346adf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346ae2 push eax */
  push32((uint32_t)(EAX));
  /* 11346ae3 call dword ptr [0x11371330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371330))), 0x11346ae9u);
  /* 11346ae9 mov dword ptr [0x1136f5e0], eax */
  w32((uint32_t)(0x1136f5e0), (EAX));
  /* 11346aee cmp dword ptr [0x1136f5e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f5e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346af5 jne 0x11346afb */
  if (!C.zf) goto L_11346afb;
L_11346af7:;
  /* 11346af7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11346af9 jmp 0x11346b67 */
  goto L_11346b67;
L_11346afb:;
  /* 11346afb push 0x1136ae8c */
  push32((uint32_t)(0x1136ae8cu));
  /* 11346b00 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346b03 push ecx */
  push32((uint32_t)(ECX));
  /* 11346b04 call dword ptr [0x11371330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371330))), 0x11346b0au);
  /* 11346b0a mov dword ptr [0x1136f5e4], eax */
  w32((uint32_t)(0x1136f5e4), (EAX));
  /* 11346b0f push 0x1136ae78 */
  push32((uint32_t)(0x1136ae78u));
  /* 11346b14 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346b17 push edx */
  push32((uint32_t)(EDX));
  /* 11346b18 call dword ptr [0x11371330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371330))), 0x11346b1eu);
  /* 11346b1e mov dword ptr [0x1136f5e8], eax */
  w32((uint32_t)(0x1136f5e8), (EAX));
L_11346b23:;
  /* 11346b23 cmp dword ptr [0x1136f5e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f5e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346b2a je 0x11346b35 */
  if (C.zf) goto L_11346b35;
  /* 11346b2c call dword ptr [0x1136f5e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136f5e4))), 0x11346b32u);
  /* 11346b32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11346b35:;
  /* 11346b35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346b39 je 0x11346b51 */
  if (C.zf) goto L_11346b51;
  /* 11346b3b cmp dword ptr [0x1136f5e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f5e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346b42 je 0x11346b51 */
  if (C.zf) goto L_11346b51;
  /* 11346b44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346b47 push eax */
  push32((uint32_t)(EAX));
  /* 11346b48 call dword ptr [0x1136f5e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136f5e8))), 0x11346b4eu);
  /* 11346b4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11346b51:;
  /* 11346b51 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11346b54 push ecx */
  push32((uint32_t)(ECX));
  /* 11346b55 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11346b58 push edx */
  push32((uint32_t)(EDX));
  /* 11346b59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11346b5c push eax */
  push32((uint32_t)(EAX));
  /* 11346b5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346b60 push ecx */
  push32((uint32_t)(ECX));
  /* 11346b61 call dword ptr [0x1136f5e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1136f5e0))), 0x11346b67u);
L_11346b67:;
  /* 11346b67 mov esp, ebp */
  ESP = (EBP);
  /* 11346b69 pop ebp */
  EBP = (pop32());
  /* 11346b6a ret  */
  ESPCHK(0x11346ab0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11346b70 (254 bytes, 109 insns) */
void f_11346b70(void) {
  FTRACE(0x11346b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346b70 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11346b74 push edi */
  push32((uint32_t)(EDI));
  /* 11346b75 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11346b77 je 0x11346bf3 */
  if (C.zf) goto L_11346bf3;
  /* 11346b79 push esi */
  push32((uint32_t)(ESI));
  /* 11346b7a push ebx */
  push32((uint32_t)(EBX));
  /* 11346b7b mov ebx, ecx */
  EBX = (ECX);
  /* 11346b7d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11346b81 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11346b87 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11346b8b jne 0x11346b94 */
  if (!C.zf) goto L_11346b94;
  /* 11346b8d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11346b90 jne 0x11346c01 */
  if (!C.zf) goto L_11346c01;
  /* 11346b92 jmp 0x11346bb5 */
  goto L_11346bb5;
L_11346b94:;
  /* 11346b94 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11346b96 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11346b97 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11346b99 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11346b9a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11346b9b je 0x11346bc2 */
  if (C.zf) goto L_11346bc2;
  /* 11346b9d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11346b9f je 0x11346bca */
  if (C.zf) goto L_11346bca;
  /* 11346ba1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11346ba7 jne 0x11346b94 */
  if (!C.zf) goto L_11346b94;
  /* 11346ba9 mov ebx, ecx */
  EBX = (ECX);
  /* 11346bab shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11346bae jne 0x11346c01 */
  if (!C.zf) goto L_11346c01;
L_11346bb0:;
  /* 11346bb0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11346bb3 je 0x11346bc2 */
  if (C.zf) goto L_11346bc2;
L_11346bb5:;
  /* 11346bb5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11346bb7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11346bb8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11346bba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11346bbb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11346bbd je 0x11346bee */
  if (C.zf) goto L_11346bee;
  /* 11346bbf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11346bc0 jne 0x11346bb5 */
  if (!C.zf) goto L_11346bb5;
L_11346bc2:;
  /* 11346bc2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11346bc6 pop ebx */
  EBX = (pop32());
  /* 11346bc7 pop esi */
  ESI = (pop32());
  /* 11346bc8 pop edi */
  EDI = (pop32());
  /* 11346bc9 ret  */
  ESPCHK(0x11346b70u, _esp0);
  ESP += 4; return;
L_11346bca:;
  /* 11346bca test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11346bd0 je 0x11346be4 */
  if (C.zf) goto L_11346be4;
L_11346bd2:;
  /* 11346bd2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11346bd4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11346bd5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11346bd6 je 0x11346c66 */
  if (C.zf) goto L_11346c66;
  /* 11346bdc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11346be2 jne 0x11346bd2 */
  if (!C.zf) goto L_11346bd2;
L_11346be4:;
  /* 11346be4 mov ebx, ecx */
  EBX = (ECX);
  /* 11346be6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11346be9 jne 0x11346c57 */
  if (!C.zf) goto L_11346c57;
L_11346beb:;
  /* 11346beb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11346bed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11346bee:;
  /* 11346bee dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11346bef jne 0x11346beb */
  if (!C.zf) goto L_11346beb;
  /* 11346bf1 pop ebx */
  EBX = (pop32());
  /* 11346bf2 pop esi */
  ESI = (pop32());
L_11346bf3:;
  /* 11346bf3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11346bf7 pop edi */
  EDI = (pop32());
  /* 11346bf8 ret  */
  ESPCHK(0x11346b70u, _esp0);
  ESP += 4; return;
L_11346bf9:;
  /* 11346bf9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11346bfb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11346bfe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11346bff je 0x11346bb0 */
  if (C.zf) goto L_11346bb0;
L_11346c01:;
  /* 11346c01 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11346c06 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11346c08 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11346c0a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11346c0d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11346c0f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11346c11 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11346c14 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11346c19 je 0x11346bf9 */
  if (C.zf) goto L_11346bf9;
  /* 11346c1b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11346c1d je 0x11346c4b */
  if (C.zf) goto L_11346c4b;
  /* 11346c1f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11346c21 je 0x11346c41 */
  if (C.zf) goto L_11346c41;
  /* 11346c23 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11346c29 je 0x11346c37 */
  if (C.zf) goto L_11346c37;
  /* 11346c2b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11346c31 jne 0x11346bf9 */
  if (!C.zf) goto L_11346bf9;
  /* 11346c33 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11346c35 jmp 0x11346c4f */
  goto L_11346c4f;
L_11346c37:;
  /* 11346c37 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11346c3d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11346c3f jmp 0x11346c4f */
  goto L_11346c4f;
L_11346c41:;
  /* 11346c41 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11346c47 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11346c49 jmp 0x11346c4f */
  goto L_11346c4f;
L_11346c4b:;
  /* 11346c4b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11346c4d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11346c4f:;
  /* 11346c4f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11346c52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11346c54 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11346c55 je 0x11346c61 */
  if (C.zf) goto L_11346c61;
L_11346c57:;
  /* 11346c57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11346c59:;
  /* 11346c59 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11346c5b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11346c5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11346c5f jne 0x11346c59 */
  if (!C.zf) goto L_11346c59;
L_11346c61:;
  /* 11346c61 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11346c64 jne 0x11346beb */
  if (!C.zf) goto L_11346beb;
L_11346c66:;
  /* 11346c66 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11346c6a pop ebx */
  EBX = (pop32());
  /* 11346c6b pop esi */
  ESI = (pop32());
  /* 11346c6c pop edi */
  EDI = (pop32());
  /* 11346c6d ret  */
  ESPCHK(0x11346b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c70 @ 0x11346c70 (55 bytes, 16 insns) */
void f_11346c70(void) {
  FTRACE(0x11346c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11346c71 mov ebp, esp */
  EBP = (ESP);
  /* 11346c73 mov eax, dword ptr [0x1136db84] */
  EAX = (r32((uint32_t)(0x1136db84)));
  /* 11346c78 push eax */
  push32((uint32_t)(EAX));
  /* 11346c79 call dword ptr [0x1137135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137135c))), 0x11346c7fu);
  /* 11346c7f mov ecx, dword ptr [0x1136db74] */
  ECX = (r32((uint32_t)(0x1136db74)));
  /* 11346c85 push ecx */
  push32((uint32_t)(ECX));
  /* 11346c86 call dword ptr [0x1137135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137135c))), 0x11346c8cu);
  /* 11346c8c mov edx, dword ptr [0x1136db64] */
  EDX = (r32((uint32_t)(0x1136db64)));
  /* 11346c92 push edx */
  push32((uint32_t)(EDX));
  /* 11346c93 call dword ptr [0x1137135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137135c))), 0x11346c99u);
  /* 11346c99 mov eax, dword ptr [0x1136db44] */
  EAX = (r32((uint32_t)(0x1136db44)));
  /* 11346c9e push eax */
  push32((uint32_t)(EAX));
  /* 11346c9f call dword ptr [0x1137135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137135c))), 0x11346ca5u);
  /* 11346ca5 pop ebp */
  EBP = (pop32());
  /* 11346ca6 ret  */
  ESPCHK(0x11346c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cb0 @ 0x11346cb0 (159 bytes, 47 insns) */
void f_11346cb0(void) {
  FTRACE(0x11346cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11346cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11346cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11346cb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11346cbb jmp 0x11346cc6 */
  goto L_11346cc6;
L_11346cbd:;
  /* 11346cbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346cc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11346cc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11346cc6:;
  /* 11346cc6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346cca jge 0x11346d19 */
  if ((C.sf==C.of)) goto L_11346d19;
  /* 11346ccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346ccf cmp dword ptr [ecx*4 + 0x1136db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1136db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346cd7 je 0x11346d17 */
  if (C.zf) goto L_11346d17;
  /* 11346cd9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346cdd je 0x11346d17 */
  if (C.zf) goto L_11346d17;
  /* 11346cdf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346ce3 je 0x11346d17 */
  if (C.zf) goto L_11346d17;
  /* 11346ce5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346ce9 je 0x11346d17 */
  if (C.zf) goto L_11346d17;
  /* 11346ceb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346cef je 0x11346d17 */
  if (C.zf) goto L_11346d17;
  /* 11346cf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346cf4 mov eax, dword ptr [edx*4 + 0x1136db40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1136db40)));
  /* 11346cfb push eax */
  push32((uint32_t)(EAX));
  /* 11346cfc call dword ptr [0x11371378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371378))), 0x11346d02u);
  /* 11346d02 push 2 */
  push32((uint32_t)(0x2u));
  /* 11346d04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346d07 mov edx, dword ptr [ecx*4 + 0x1136db40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1136db40)));
  /* 11346d0e push edx */
  push32((uint32_t)(EDX));
  /* 11346d0f call 0x11343de0 */
  push32(0x11346d14u); f_11343de0();
  /* 11346d14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11346d17:;
  /* 11346d17 jmp 0x11346cbd */
  goto L_11346cbd;
L_11346d19:;
  /* 11346d19 mov eax, dword ptr [0x1136db64] */
  EAX = (r32((uint32_t)(0x1136db64)));
  /* 11346d1e push eax */
  push32((uint32_t)(EAX));
  /* 11346d1f call dword ptr [0x11371378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371378))), 0x11346d25u);
  /* 11346d25 mov ecx, dword ptr [0x1136db74] */
  ECX = (r32((uint32_t)(0x1136db74)));
  /* 11346d2b push ecx */
  push32((uint32_t)(ECX));
  /* 11346d2c call dword ptr [0x11371378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371378))), 0x11346d32u);
  /* 11346d32 mov edx, dword ptr [0x1136db84] */
  EDX = (r32((uint32_t)(0x1136db84)));
  /* 11346d38 push edx */
  push32((uint32_t)(EDX));
  /* 11346d39 call dword ptr [0x11371378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371378))), 0x11346d3fu);
  /* 11346d3f mov eax, dword ptr [0x1136db44] */
  EAX = (r32((uint32_t)(0x1136db44)));
  /* 11346d44 push eax */
  push32((uint32_t)(EAX));
  /* 11346d45 call dword ptr [0x11371378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371378))), 0x11346d4bu);
  /* 11346d4b mov esp, ebp */
  ESP = (EBP);
  /* 11346d4d pop ebp */
  EBP = (pop32());
  /* 11346d4e ret  */
  ESPCHK(0x11346cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d50 @ 0x11346d50 (151 bytes, 46 insns) */
void f_11346d50(void) {
  FTRACE(0x11346d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11346d51 mov ebp, esp */
  EBP = (ESP);
  /* 11346d53 push ecx */
  push32((uint32_t)(ECX));
  /* 11346d54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11346d57 cmp dword ptr [eax*4 + 0x1136db40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1136db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346d5f jne 0x11346dd2 */
  if (!C.zf) goto L_11346dd2;
  /* 11346d61 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11346d66 push 0x1136aea8 */
  push32((uint32_t)(0x1136aea8u));
  /* 11346d6b push 2 */
  push32((uint32_t)(0x2u));
  /* 11346d6d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11346d6f call 0x11343350 */
  push32(0x11346d74u); f_11343350();
  /* 11346d74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11346d77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11346d7a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346d7e jne 0x11346d8a */
  if (!C.zf) goto L_11346d8a;
  /* 11346d80 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11346d82 call 0x113422c0 */
  push32(0x11346d87u); f_113422c0();
  /* 11346d87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11346d8a:;
  /* 11346d8a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11346d8c call 0x11346d50 */
  push32(0x11346d91u); f_11346d50();
  /* 11346d91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11346d94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11346d97 cmp dword ptr [ecx*4 + 0x1136db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1136db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346d9f jne 0x11346dba */
  if (!C.zf) goto L_11346dba;
  /* 11346da1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346da4 push edx */
  push32((uint32_t)(EDX));
  /* 11346da5 call dword ptr [0x1137135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137135c))), 0x11346dabu);
  /* 11346dab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11346dae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346db1 mov dword ptr [eax*4 + 0x1136db40], ecx */
  w32((uint32_t)(EAX*4 + 0x1136db40), (ECX));
  /* 11346db8 jmp 0x11346dc8 */
  goto L_11346dc8;
L_11346dba:;
  /* 11346dba push 2 */
  push32((uint32_t)(0x2u));
  /* 11346dbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346dbf push edx */
  push32((uint32_t)(EDX));
  /* 11346dc0 call 0x11343de0 */
  push32(0x11346dc5u); f_11343de0();
  /* 11346dc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11346dc8:;
  /* 11346dc8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11346dca call 0x11346df0 */
  push32(0x11346dcfu); f_11346df0();
  /* 11346dcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11346dd2:;
  /* 11346dd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11346dd5 mov ecx, dword ptr [eax*4 + 0x1136db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1136db40)));
  /* 11346ddc push ecx */
  push32((uint32_t)(ECX));
  /* 11346ddd call dword ptr [0x11371310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371310))), 0x11346de3u);
  /* 11346de3 mov esp, ebp */
  ESP = (EBP);
  /* 11346de5 pop ebp */
  EBP = (pop32());
  /* 11346de6 ret  */
  ESPCHK(0x11346d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006df0 @ 0x11346df0 (22 bytes, 8 insns) */
void f_11346df0(void) {
  FTRACE(0x11346df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11346df1 mov ebp, esp */
  EBP = (ESP);
  /* 11346df3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11346df6 mov ecx, dword ptr [eax*4 + 0x1136db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1136db40)));
  /* 11346dfd push ecx */
  push32((uint32_t)(ECX));
  /* 11346dfe call dword ptr [0x1137130c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137130c))), 0x11346e04u);
  /* 11346e04 pop ebp */
  EBP = (pop32());
  /* 11346e05 ret  */
  ESPCHK(0x11346df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e10 @ 0x11346e10 (26 bytes, 10 insns) */
void f_11346e10(void) {
  FTRACE(0x11346e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11346e11 mov ebp, esp */
  EBP = (ESP);
  /* 11346e13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11346e16 push eax */
  push32((uint32_t)(EAX));
  /* 11346e17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11346e19 call dword ptr [0x11371308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371308))), 0x11346e1fu);
  /* 11346e1f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11346e24 call dword ptr [0x11371340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371340))), 0x11346e2au);
  /* 11346e2a pop ebp */
  EBP = (pop32());
  /* 11346e2b ret  */
  ESPCHK(0x11346e10u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x11346e30 (446 bytes, 130 insns) */
void f_11346e30(void) {
  FTRACE(0x11346e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11346e31 mov ebp, esp */
  EBP = (ESP);
  /* 11346e33 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11346e36 call 0x11342d90 */
  push32(0x11346e3bu); f_11342d90();
  /* 11346e3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11346e3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346e41 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11346e44 push ecx */
  push32((uint32_t)(ECX));
  /* 11346e45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11346e48 push edx */
  push32((uint32_t)(EDX));
  /* 11346e49 call 0x11346ff0 */
  push32(0x11346e4eu); f_11346ff0();
  /* 11346e4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11346e51 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11346e54 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346e58 je 0x11346e63 */
  if (C.zf) goto L_11346e63;
  /* 11346e5a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11346e5d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346e61 jne 0x11346e72 */
  if (!C.zf) goto L_11346e72;
L_11346e63:;
  /* 11346e63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11346e66 push ecx */
  push32((uint32_t)(ECX));
  /* 11346e67 call dword ptr [0x11371304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371304))), 0x11346e6du);
  /* 11346e6d jmp 0x11346fea */
  goto L_11346fea;
L_11346e72:;
  /* 11346e72 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11346e75 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346e79 jne 0x11346e8f */
  if (!C.zf) goto L_11346e8f;
  /* 11346e7b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11346e7e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11346e85 mov eax, 1 */
  EAX = (0x1u);
  /* 11346e8a jmp 0x11346fea */
  goto L_11346fea;
L_11346e8f:;
  /* 11346e8f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11346e92 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346e96 jne 0x11346ea0 */
  if (!C.zf) goto L_11346ea0;
  /* 11346e98 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11346e9b jmp 0x11346fea */
  goto L_11346fea;
L_11346ea0:;
  /* 11346ea0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11346ea3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11346ea6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11346ea9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346eac mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 11346eaf mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11346eb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346eb5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11346eb8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 11346ebb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11346ebe cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346ec2 jne 0x11346fc7 */
  if (!C.zf) goto L_11346fc7;
  /* 11346ec8 mov eax, dword ptr [0x1136dc78] */
  EAX = (r32((uint32_t)(0x1136dc78)));
  /* 11346ecd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11346ed0 jmp 0x11346edb */
  goto L_11346edb;
L_11346ed2:;
  /* 11346ed2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11346ed5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11346ed8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11346edb:;
  /* 11346edb mov edx, dword ptr [0x1136dc78] */
  EDX = (r32((uint32_t)(0x1136dc78)));
  /* 11346ee1 add edx, dword ptr [0x1136dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1136dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11346ee7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346eea jge 0x11346f02 */
  if ((C.sf==C.of)) goto L_11346f02;
  /* 11346eec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11346eef imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11346ef2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346ef5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11346ef8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11346f00 jmp 0x11346ed2 */
  goto L_11346ed2;
L_11346f02:;
  /* 11346f02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346f05 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11346f08 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11346f0b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11346f0e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346f14 jne 0x11346f25 */
  if (!C.zf) goto L_11346f25;
  /* 11346f16 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346f19 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11346f20 jmp 0x11346fad */
  goto L_11346fad;
L_11346f25:;
  /* 11346f25 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11346f28 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346f2e jne 0x11346f3c */
  if (!C.zf) goto L_11346f3c;
  /* 11346f30 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346f33 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 11346f3a jmp 0x11346fad */
  goto L_11346fad;
L_11346f3c:;
  /* 11346f3c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11346f3f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346f45 jne 0x11346f53 */
  if (!C.zf) goto L_11346f53;
  /* 11346f47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346f4a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11346f51 jmp 0x11346fad */
  goto L_11346fad;
L_11346f53:;
  /* 11346f53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11346f56 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346f5c jne 0x11346f6a */
  if (!C.zf) goto L_11346f6a;
  /* 11346f5e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346f61 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11346f68 jmp 0x11346fad */
  goto L_11346fad;
L_11346f6a:;
  /* 11346f6a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11346f6d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346f73 jne 0x11346f81 */
  if (!C.zf) goto L_11346f81;
  /* 11346f75 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346f78 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 11346f7f jmp 0x11346fad */
  goto L_11346fad;
L_11346f81:;
  /* 11346f81 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11346f84 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346f8a jne 0x11346f98 */
  if (!C.zf) goto L_11346f98;
  /* 11346f8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346f8f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11346f96 jmp 0x11346fad */
  goto L_11346fad;
L_11346f98:;
  /* 11346f98 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11346f9b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11346fa1 jne 0x11346fad */
  if (!C.zf) goto L_11346fad;
  /* 11346fa3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346fa6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_11346fad:;
  /* 11346fad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346fb0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11346fb3 push edx */
  push32((uint32_t)(EDX));
  /* 11346fb4 push 8 */
  push32((uint32_t)(0x8u));
  /* 11346fb6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11346fb9u);
  /* 11346fb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11346fbc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346fbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11346fc2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 11346fc5 jmp 0x11346fde */
  goto L_11346fde;
L_11346fc7:;
  /* 11346fc7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11346fca mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11346fd1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11346fd4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11346fd7 push ecx */
  push32((uint32_t)(ECX));
  /* 11346fd8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11346fdbu);
  /* 11346fdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11346fde:;
  /* 11346fde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11346fe1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11346fe4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 11346fe7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11346fea:;
  /* 11346fea mov esp, ebp */
  ESP = (EBP);
  /* 11346fec pop ebp */
  EBP = (pop32());
  /* 11346fed ret  */
  ESPCHK(0x11346e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ff0 @ 0x11346ff0 (89 bytes, 35 insns) */
void f_11346ff0(void) {
  FTRACE(0x11346ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11346ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11346ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11346ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 11346ff4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11346ff7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11346ffa:;
  /* 11346ffa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11346ffd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11346fff cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347002 je 0x11347022 */
  if (C.zf) goto L_11347022;
  /* 11347004 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11347007 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134700a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134700d mov ecx, dword ptr [0x1136dc84] */
  ECX = (r32((uint32_t)(0x1136dc84)));
  /* 11347013 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11347016 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11347019 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134701b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134701e jae 0x11347022 */
  if (!C.cf) goto L_11347022;
  /* 11347020 jmp 0x11346ffa */
  goto L_11346ffa;
L_11347022:;
  /* 11347022 mov eax, dword ptr [0x1136dc84] */
  EAX = (r32((uint32_t)(0x1136dc84)));
  /* 11347027 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1134702a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134702d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1134702f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347032 jae 0x1134703e */
  if (!C.cf) goto L_1134703e;
  /* 11347034 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11347037 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11347039 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134703c je 0x11347042 */
  if (C.zf) goto L_11347042;
L_1134703e:;
  /* 1134703e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11347040 jmp 0x11347045 */
  goto L_11347045;
L_11347042:;
  /* 11347042 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11347045:;
  /* 11347045 mov esp, ebp */
  ESP = (EBP);
  /* 11347047 pop ebp */
  EBP = (pop32());
  /* 11347048 ret  */
  ESPCHK(0x11346ff0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11347050 (48 bytes, 17 insns) */
void f_11347050(void) {
  FTRACE(0x11347050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11347050 push ebp */
  push32((uint32_t)(EBP));
  /* 11347051 mov ebp, esp */
  EBP = (ESP);
  /* 11347053 push ecx */
  push32((uint32_t)(ECX));
  /* 11347054 push 9 */
  push32((uint32_t)(0x9u));
  /* 11347056 call 0x11346d50 */
  push32(0x1134705bu); f_11346d50();
  /* 1134705b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134705e mov eax, dword ptr [0x1136f654] */
  EAX = (r32((uint32_t)(0x1136f654)));
  /* 11347063 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11347066 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347069 mov dword ptr [0x1136f654], ecx */
  w32((uint32_t)(0x1136f654), (ECX));
  /* 1134706f push 9 */
  push32((uint32_t)(0x9u));
  /* 11347071 call 0x11346df0 */
  push32(0x11347076u); f_11346df0();
  /* 11347076 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11347079 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134707c mov esp, ebp */
  ESP = (EBP);
  /* 1134707e pop ebp */
  EBP = (pop32());
  /* 1134707f ret  */
  ESPCHK(0x11347050u, _esp0);
  ESP += 4; return;
}

/* FUN_10007080 @ 0x11347080 (10 bytes, 5 insns) */
void f_11347080(void) {
  FTRACE(0x11347080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11347080 push ebp */
  push32((uint32_t)(EBP));
  /* 11347081 mov ebp, esp */
  EBP = (ESP);
  /* 11347083 mov eax, dword ptr [0x1136f654] */
  EAX = (r32((uint32_t)(0x1136f654)));
  /* 11347088 pop ebp */
  EBP = (pop32());
  /* 11347089 ret  */
  ESPCHK(0x11347080u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11347090 (45 bytes, 19 insns) */
void f_11347090(void) {
  FTRACE(0x11347090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11347090 push ebp */
  push32((uint32_t)(EBP));
  /* 11347091 mov ebp, esp */
  EBP = (ESP);
  /* 11347093 push ecx */
  push32((uint32_t)(ECX));
  /* 11347094 mov eax, dword ptr [0x1136f654] */
  EAX = (r32((uint32_t)(0x1136f654)));
  /* 11347099 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1134709c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113470a0 je 0x113470b0 */
  if (C.zf) goto L_113470b0;
  /* 113470a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113470a5 push ecx */
  push32((uint32_t)(ECX));
  /* 113470a6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x113470a9u);
  /* 113470a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113470ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113470ae jne 0x113470b4 */
  if (!C.zf) goto L_113470b4;
L_113470b0:;
  /* 113470b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113470b2 jmp 0x113470b9 */
  goto L_113470b9;
L_113470b4:;
  /* 113470b4 mov eax, 1 */
  EAX = (0x1u);
L_113470b9:;
  /* 113470b9 mov esp, ebp */
  ESP = (EBP);
  /* 113470bb pop ebp */
  EBP = (pop32());
  /* 113470bc ret  */
  ESPCHK(0x11347090u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x113470c0 (88 bytes, 40 insns) */
void f_113470c0(void) {
  FTRACE(0x113470c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113470c0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 113470c4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 113470c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113470ca je 0x11347113 */
  if (C.zf) goto L_11347113;
  /* 113470cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113470ce mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 113470d2 push edi */
  push32((uint32_t)(EDI));
  /* 113470d3 mov edi, ecx */
  EDI = (ECX);
  /* 113470d5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113470d8 jb 0x11347107 */
  if (C.cf) goto L_11347107;
  /* 113470da neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 113470dc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 113470df je 0x113470e9 */
  if (C.zf) goto L_113470e9;
  /* 113470e1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_113470e3:;
  /* 113470e3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113470e5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113470e6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 113470e7 jne 0x113470e3 */
  if (!C.zf) goto L_113470e3;
L_113470e9:;
  /* 113470e9 mov ecx, eax */
  ECX = (EAX);
  /* 113470eb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 113470ee add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113470f0 mov ecx, eax */
  ECX = (EAX);
  /* 113470f2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 113470f5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113470f7 mov ecx, edx */
  ECX = (EDX);
  /* 113470f9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 113470fc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113470ff je 0x11347107 */
  if (C.zf) goto L_11347107;
  /* 11347101 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11347103 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11347105 je 0x1134710d */
  if (C.zf) goto L_1134710d;
L_11347107:;
  /* 11347107 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11347109 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1134710a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1134710b jne 0x11347107 */
  if (!C.zf) goto L_11347107;
L_1134710d:;
  /* 1134710d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11347111 pop edi */
  EDI = (pop32());
  /* 11347112 ret  */
  ESPCHK(0x113470c0u, _esp0);
  ESP += 4; return;
L_11347113:;
  /* 11347113 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11347117 ret  */
  ESPCHK(0x113470c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007120 @ 0x11347120 (23 bytes, 10 insns) */
void f_11347120(void) {
  FTRACE(0x11347120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11347120 push ebp */
  push32((uint32_t)(EBP));
  /* 11347121 mov ebp, esp */
  EBP = (ESP);
  /* 11347123 mov eax, dword ptr [0x1136f650] */
  EAX = (r32((uint32_t)(0x1136f650)));
  /* 11347128 push eax */
  push32((uint32_t)(EAX));
  /* 11347129 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134712c push ecx */
  push32((uint32_t)(ECX));
  /* 1134712d call 0x11347140 */
  push32(0x11347132u); f_11347140();
  /* 11347132 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11347135 pop ebp */
  EBP = (pop32());
  /* 11347136 ret  */
  ESPCHK(0x11347120u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11347140 (87 bytes, 34 insns) */
void f_11347140(void) {
  FTRACE(0x11347140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11347140 push ebp */
  push32((uint32_t)(EBP));
  /* 11347141 mov ebp, esp */
  EBP = (ESP);
  /* 11347143 push ecx */
  push32((uint32_t)(ECX));
  /* 11347144 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347148 jbe 0x1134714e */
  if ((C.cf||C.zf)) goto L_1134714e;
  /* 1134714a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134714c jmp 0x11347193 */
  goto L_11347193;
L_1134714e:;
  /* 1134714e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347152 ja 0x11347165 */
  if ((!C.cf&&!C.zf)) goto L_11347165;
  /* 11347154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347157 push eax */
  push32((uint32_t)(EAX));
  /* 11347158 call 0x113471a0 */
  push32(0x1134715du); f_113471a0();
  /* 1134715d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11347160 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11347163 jmp 0x1134716c */
  goto L_1134716c;
L_11347165:;
  /* 11347165 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1134716c:;
  /* 1134716c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347170 jne 0x11347178 */
  if (!C.zf) goto L_11347178;
  /* 11347172 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347176 jne 0x1134717d */
  if (!C.zf) goto L_1134717d;
L_11347178:;
  /* 11347178 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134717b jmp 0x11347193 */
  goto L_11347193;
L_1134717d:;
  /* 1134717d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347180 push ecx */
  push32((uint32_t)(ECX));
  /* 11347181 call 0x11347090 */
  push32(0x11347186u); f_11347090();
  /* 11347186 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11347189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134718b jne 0x11347191 */
  if (!C.zf) goto L_11347191;
  /* 1134718d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134718f jmp 0x11347193 */
  goto L_11347193;
L_11347191:;
  /* 11347191 jmp 0x1134714e */
  goto L_1134714e;
L_11347193:;
  /* 11347193 mov esp, ebp */
  ESP = (EBP);
  /* 11347195 pop ebp */
  EBP = (pop32());
  /* 11347196 ret  */
  ESPCHK(0x11347140u, _esp0);
  ESP += 4; return;
}

/* FUN_100071a0 @ 0x113471a0 (109 bytes, 37 insns) */
void f_113471a0(void) {
  FTRACE(0x113471a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113471a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113471a1 mov ebp, esp */
  EBP = (ESP);
  /* 113471a3 push ecx */
  push32((uint32_t)(ECX));
  /* 113471a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113471a7 cmp eax, dword ptr [0x1136dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1136dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113471ad ja 0x113471dd */
  if ((!C.cf&&!C.zf)) goto L_113471dd;
  /* 113471af push 9 */
  push32((uint32_t)(0x9u));
  /* 113471b1 call 0x11346d50 */
  push32(0x113471b6u); f_11346d50();
  /* 113471b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113471b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113471bc push ecx */
  push32((uint32_t)(ECX));
  /* 113471bd call 0x11347ce0 */
  push32(0x113471c2u); f_11347ce0();
  /* 113471c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113471c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113471c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 113471ca call 0x11346df0 */
  push32(0x113471cfu); f_11346df0();
  /* 113471cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113471d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113471d6 je 0x113471dd */
  if (C.zf) goto L_113471dd;
  /* 113471d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113471db jmp 0x11347209 */
  goto L_11347209;
L_113471dd:;
  /* 113471dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113471e1 jne 0x113471ea */
  if (!C.zf) goto L_113471ea;
  /* 113471e3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_113471ea:;
  /* 113471ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113471ed add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113471f0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 113471f3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 113471f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113471f9 push eax */
  push32((uint32_t)(EAX));
  /* 113471fa push 0 */
  push32((uint32_t)(0x0u));
  /* 113471fc mov ecx, dword ptr [0x11370e0c] */
  ECX = (r32((uint32_t)(0x11370e0c)));
  /* 11347202 push ecx */
  push32((uint32_t)(ECX));
  /* 11347203 call dword ptr [0x11371300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371300))), 0x11347209u);
L_11347209:;
  /* 11347209 mov esp, ebp */
  ESP = (EBP);
  /* 1134720b pop ebp */
  EBP = (pop32());
  /* 1134720c ret  */
  ESPCHK(0x113471a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007210 @ 0x11347210 (10 bytes, 5 insns) */
void f_11347210(void) {
  FTRACE(0x11347210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11347210 push ebp */
  push32((uint32_t)(EBP));
  /* 11347211 mov ebp, esp */
  EBP = (ESP);
  /* 11347213 mov eax, 1 */
  EAX = (0x1u);
  /* 11347218 pop ebp */
  EBP = (pop32());
  /* 11347219 ret  */
  ESPCHK(0x11347210u, _esp0);
  ESP += 4; return;
}

/* FUN_10007220 @ 0x11347220 (173 bytes, 59 insns) */
void f_11347220(void) {
  FTRACE(0x11347220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11347220 push ebp */
  push32((uint32_t)(EBP));
  /* 11347221 mov ebp, esp */
  EBP = (ESP);
  /* 11347223 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347226 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134722a jbe 0x11347233 */
  if ((C.cf||C.zf)) goto L_11347233;
  /* 1134722c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1134722e jmp 0x113472c9 */
  goto L_113472c9;
L_11347233:;
  /* 11347233 push 9 */
  push32((uint32_t)(0x9u));
  /* 11347235 call 0x11346d50 */
  push32(0x1134723au); f_11346d50();
  /* 1134723a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134723d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347240 push eax */
  push32((uint32_t)(EAX));
  /* 11347241 call 0x11347650 */
  push32(0x11347246u); f_11347650();
  /* 11347246 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11347249 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1134724c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347250 je 0x11347291 */
  if (C.zf) goto L_11347291;
  /* 11347252 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11347259 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134725c cmp ecx, dword ptr [0x1136dc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1136dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347262 ja 0x11347282 */
  if ((!C.cf&&!C.zf)) goto L_11347282;
  /* 11347264 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11347267 push edx */
  push32((uint32_t)(EDX));
  /* 11347268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134726b push eax */
  push32((uint32_t)(EAX));
  /* 1134726c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134726f push ecx */
  push32((uint32_t)(ECX));
  /* 11347270 call 0x11348520 */
  push32(0x11347275u); f_11348520();
  /* 11347275 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11347278 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134727a je 0x11347282 */
  if (C.zf) goto L_11347282;
  /* 1134727c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134727f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11347282:;
  /* 11347282 push 9 */
  push32((uint32_t)(0x9u));
  /* 11347284 call 0x11346df0 */
  push32(0x11347289u); f_11346df0();
  /* 11347289 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134728c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1134728f jmp 0x113472c9 */
  goto L_113472c9;
L_11347291:;
  /* 11347291 push 9 */
  push32((uint32_t)(0x9u));
  /* 11347293 call 0x11346df0 */
  push32(0x11347298u); f_11346df0();
  /* 11347298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134729b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134729f jne 0x113472a8 */
  if (!C.zf) goto L_113472a8;
  /* 113472a1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_113472a8:;
  /* 113472a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113472ab add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113472ae and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 113472b0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 113472b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113472b6 push ecx */
  push32((uint32_t)(ECX));
  /* 113472b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113472ba push edx */
  push32((uint32_t)(EDX));
  /* 113472bb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 113472bd mov eax, dword ptr [0x11370e0c] */
  EAX = (r32((uint32_t)(0x11370e0c)));
  /* 113472c2 push eax */
  push32((uint32_t)(EAX));
  /* 113472c3 call dword ptr [0x113712fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712fc))), 0x113472c9u);
L_113472c9:;
  /* 113472c9 mov esp, ebp */
  ESP = (EBP);
  /* 113472cb pop ebp */
  EBP = (pop32());
  /* 113472cc ret  */
  ESPCHK(0x11347220u, _esp0);
  ESP += 4; return;
}

/* FUN_100072d0 @ 0x113472d0 (490 bytes, 165 insns) */
void f_113472d0(void) {
  FTRACE(0x113472d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113472d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113472d1 mov ebp, esp */
  EBP = (ESP);
  /* 113472d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113472d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113472da jne 0x113472ed */
  if (!C.zf) goto L_113472ed;
  /* 113472dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113472df push eax */
  push32((uint32_t)(EAX));
  /* 113472e0 call 0x11347120 */
  push32(0x113472e5u); f_11347120();
  /* 113472e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113472e8 jmp 0x113474b6 */
  goto L_113474b6;
L_113472ed:;
  /* 113472ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113472f1 jne 0x11347306 */
  if (!C.zf) goto L_11347306;
  /* 113472f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113472f6 push ecx */
  push32((uint32_t)(ECX));
  /* 113472f7 call 0x113474c0 */
  push32(0x113472fcu); f_113474c0();
  /* 113472fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113472ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11347301 jmp 0x113474b6 */
  goto L_113474b6;
L_11347306:;
  /* 11347306 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1134730d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347311 ja 0x11347489 */
  if ((!C.cf&&!C.zf)) goto L_11347489;
  /* 11347317 push 9 */
  push32((uint32_t)(0x9u));
  /* 11347319 call 0x11346d50 */
  push32(0x1134731eu); f_11346d50();
  /* 1134731e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11347321 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347324 push edx */
  push32((uint32_t)(EDX));
  /* 11347325 call 0x11347650 */
  push32(0x1134732au); f_11347650();
  /* 1134732a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134732d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11347330 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347334 je 0x1134744c */
  if (C.zf) goto L_1134744c;
  /* 1134733a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1134733d cmp eax, dword ptr [0x1136dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1136dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347343 ja 0x113473c0 */
  if ((!C.cf&&!C.zf)) goto L_113473c0;
  /* 11347345 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11347348 push ecx */
  push32((uint32_t)(ECX));
  /* 11347349 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134734c push edx */
  push32((uint32_t)(EDX));
  /* 1134734d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11347350 push eax */
  push32((uint32_t)(EAX));
  /* 11347351 call 0x11348520 */
  push32(0x11347356u); f_11348520();
  /* 11347356 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11347359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134735b je 0x11347365 */
  if (C.zf) goto L_11347365;
  /* 1134735d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347360 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11347363 jmp 0x113473c0 */
  goto L_113473c0;
L_11347365:;
  /* 11347365 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11347368 push edx */
  push32((uint32_t)(EDX));
  /* 11347369 call 0x11347ce0 */
  push32(0x1134736eu); f_11347ce0();
  /* 1134736e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11347371 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11347374 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347378 je 0x113473c0 */
  if (C.zf) goto L_113473c0;
  /* 1134737a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1134737d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11347380 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347383 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11347386 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11347389 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134738c jae 0x11347396 */
  if (!C.cf) goto L_11347396;
  /* 1134738e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11347391 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11347394 jmp 0x1134739c */
  goto L_1134739c;
L_11347396:;
  /* 11347396 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11347399 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1134739c:;
  /* 1134739c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1134739f push edx */
  push32((uint32_t)(EDX));
  /* 113473a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113473a3 push eax */
  push32((uint32_t)(EAX));
  /* 113473a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113473a7 push ecx */
  push32((uint32_t)(ECX));
  /* 113473a8 call 0x11349c30 */
  push32(0x113473adu); f_11349c30();
  /* 113473ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113473b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113473b3 push edx */
  push32((uint32_t)(EDX));
  /* 113473b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113473b7 push eax */
  push32((uint32_t)(EAX));
  /* 113473b8 call 0x11347710 */
  push32(0x113473bdu); f_11347710();
  /* 113473bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113473c0:;
  /* 113473c0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113473c4 jne 0x11347440 */
  if (!C.zf) goto L_11347440;
  /* 113473c6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113473ca jne 0x113473d3 */
  if (!C.zf) goto L_113473d3;
  /* 113473cc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_113473d3:;
  /* 113473d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113473d6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113473d9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 113473dc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 113473df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113473e2 push edx */
  push32((uint32_t)(EDX));
  /* 113473e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113473e5 mov eax, dword ptr [0x11370e0c] */
  EAX = (r32((uint32_t)(0x11370e0c)));
  /* 113473ea push eax */
  push32((uint32_t)(EAX));
  /* 113473eb call dword ptr [0x11371300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371300))), 0x113473f1u);
  /* 113473f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113473f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113473f8 je 0x11347440 */
  if (C.zf) goto L_11347440;
  /* 113473fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113473fd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11347400 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11347403 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11347406 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11347409 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134740c jae 0x11347416 */
  if (!C.cf) goto L_11347416;
  /* 1134740e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11347411 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11347414 jmp 0x1134741c */
  goto L_1134741c;
L_11347416:;
  /* 11347416 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11347419 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1134741c:;
  /* 1134741c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1134741f push eax */
  push32((uint32_t)(EAX));
  /* 11347420 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347423 push ecx */
  push32((uint32_t)(ECX));
  /* 11347424 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11347427 push edx */
  push32((uint32_t)(EDX));
  /* 11347428 call 0x11349c30 */
  push32(0x1134742du); f_11349c30();
  /* 1134742d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11347430 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347433 push eax */
  push32((uint32_t)(EAX));
  /* 11347434 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11347437 push ecx */
  push32((uint32_t)(ECX));
  /* 11347438 call 0x11347710 */
  push32(0x1134743du); f_11347710();
  /* 1134743d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11347440:;
  /* 11347440 push 9 */
  push32((uint32_t)(0x9u));
  /* 11347442 call 0x11346df0 */
  push32(0x11347447u); f_11346df0();
  /* 11347447 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134744a jmp 0x11347489 */
  goto L_11347489;
L_1134744c:;
  /* 1134744c push 9 */
  push32((uint32_t)(0x9u));
  /* 1134744e call 0x11346df0 */
  push32(0x11347453u); f_11346df0();
  /* 11347453 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11347456 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134745a jne 0x11347463 */
  if (!C.zf) goto L_11347463;
  /* 1134745c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11347463:;
  /* 11347463 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11347466 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11347469 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1134746c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1134746f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11347472 push eax */
  push32((uint32_t)(EAX));
  /* 11347473 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347476 push ecx */
  push32((uint32_t)(ECX));
  /* 11347477 push 0 */
  push32((uint32_t)(0x0u));
  /* 11347479 mov edx, dword ptr [0x11370e0c] */
  EDX = (r32((uint32_t)(0x11370e0c)));
  /* 1134747f push edx */
  push32((uint32_t)(EDX));
  /* 11347480 call dword ptr [0x113712fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712fc))), 0x11347486u);
  /* 11347486 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11347489:;
  /* 11347489 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134748d jne 0x11347498 */
  if (!C.zf) goto L_11347498;
  /* 1134748f cmp dword ptr [0x1136f650], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f650))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11347496 jne 0x1134749d */
  if (!C.zf) goto L_1134749d;
L_11347498:;
  /* 11347498 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1134749b jmp 0x113474b6 */
  goto L_113474b6;
L_1134749d:;
  /* 1134749d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113474a0 push eax */
  push32((uint32_t)(EAX));
  /* 113474a1 call 0x11347090 */
  push32(0x113474a6u); f_11347090();
  /* 113474a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113474a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113474ab jne 0x113474b1 */
  if (!C.zf) goto L_113474b1;
  /* 113474ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113474af jmp 0x113474b6 */
  goto L_113474b6;
L_113474b1:;
  /* 113474b1 jmp 0x11347306 */
  goto L_11347306;
L_113474b6:;
  /* 113474b6 mov esp, ebp */
  ESP = (EBP);
  /* 113474b8 pop ebp */
  EBP = (pop32());
  /* 113474b9 ret  */
  ESPCHK(0x113472d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100074c0 @ 0x113474c0 (104 bytes, 38 insns) */
void f_113474c0(void) {
  FTRACE(0x113474c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113474c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113474c1 mov ebp, esp */
  EBP = (ESP);
  /* 113474c3 push ecx */
  push32((uint32_t)(ECX));
  /* 113474c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113474c8 jne 0x113474cc */
  if (!C.zf) goto L_113474cc;
  /* 113474ca jmp 0x11347524 */
  goto L_11347524;
L_113474cc:;
  /* 113474cc push 9 */
  push32((uint32_t)(0x9u));
  /* 113474ce call 0x11346d50 */
  push32(0x113474d3u); f_11346d50();
  /* 113474d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113474d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113474d9 push eax */
  push32((uint32_t)(EAX));
  /* 113474da call 0x11347650 */
  push32(0x113474dfu); f_11347650();
  /* 113474df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113474e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113474e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113474e9 je 0x11347507 */
  if (C.zf) goto L_11347507;
  /* 113474eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113474ee push ecx */
  push32((uint32_t)(ECX));
  /* 113474ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113474f2 push edx */
  push32((uint32_t)(EDX));
  /* 113474f3 call 0x11347710 */
  push32(0x113474f8u); f_11347710();
  /* 113474f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113474fb push 9 */
  push32((uint32_t)(0x9u));
  /* 113474fd call 0x11346df0 */
  push32(0x11347502u); f_11346df0();
  /* 11347502 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11347505 jmp 0x11347524 */
  goto L_11347524;
L_11347507:;
  /* 11347507 push 9 */
  push32((uint32_t)(0x9u));
  /* 11347509 call 0x11346df0 */
  push32(0x1134750eu); f_11346df0();
  /* 1134750e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11347511 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11347514 push eax */
  push32((uint32_t)(EAX));
  /* 11347515 push 0 */
  push32((uint32_t)(0x0u));
  /* 11347517 mov ecx, dword ptr [0x11370e0c] */
  ECX = (r32((uint32_t)(0x11370e0c)));
  /* 1134751d push ecx */
  push32((uint32_t)(ECX));
  /* 1134751e call dword ptr [0x113713a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113713a0))), 0x11347524u);
L_11347524:;
  /* 11347524 mov esp, ebp */
  ESP = (EBP);
  /* 11347526 pop ebp */
  EBP = (pop32());
  /* 11347527 ret  */
  ESPCHK(0x113474c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007530 @ 0x11347530 (116 bytes, 34 insns) */
void f_11347530(void) {
  FTRACE(0x11347530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11347530 push ebp */
  push32((uint32_t)(EBP));
  /* 11347531 mov ebp, esp */
  EBP = (ESP);
  /* 11347533 push ecx */
  push32((uint32_t)(ECX));
  /* 11347534 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1134753b push 9 */
  push32((uint32_t)(0x9u));
  /* 1134753d call 0x11346d50 */
  push32(0x11347542u); f_11346d50();
  /* 11347542 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11347545 call 0x11348c40 */
  push32(0x1134754au); f_11348c40();
  /* 1134754a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1134754c jge 0x11347555 */
  if ((C.sf==C.of)) goto L_11347555;
  /* 1134754e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11347555:;
  /* 11347555 push 9 */
  push32((uint32_t)(0x9u));
  /* 11347557 call 0x11346df0 */
  push32(0x1134755cu); f_11346df0();
  /* 1134755c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1134755f push 0 */
  push32((uint32_t)(0x0u));
  /* 11347561 push 0 */
  push32((uint32_t)(0x0u));
  /* 11347563 mov eax, dword ptr [0x11370e0c] */
  EAX = (r32((uint32_t)(0x11370e0c)));
  /* 11347568 push eax */
  push32((uint32_t)(EAX));
  /* 11347569 call dword ptr [0x11371384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371384))), 0x1134756fu);
  /* 1134756f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11347571 jne 0x1134759d */
  if (!C.zf) goto L_1134759d;
  /* 11347573 call dword ptr [0x11371364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371364))), 0x11347579u);
  /* 11347579 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1134757c jne 0x11347596 */
  if (!C.zf) goto L_11347596;
  /* 1134757e call 0x1134b230 */
  push32(0x11347583u); f_1134b230();
  /* 11347583 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11347589 call 0x1134b220 */
  push32(0x1134758eu); f_1134b220();
  /* 1134758e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11347594 jmp 0x1134759d */
  goto L_1134759d;
L_11347596:;
  /* 11347596 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1134759d:;
  /* 1134759d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113475a0 mov esp, ebp */
  ESP = (EBP);
  /* 113475a2 pop ebp */
  EBP = (pop32());
  /* 113475a3 ret  */
  ESPCHK(0x11347530u, _esp0);
  ESP += 4; return;
}

/* FUN_100075b0 @ 0x113475b0 (10 bytes, 5 insns) */
void f_113475b0(void) {
  FTRACE(0x113475b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113475b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113475b1 mov ebp, esp */
  EBP = (ESP);
  /* 113475b3 call 0x11347530 */
  push32(0x113475b8u); f_11347530();
  /* 113475b8 pop ebp */
  EBP = (pop32());
  /* 113475b9 ret  */
  ESPCHK(0x113475b0u, _esp0);
  ESP += 4; return;
}

