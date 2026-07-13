#include "recomp.h"

/* OnInit @ 0x10c11005 (5 bytes, 1 insns) */
void f_10c11005(void) {
  FTRACE(0x10c11005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c11005 jmp 0x10c11090 */
  f_10c11090(); return;
}

/* thunk_FUN_10001030 @ 0x10c1100a (5 bytes, 1 insns) */
void f_10c1100a(void) {
  FTRACE(0x10c1100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1100a jmp 0x10c11030 */
  f_10c11030(); return;
}

/* ProcessScenary @ 0x10c1100f (5 bytes, 1 insns) */
void f_10c1100f(void) {
  FTRACE(0x10c1100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1100f jmp 0x10c11140 */
  f_10c11140(); return;
}

/* FUN_10001030 @ 0x10c11030 (67 bytes, 26 insns) */
void f_10c11030(void) {
  FTRACE(0x10c11030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c11030 push ebp */
  push32((uint32_t)(EBP));
  /* 10c11031 mov ebp, esp */
  EBP = (ESP);
  /* 10c11033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c11036 push ebx */
  push32((uint32_t)(EBX));
  /* 10c11037 push esi */
  push32((uint32_t)(ESI));
  /* 10c11038 push edi */
  push32((uint32_t)(EDI));
  /* 10c11039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10c1103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10c11041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10c11046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c11048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11052 je 0x10c11056 */
  if (C.zf) goto L_10c11056;
  /* 10c11054 jmp 0x10c1105b */
  goto L_10c1105b;
L_10c11056:;
  /* 10c11056 call 0x10c11005 */
  push32(0x10c1105bu); f_10c11005();
L_10c1105b:;
  /* 10c1105b mov eax, 1 */
  EAX = (0x1u);
  /* 10c11060 pop edi */
  EDI = (pop32());
  /* 10c11061 pop esi */
  ESI = (pop32());
  /* 10c11062 pop ebx */
  EBX = (pop32());
  /* 10c11063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11068 call 0x10c11590 */
  push32(0x10c1106du); f_10c11590();
  /* 10c1106d mov esp, ebp */
  ESP = (EBP);
  /* 10c1106f pop ebp */
  EBP = (pop32());
  /* 10c11070 ret 0xc */
  ESPCHK(0x10c11030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10c11090 (131 bytes, 44 insns) */
void f_10c11090(void) {
  FTRACE(0x10c11090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c11090 push ebp */
  push32((uint32_t)(EBP));
  /* 10c11091 mov ebp, esp */
  EBP = (ESP);
  /* 10c11093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c11096 push ebx */
  push32((uint32_t)(EBX));
  /* 10c11097 push esi */
  push32((uint32_t)(ESI));
  /* 10c11098 push edi */
  push32((uint32_t)(EDI));
  /* 10c11099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10c1109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10c110a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10c110a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c110a8 mov esi, esp */
  ESI = (ESP);
  /* 10c110aa call dword ptr [0x10c4039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4039c))), 0x10c110b0u);
  /* 10c110b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c110b2 call 0x10c11590 */
  push32(0x10c110b7u); f_10c11590();
  /* 10c110b7 mov esi, esp */
  ESI = (ESP);
  /* 10c110b9 push 0x10c39030 */
  push32((uint32_t)(0x10c39030u));
  /* 10c110be push 1 */
  push32((uint32_t)(0x1u));
  /* 10c110c0 call dword ptr [0x10c403a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c403a0))), 0x10c110c6u);
  /* 10c110c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c110c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c110cb call 0x10c11590 */
  push32(0x10c110d0u); f_10c11590();
  /* 10c110d0 mov esi, esp */
  ESI = (ESP);
  /* 10c110d2 push 0x10c39028 */
  push32((uint32_t)(0x10c39028u));
  /* 10c110d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c110d9 call dword ptr [0x10c403a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c403a0))), 0x10c110dfu);
  /* 10c110df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c110e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c110e4 call 0x10c11590 */
  push32(0x10c110e9u); f_10c11590();
  /* 10c110e9 mov esi, esp */
  ESI = (ESP);
  /* 10c110eb push 0x10c3901c */
  push32((uint32_t)(0x10c3901cu));
  /* 10c110f0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c110f2 call dword ptr [0x10c403a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c403a0))), 0x10c110f8u);
  /* 10c110f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c110fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c110fd call 0x10c11590 */
  push32(0x10c11102u); f_10c11590();
  /* 10c11102 pop edi */
  EDI = (pop32());
  /* 10c11103 pop esi */
  ESI = (pop32());
  /* 10c11104 pop ebx */
  EBX = (pop32());
  /* 10c11105 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11108 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1110a call 0x10c11590 */
  push32(0x10c1110fu); f_10c11590();
  /* 10c1110f mov esp, ebp */
  ESP = (EBP);
  /* 10c11111 pop ebp */
  EBP = (pop32());
  /* 10c11112 ret  */
  ESPCHK(0x10c11090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001140 @ 0x10c11140 (843 bytes, 260 insns) */
void f_10c11140(void) {
  FTRACE(0x10c11140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c11140 push ebp */
  push32((uint32_t)(EBP));
  /* 10c11141 mov ebp, esp */
  EBP = (ESP);
  /* 10c11143 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c11146 push ebx */
  push32((uint32_t)(EBX));
  /* 10c11147 push esi */
  push32((uint32_t)(ESI));
  /* 10c11148 push edi */
  push32((uint32_t)(EDI));
  /* 10c11149 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10c1114c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10c11151 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10c11156 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c11158 mov esi, esp */
  ESI = (ESP);
  /* 10c1115a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1115c call dword ptr [0x10c4038c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4038c))), 0x10c11162u);
  /* 10c11162 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11167 call 0x10c11590 */
  push32(0x10c1116cu); f_10c11590();
  /* 10c1116c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c11171 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c11173 je 0x10c1147a */
  if (C.zf) goto L_10c1147a;
  /* 10c11179 mov esi, esp */
  ESI = (ESP);
  /* 10c1117b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1117d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1117f call dword ptr [0x10c40390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40390))), 0x10c11185u);
  /* 10c11185 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11188 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1118a call 0x10c11590 */
  push32(0x10c1118fu); f_10c11590();
  /* 10c1118f mov esi, esp */
  ESI = (ESP);
  /* 10c11191 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c11196 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c11198 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1119a call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c111a0u);
  /* 10c111a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c111a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c111a5 call 0x10c11590 */
  push32(0x10c111aau); f_10c11590();
  /* 10c111aa mov esi, esp */
  ESI = (ESP);
  /* 10c111ac push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c111b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c111b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c111b5 call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c111bbu);
  /* 10c111bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c111be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c111c0 call 0x10c11590 */
  push32(0x10c111c5u); f_10c11590();
  /* 10c111c5 mov esi, esp */
  ESI = (ESP);
  /* 10c111c7 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c111cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10c111ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10c111d0 call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c111d6u);
  /* 10c111d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c111d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c111db call 0x10c11590 */
  push32(0x10c111e0u); f_10c11590();
  /* 10c111e0 mov esi, esp */
  ESI = (ESP);
  /* 10c111e2 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c111e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c111e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c111eb call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c111f1u);
  /* 10c111f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c111f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c111f6 call 0x10c11590 */
  push32(0x10c111fbu); f_10c11590();
  /* 10c111fb mov esi, esp */
  ESI = (ESP);
  /* 10c111fd push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c11202 push 5 */
  push32((uint32_t)(0x5u));
  /* 10c11204 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c11206 call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c1120cu);
  /* 10c1120c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1120f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11211 call 0x10c11590 */
  push32(0x10c11216u); f_10c11590();
  /* 10c11216 mov esi, esp */
  ESI = (ESP);
  /* 10c11218 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c1121d push 4 */
  push32((uint32_t)(0x4u));
  /* 10c1121f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c11221 call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c11227u);
  /* 10c11227 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1122a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1122c call 0x10c11590 */
  push32(0x10c11231u); f_10c11590();
  /* 10c11231 mov esi, esp */
  ESI = (ESP);
  /* 10c11233 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c11238 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c1123a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1123c call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c11242u);
  /* 10c11242 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11247 call 0x10c11590 */
  push32(0x10c1124cu); f_10c11590();
  /* 10c1124c mov esi, esp */
  ESI = (ESP);
  /* 10c1124e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c11253 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c11255 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c11257 call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c1125du);
  /* 10c1125d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11260 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11262 call 0x10c11590 */
  push32(0x10c11267u); f_10c11590();
  /* 10c11267 mov esi, esp */
  ESI = (ESP);
  /* 10c11269 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c1126e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c11270 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c11272 call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c11278u);
  /* 10c11278 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1127b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1127d call 0x10c11590 */
  push32(0x10c11282u); f_10c11590();
  /* 10c11282 mov esi, esp */
  ESI = (ESP);
  /* 10c11284 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c11289 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1128b push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1128d call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c11293u);
  /* 10c11293 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11296 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11298 call 0x10c11590 */
  push32(0x10c1129du); f_10c11590();
  /* 10c1129d mov esi, esp */
  ESI = (ESP);
  /* 10c1129f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c112a4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10c112a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c112a8 call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c112aeu);
  /* 10c112ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c112b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c112b3 call 0x10c11590 */
  push32(0x10c112b8u); f_10c11590();
  /* 10c112b8 mov esi, esp */
  ESI = (ESP);
  /* 10c112ba push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c112bf push 4 */
  push32((uint32_t)(0x4u));
  /* 10c112c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c112c3 call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c112c9u);
  /* 10c112c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c112cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c112ce call 0x10c11590 */
  push32(0x10c112d3u); f_10c11590();
  /* 10c112d3 mov esi, esp */
  ESI = (ESP);
  /* 10c112d5 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c112da push 3 */
  push32((uint32_t)(0x3u));
  /* 10c112dc push 2 */
  push32((uint32_t)(0x2u));
  /* 10c112de call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c112e4u);
  /* 10c112e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c112e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c112e9 call 0x10c11590 */
  push32(0x10c112eeu); f_10c11590();
  /* 10c112ee mov esi, esp */
  ESI = (ESP);
  /* 10c112f0 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c112f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c112f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c112f9 call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c112ffu);
  /* 10c112ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11302 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11304 call 0x10c11590 */
  push32(0x10c11309u); f_10c11590();
  /* 10c11309 mov esi, esp */
  ESI = (ESP);
  /* 10c1130b push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c11310 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c11312 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c11314 call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c1131au);
  /* 10c1131a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1131d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1131f call 0x10c11590 */
  push32(0x10c11324u); f_10c11590();
  /* 10c11324 mov esi, esp */
  ESI = (ESP);
  /* 10c11326 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c1132b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1132d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1132f call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c11335u);
  /* 10c11335 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11338 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1133a call 0x10c11590 */
  push32(0x10c1133fu); f_10c11590();
  /* 10c1133f mov esi, esp */
  ESI = (ESP);
  /* 10c11341 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c11346 push 5 */
  push32((uint32_t)(0x5u));
  /* 10c11348 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1134a call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c11350u);
  /* 10c11350 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11353 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11355 call 0x10c11590 */
  push32(0x10c1135au); f_10c11590();
  /* 10c1135a mov esi, esp */
  ESI = (ESP);
  /* 10c1135c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c11361 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c11363 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c11365 call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c1136bu);
  /* 10c1136b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1136e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11370 call 0x10c11590 */
  push32(0x10c11375u); f_10c11590();
  /* 10c11375 mov esi, esp */
  ESI = (ESP);
  /* 10c11377 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c1137c push 3 */
  push32((uint32_t)(0x3u));
  /* 10c1137e push 3 */
  push32((uint32_t)(0x3u));
  /* 10c11380 call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c11386u);
  /* 10c11386 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1138b call 0x10c11590 */
  push32(0x10c11390u); f_10c11590();
  /* 10c11390 mov esi, esp */
  ESI = (ESP);
  /* 10c11392 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c11397 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c11399 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c1139b call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c113a1u);
  /* 10c113a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c113a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c113a6 call 0x10c11590 */
  push32(0x10c113abu); f_10c11590();
  /* 10c113ab mov esi, esp */
  ESI = (ESP);
  /* 10c113ad push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c113b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c113b4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c113b6 call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c113bcu);
  /* 10c113bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c113bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c113c1 call 0x10c11590 */
  push32(0x10c113c6u); f_10c11590();
  /* 10c113c6 mov esi, esp */
  ESI = (ESP);
  /* 10c113c8 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c113cd push 2 */
  push32((uint32_t)(0x2u));
  /* 10c113cf push 3 */
  push32((uint32_t)(0x3u));
  /* 10c113d1 call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c113d7u);
  /* 10c113d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c113da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c113dc call 0x10c11590 */
  push32(0x10c113e1u); f_10c11590();
  /* 10c113e1 mov esi, esp */
  ESI = (ESP);
  /* 10c113e3 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c113e8 push 5 */
  push32((uint32_t)(0x5u));
  /* 10c113ea push 3 */
  push32((uint32_t)(0x3u));
  /* 10c113ec call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c113f2u);
  /* 10c113f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c113f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c113f7 call 0x10c11590 */
  push32(0x10c113fcu); f_10c11590();
  /* 10c113fc mov esi, esp */
  ESI = (ESP);
  /* 10c113fe push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c11403 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c11405 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c11407 call dword ptr [0x10c40394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40394))), 0x10c1140du);
  /* 10c1140d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11410 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11412 call 0x10c11590 */
  push32(0x10c11417u); f_10c11590();
  /* 10c11417 mov esi, esp */
  ESI = (ESP);
  /* 10c11419 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c1141b push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1141d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1141f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c11421 push 0x10c39054 */
  push32((uint32_t)(0x10c39054u));
  /* 10c11426 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c11428 call dword ptr [0x10c40398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40398))), 0x10c1142eu);
  /* 10c1142e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11433 call 0x10c11590 */
  push32(0x10c11438u); f_10c11590();
  /* 10c11438 mov esi, esp */
  ESI = (ESP);
  /* 10c1143a push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c1143c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1143e push 1 */
  push32((uint32_t)(0x1u));
  /* 10c11440 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c11442 push 0x10c39048 */
  push32((uint32_t)(0x10c39048u));
  /* 10c11447 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c11449 call dword ptr [0x10c40398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40398))), 0x10c1144fu);
  /* 10c1144f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11452 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11454 call 0x10c11590 */
  push32(0x10c11459u); f_10c11590();
  /* 10c11459 mov esi, esp */
  ESI = (ESP);
  /* 10c1145b push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c1145d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1145f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c11461 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c11463 push 0x10c3903c */
  push32((uint32_t)(0x10c3903cu));
  /* 10c11468 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c1146a call dword ptr [0x10c40398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40398))), 0x10c11470u);
  /* 10c11470 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11473 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11475 call 0x10c11590 */
  push32(0x10c1147au); f_10c11590();
L_10c1147a:;
  /* 10c1147a pop edi */
  EDI = (pop32());
  /* 10c1147b pop esi */
  ESI = (pop32());
  /* 10c1147c pop ebx */
  EBX = (pop32());
  /* 10c1147d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11480 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11482 call 0x10c11590 */
  push32(0x10c11487u); f_10c11590();
  /* 10c11487 mov esp, ebp */
  ESP = (EBP);
  /* 10c11489 pop ebp */
  EBP = (pop32());
  /* 10c1148a ret  */
  ESPCHK(0x10c11140u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10c11590 (56 bytes, 28 insns) */
void f_10c11590(void) {
  FTRACE(0x10c11590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c11590 jne 0x10c11593 */
  if (!C.zf) goto L_10c11593;
  /* 10c11592 ret  */
  ESPCHK(0x10c11590u, _esp0);
  ESP += 4; return;
L_10c11593:;
  /* 10c11593 push ebp */
  push32((uint32_t)(EBP));
  /* 10c11594 mov ebp, esp */
  EBP = (ESP);
  /* 10c11596 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c11599 push eax */
  push32((uint32_t)(EAX));
  /* 10c1159a push edx */
  push32((uint32_t)(EDX));
  /* 10c1159b push ebx */
  push32((uint32_t)(EBX));
  /* 10c1159c push esi */
  push32((uint32_t)(ESI));
  /* 10c1159d push edi */
  push32((uint32_t)(EDI));
  /* 10c1159e push 0x10c39074 */
  push32((uint32_t)(0x10c39074u));
  /* 10c115a3 push 0x10c39070 */
  push32((uint32_t)(0x10c39070u));
  /* 10c115a8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10c115aa push 0x10c39060 */
  push32((uint32_t)(0x10c39060u));
  /* 10c115af push 1 */
  push32((uint32_t)(0x1u));
  /* 10c115b1 call 0x10c11960 */
  push32(0x10c115b6u); f_10c11960();
  /* 10c115b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c115b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c115bc jne 0x10c115bf */
  if (!C.zf) goto L_10c115bf;
  /* 10c115be int3  */
  x86_unimpl("int3 @ 0x10c115be");
L_10c115bf:;
  /* 10c115bf pop edi */
  EDI = (pop32());
  /* 10c115c0 pop esi */
  ESI = (pop32());
  /* 10c115c1 pop ebx */
  EBX = (pop32());
  /* 10c115c2 pop edx */
  EDX = (pop32());
  /* 10c115c3 pop eax */
  EAX = (pop32());
  /* 10c115c4 mov esp, ebp */
  ESP = (EBP);
  /* 10c115c6 pop ebp */
  EBP = (pop32());
  /* 10c115c7 ret  */
  ESPCHK(0x10c11590u, _esp0);
  ESP += 4; return;
}

/* FUN_100015d0 @ 0x10c115d0 (313 bytes, 78 insns) */
void f_10c115d0(void) {
  FTRACE(0x10c115d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c115d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c115d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c115d3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c115d7 jne 0x10c11697 */
  if (!C.zf) goto L_10c11697;
  /* 10c115dd call dword ptr [0x10c40224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40224))), 0x10c115e3u);
  /* 10c115e3 mov dword ptr [0x10c3e400], eax */
  w32((uint32_t)(0x10c3e400), (EAX));
  /* 10c115e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c115ea call 0x10c15090 */
  push32(0x10c115efu); f_10c15090();
  /* 10c115ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c115f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c115f4 jne 0x10c115fd */
  if (!C.zf) goto L_10c115fd;
  /* 10c115f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c115f8 jmp 0x10c11705 */
  goto L_10c11705;
L_10c115fd:;
  /* 10c115fd mov eax, dword ptr [0x10c3e400] */
  EAX = (r32((uint32_t)(0x10c3e400)));
  /* 10c11602 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10c11605 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1160a mov dword ptr [0x10c3e40c], eax */
  w32((uint32_t)(0x10c3e40c), (EAX));
  /* 10c1160f mov ecx, dword ptr [0x10c3e400] */
  ECX = (r32((uint32_t)(0x10c3e400)));
  /* 10c11615 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1161b mov dword ptr [0x10c3e408], ecx */
  w32((uint32_t)(0x10c3e408), (ECX));
  /* 10c11621 mov edx, dword ptr [0x10c3e408] */
  EDX = (r32((uint32_t)(0x10c3e408)));
  /* 10c11627 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10c1162a add edx, dword ptr [0x10c3e40c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c3e40c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11630 mov dword ptr [0x10c3e404], edx */
  w32((uint32_t)(0x10c3e404), (EDX));
  /* 10c11636 mov eax, dword ptr [0x10c3e400] */
  EAX = (r32((uint32_t)(0x10c3e400)));
  /* 10c1163b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10c1163e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c11643 mov dword ptr [0x10c3e400], eax */
  w32((uint32_t)(0x10c3e400), (EAX));
  /* 10c11648 call 0x10c12200 */
  push32(0x10c1164du); f_10c12200();
  /* 10c1164d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1164f jne 0x10c1165d */
  if (!C.zf) goto L_10c1165d;
  /* 10c11651 call 0x10c150e0 */
  push32(0x10c11656u); f_10c150e0();
  /* 10c11656 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c11658 jmp 0x10c11705 */
  goto L_10c11705;
L_10c1165d:;
  /* 10c1165d call dword ptr [0x10c40220] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40220))), 0x10c11663u);
  /* 10c11663 mov dword ptr [0x10c3ff4c], eax */
  w32((uint32_t)(0x10c3ff4c), (EAX));
  /* 10c11668 call 0x10c14e70 */
  push32(0x10c1166du); f_10c14e70();
  /* 10c1166d mov dword ptr [0x10c3e3e8], eax */
  w32((uint32_t)(0x10c3e3e8), (EAX));
  /* 10c11672 call 0x10c124b0 */
  push32(0x10c11677u); f_10c124b0();
  /* 10c11677 call 0x10c14960 */
  push32(0x10c1167cu); f_10c14960();
  /* 10c1167c call 0x10c14810 */
  push32(0x10c11681u); f_10c14810();
  /* 10c11681 call 0x10c12000 */
  push32(0x10c11686u); f_10c12000();
  /* 10c11686 mov ecx, dword ptr [0x10c3e3e4] */
  ECX = (r32((uint32_t)(0x10c3e3e4)));
  /* 10c1168c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1168f mov dword ptr [0x10c3e3e4], ecx */
  w32((uint32_t)(0x10c3e3e4), (ECX));
  /* 10c11695 jmp 0x10c11700 */
  goto L_10c11700;
L_10c11697:;
  /* 10c11697 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1169b jne 0x10c116f0 */
  if (!C.zf) goto L_10c116f0;
  /* 10c1169d cmp dword ptr [0x10c3e3e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e3e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c116a4 jle 0x10c116ea */
  if ((C.zf||C.sf!=C.of)) goto L_10c116ea;
  /* 10c116a6 mov edx, dword ptr [0x10c3e3e4] */
  EDX = (r32((uint32_t)(0x10c3e3e4)));
  /* 10c116ac sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c116af mov dword ptr [0x10c3e3e4], edx */
  w32((uint32_t)(0x10c3e3e4), (EDX));
  /* 10c116b5 cmp dword ptr [0x10c3e438], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e438))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c116bc jne 0x10c116c3 */
  if (!C.zf) goto L_10c116c3;
  /* 10c116be call 0x10c12080 */
  push32(0x10c116c3u); f_10c12080();
L_10c116c3:;
  /* 10c116c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c116c5 call 0x10c13db0 */
  push32(0x10c116cau); f_10c13db0();
  /* 10c116ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c116cd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10c116d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c116d2 je 0x10c116d9 */
  if (C.zf) goto L_10c116d9;
  /* 10c116d4 call 0x10c146c0 */
  push32(0x10c116d9u); f_10c146c0();
L_10c116d9:;
  /* 10c116d9 call 0x10c127e0 */
  push32(0x10c116deu); f_10c127e0();
  /* 10c116de call 0x10c12290 */
  push32(0x10c116e3u); f_10c12290();
  /* 10c116e3 call 0x10c150e0 */
  push32(0x10c116e8u); f_10c150e0();
  /* 10c116e8 jmp 0x10c116ee */
  goto L_10c116ee;
L_10c116ea:;
  /* 10c116ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c116ec jmp 0x10c11705 */
  goto L_10c11705;
L_10c116ee:;
  /* 10c116ee jmp 0x10c11700 */
  goto L_10c11700;
L_10c116f0:;
  /* 10c116f0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c116f4 jne 0x10c11700 */
  if (!C.zf) goto L_10c11700;
  /* 10c116f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c116f8 call 0x10c12380 */
  push32(0x10c116fdu); f_10c12380();
  /* 10c116fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c11700:;
  /* 10c11700 mov eax, 1 */
  EAX = (0x1u);
L_10c11705:;
  /* 10c11705 pop ebp */
  EBP = (pop32());
  /* 10c11706 ret 0xc */
  ESPCHK(0x10c115d0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10c11710 (243 bytes, 86 insns) */
void f_10c11710(void) {
  FTRACE(0x10c11710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c11710 push ebp */
  push32((uint32_t)(EBP));
  /* 10c11711 mov ebp, esp */
  EBP = (ESP);
  /* 10c11713 push ecx */
  push32((uint32_t)(ECX));
  /* 10c11714 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c1171b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1171f jne 0x10c11731 */
  if (!C.zf) goto L_10c11731;
  /* 10c11721 cmp dword ptr [0x10c3e3e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e3e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11728 jne 0x10c11731 */
  if (!C.zf) goto L_10c11731;
  /* 10c1172a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1172c jmp 0x10c117fd */
  goto L_10c117fd;
L_10c11731:;
  /* 10c11731 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11735 je 0x10c1173d */
  if (C.zf) goto L_10c1173d;
  /* 10c11737 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1173b jne 0x10c1177f */
  if (!C.zf) goto L_10c1177f;
L_10c1173d:;
  /* 10c1173d cmp dword ptr [0x10c3ff5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3ff5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11744 je 0x10c1175b */
  if (C.zf) goto L_10c1175b;
  /* 10c11746 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c11749 push eax */
  push32((uint32_t)(EAX));
  /* 10c1174a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1174d push ecx */
  push32((uint32_t)(ECX));
  /* 10c1174e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c11751 push edx */
  push32((uint32_t)(EDX));
  /* 10c11752 call dword ptr [0x10c3ff5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3ff5c))), 0x10c11758u);
  /* 10c11758 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c1175b:;
  /* 10c1175b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1175f je 0x10c11775 */
  if (C.zf) goto L_10c11775;
  /* 10c11761 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c11764 push eax */
  push32((uint32_t)(EAX));
  /* 10c11765 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c11768 push ecx */
  push32((uint32_t)(ECX));
  /* 10c11769 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1176c push edx */
  push32((uint32_t)(EDX));
  /* 10c1176d call 0x10c115d0 */
  push32(0x10c11772u); f_10c115d0();
  /* 10c11772 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c11775:;
  /* 10c11775 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11779 jne 0x10c1177f */
  if (!C.zf) goto L_10c1177f;
  /* 10c1177b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1177d jmp 0x10c117fd */
  goto L_10c117fd;
L_10c1177f:;
  /* 10c1177f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c11782 push eax */
  push32((uint32_t)(EAX));
  /* 10c11783 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c11786 push ecx */
  push32((uint32_t)(ECX));
  /* 10c11787 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1178a push edx */
  push32((uint32_t)(EDX));
  /* 10c1178b call 0x10c1100a */
  push32(0x10c11790u); f_10c1100a();
  /* 10c11790 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c11793 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11797 jne 0x10c117ae */
  if (!C.zf) goto L_10c117ae;
  /* 10c11799 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1179d jne 0x10c117ae */
  if (!C.zf) goto L_10c117ae;
  /* 10c1179f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c117a2 push eax */
  push32((uint32_t)(EAX));
  /* 10c117a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c117a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c117a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c117a9 call 0x10c115d0 */
  push32(0x10c117aeu); f_10c115d0();
L_10c117ae:;
  /* 10c117ae cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c117b2 je 0x10c117ba */
  if (C.zf) goto L_10c117ba;
  /* 10c117b4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c117b8 jne 0x10c117fa */
  if (!C.zf) goto L_10c117fa;
L_10c117ba:;
  /* 10c117ba mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c117bd push edx */
  push32((uint32_t)(EDX));
  /* 10c117be mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c117c1 push eax */
  push32((uint32_t)(EAX));
  /* 10c117c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c117c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c117c6 call 0x10c115d0 */
  push32(0x10c117cbu); f_10c115d0();
  /* 10c117cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c117cd jne 0x10c117d6 */
  if (!C.zf) goto L_10c117d6;
  /* 10c117cf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c117d6:;
  /* 10c117d6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c117da je 0x10c117fa */
  if (C.zf) goto L_10c117fa;
  /* 10c117dc cmp dword ptr [0x10c3ff5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3ff5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c117e3 je 0x10c117fa */
  if (C.zf) goto L_10c117fa;
  /* 10c117e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c117e8 push edx */
  push32((uint32_t)(EDX));
  /* 10c117e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c117ec push eax */
  push32((uint32_t)(EAX));
  /* 10c117ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c117f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c117f1 call dword ptr [0x10c3ff5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3ff5c))), 0x10c117f7u);
  /* 10c117f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c117fa:;
  /* 10c117fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c117fd:;
  /* 10c117fd mov esp, ebp */
  ESP = (EBP);
  /* 10c117ff pop ebp */
  EBP = (pop32());
  /* 10c11800 ret 0xc */
  ESPCHK(0x10c11710u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10c11810 (58 bytes, 18 insns) */
void f_10c11810(void) {
  FTRACE(0x10c11810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c11810 push ebp */
  push32((uint32_t)(EBP));
  /* 10c11811 mov ebp, esp */
  EBP = (ESP);
  /* 10c11813 cmp dword ptr [0x10c3e3f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e3f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1181a je 0x10c1182e */
  if (C.zf) goto L_10c1182e;
  /* 10c1181c cmp dword ptr [0x10c3e3f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e3f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11823 jne 0x10c11833 */
  if (!C.zf) goto L_10c11833;
  /* 10c11825 cmp dword ptr [0x10c3e3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1182c jne 0x10c11833 */
  if (!C.zf) goto L_10c11833;
L_10c1182e:;
  /* 10c1182e call 0x10c15180 */
  push32(0x10c11833u); f_10c15180();
L_10c11833:;
  /* 10c11833 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c11836 push eax */
  push32((uint32_t)(EAX));
  /* 10c11837 call 0x10c151d0 */
  push32(0x10c1183cu); f_10c151d0();
  /* 10c1183c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1183f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10c11844 call dword ptr [0x10c3ca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3ca30))), 0x10c1184au);
  /* 10c1184a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1184d pop ebp */
  EBP = (pop32());
  /* 10c1184e ret  */
  ESPCHK(0x10c11810u, _esp0);
  ESP += 4; return;
}

/* FUN_10001850 @ 0x10c11850 (11 bytes, 5 insns) */
void f_10c11850(void) {
  FTRACE(0x10c11850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c11850 push ebp */
  push32((uint32_t)(EBP));
  /* 10c11851 mov ebp, esp */
  EBP = (ESP);
  /* 10c11853 call dword ptr [0x10c40228] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40228))), 0x10c11859u);
  /* 10c11859 pop ebp */
  EBP = (pop32());
  /* 10c1185a ret  */
  ESPCHK(0x10c11850u, _esp0);
  ESP += 4; return;
}

/* FUN_10001860 @ 0x10c11860 (87 bytes, 30 insns) */
void f_10c11860(void) {
  FTRACE(0x10c11860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c11860 push ebp */
  push32((uint32_t)(EBP));
  /* 10c11861 mov ebp, esp */
  EBP = (ESP);
  /* 10c11863 push ecx */
  push32((uint32_t)(ECX));
  /* 10c11864 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11868 jl 0x10c11870 */
  if ((C.sf!=C.of)) goto L_10c11870;
  /* 10c1186a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1186e jl 0x10c11875 */
  if ((C.sf!=C.of)) goto L_10c11875;
L_10c11870:;
  /* 10c11870 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c11873 jmp 0x10c118b3 */
  goto L_10c118b3;
L_10c11875:;
  /* 10c11875 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11879 jne 0x10c11887 */
  if (!C.zf) goto L_10c11887;
  /* 10c1187b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1187e mov eax, dword ptr [eax*4 + 0x10c3ca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10c3ca38)));
  /* 10c11885 jmp 0x10c118b3 */
  goto L_10c118b3;
L_10c11887:;
  /* 10c11887 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1188a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1188d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1188f je 0x10c11896 */
  if (C.zf) goto L_10c11896;
  /* 10c11891 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c11894 jmp 0x10c118b3 */
  goto L_10c118b3;
L_10c11896:;
  /* 10c11896 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c11899 mov eax, dword ptr [edx*4 + 0x10c3ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c3ca38)));
  /* 10c118a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c118a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c118a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c118a9 mov dword ptr [ecx*4 + 0x10c3ca38], edx */
  w32((uint32_t)(ECX*4 + 0x10c3ca38), (EDX));
  /* 10c118b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c118b3:;
  /* 10c118b3 mov esp, ebp */
  ESP = (EBP);
  /* 10c118b5 pop ebp */
  EBP = (pop32());
  /* 10c118b6 ret  */
  ESPCHK(0x10c11860u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10c118c0 (126 bytes, 38 insns) */
void f_10c118c0(void) {
  FTRACE(0x10c118c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c118c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c118c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c118c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c118c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c118c8 jl 0x10c118d0 */
  if ((C.sf!=C.of)) goto L_10c118d0;
  /* 10c118ca cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c118ce jl 0x10c118d7 */
  if ((C.sf!=C.of)) goto L_10c118d7;
L_10c118d0:;
  /* 10c118d0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10c118d5 jmp 0x10c1193a */
  goto L_10c1193a;
L_10c118d7:;
  /* 10c118d7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c118db jne 0x10c118e9 */
  if (!C.zf) goto L_10c118e9;
  /* 10c118dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c118e0 mov eax, dword ptr [eax*4 + 0x10c3ca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10c3ca44)));
  /* 10c118e7 jmp 0x10c1193a */
  goto L_10c1193a;
L_10c118e9:;
  /* 10c118e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c118ec mov edx, dword ptr [ecx*4 + 0x10c3ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c3ca44)));
  /* 10c118f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c118f6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c118fa jne 0x10c11910 */
  if (!C.zf) goto L_10c11910;
  /* 10c118fc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10c118fe call dword ptr [0x10c4022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4022c))), 0x10c11904u);
  /* 10c11904 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c11907 mov dword ptr [ecx*4 + 0x10c3ca44], eax */
  w32((uint32_t)(ECX*4 + 0x10c3ca44), (EAX));
  /* 10c1190e jmp 0x10c11937 */
  goto L_10c11937;
L_10c11910:;
  /* 10c11910 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11914 jne 0x10c1192a */
  if (!C.zf) goto L_10c1192a;
  /* 10c11916 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10c11918 call dword ptr [0x10c4022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4022c))), 0x10c1191eu);
  /* 10c1191e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c11921 mov dword ptr [edx*4 + 0x10c3ca44], eax */
  w32((uint32_t)(EDX*4 + 0x10c3ca44), (EAX));
  /* 10c11928 jmp 0x10c11937 */
  goto L_10c11937;
L_10c1192a:;
  /* 10c1192a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1192d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c11930 mov dword ptr [eax*4 + 0x10c3ca44], ecx */
  w32((uint32_t)(EAX*4 + 0x10c3ca44), (ECX));
L_10c11937:;
  /* 10c11937 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c1193a:;
  /* 10c1193a mov esp, ebp */
  ESP = (EBP);
  /* 10c1193c pop ebp */
  EBP = (pop32());
  /* 10c1193d ret  */
  ESPCHK(0x10c118c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001940 @ 0x10c11940 (28 bytes, 11 insns) */
void f_10c11940(void) {
  FTRACE(0x10c11940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c11940 push ebp */
  push32((uint32_t)(EBP));
  /* 10c11941 mov ebp, esp */
  EBP = (ESP);
  /* 10c11943 push ecx */
  push32((uint32_t)(ECX));
  /* 10c11944 mov eax, dword ptr [0x10c3ff40] */
  EAX = (r32((uint32_t)(0x10c3ff40)));
  /* 10c11949 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1194c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1194f mov dword ptr [0x10c3ff40], ecx */
  w32((uint32_t)(0x10c3ff40), (ECX));
  /* 10c11955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c11958 mov esp, ebp */
  ESP = (EBP);
  /* 10c1195a pop ebp */
  EBP = (pop32());
  /* 10c1195b ret  */
  ESPCHK(0x10c11940u, _esp0);
  ESP += 4; return;
}

/* FUN_10001960 @ 0x10c11960 (912 bytes, 248 insns) */
void f_10c11960(void) {
  FTRACE(0x10c11960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c11960 push ebp */
  push32((uint32_t)(EBP));
  /* 10c11961 mov ebp, esp */
  EBP = (ESP);
  /* 10c11963 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10c11968 call 0x10c15a40 */
  push32(0x10c1196du); f_10c15a40();
  /* 10c1196d push edi */
  push32((uint32_t)(EDI));
  /* 10c1196e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10c11975 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10c1197a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1197c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10c11982 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c11984 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10c11986 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10c11987 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10c1198e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10c11993 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c11995 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10c1199b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c1199d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10c1199f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10c119a0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10c119a7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10c119ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c119ae lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10c119b4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c119b6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10c119b8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10c119b9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10c119bc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10c119c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c119c6 jl 0x10c119ce */
  if ((C.sf!=C.of)) goto L_10c119ce;
  /* 10c119c8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c119cc jl 0x10c119d6 */
  if ((C.sf!=C.of)) goto L_10c119d6;
L_10c119ce:;
  /* 10c119ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c119d1 jmp 0x10c11ceb */
  goto L_10c11ceb;
L_10c119d6:;
  /* 10c119d6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c119da jne 0x10c11a80 */
  if (!C.zf) goto L_10c11a80;
  /* 10c119e0 push 0x10c3ca34 */
  push32((uint32_t)(0x10c3ca34u));
  /* 10c119e5 call dword ptr [0x10c40244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40244))), 0x10c119ebu);
  /* 10c119eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c119ed jle 0x10c11a80 */
  if ((C.zf||C.sf!=C.of)) goto L_10c11a80;
  /* 10c119f3 cmp dword ptr [0x10c3e3f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e3f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c119fa jne 0x10c11a3e */
  if (!C.zf) goto L_10c11a3e;
  /* 10c119fc push 0x10c3921c */
  push32((uint32_t)(0x10c3921cu));
  /* 10c11a01 call dword ptr [0x10c40240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40240))), 0x10c11a07u);
  /* 10c11a07 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10c11a0d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11a14 je 0x10c11a36 */
  if (C.zf) goto L_10c11a36;
  /* 10c11a16 push 0x10c39210 */
  push32((uint32_t)(0x10c39210u));
  /* 10c11a1b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10c11a21 push ecx */
  push32((uint32_t)(ECX));
  /* 10c11a22 call dword ptr [0x10c4023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4023c))), 0x10c11a28u);
  /* 10c11a28 mov dword ptr [0x10c3e3f8], eax */
  w32((uint32_t)(0x10c3e3f8), (EAX));
  /* 10c11a2d cmp dword ptr [0x10c3e3f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e3f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11a34 jne 0x10c11a3e */
  if (!C.zf) goto L_10c11a3e;
L_10c11a36:;
  /* 10c11a36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c11a39 jmp 0x10c11ceb */
  goto L_10c11ceb;
L_10c11a3e:;
  /* 10c11a3e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c11a41 push edx */
  push32((uint32_t)(EDX));
  /* 10c11a42 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c11a45 push eax */
  push32((uint32_t)(EAX));
  /* 10c11a46 push 0x10c391dc */
  push32((uint32_t)(0x10c391dcu));
  /* 10c11a4b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10c11a51 push ecx */
  push32((uint32_t)(ECX));
  /* 10c11a52 call dword ptr [0x10c3e3f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3e3f8))), 0x10c11a58u);
  /* 10c11a58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11a5b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10c11a61 push edx */
  push32((uint32_t)(EDX));
  /* 10c11a62 call dword ptr [0x10c40238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40238))), 0x10c11a68u);
  /* 10c11a68 push 0x10c3ca34 */
  push32((uint32_t)(0x10c3ca34u));
  /* 10c11a6d call dword ptr [0x10c40234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40234))), 0x10c11a73u);
  /* 10c11a73 call 0x10c11850 */
  push32(0x10c11a78u); f_10c11850();
  /* 10c11a78 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c11a7b jmp 0x10c11ceb */
  goto L_10c11ceb;
L_10c11a80:;
  /* 10c11a80 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11a84 je 0x10c11abd */
  if (C.zf) goto L_10c11abd;
  /* 10c11a86 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10c11a8c push eax */
  push32((uint32_t)(EAX));
  /* 10c11a8d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c11a90 push ecx */
  push32((uint32_t)(ECX));
  /* 10c11a91 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10c11a96 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10c11a9c push edx */
  push32((uint32_t)(EDX));
  /* 10c11a9d call 0x10c15940 */
  push32(0x10c11aa2u); f_10c15940();
  /* 10c11aa2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11aa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c11aa7 jge 0x10c11abd */
  if ((C.sf==C.of)) goto L_10c11abd;
  /* 10c11aa9 push 0x10c391b0 */
  push32((uint32_t)(0x10c391b0u));
  /* 10c11aae lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10c11ab4 push eax */
  push32((uint32_t)(EAX));
  /* 10c11ab5 call 0x10c15850 */
  push32(0x10c11abau); f_10c15850();
  /* 10c11aba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c11abd:;
  /* 10c11abd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11ac1 jne 0x10c11af5 */
  if (!C.zf) goto L_10c11af5;
  /* 10c11ac3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11ac7 je 0x10c11ad5 */
  if (C.zf) goto L_10c11ad5;
  /* 10c11ac9 mov dword ptr [ebp - 0x3028], 0x10c3919c */
  w32((uint32_t)(EBP + -0x3028), (0x10c3919cu));
  /* 10c11ad3 jmp 0x10c11adf */
  goto L_10c11adf;
L_10c11ad5:;
  /* 10c11ad5 mov dword ptr [ebp - 0x3028], 0x10c39188 */
  w32((uint32_t)(EBP + -0x3028), (0x10c39188u));
L_10c11adf:;
  /* 10c11adf mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10c11ae5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c11ae6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10c11aec push edx */
  push32((uint32_t)(EDX));
  /* 10c11aed call 0x10c15850 */
  push32(0x10c11af2u); f_10c15850();
  /* 10c11af2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c11af5:;
  /* 10c11af5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10c11afb push eax */
  push32((uint32_t)(EAX));
  /* 10c11afc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10c11b02 push ecx */
  push32((uint32_t)(ECX));
  /* 10c11b03 call 0x10c15860 */
  push32(0x10c11b08u); f_10c15860();
  /* 10c11b08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11b0b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11b0f jne 0x10c11b4a */
  if (!C.zf) goto L_10c11b4a;
  /* 10c11b11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c11b14 mov eax, dword ptr [edx*4 + 0x10c3ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c3ca38)));
  /* 10c11b1b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10c11b1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c11b20 je 0x10c11b36 */
  if (C.zf) goto L_10c11b36;
  /* 10c11b22 push 0x10c39184 */
  push32((uint32_t)(0x10c39184u));
  /* 10c11b27 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10c11b2d push ecx */
  push32((uint32_t)(ECX));
  /* 10c11b2e call 0x10c15860 */
  push32(0x10c11b33u); f_10c15860();
  /* 10c11b33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c11b36:;
  /* 10c11b36 push 0x10c39180 */
  push32((uint32_t)(0x10c39180u));
  /* 10c11b3b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10c11b41 push edx */
  push32((uint32_t)(EDX));
  /* 10c11b42 call 0x10c15860 */
  push32(0x10c11b47u); f_10c15860();
  /* 10c11b47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c11b4a:;
  /* 10c11b4a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11b4e je 0x10c11b92 */
  if (C.zf) goto L_10c11b92;
  /* 10c11b50 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10c11b56 push eax */
  push32((uint32_t)(EAX));
  /* 10c11b57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c11b5a push ecx */
  push32((uint32_t)(ECX));
  /* 10c11b5b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c11b5e push edx */
  push32((uint32_t)(EDX));
  /* 10c11b5f push 0x10c39174 */
  push32((uint32_t)(0x10c39174u));
  /* 10c11b64 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10c11b69 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10c11b6f push eax */
  push32((uint32_t)(EAX));
  /* 10c11b70 call 0x10c15750 */
  push32(0x10c11b75u); f_10c15750();
  /* 10c11b75 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11b78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c11b7a jge 0x10c11b90 */
  if ((C.sf==C.of)) goto L_10c11b90;
  /* 10c11b7c push 0x10c391b0 */
  push32((uint32_t)(0x10c391b0u));
  /* 10c11b81 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10c11b87 push ecx */
  push32((uint32_t)(ECX));
  /* 10c11b88 call 0x10c15850 */
  push32(0x10c11b8du); f_10c15850();
  /* 10c11b8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c11b90:;
  /* 10c11b90 jmp 0x10c11ba8 */
  goto L_10c11ba8;
L_10c11b92:;
  /* 10c11b92 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10c11b98 push edx */
  push32((uint32_t)(EDX));
  /* 10c11b99 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10c11b9f push eax */
  push32((uint32_t)(EAX));
  /* 10c11ba0 call 0x10c15850 */
  push32(0x10c11ba5u); f_10c15850();
  /* 10c11ba5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c11ba8:;
  /* 10c11ba8 cmp dword ptr [0x10c3ff40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3ff40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11baf je 0x10c11bec */
  if (C.zf) goto L_10c11bec;
  /* 10c11bb1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10c11bb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c11bb8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10c11bbe push edx */
  push32((uint32_t)(EDX));
  /* 10c11bbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c11bc2 push eax */
  push32((uint32_t)(EAX));
  /* 10c11bc3 call dword ptr [0x10c3ff40] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3ff40))), 0x10c11bc9u);
  /* 10c11bc9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11bcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c11bce je 0x10c11bec */
  if (C.zf) goto L_10c11bec;
  /* 10c11bd0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11bd4 jne 0x10c11be1 */
  if (!C.zf) goto L_10c11be1;
  /* 10c11bd6 push 0x10c3ca34 */
  push32((uint32_t)(0x10c3ca34u));
  /* 10c11bdb call dword ptr [0x10c40234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40234))), 0x10c11be1u);
L_10c11be1:;
  /* 10c11be1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10c11be7 jmp 0x10c11ceb */
  goto L_10c11ceb;
L_10c11bec:;
  /* 10c11bec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c11bef mov edx, dword ptr [ecx*4 + 0x10c3ca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c3ca38)));
  /* 10c11bf6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c11bf9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c11bfb je 0x10c11c3b */
  if (C.zf) goto L_10c11c3b;
  /* 10c11bfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c11c00 cmp dword ptr [eax*4 + 0x10c3ca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10c3ca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11c08 je 0x10c11c3b */
  if (C.zf) goto L_10c11c3b;
  /* 10c11c0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c11c0c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10c11c12 push ecx */
  push32((uint32_t)(ECX));
  /* 10c11c13 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10c11c19 push edx */
  push32((uint32_t)(EDX));
  /* 10c11c1a call 0x10c156d0 */
  push32(0x10c11c1fu); f_10c156d0();
  /* 10c11c1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11c22 push eax */
  push32((uint32_t)(EAX));
  /* 10c11c23 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10c11c29 push eax */
  push32((uint32_t)(EAX));
  /* 10c11c2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c11c2d mov edx, dword ptr [ecx*4 + 0x10c3ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c3ca44)));
  /* 10c11c34 push edx */
  push32((uint32_t)(EDX));
  /* 10c11c35 call dword ptr [0x10c40230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40230))), 0x10c11c3bu);
L_10c11c3b:;
  /* 10c11c3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c11c3e mov ecx, dword ptr [eax*4 + 0x10c3ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10c3ca38)));
  /* 10c11c45 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10c11c48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c11c4a je 0x10c11c59 */
  if (C.zf) goto L_10c11c59;
  /* 10c11c4c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10c11c52 push edx */
  push32((uint32_t)(EDX));
  /* 10c11c53 call dword ptr [0x10c40238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40238))), 0x10c11c59u);
L_10c11c59:;
  /* 10c11c59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c11c5c mov ecx, dword ptr [eax*4 + 0x10c3ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10c3ca38)));
  /* 10c11c63 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10c11c66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c11c68 je 0x10c11cd8 */
  if (C.zf) goto L_10c11cd8;
  /* 10c11c6a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11c6e je 0x10c11c8d */
  if (C.zf) goto L_10c11c8d;
  /* 10c11c70 push 0xa */
  push32((uint32_t)(0xau));
  /* 10c11c72 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10c11c78 push edx */
  push32((uint32_t)(EDX));
  /* 10c11c79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c11c7c push eax */
  push32((uint32_t)(EAX));
  /* 10c11c7d call 0x10c153e0 */
  push32(0x10c11c82u); f_10c153e0();
  /* 10c11c82 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11c85 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10c11c8b jmp 0x10c11c97 */
  goto L_10c11c97;
L_10c11c8d:;
  /* 10c11c8d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10c11c97:;
  /* 10c11c97 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10c11c9d push ecx */
  push32((uint32_t)(ECX));
  /* 10c11c9e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c11ca1 push edx */
  push32((uint32_t)(EDX));
  /* 10c11ca2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10c11ca8 push eax */
  push32((uint32_t)(EAX));
  /* 10c11ca9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c11cac push ecx */
  push32((uint32_t)(ECX));
  /* 10c11cad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c11cb0 push edx */
  push32((uint32_t)(EDX));
  /* 10c11cb1 call 0x10c11cf0 */
  push32(0x10c11cb6u); f_10c11cf0();
  /* 10c11cb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11cb9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10c11cbf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11cc3 jne 0x10c11cd0 */
  if (!C.zf) goto L_10c11cd0;
  /* 10c11cc5 push 0x10c3ca34 */
  push32((uint32_t)(0x10c3ca34u));
  /* 10c11cca call dword ptr [0x10c40234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40234))), 0x10c11cd0u);
L_10c11cd0:;
  /* 10c11cd0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10c11cd6 jmp 0x10c11ceb */
  goto L_10c11ceb;
L_10c11cd8:;
  /* 10c11cd8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11cdc jne 0x10c11ce9 */
  if (!C.zf) goto L_10c11ce9;
  /* 10c11cde push 0x10c3ca34 */
  push32((uint32_t)(0x10c3ca34u));
  /* 10c11ce3 call dword ptr [0x10c40234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40234))), 0x10c11ce9u);
L_10c11ce9:;
  /* 10c11ce9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c11ceb:;
  /* 10c11ceb pop edi */
  EDI = (pop32());
  /* 10c11cec mov esp, ebp */
  ESP = (EBP);
  /* 10c11cee pop ebp */
  EBP = (pop32());
  /* 10c11cef ret  */
  ESPCHK(0x10c11960u, _esp0);
  ESP += 4; return;
}

/* FUN_10001cf0 @ 0x10c11cf0 (780 bytes, 197 insns) */
void f_10c11cf0(void) {
  FTRACE(0x10c11cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c11cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c11cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10c11cf3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10c11cf8 call 0x10c15a40 */
  push32(0x10c11cfdu); f_10c15a40();
L_10c11cfd:;
  /* 10c11cfd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11d01 jne 0x10c11d28 */
  if (!C.zf) goto L_10c11d28;
  /* 10c11d03 push 0x10c3936c */
  push32((uint32_t)(0x10c3936cu));
  /* 10c11d08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c11d0a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10c11d0f push 0x10c39360 */
  push32((uint32_t)(0x10c39360u));
  /* 10c11d14 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c11d16 call 0x10c11960 */
  push32(0x10c11d1bu); f_10c11960();
  /* 10c11d1b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11d1e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11d21 jne 0x10c11d28 */
  if (!C.zf) goto L_10c11d28;
  /* 10c11d23 call 0x10c11850 */
  push32(0x10c11d28u); f_10c11850();
L_10c11d28:;
  /* 10c11d28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c11d2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c11d2c jne 0x10c11cfd */
  if (!C.zf) goto L_10c11cfd;
  /* 10c11d2e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10c11d33 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10c11d39 push ecx */
  push32((uint32_t)(ECX));
  /* 10c11d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c11d3c call dword ptr [0x10c40248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40248))), 0x10c11d42u);
  /* 10c11d42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c11d44 jne 0x10c11d5a */
  if (!C.zf) goto L_10c11d5a;
  /* 10c11d46 push 0x10c39348 */
  push32((uint32_t)(0x10c39348u));
  /* 10c11d4b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10c11d51 push edx */
  push32((uint32_t)(EDX));
  /* 10c11d52 call 0x10c15850 */
  push32(0x10c11d57u); f_10c15850();
  /* 10c11d57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c11d5a:;
  /* 10c11d5a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10c11d60 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c11d63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c11d66 push ecx */
  push32((uint32_t)(ECX));
  /* 10c11d67 call 0x10c156d0 */
  push32(0x10c11d6cu); f_10c156d0();
  /* 10c11d6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11d6f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11d72 jbe 0x10c11d9d */
  if ((C.cf||C.zf)) goto L_10c11d9d;
  /* 10c11d74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c11d77 push edx */
  push32((uint32_t)(EDX));
  /* 10c11d78 call 0x10c156d0 */
  push32(0x10c11d7du); f_10c156d0();
  /* 10c11d7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11d80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c11d83 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10c11d87 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c11d8a push 3 */
  push32((uint32_t)(0x3u));
  /* 10c11d8c push 0x10c39344 */
  push32((uint32_t)(0x10c39344u));
  /* 10c11d91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c11d94 push eax */
  push32((uint32_t)(EAX));
  /* 10c11d95 call 0x10c160c0 */
  push32(0x10c11d9au); f_10c160c0();
  /* 10c11d9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c11d9d:;
  /* 10c11d9d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c11da0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10c11da6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11dad je 0x10c11df8 */
  if (C.zf) goto L_10c11df8;
  /* 10c11daf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10c11db5 push edx */
  push32((uint32_t)(EDX));
  /* 10c11db6 call 0x10c156d0 */
  push32(0x10c11dbbu); f_10c156d0();
  /* 10c11dbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11dbe cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11dc1 jbe 0x10c11df8 */
  if ((C.cf||C.zf)) goto L_10c11df8;
  /* 10c11dc3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10c11dc9 push eax */
  push32((uint32_t)(EAX));
  /* 10c11dca call 0x10c156d0 */
  push32(0x10c11dcfu); f_10c156d0();
  /* 10c11dcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11dd2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10c11dd8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10c11ddc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10c11de2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c11de4 push 0x10c39344 */
  push32((uint32_t)(0x10c39344u));
  /* 10c11de9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10c11def push eax */
  push32((uint32_t)(EAX));
  /* 10c11df0 call 0x10c160c0 */
  push32(0x10c11df5u); f_10c160c0();
  /* 10c11df5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c11df8:;
  /* 10c11df8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11dfc jne 0x10c11e0a */
  if (!C.zf) goto L_10c11e0a;
  /* 10c11dfe mov dword ptr [ebp - 0x1114], 0x10c392d0 */
  w32((uint32_t)(EBP + -0x1114), (0x10c392d0u));
  /* 10c11e08 jmp 0x10c11e14 */
  goto L_10c11e14;
L_10c11e0a:;
  /* 10c11e0a mov dword ptr [ebp - 0x1114], 0x10c39070 */
  w32((uint32_t)(EBP + -0x1114), (0x10c39070u));
L_10c11e14:;
  /* 10c11e14 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c11e17 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c11e1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c11e1c je 0x10c11e29 */
  if (C.zf) goto L_10c11e29;
  /* 10c11e1e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c11e21 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10c11e27 jmp 0x10c11e33 */
  goto L_10c11e33;
L_10c11e29:;
  /* 10c11e29 mov dword ptr [ebp - 0x1118], 0x10c39070 */
  w32((uint32_t)(EBP + -0x1118), (0x10c39070u));
L_10c11e33:;
  /* 10c11e33 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c11e36 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c11e39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c11e3b je 0x10c11e4f */
  if (C.zf) goto L_10c11e4f;
  /* 10c11e3d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11e41 jne 0x10c11e4f */
  if (!C.zf) goto L_10c11e4f;
  /* 10c11e43 mov dword ptr [ebp - 0x111c], 0x10c392c0 */
  w32((uint32_t)(EBP + -0x111c), (0x10c392c0u));
  /* 10c11e4d jmp 0x10c11e59 */
  goto L_10c11e59;
L_10c11e4f:;
  /* 10c11e4f mov dword ptr [ebp - 0x111c], 0x10c39070 */
  w32((uint32_t)(EBP + -0x111c), (0x10c39070u));
L_10c11e59:;
  /* 10c11e59 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c11e5c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c11e5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c11e61 je 0x10c11e6f */
  if (C.zf) goto L_10c11e6f;
  /* 10c11e63 mov dword ptr [ebp - 0x1120], 0x10c392bc */
  w32((uint32_t)(EBP + -0x1120), (0x10c392bcu));
  /* 10c11e6d jmp 0x10c11e79 */
  goto L_10c11e79;
L_10c11e6f:;
  /* 10c11e6f mov dword ptr [ebp - 0x1120], 0x10c39070 */
  w32((uint32_t)(EBP + -0x1120), (0x10c39070u));
L_10c11e79:;
  /* 10c11e79 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11e7d je 0x10c11e8a */
  if (C.zf) goto L_10c11e8a;
  /* 10c11e7f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c11e82 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10c11e88 jmp 0x10c11e94 */
  goto L_10c11e94;
L_10c11e8a:;
  /* 10c11e8a mov dword ptr [ebp - 0x1124], 0x10c39070 */
  w32((uint32_t)(EBP + -0x1124), (0x10c39070u));
L_10c11e94:;
  /* 10c11e94 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11e98 je 0x10c11ea6 */
  if (C.zf) goto L_10c11ea6;
  /* 10c11e9a mov dword ptr [ebp - 0x1128], 0x10c392b4 */
  w32((uint32_t)(EBP + -0x1128), (0x10c392b4u));
  /* 10c11ea4 jmp 0x10c11eb0 */
  goto L_10c11eb0;
L_10c11ea6:;
  /* 10c11ea6 mov dword ptr [ebp - 0x1128], 0x10c39070 */
  w32((uint32_t)(EBP + -0x1128), (0x10c39070u));
L_10c11eb0:;
  /* 10c11eb0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11eb4 je 0x10c11ec1 */
  if (C.zf) goto L_10c11ec1;
  /* 10c11eb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c11eb9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10c11ebf jmp 0x10c11ecb */
  goto L_10c11ecb;
L_10c11ec1:;
  /* 10c11ec1 mov dword ptr [ebp - 0x112c], 0x10c39070 */
  w32((uint32_t)(EBP + -0x112c), (0x10c39070u));
L_10c11ecb:;
  /* 10c11ecb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11ecf je 0x10c11edd */
  if (C.zf) goto L_10c11edd;
  /* 10c11ed1 mov dword ptr [ebp - 0x1130], 0x10c392ac */
  w32((uint32_t)(EBP + -0x1130), (0x10c392acu));
  /* 10c11edb jmp 0x10c11ee7 */
  goto L_10c11ee7;
L_10c11edd:;
  /* 10c11edd mov dword ptr [ebp - 0x1130], 0x10c39070 */
  w32((uint32_t)(EBP + -0x1130), (0x10c39070u));
L_10c11ee7:;
  /* 10c11ee7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11eee je 0x10c11efe */
  if (C.zf) goto L_10c11efe;
  /* 10c11ef0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10c11ef6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10c11efc jmp 0x10c11f08 */
  goto L_10c11f08;
L_10c11efe:;
  /* 10c11efe mov dword ptr [ebp - 0x1134], 0x10c39070 */
  w32((uint32_t)(EBP + -0x1134), (0x10c39070u));
L_10c11f08:;
  /* 10c11f08 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11f0f je 0x10c11f1d */
  if (C.zf) goto L_10c11f1d;
  /* 10c11f11 mov dword ptr [ebp - 0x1138], 0x10c392a0 */
  w32((uint32_t)(EBP + -0x1138), (0x10c392a0u));
  /* 10c11f1b jmp 0x10c11f27 */
  goto L_10c11f27;
L_10c11f1d:;
  /* 10c11f1d mov dword ptr [ebp - 0x1138], 0x10c39070 */
  w32((uint32_t)(EBP + -0x1138), (0x10c39070u));
L_10c11f27:;
  /* 10c11f27 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10c11f2d push edx */
  push32((uint32_t)(EDX));
  /* 10c11f2e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10c11f34 push eax */
  push32((uint32_t)(EAX));
  /* 10c11f35 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10c11f3b push ecx */
  push32((uint32_t)(ECX));
  /* 10c11f3c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10c11f42 push edx */
  push32((uint32_t)(EDX));
  /* 10c11f43 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10c11f49 push eax */
  push32((uint32_t)(EAX));
  /* 10c11f4a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10c11f50 push ecx */
  push32((uint32_t)(ECX));
  /* 10c11f51 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10c11f57 push edx */
  push32((uint32_t)(EDX));
  /* 10c11f58 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10c11f5e push eax */
  push32((uint32_t)(EAX));
  /* 10c11f5f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10c11f65 push ecx */
  push32((uint32_t)(ECX));
  /* 10c11f66 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10c11f6c push edx */
  push32((uint32_t)(EDX));
  /* 10c11f6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c11f70 push eax */
  push32((uint32_t)(EAX));
  /* 10c11f71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c11f74 mov edx, dword ptr [ecx*4 + 0x10c3ca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c3ca50)));
  /* 10c11f7b push edx */
  push32((uint32_t)(EDX));
  /* 10c11f7c push 0x10c3924c */
  push32((uint32_t)(0x10c3924cu));
  /* 10c11f81 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10c11f86 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10c11f8c push eax */
  push32((uint32_t)(EAX));
  /* 10c11f8d call 0x10c15750 */
  push32(0x10c11f92u); f_10c15750();
  /* 10c11f92 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11f95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c11f97 jge 0x10c11fad */
  if ((C.sf==C.of)) goto L_10c11fad;
  /* 10c11f99 push 0x10c391b0 */
  push32((uint32_t)(0x10c391b0u));
  /* 10c11f9e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10c11fa4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c11fa5 call 0x10c15850 */
  push32(0x10c11faau); f_10c15850();
  /* 10c11faa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c11fad:;
  /* 10c11fad push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10c11fb2 push 0x10c39228 */
  push32((uint32_t)(0x10c39228u));
  /* 10c11fb7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10c11fbd push edx */
  push32((uint32_t)(EDX));
  /* 10c11fbe call 0x10c16000 */
  push32(0x10c11fc3u); f_10c16000();
  /* 10c11fc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11fc6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10c11fcc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11fd3 jne 0x10c11fe6 */
  if (!C.zf) goto L_10c11fe6;
  /* 10c11fd5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10c11fd7 call 0x10c15d40 */
  push32(0x10c11fdcu); f_10c15d40();
  /* 10c11fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c11fdf push 3 */
  push32((uint32_t)(0x3u));
  /* 10c11fe1 call 0x10c12060 */
  push32(0x10c11fe6u); f_10c12060();
L_10c11fe6:;
  /* 10c11fe6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c11fed jne 0x10c11ff6 */
  if (!C.zf) goto L_10c11ff6;
  /* 10c11fef mov eax, 1 */
  EAX = (0x1u);
  /* 10c11ff4 jmp 0x10c11ff8 */
  goto L_10c11ff8;
L_10c11ff6:;
  /* 10c11ff6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c11ff8:;
  /* 10c11ff8 mov esp, ebp */
  ESP = (EBP);
  /* 10c11ffa pop ebp */
  EBP = (pop32());
  /* 10c11ffb ret  */
  ESPCHK(0x10c11cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002000 @ 0x10c12000 (56 bytes, 15 insns) */
void f_10c12000(void) {
  FTRACE(0x10c12000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c12000 push ebp */
  push32((uint32_t)(EBP));
  /* 10c12001 mov ebp, esp */
  EBP = (ESP);
  /* 10c12003 cmp dword ptr [0x10c3ff3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3ff3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1200a je 0x10c12012 */
  if (C.zf) goto L_10c12012;
  /* 10c1200c call dword ptr [0x10c3ff3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3ff3c))), 0x10c12012u);
L_10c12012:;
  /* 10c12012 push 0x10c3c418 */
  push32((uint32_t)(0x10c3c418u));
  /* 10c12017 push 0x10c3c208 */
  push32((uint32_t)(0x10c3c208u));
  /* 10c1201c call 0x10c121d0 */
  push32(0x10c12021u); f_10c121d0();
  /* 10c12021 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12024 push 0x10c3c104 */
  push32((uint32_t)(0x10c3c104u));
  /* 10c12029 push 0x10c3c000 */
  push32((uint32_t)(0x10c3c000u));
  /* 10c1202e call 0x10c121d0 */
  push32(0x10c12033u); f_10c121d0();
  /* 10c12033 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12036 pop ebp */
  EBP = (pop32());
  /* 10c12037 ret  */
  ESPCHK(0x10c12000u, _esp0);
  ESP += 4; return;
}

/* FUN_10002040 @ 0x10c12040 (21 bytes, 10 insns) */
void f_10c12040(void) {
  FTRACE(0x10c12040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c12040 push ebp */
  push32((uint32_t)(EBP));
  /* 10c12041 mov ebp, esp */
  EBP = (ESP);
  /* 10c12043 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12045 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12047 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1204a push eax */
  push32((uint32_t)(EAX));
  /* 10c1204b call 0x10c120c0 */
  push32(0x10c12050u); f_10c120c0();
  /* 10c12050 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12053 pop ebp */
  EBP = (pop32());
  /* 10c12054 ret  */
  ESPCHK(0x10c12040u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10c12060 (21 bytes, 10 insns) */
void f_10c12060(void) {
  FTRACE(0x10c12060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c12060 push ebp */
  push32((uint32_t)(EBP));
  /* 10c12061 mov ebp, esp */
  EBP = (ESP);
  /* 10c12063 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12065 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c12067 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1206a push eax */
  push32((uint32_t)(EAX));
  /* 10c1206b call 0x10c120c0 */
  push32(0x10c12070u); f_10c120c0();
  /* 10c12070 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12073 pop ebp */
  EBP = (pop32());
  /* 10c12074 ret  */
  ESPCHK(0x10c12060u, _esp0);
  ESP += 4; return;
}

/* FUN_10002080 @ 0x10c12080 (19 bytes, 9 insns) */
void f_10c12080(void) {
  FTRACE(0x10c12080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c12080 push ebp */
  push32((uint32_t)(EBP));
  /* 10c12081 mov ebp, esp */
  EBP = (ESP);
  /* 10c12083 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c12085 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12087 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12089 call 0x10c120c0 */
  push32(0x10c1208eu); f_10c120c0();
  /* 10c1208e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12091 pop ebp */
  EBP = (pop32());
  /* 10c12092 ret  */
  ESPCHK(0x10c12080u, _esp0);
  ESP += 4; return;
}

/* FUN_100020a0 @ 0x10c120a0 (19 bytes, 9 insns) */
void f_10c120a0(void) {
  FTRACE(0x10c120a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c120a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c120a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c120a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c120a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c120a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c120a9 call 0x10c120c0 */
  push32(0x10c120aeu); f_10c120c0();
  /* 10c120ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c120b1 pop ebp */
  EBP = (pop32());
  /* 10c120b2 ret  */
  ESPCHK(0x10c120a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100020c0 @ 0x10c120c0 (227 bytes, 61 insns) */
void f_10c120c0(void) {
  FTRACE(0x10c120c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c120c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c120c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c120c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c120c4 call 0x10c121b0 */
  push32(0x10c120c9u); f_10c121b0();
  /* 10c120c9 cmp dword ptr [0x10c3e43c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e43c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c120d0 jne 0x10c120e3 */
  if (!C.zf) goto L_10c120e3;
  /* 10c120d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c120d5 push eax */
  push32((uint32_t)(EAX));
  /* 10c120d6 call dword ptr [0x10c40254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40254))), 0x10c120dcu);
  /* 10c120dc push eax */
  push32((uint32_t)(EAX));
  /* 10c120dd call dword ptr [0x10c40250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40250))), 0x10c120e3u);
L_10c120e3:;
  /* 10c120e3 mov dword ptr [0x10c3e438], 1 */
  w32((uint32_t)(0x10c3e438), (0x1u));
  /* 10c120ed mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10c120f0 mov byte ptr [0x10c3e434], cl */
  w8((uint32_t)(0x10c3e434), (CL));
  /* 10c120f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c120fa jne 0x10c12143 */
  if (!C.zf) goto L_10c12143;
  /* 10c120fc cmp dword ptr [0x10c3ff38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3ff38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12103 je 0x10c12131 */
  if (C.zf) goto L_10c12131;
  /* 10c12105 mov edx, dword ptr [0x10c3ff34] */
  EDX = (r32((uint32_t)(0x10c3ff34)));
  /* 10c1210b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c1210e:;
  /* 10c1210e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12111 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c12114 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c12117 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1211a cmp ecx, dword ptr [0x10c3ff38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3ff38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12120 jb 0x10c12131 */
  if (C.cf) goto L_10c12131;
  /* 10c12122 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12125 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12128 je 0x10c1212f */
  if (C.zf) goto L_10c1212f;
  /* 10c1212a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1212d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10c1212fu);
L_10c1212f:;
  /* 10c1212f jmp 0x10c1210e */
  goto L_10c1210e;
L_10c12131:;
  /* 10c12131 push 0x10c3c724 */
  push32((uint32_t)(0x10c3c724u));
  /* 10c12136 push 0x10c3c51c */
  push32((uint32_t)(0x10c3c51cu));
  /* 10c1213b call 0x10c121d0 */
  push32(0x10c12140u); f_10c121d0();
  /* 10c12140 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c12143:;
  /* 10c12143 push 0x10c3c92c */
  push32((uint32_t)(0x10c3c92cu));
  /* 10c12148 push 0x10c3c828 */
  push32((uint32_t)(0x10c3c828u));
  /* 10c1214d call 0x10c121d0 */
  push32(0x10c12152u); f_10c121d0();
  /* 10c12152 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12155 cmp dword ptr [0x10c3e440], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e440))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1215c jne 0x10c1217e */
  if (!C.zf) goto L_10c1217e;
  /* 10c1215e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c12160 call 0x10c13db0 */
  push32(0x10c12165u); f_10c13db0();
  /* 10c12165 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12168 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1216b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1216d je 0x10c1217e */
  if (C.zf) goto L_10c1217e;
  /* 10c1216f mov dword ptr [0x10c3e440], 1 */
  w32((uint32_t)(0x10c3e440), (0x1u));
  /* 10c12179 call 0x10c146c0 */
  push32(0x10c1217eu); f_10c146c0();
L_10c1217e:;
  /* 10c1217e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12182 je 0x10c1218b */
  if (C.zf) goto L_10c1218b;
  /* 10c12184 call 0x10c121c0 */
  push32(0x10c12189u); f_10c121c0();
  /* 10c12189 jmp 0x10c1219f */
  goto L_10c1219f;
L_10c1218b:;
  /* 10c1218b mov dword ptr [0x10c3e43c], 1 */
  w32((uint32_t)(0x10c3e43c), (0x1u));
  /* 10c12195 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12198 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12199 call dword ptr [0x10c4024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4024c))), 0x10c1219fu);
L_10c1219f:;
  /* 10c1219f mov esp, ebp */
  ESP = (EBP);
  /* 10c121a1 pop ebp */
  EBP = (pop32());
  /* 10c121a2 ret  */
  ESPCHK(0x10c120c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100021b0 @ 0x10c121b0 (15 bytes, 7 insns) */
void f_10c121b0(void) {
  FTRACE(0x10c121b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c121b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c121b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c121b3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10c121b5 call 0x10c162a0 */
  push32(0x10c121bau); f_10c162a0();
  /* 10c121ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c121bd pop ebp */
  EBP = (pop32());
  /* 10c121be ret  */
  ESPCHK(0x10c121b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100021c0 @ 0x10c121c0 (15 bytes, 7 insns) */
void f_10c121c0(void) {
  FTRACE(0x10c121c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c121c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c121c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c121c3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10c121c5 call 0x10c16340 */
  push32(0x10c121cau); f_10c16340();
  /* 10c121ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c121cd pop ebp */
  EBP = (pop32());
  /* 10c121ce ret  */
  ESPCHK(0x10c121c0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10c121d0 (37 bytes, 16 insns) */
void f_10c121d0(void) {
  FTRACE(0x10c121d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c121d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c121d1 mov ebp, esp */
  EBP = (ESP);
L_10c121d3:;
  /* 10c121d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c121d6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c121d9 jae 0x10c121f3 */
  if (!C.cf) goto L_10c121f3;
  /* 10c121db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c121de cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c121e1 je 0x10c121e8 */
  if (C.zf) goto L_10c121e8;
  /* 10c121e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c121e6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10c121e8u);
L_10c121e8:;
  /* 10c121e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c121eb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c121ee mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c121f1 jmp 0x10c121d3 */
  goto L_10c121d3;
L_10c121f3:;
  /* 10c121f3 pop ebp */
  EBP = (pop32());
  /* 10c121f4 ret  */
  ESPCHK(0x10c121d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002200 @ 0x10c12200 (130 bytes, 42 insns) */
void f_10c12200(void) {
  FTRACE(0x10c12200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c12200 push ebp */
  push32((uint32_t)(EBP));
  /* 10c12201 mov ebp, esp */
  EBP = (ESP);
  /* 10c12203 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12204 call 0x10c161c0 */
  push32(0x10c12209u); f_10c161c0();
  /* 10c12209 call dword ptr [0x10c40260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40260))), 0x10c1220fu);
  /* 10c1220f mov dword ptr [0x10c3ca5c], eax */
  w32((uint32_t)(0x10c3ca5c), (EAX));
  /* 10c12214 cmp dword ptr [0x10c3ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1221b jne 0x10c12221 */
  if (!C.zf) goto L_10c12221;
  /* 10c1221d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1221f jmp 0x10c1227e */
  goto L_10c1227e;
L_10c12221:;
  /* 10c12221 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10c12223 push 0x10c39384 */
  push32((uint32_t)(0x10c39384u));
  /* 10c12228 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1222a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10c1222c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c1222e call 0x10c12cb0 */
  push32(0x10c12233u); f_10c12cb0();
  /* 10c12233 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12236 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c12239 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1223d je 0x10c12254 */
  if (C.zf) goto L_10c12254;
  /* 10c1223f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12242 push eax */
  push32((uint32_t)(EAX));
  /* 10c12243 mov ecx, dword ptr [0x10c3ca5c] */
  ECX = (r32((uint32_t)(0x10c3ca5c)));
  /* 10c12249 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1224a call dword ptr [0x10c4025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4025c))), 0x10c12250u);
  /* 10c12250 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c12252 jne 0x10c12258 */
  if (!C.zf) goto L_10c12258;
L_10c12254:;
  /* 10c12254 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c12256 jmp 0x10c1227e */
  goto L_10c1227e;
L_10c12258:;
  /* 10c12258 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1225b push edx */
  push32((uint32_t)(EDX));
  /* 10c1225c call 0x10c122c0 */
  push32(0x10c12261u); f_10c122c0();
  /* 10c12261 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12264 call dword ptr [0x10c40258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40258))), 0x10c1226au);
  /* 10c1226a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1226d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c1226f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12272 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10c12279 mov eax, 1 */
  EAX = (0x1u);
L_10c1227e:;
  /* 10c1227e mov esp, ebp */
  ESP = (EBP);
  /* 10c12280 pop ebp */
  EBP = (pop32());
  /* 10c12281 ret  */
  ESPCHK(0x10c12200u, _esp0);
  ESP += 4; return;
}

/* FUN_10002290 @ 0x10c12290 (41 bytes, 11 insns) */
void f_10c12290(void) {
  FTRACE(0x10c12290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c12290 push ebp */
  push32((uint32_t)(EBP));
  /* 10c12291 mov ebp, esp */
  EBP = (ESP);
  /* 10c12293 call 0x10c16200 */
  push32(0x10c12298u); f_10c16200();
  /* 10c12298 cmp dword ptr [0x10c3ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1229f je 0x10c122b7 */
  if (C.zf) goto L_10c122b7;
  /* 10c122a1 mov eax, dword ptr [0x10c3ca5c] */
  EAX = (r32((uint32_t)(0x10c3ca5c)));
  /* 10c122a6 push eax */
  push32((uint32_t)(EAX));
  /* 10c122a7 call dword ptr [0x10c40264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40264))), 0x10c122adu);
  /* 10c122ad mov dword ptr [0x10c3ca5c], 0xffffffff */
  w32((uint32_t)(0x10c3ca5c), (0xffffffffu));
L_10c122b7:;
  /* 10c122b7 pop ebp */
  EBP = (pop32());
  /* 10c122b8 ret  */
  ESPCHK(0x10c12290u, _esp0);
  ESP += 4; return;
}

/* FUN_100022c0 @ 0x10c122c0 (25 bytes, 8 insns) */
void f_10c122c0(void) {
  FTRACE(0x10c122c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c122c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c122c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c122c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c122c6 mov dword ptr [eax + 0x50], 0x10c3cc00 */
  w32((uint32_t)(EAX + 0x50), (0x10c3cc00u));
  /* 10c122cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c122d0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10c122d7 pop ebp */
  EBP = (pop32());
  /* 10c122d8 ret  */
  ESPCHK(0x10c122c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100022e0 @ 0x10c122e0 (152 bytes, 48 insns) */
void f_10c122e0(void) {
  FTRACE(0x10c122e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c122e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c122e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c122e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c122e6 call dword ptr [0x10c40270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40270))), 0x10c122ecu);
  /* 10c122ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c122ef mov eax, dword ptr [0x10c3ca5c] */
  EAX = (r32((uint32_t)(0x10c3ca5c)));
  /* 10c122f4 push eax */
  push32((uint32_t)(EAX));
  /* 10c122f5 call dword ptr [0x10c4026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4026c))), 0x10c122fbu);
  /* 10c122fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c122fe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12302 jne 0x10c12367 */
  if (!C.zf) goto L_10c12367;
  /* 10c12304 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10c12309 push 0x10c39384 */
  push32((uint32_t)(0x10c39384u));
  /* 10c1230e push 2 */
  push32((uint32_t)(0x2u));
  /* 10c12310 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10c12312 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c12314 call 0x10c12cb0 */
  push32(0x10c12319u); f_10c12cb0();
  /* 10c12319 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1231c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1231f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12323 je 0x10c1235d */
  if (C.zf) goto L_10c1235d;
  /* 10c12325 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12328 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12329 mov edx, dword ptr [0x10c3ca5c] */
  EDX = (r32((uint32_t)(0x10c3ca5c)));
  /* 10c1232f push edx */
  push32((uint32_t)(EDX));
  /* 10c12330 call dword ptr [0x10c4025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4025c))), 0x10c12336u);
  /* 10c12336 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c12338 je 0x10c1235d */
  if (C.zf) goto L_10c1235d;
  /* 10c1233a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1233d push eax */
  push32((uint32_t)(EAX));
  /* 10c1233e call 0x10c122c0 */
  push32(0x10c12343u); f_10c122c0();
  /* 10c12343 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12346 call dword ptr [0x10c40258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40258))), 0x10c1234cu);
  /* 10c1234c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1234f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c12351 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12354 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10c1235b jmp 0x10c12367 */
  goto L_10c12367;
L_10c1235d:;
  /* 10c1235d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10c1235f call 0x10c11810 */
  push32(0x10c12364u); f_10c11810();
  /* 10c12364 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c12367:;
  /* 10c12367 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1236a push eax */
  push32((uint32_t)(EAX));
  /* 10c1236b call dword ptr [0x10c40268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40268))), 0x10c12371u);
  /* 10c12371 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12374 mov esp, ebp */
  ESP = (EBP);
  /* 10c12376 pop ebp */
  EBP = (pop32());
  /* 10c12377 ret  */
  ESPCHK(0x10c122e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002380 @ 0x10c12380 (263 bytes, 86 insns) */
void f_10c12380(void) {
  FTRACE(0x10c12380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c12380 push ebp */
  push32((uint32_t)(EBP));
  /* 10c12381 mov ebp, esp */
  EBP = (ESP);
  /* 10c12383 cmp dword ptr [0x10c3ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1238a je 0x10c12485 */
  if (C.zf) goto L_10c12485;
  /* 10c12390 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12394 jne 0x10c123a5 */
  if (!C.zf) goto L_10c123a5;
  /* 10c12396 mov eax, dword ptr [0x10c3ca5c] */
  EAX = (r32((uint32_t)(0x10c3ca5c)));
  /* 10c1239b push eax */
  push32((uint32_t)(EAX));
  /* 10c1239c call dword ptr [0x10c4026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4026c))), 0x10c123a2u);
  /* 10c123a2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10c123a5:;
  /* 10c123a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c123a9 je 0x10c12476 */
  if (C.zf) goto L_10c12476;
  /* 10c123af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c123b2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c123b6 je 0x10c123c9 */
  if (C.zf) goto L_10c123c9;
  /* 10c123b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c123ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c123bd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10c123c0 push eax */
  push32((uint32_t)(EAX));
  /* 10c123c1 call 0x10c13330 */
  push32(0x10c123c6u); f_10c13330();
  /* 10c123c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c123c9:;
  /* 10c123c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c123cc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c123d0 je 0x10c123e3 */
  if (C.zf) goto L_10c123e3;
  /* 10c123d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c123d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c123d7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10c123da push eax */
  push32((uint32_t)(EAX));
  /* 10c123db call 0x10c13330 */
  push32(0x10c123e0u); f_10c13330();
  /* 10c123e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c123e3:;
  /* 10c123e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c123e6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c123ea je 0x10c123fd */
  if (C.zf) goto L_10c123fd;
  /* 10c123ec push 2 */
  push32((uint32_t)(0x2u));
  /* 10c123ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c123f1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10c123f4 push eax */
  push32((uint32_t)(EAX));
  /* 10c123f5 call 0x10c13330 */
  push32(0x10c123fau); f_10c13330();
  /* 10c123fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c123fd:;
  /* 10c123fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12400 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12404 je 0x10c12417 */
  if (C.zf) goto L_10c12417;
  /* 10c12406 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c12408 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1240b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10c1240e push eax */
  push32((uint32_t)(EAX));
  /* 10c1240f call 0x10c13330 */
  push32(0x10c12414u); f_10c13330();
  /* 10c12414 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c12417:;
  /* 10c12417 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1241a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1241e je 0x10c12431 */
  if (C.zf) goto L_10c12431;
  /* 10c12420 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c12422 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12425 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10c12428 push eax */
  push32((uint32_t)(EAX));
  /* 10c12429 call 0x10c13330 */
  push32(0x10c1242eu); f_10c13330();
  /* 10c1242e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c12431:;
  /* 10c12431 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12434 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12438 je 0x10c1244b */
  if (C.zf) goto L_10c1244b;
  /* 10c1243a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1243c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1243f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10c12442 push eax */
  push32((uint32_t)(EAX));
  /* 10c12443 call 0x10c13330 */
  push32(0x10c12448u); f_10c13330();
  /* 10c12448 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1244b:;
  /* 10c1244b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1244e cmp dword ptr [ecx + 0x50], 0x10c3cc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10c3cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12455 je 0x10c12468 */
  if (C.zf) goto L_10c12468;
  /* 10c12457 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c12459 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1245c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10c1245f push eax */
  push32((uint32_t)(EAX));
  /* 10c12460 call 0x10c13330 */
  push32(0x10c12465u); f_10c13330();
  /* 10c12465 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c12468:;
  /* 10c12468 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1246a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1246d push ecx */
  push32((uint32_t)(ECX));
  /* 10c1246e call 0x10c13330 */
  push32(0x10c12473u); f_10c13330();
  /* 10c12473 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c12476:;
  /* 10c12476 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12478 mov edx, dword ptr [0x10c3ca5c] */
  EDX = (r32((uint32_t)(0x10c3ca5c)));
  /* 10c1247e push edx */
  push32((uint32_t)(EDX));
  /* 10c1247f call dword ptr [0x10c4025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4025c))), 0x10c12485u);
L_10c12485:;
  /* 10c12485 pop ebp */
  EBP = (pop32());
  /* 10c12486 ret  */
  ESPCHK(0x10c12380u, _esp0);
  ESP += 4; return;
}

/* FUN_10002490 @ 0x10c12490 (11 bytes, 5 insns) */
void f_10c12490(void) {
  FTRACE(0x10c12490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c12490 push ebp */
  push32((uint32_t)(EBP));
  /* 10c12491 mov ebp, esp */
  EBP = (ESP);
  /* 10c12493 call dword ptr [0x10c40258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40258))), 0x10c12499u);
  /* 10c12499 pop ebp */
  EBP = (pop32());
  /* 10c1249a ret  */
  ESPCHK(0x10c12490u, _esp0);
  ESP += 4; return;
}

/* FUN_100024a0 @ 0x10c124a0 (11 bytes, 5 insns) */
void f_10c124a0(void) {
  FTRACE(0x10c124a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c124a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c124a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c124a3 call dword ptr [0x10c40274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40274))), 0x10c124a9u);
  /* 10c124a9 pop ebp */
  EBP = (pop32());
  /* 10c124aa ret  */
  ESPCHK(0x10c124a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100024b0 @ 0x10c124b0 (804 bytes, 236 insns) */
void f_10c124b0(void) {
  FTRACE(0x10c124b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c124b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c124b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c124b3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c124b6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10c124bb push 0x10c39390 */
  push32((uint32_t)(0x10c39390u));
  /* 10c124c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c124c2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10c124c7 call 0x10c128a0 */
  push32(0x10c124ccu); f_10c128a0();
  /* 10c124cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c124cf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10c124d2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c124d6 jne 0x10c124e2 */
  if (!C.zf) goto L_10c124e2;
  /* 10c124d8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10c124da call 0x10c11810 */
  push32(0x10c124dfu); f_10c11810();
  /* 10c124df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c124e2:;
  /* 10c124e2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c124e5 mov dword ptr [0x10c3fde0], eax */
  w32((uint32_t)(0x10c3fde0), (EAX));
  /* 10c124ea mov dword ptr [0x10c3ff1c], 0x20 */
  w32((uint32_t)(0x10c3ff1c), (0x20u));
  /* 10c124f4 jmp 0x10c124ff */
  goto L_10c124ff;
L_10c124f6:;
  /* 10c124f6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c124f9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c124fc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10c124ff:;
  /* 10c124ff mov edx, dword ptr [0x10c3fde0] */
  EDX = (r32((uint32_t)(0x10c3fde0)));
  /* 10c12505 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1250b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1250e jae 0x10c12533 */
  if (!C.cf) goto L_10c12533;
  /* 10c12510 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c12513 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10c12517 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c1251a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10c12520 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c12523 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10c12527 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c1252a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10c12531 jmp 0x10c124f6 */
  goto L_10c124f6;
L_10c12533:;
  /* 10c12533 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10c12536 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12537 call dword ptr [0x10c40280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40280))), 0x10c1253du);
  /* 10c1253d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10c12540 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c12546 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c12548 je 0x10c126d5 */
  if (C.zf) goto L_10c126d5;
  /* 10c1254e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12552 je 0x10c126d5 */
  if (C.zf) goto L_10c126d5;
  /* 10c12558 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1255b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c1255d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10c12560 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c12563 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12566 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c12569 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1256c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1256f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10c12572 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12579 jge 0x10c12583 */
  if ((C.sf==C.of)) goto L_10c12583;
  /* 10c1257b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10c1257e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10c12581 jmp 0x10c1258a */
  goto L_10c1258a;
L_10c12583:;
  /* 10c12583 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10c1258a:;
  /* 10c1258a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10c1258d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10c12590 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10c12597 jmp 0x10c125a2 */
  goto L_10c125a2;
L_10c12599:;
  /* 10c12599 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10c1259c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1259f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10c125a2:;
  /* 10c125a2 mov ecx, dword ptr [0x10c3ff1c] */
  ECX = (r32((uint32_t)(0x10c3ff1c)));
  /* 10c125a8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c125ab jge 0x10c12642 */
  if ((C.sf==C.of)) goto L_10c12642;
  /* 10c125b1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10c125b6 push 0x10c39390 */
  push32((uint32_t)(0x10c39390u));
  /* 10c125bb push 2 */
  push32((uint32_t)(0x2u));
  /* 10c125bd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10c125c2 call 0x10c128a0 */
  push32(0x10c125c7u); f_10c128a0();
  /* 10c125c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c125ca mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10c125cd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c125d1 jne 0x10c125de */
  if (!C.zf) goto L_10c125de;
  /* 10c125d3 mov edx, dword ptr [0x10c3ff1c] */
  EDX = (r32((uint32_t)(0x10c3ff1c)));
  /* 10c125d9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10c125dc jmp 0x10c12642 */
  goto L_10c12642;
L_10c125de:;
  /* 10c125de mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10c125e1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c125e4 mov dword ptr [eax*4 + 0x10c3fde0], ecx */
  w32((uint32_t)(EAX*4 + 0x10c3fde0), (ECX));
  /* 10c125eb mov edx, dword ptr [0x10c3ff1c] */
  EDX = (r32((uint32_t)(0x10c3ff1c)));
  /* 10c125f1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c125f4 mov dword ptr [0x10c3ff1c], edx */
  w32((uint32_t)(0x10c3ff1c), (EDX));
  /* 10c125fa jmp 0x10c12605 */
  goto L_10c12605;
L_10c125fc:;
  /* 10c125fc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c125ff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12602 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10c12605:;
  /* 10c12605 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10c12608 mov edx, dword ptr [ecx*4 + 0x10c3fde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c3fde0)));
  /* 10c1260f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12615 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12618 jae 0x10c1263d */
  if (!C.cf) goto L_10c1263d;
  /* 10c1261a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c1261d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10c12621 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c12624 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10c1262a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c1262d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10c12631 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c12634 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10c1263b jmp 0x10c125fc */
  goto L_10c125fc;
L_10c1263d:;
  /* 10c1263d jmp 0x10c12599 */
  goto L_10c12599;
L_10c12642:;
  /* 10c12642 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10c12649 jmp 0x10c12666 */
  goto L_10c12666;
L_10c1264b:;
  /* 10c1264b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c1264e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12651 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10c12654 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12657 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1265a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c1265d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10c12660 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12663 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10c12666:;
  /* 10c12666 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c12669 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1266c jge 0x10c126d5 */
  if ((C.sf==C.of)) goto L_10c126d5;
  /* 10c1266e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10c12671 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12674 je 0x10c126d0 */
  if (C.zf) goto L_10c126d0;
  /* 10c12676 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12679 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c1267c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1267f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c12681 je 0x10c126d0 */
  if (C.zf) goto L_10c126d0;
  /* 10c12683 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12686 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c12689 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1268c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1268e jne 0x10c126a0 */
  if (!C.zf) goto L_10c126a0;
  /* 10c12690 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10c12693 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c12695 push edx */
  push32((uint32_t)(EDX));
  /* 10c12696 call dword ptr [0x10c4027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4027c))), 0x10c1269cu);
  /* 10c1269c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1269e je 0x10c126d0 */
  if (C.zf) goto L_10c126d0;
L_10c126a0:;
  /* 10c126a0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c126a3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c126a6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c126a9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c126ac imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c126af mov edx, dword ptr [eax*4 + 0x10c3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c3fde0)));
  /* 10c126b6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c126b8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10c126bb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c126be mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10c126c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c126c3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c126c5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c126c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c126cb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c126cd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10c126d0:;
  /* 10c126d0 jmp 0x10c1264b */
  goto L_10c1264b;
L_10c126d5:;
  /* 10c126d5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10c126dc jmp 0x10c126e7 */
  goto L_10c126e7;
L_10c126de:;
  /* 10c126de mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c126e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c126e4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10c126e7:;
  /* 10c126e7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c126eb jge 0x10c127c4 */
  if ((C.sf==C.of)) goto L_10c127c4;
  /* 10c126f1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c126f4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c126f7 mov edx, dword ptr [0x10c3fde0] */
  EDX = (r32((uint32_t)(0x10c3fde0)));
  /* 10c126fd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c126ff mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10c12702 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c12705 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12708 jne 0x10c127b0 */
  if (!C.zf) goto L_10c127b0;
  /* 10c1270e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c12711 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10c12715 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12719 jne 0x10c12724 */
  if (!C.zf) goto L_10c12724;
  /* 10c1271b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10c12722 jmp 0x10c12734 */
  goto L_10c12734;
L_10c12724:;
  /* 10c12724 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c12727 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1272a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1272c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1272e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12731 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10c12734:;
  /* 10c12734 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10c12737 push eax */
  push32((uint32_t)(EAX));
  /* 10c12738 call dword ptr [0x10c4022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4022c))), 0x10c1273eu);
  /* 10c1273e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10c12741 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12745 je 0x10c1279f */
  if (C.zf) goto L_10c1279f;
  /* 10c12747 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c1274a push ecx */
  push32((uint32_t)(ECX));
  /* 10c1274b call dword ptr [0x10c4027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4027c))), 0x10c12751u);
  /* 10c12751 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10c12754 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12758 je 0x10c1279f */
  if (C.zf) goto L_10c1279f;
  /* 10c1275a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c1275d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c12760 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c12762 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10c12765 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1276b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1276e jne 0x10c12780 */
  if (!C.zf) goto L_10c12780;
  /* 10c12770 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c12773 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10c12776 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10c12778 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c1277b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10c1277e jmp 0x10c1279d */
  goto L_10c1279d;
L_10c12780:;
  /* 10c12780 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10c12783 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c12789 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1278c jne 0x10c1279d */
  if (!C.zf) goto L_10c1279d;
  /* 10c1278e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c12791 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c12794 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10c12797 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c1279a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10c1279d:;
  /* 10c1279d jmp 0x10c127ae */
  goto L_10c127ae;
L_10c1279f:;
  /* 10c1279f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c127a2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c127a5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10c127a8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c127ab mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10c127ae:;
  /* 10c127ae jmp 0x10c127bf */
  goto L_10c127bf;
L_10c127b0:;
  /* 10c127b0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c127b3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c127b6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10c127b9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c127bc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10c127bf:;
  /* 10c127bf jmp 0x10c126de */
  goto L_10c126de;
L_10c127c4:;
  /* 10c127c4 mov eax, dword ptr [0x10c3ff1c] */
  EAX = (r32((uint32_t)(0x10c3ff1c)));
  /* 10c127c9 push eax */
  push32((uint32_t)(EAX));
  /* 10c127ca call dword ptr [0x10c40278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40278))), 0x10c127d0u);
  /* 10c127d0 mov esp, ebp */
  ESP = (EBP);
  /* 10c127d2 pop ebp */
  EBP = (pop32());
  /* 10c127d3 ret  */
  ESPCHK(0x10c124b0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10c127e0 (155 bytes, 45 insns) */
void f_10c127e0(void) {
  FTRACE(0x10c127e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c127e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c127e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c127e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c127e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c127ed jmp 0x10c127f8 */
  goto L_10c127f8;
L_10c127ef:;
  /* 10c127ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c127f2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c127f5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c127f8:;
  /* 10c127f8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c127fc jge 0x10c12877 */
  if ((C.sf==C.of)) goto L_10c12877;
  /* 10c127fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c12801 cmp dword ptr [ecx*4 + 0x10c3fde0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10c3fde0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12809 je 0x10c12872 */
  if (C.zf) goto L_10c12872;
  /* 10c1280b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1280e mov eax, dword ptr [edx*4 + 0x10c3fde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c3fde0)));
  /* 10c12815 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c12818 jmp 0x10c12823 */
  goto L_10c12823;
L_10c1281a:;
  /* 10c1281a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1281d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12820 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c12823:;
  /* 10c12823 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c12826 mov eax, dword ptr [edx*4 + 0x10c3fde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c3fde0)));
  /* 10c1282d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12832 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12835 jae 0x10c1284f */
  if (!C.cf) goto L_10c1284f;
  /* 10c12837 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1283a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1283e je 0x10c1284d */
  if (C.zf) goto L_10c1284d;
  /* 10c12840 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12843 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12846 push edx */
  push32((uint32_t)(EDX));
  /* 10c12847 call dword ptr [0x10c40284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40284))), 0x10c1284du);
L_10c1284d:;
  /* 10c1284d jmp 0x10c1281a */
  goto L_10c1281a;
L_10c1284f:;
  /* 10c1284f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c12851 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c12854 mov ecx, dword ptr [eax*4 + 0x10c3fde0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10c3fde0)));
  /* 10c1285b push ecx */
  push32((uint32_t)(ECX));
  /* 10c1285c call 0x10c13330 */
  push32(0x10c12861u); f_10c13330();
  /* 10c12861 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12864 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c12867 mov dword ptr [edx*4 + 0x10c3fde0], 0 */
  w32((uint32_t)(EDX*4 + 0x10c3fde0), (0x0u));
L_10c12872:;
  /* 10c12872 jmp 0x10c127ef */
  goto L_10c127ef;
L_10c12877:;
  /* 10c12877 mov esp, ebp */
  ESP = (EBP);
  /* 10c12879 pop ebp */
  EBP = (pop32());
  /* 10c1287a ret  */
  ESPCHK(0x10c127e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002880 @ 0x10c12880 (29 bytes, 13 insns) */
void f_10c12880(void) {
  FTRACE(0x10c12880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c12880 push ebp */
  push32((uint32_t)(EBP));
  /* 10c12881 mov ebp, esp */
  EBP = (ESP);
  /* 10c12883 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12885 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12887 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c12889 mov eax, dword ptr [0x10c3e5e8] */
  EAX = (r32((uint32_t)(0x10c3e5e8)));
  /* 10c1288e push eax */
  push32((uint32_t)(EAX));
  /* 10c1288f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12892 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12893 call 0x10c128f0 */
  push32(0x10c12898u); f_10c128f0();
  /* 10c12898 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1289b pop ebp */
  EBP = (pop32());
  /* 10c1289c ret  */
  ESPCHK(0x10c12880u, _esp0);
  ESP += 4; return;
}

/* FUN_100028a0 @ 0x10c128a0 (35 bytes, 16 insns) */
void f_10c128a0(void) {
  FTRACE(0x10c128a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c128a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c128a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c128a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c128a6 push eax */
  push32((uint32_t)(EAX));
  /* 10c128a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c128aa push ecx */
  push32((uint32_t)(ECX));
  /* 10c128ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c128ae push edx */
  push32((uint32_t)(EDX));
  /* 10c128af mov eax, dword ptr [0x10c3e5e8] */
  EAX = (r32((uint32_t)(0x10c3e5e8)));
  /* 10c128b4 push eax */
  push32((uint32_t)(EAX));
  /* 10c128b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c128b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c128b9 call 0x10c128f0 */
  push32(0x10c128beu); f_10c128f0();
  /* 10c128be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c128c1 pop ebp */
  EBP = (pop32());
  /* 10c128c2 ret  */
  ESPCHK(0x10c128a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100028d0 @ 0x10c128d0 (27 bytes, 13 insns) */
void f_10c128d0(void) {
  FTRACE(0x10c128d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c128d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c128d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c128d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c128d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c128d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c128d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c128dc push eax */
  push32((uint32_t)(EAX));
  /* 10c128dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c128e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c128e1 call 0x10c128f0 */
  push32(0x10c128e6u); f_10c128f0();
  /* 10c128e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c128e9 pop ebp */
  EBP = (pop32());
  /* 10c128ea ret  */
  ESPCHK(0x10c128d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100028f0 @ 0x10c128f0 (94 bytes, 38 insns) */
void f_10c128f0(void) {
  FTRACE(0x10c128f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c128f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c128f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c128f3 push ecx */
  push32((uint32_t)(ECX));
L_10c128f4:;
  /* 10c128f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c128f6 call 0x10c162a0 */
  push32(0x10c128fbu); f_10c162a0();
  /* 10c128fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c128fe mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c12901 push eax */
  push32((uint32_t)(EAX));
  /* 10c12902 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c12905 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12906 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c12909 push edx */
  push32((uint32_t)(EDX));
  /* 10c1290a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1290d push eax */
  push32((uint32_t)(EAX));
  /* 10c1290e call 0x10c12970 */
  push32(0x10c12913u); f_10c12970();
  /* 10c12913 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12916 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c12919 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c1291b call 0x10c16340 */
  push32(0x10c12920u); f_10c16340();
  /* 10c12920 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12923 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12927 jne 0x10c1292f */
  if (!C.zf) goto L_10c1292f;
  /* 10c12929 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1292d jne 0x10c12934 */
  if (!C.zf) goto L_10c12934;
L_10c1292f:;
  /* 10c1292f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12932 jmp 0x10c1294a */
  goto L_10c1294a;
L_10c12934:;
  /* 10c12934 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12937 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12938 call 0x10c165e0 */
  push32(0x10c1293du); f_10c165e0();
  /* 10c1293d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12940 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c12942 jne 0x10c12948 */
  if (!C.zf) goto L_10c12948;
  /* 10c12944 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c12946 jmp 0x10c1294a */
  goto L_10c1294a;
L_10c12948:;
  /* 10c12948 jmp 0x10c128f4 */
  goto L_10c128f4;
L_10c1294a:;
  /* 10c1294a mov esp, ebp */
  ESP = (EBP);
  /* 10c1294c pop ebp */
  EBP = (pop32());
  /* 10c1294d ret  */
  ESPCHK(0x10c128f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002950 @ 0x10c12950 (23 bytes, 11 insns) */
void f_10c12950(void) {
  FTRACE(0x10c12950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c12950 push ebp */
  push32((uint32_t)(EBP));
  /* 10c12951 mov ebp, esp */
  EBP = (ESP);
  /* 10c12953 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12955 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12957 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c12959 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1295c push eax */
  push32((uint32_t)(EAX));
  /* 10c1295d call 0x10c12970 */
  push32(0x10c12962u); f_10c12970();
  /* 10c12962 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12965 pop ebp */
  EBP = (pop32());
  /* 10c12966 ret  */
  ESPCHK(0x10c12950u, _esp0);
  ESP += 4; return;
}

/* FUN_10002970 @ 0x10c12970 (787 bytes, 254 insns) */
void f_10c12970(void) {
  FTRACE(0x10c12970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c12970 push ebp */
  push32((uint32_t)(EBP));
  /* 10c12971 mov ebp, esp */
  EBP = (ESP);
  /* 10c12973 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c12976 push ebx */
  push32((uint32_t)(EBX));
  /* 10c12977 push esi */
  push32((uint32_t)(ESI));
  /* 10c12978 push edi */
  push32((uint32_t)(EDI));
  /* 10c12979 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c12980 mov eax, dword ptr [0x10c3ca84] */
  EAX = (r32((uint32_t)(0x10c3ca84)));
  /* 10c12985 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c12988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1298a je 0x10c129bc */
  if (C.zf) goto L_10c129bc;
L_10c1298c:;
  /* 10c1298c call 0x10c13a40 */
  push32(0x10c12991u); f_10c13a40();
  /* 10c12991 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c12993 jne 0x10c129b6 */
  if (!C.zf) goto L_10c129b6;
  /* 10c12995 push 0x10c39484 */
  push32((uint32_t)(0x10c39484u));
  /* 10c1299a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1299c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10c129a1 push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c129a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c129a8 call 0x10c11960 */
  push32(0x10c129adu); f_10c11960();
  /* 10c129ad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c129b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c129b3 jne 0x10c129b6 */
  if (!C.zf) goto L_10c129b6;
  /* 10c129b5 int3  */
  x86_unimpl("int3 @ 0x10c129b5");
L_10c129b6:;
  /* 10c129b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c129b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c129ba jne 0x10c1298c */
  if (!C.zf) goto L_10c1298c;
L_10c129bc:;
  /* 10c129bc mov edx, dword ptr [0x10c3ca88] */
  EDX = (r32((uint32_t)(0x10c3ca88)));
  /* 10c129c2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c129c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c129c8 cmp eax, dword ptr [0x10c3ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c129ce jne 0x10c129d1 */
  if (!C.zf) goto L_10c129d1;
  /* 10c129d0 int3  */
  x86_unimpl("int3 @ 0x10c129d0");
L_10c129d1:;
  /* 10c129d1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c129d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c129d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c129d8 push edx */
  push32((uint32_t)(EDX));
  /* 10c129d9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c129dc push eax */
  push32((uint32_t)(EAX));
  /* 10c129dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c129e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c129e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c129e4 push edx */
  push32((uint32_t)(EDX));
  /* 10c129e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c129e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c129e9 call dword ptr [0x10c3cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3cc90))), 0x10c129efu);
  /* 10c129ef add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c129f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c129f4 jne 0x10c12a54 */
  if (!C.zf) goto L_10c12a54;
  /* 10c129f6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c129fa je 0x10c12a27 */
  if (C.zf) goto L_10c12a27;
L_10c129fc:;
  /* 10c129fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c129ff push eax */
  push32((uint32_t)(EAX));
  /* 10c12a00 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c12a03 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12a04 push 0x10c39440 */
  push32((uint32_t)(0x10c39440u));
  /* 10c12a09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12a0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12a0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12a11 call 0x10c11960 */
  push32(0x10c12a16u); f_10c11960();
  /* 10c12a16 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12a19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12a1c jne 0x10c12a1f */
  if (!C.zf) goto L_10c12a1f;
  /* 10c12a1e int3  */
  x86_unimpl("int3 @ 0x10c12a1e");
L_10c12a1f:;
  /* 10c12a1f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c12a21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c12a23 jne 0x10c129fc */
  if (!C.zf) goto L_10c129fc;
  /* 10c12a25 jmp 0x10c12a4d */
  goto L_10c12a4d;
L_10c12a27:;
  /* 10c12a27 push 0x10c3941c */
  push32((uint32_t)(0x10c3941cu));
  /* 10c12a2c push 0x10c39418 */
  push32((uint32_t)(0x10c39418u));
  /* 10c12a31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12a37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12a39 call 0x10c11960 */
  push32(0x10c12a3eu); f_10c11960();
  /* 10c12a3e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12a41 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12a44 jne 0x10c12a47 */
  if (!C.zf) goto L_10c12a47;
  /* 10c12a46 int3  */
  x86_unimpl("int3 @ 0x10c12a46");
L_10c12a47:;
  /* 10c12a47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c12a49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c12a4b jne 0x10c12a27 */
  if (!C.zf) goto L_10c12a27;
L_10c12a4d:;
  /* 10c12a4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c12a4f jmp 0x10c12c7c */
  goto L_10c12c7c;
L_10c12a54:;
  /* 10c12a54 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c12a57 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c12a5d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12a60 je 0x10c12a76 */
  if (C.zf) goto L_10c12a76;
  /* 10c12a62 mov edx, dword ptr [0x10c3ca84] */
  EDX = (r32((uint32_t)(0x10c3ca84)));
  /* 10c12a68 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c12a6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c12a6d jne 0x10c12a76 */
  if (!C.zf) goto L_10c12a76;
  /* 10c12a6f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10c12a76:;
  /* 10c12a76 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12a7a ja 0x10c12a87 */
  if ((!C.cf&&!C.zf)) goto L_10c12a87;
  /* 10c12a7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12a7f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12a82 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12a85 jbe 0x10c12ab3 */
  if ((C.cf||C.zf)) goto L_10c12ab3;
L_10c12a87:;
  /* 10c12a87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12a8a push ecx */
  push32((uint32_t)(ECX));
  /* 10c12a8b push 0x10c393f4 */
  push32((uint32_t)(0x10c393f4u));
  /* 10c12a90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12a96 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c12a98 call 0x10c11960 */
  push32(0x10c12a9du); f_10c11960();
  /* 10c12a9d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12aa0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12aa3 jne 0x10c12aa6 */
  if (!C.zf) goto L_10c12aa6;
  /* 10c12aa5 int3  */
  x86_unimpl("int3 @ 0x10c12aa5");
L_10c12aa6:;
  /* 10c12aa6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c12aa8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c12aaa jne 0x10c12a87 */
  if (!C.zf) goto L_10c12a87;
  /* 10c12aac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c12aae jmp 0x10c12c7c */
  goto L_10c12c7c;
L_10c12ab3:;
  /* 10c12ab3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c12ab6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c12abb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12abe je 0x10c12b00 */
  if (C.zf) goto L_10c12b00;
  /* 10c12ac0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12ac4 je 0x10c12b00 */
  if (C.zf) goto L_10c12b00;
  /* 10c12ac6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c12ac9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c12acf cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12ad2 je 0x10c12b00 */
  if (C.zf) goto L_10c12b00;
  /* 10c12ad4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12ad8 je 0x10c12b00 */
  if (C.zf) goto L_10c12b00;
L_10c12ada:;
  /* 10c12ada push 0x10c393c0 */
  push32((uint32_t)(0x10c393c0u));
  /* 10c12adf push 0x10c39418 */
  push32((uint32_t)(0x10c39418u));
  /* 10c12ae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12ae8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12aea push 1 */
  push32((uint32_t)(0x1u));
  /* 10c12aec call 0x10c11960 */
  push32(0x10c12af1u); f_10c11960();
  /* 10c12af1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12af4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12af7 jne 0x10c12afa */
  if (!C.zf) goto L_10c12afa;
  /* 10c12af9 int3  */
  x86_unimpl("int3 @ 0x10c12af9");
L_10c12afa:;
  /* 10c12afa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c12afc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c12afe jne 0x10c12ada */
  if (!C.zf) goto L_10c12ada;
L_10c12b00:;
  /* 10c12b00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12b03 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12b06 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c12b09 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c12b0c push ecx */
  push32((uint32_t)(ECX));
  /* 10c12b0d call 0x10c166f0 */
  push32(0x10c12b12u); f_10c166f0();
  /* 10c12b12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12b15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c12b18 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12b1c jne 0x10c12b25 */
  if (!C.zf) goto L_10c12b25;
  /* 10c12b1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c12b20 jmp 0x10c12c7c */
  goto L_10c12c7c;
L_10c12b25:;
  /* 10c12b25 mov edx, dword ptr [0x10c3ca88] */
  EDX = (r32((uint32_t)(0x10c3ca88)));
  /* 10c12b2b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12b2e mov dword ptr [0x10c3ca88], edx */
  w32((uint32_t)(0x10c3ca88), (EDX));
  /* 10c12b34 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12b38 je 0x10c12b83 */
  if (C.zf) goto L_10c12b83;
  /* 10c12b3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12b3d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c12b43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12b46 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10c12b4d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12b50 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10c12b57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12b5a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10c12b61 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12b64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12b67 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10c12b6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12b6d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10c12b74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12b77 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10c12b7e jmp 0x10c12c23 */
  goto L_10c12c23;
L_10c12b83:;
  /* 10c12b83 mov edx, dword ptr [0x10c3e448] */
  EDX = (r32((uint32_t)(0x10c3e448)));
  /* 10c12b89 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12b8c mov dword ptr [0x10c3e448], edx */
  w32((uint32_t)(0x10c3e448), (EDX));
  /* 10c12b92 mov eax, dword ptr [0x10c3e450] */
  EAX = (r32((uint32_t)(0x10c3e450)));
  /* 10c12b97 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12b9a mov dword ptr [0x10c3e450], eax */
  w32((uint32_t)(0x10c3e450), (EAX));
  /* 10c12b9f mov ecx, dword ptr [0x10c3e450] */
  ECX = (r32((uint32_t)(0x10c3e450)));
  /* 10c12ba5 cmp ecx, dword ptr [0x10c3e454] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3e454))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12bab jbe 0x10c12bb9 */
  if ((C.cf||C.zf)) goto L_10c12bb9;
  /* 10c12bad mov edx, dword ptr [0x10c3e450] */
  EDX = (r32((uint32_t)(0x10c3e450)));
  /* 10c12bb3 mov dword ptr [0x10c3e454], edx */
  w32((uint32_t)(0x10c3e454), (EDX));
L_10c12bb9:;
  /* 10c12bb9 cmp dword ptr [0x10c3e44c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e44c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12bc0 je 0x10c12bcf */
  if (C.zf) goto L_10c12bcf;
  /* 10c12bc2 mov eax, dword ptr [0x10c3e44c] */
  EAX = (r32((uint32_t)(0x10c3e44c)));
  /* 10c12bc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12bca mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10c12bcd jmp 0x10c12bd8 */
  goto L_10c12bd8;
L_10c12bcf:;
  /* 10c12bcf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12bd2 mov dword ptr [0x10c3e444], edx */
  w32((uint32_t)(0x10c3e444), (EDX));
L_10c12bd8:;
  /* 10c12bd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12bdb mov ecx, dword ptr [0x10c3e44c] */
  ECX = (r32((uint32_t)(0x10c3e44c)));
  /* 10c12be1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c12be3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12be6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10c12bed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12bf0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c12bf3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10c12bf6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12bf9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c12bfc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10c12bff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12c02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12c05 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10c12c08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12c0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c12c0e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10c12c11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12c14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c12c17 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10c12c1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12c1d mov dword ptr [0x10c3e44c], ecx */
  w32((uint32_t)(0x10c3e44c), (ECX));
L_10c12c23:;
  /* 10c12c23 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c12c25 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c12c27 mov dl, byte ptr [0x10c3ca90] */
  DL = (r8((uint32_t)(0x10c3ca90)));
  /* 10c12c2d push edx */
  push32((uint32_t)(EDX));
  /* 10c12c2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12c31 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12c34 push eax */
  push32((uint32_t)(EAX));
  /* 10c12c35 call 0x10c16610 */
  push32(0x10c12c3au); f_10c16610();
  /* 10c12c3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12c3d push 4 */
  push32((uint32_t)(0x4u));
  /* 10c12c3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c12c41 mov cl, byte ptr [0x10c3ca90] */
  CL = (r8((uint32_t)(0x10c3ca90)));
  /* 10c12c47 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12c48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12c4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12c4e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10c12c52 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12c53 call 0x10c16610 */
  push32(0x10c12c58u); f_10c16610();
  /* 10c12c58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12c5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12c5e push edx */
  push32((uint32_t)(EDX));
  /* 10c12c5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c12c61 mov al, byte ptr [0x10c3ca92] */
  AL = (r8((uint32_t)(0x10c3ca92)));
  /* 10c12c66 push eax */
  push32((uint32_t)(EAX));
  /* 10c12c67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12c6a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12c6d push ecx */
  push32((uint32_t)(ECX));
  /* 10c12c6e call 0x10c16610 */
  push32(0x10c12c73u); f_10c16610();
  /* 10c12c73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12c76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12c79 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10c12c7c:;
  /* 10c12c7c pop edi */
  EDI = (pop32());
  /* 10c12c7d pop esi */
  ESI = (pop32());
  /* 10c12c7e pop ebx */
  EBX = (pop32());
  /* 10c12c7f mov esp, ebp */
  ESP = (EBP);
  /* 10c12c81 pop ebp */
  EBP = (pop32());
  /* 10c12c82 ret  */
  ESPCHK(0x10c12970u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c90 @ 0x10c12c90 (27 bytes, 13 insns) */
void f_10c12c90(void) {
  FTRACE(0x10c12c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c12c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10c12c91 mov ebp, esp */
  EBP = (ESP);
  /* 10c12c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12c97 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c12c99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c12c9c push eax */
  push32((uint32_t)(EAX));
  /* 10c12c9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12ca0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12ca1 call 0x10c12cb0 */
  push32(0x10c12ca6u); f_10c12cb0();
  /* 10c12ca6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12ca9 pop ebp */
  EBP = (pop32());
  /* 10c12caa ret  */
  ESPCHK(0x10c12c90u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10c12cb0 (96 bytes, 37 insns) */
void f_10c12cb0(void) {
  FTRACE(0x10c12cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c12cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c12cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10c12cb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c12cb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c12cb9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c12cbd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10c12cc0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c12cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12cc4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c12cc7 push edx */
  push32((uint32_t)(EDX));
  /* 10c12cc8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c12ccb push eax */
  push32((uint32_t)(EAX));
  /* 10c12ccc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c12ccf push ecx */
  push32((uint32_t)(ECX));
  /* 10c12cd0 call 0x10c128a0 */
  push32(0x10c12cd5u); f_10c128a0();
  /* 10c12cd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12cd8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c12cdb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12cdf je 0x10c12d09 */
  if (C.zf) goto L_10c12d09;
  /* 10c12ce1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c12ce4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c12ce7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c12cea add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12ced mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c12cf0:;
  /* 10c12cf0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c12cf3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12cf6 jae 0x10c12d09 */
  if (!C.cf) goto L_10c12d09;
  /* 10c12cf8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c12cfb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10c12cfe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c12d01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12d04 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c12d07 jmp 0x10c12cf0 */
  goto L_10c12cf0;
L_10c12d09:;
  /* 10c12d09 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c12d0c mov esp, ebp */
  ESP = (EBP);
  /* 10c12d0e pop ebp */
  EBP = (pop32());
  /* 10c12d0f ret  */
  ESPCHK(0x10c12cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d10 @ 0x10c12d10 (27 bytes, 13 insns) */
void f_10c12d10(void) {
  FTRACE(0x10c12d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c12d10 push ebp */
  push32((uint32_t)(EBP));
  /* 10c12d11 mov ebp, esp */
  EBP = (ESP);
  /* 10c12d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12d17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c12d19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c12d1c push eax */
  push32((uint32_t)(EAX));
  /* 10c12d1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12d20 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12d21 call 0x10c12d30 */
  push32(0x10c12d26u); f_10c12d30();
  /* 10c12d26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12d29 pop ebp */
  EBP = (pop32());
  /* 10c12d2a ret  */
  ESPCHK(0x10c12d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d30 @ 0x10c12d30 (64 bytes, 27 insns) */
void f_10c12d30(void) {
  FTRACE(0x10c12d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c12d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10c12d31 mov ebp, esp */
  EBP = (ESP);
  /* 10c12d33 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12d34 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c12d36 call 0x10c162a0 */
  push32(0x10c12d3bu); f_10c162a0();
  /* 10c12d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12d3e push 1 */
  push32((uint32_t)(0x1u));
  /* 10c12d40 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c12d43 push eax */
  push32((uint32_t)(EAX));
  /* 10c12d44 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c12d47 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12d48 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c12d4b push edx */
  push32((uint32_t)(EDX));
  /* 10c12d4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c12d4f push eax */
  push32((uint32_t)(EAX));
  /* 10c12d50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12d53 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12d54 call 0x10c12d70 */
  push32(0x10c12d59u); f_10c12d70();
  /* 10c12d59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12d5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c12d5f push 9 */
  push32((uint32_t)(0x9u));
  /* 10c12d61 call 0x10c16340 */
  push32(0x10c12d66u); f_10c16340();
  /* 10c12d66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12d69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c12d6c mov esp, ebp */
  ESP = (EBP);
  /* 10c12d6e pop ebp */
  EBP = (pop32());
  /* 10c12d6f ret  */
  ESPCHK(0x10c12d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d70 @ 0x10c12d70 (1297 bytes, 431 insns) */
void f_10c12d70(void) {
  FTRACE(0x10c12d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c12d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c12d71 mov ebp, esp */
  EBP = (ESP);
  /* 10c12d73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c12d76 push ebx */
  push32((uint32_t)(EBX));
  /* 10c12d77 push esi */
  push32((uint32_t)(ESI));
  /* 10c12d78 push edi */
  push32((uint32_t)(EDI));
  /* 10c12d79 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10c12d80 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12d84 jne 0x10c12da3 */
  if (!C.zf) goto L_10c12da3;
  /* 10c12d86 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c12d89 push eax */
  push32((uint32_t)(EAX));
  /* 10c12d8a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c12d8d push ecx */
  push32((uint32_t)(ECX));
  /* 10c12d8e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c12d91 push edx */
  push32((uint32_t)(EDX));
  /* 10c12d92 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c12d95 push eax */
  push32((uint32_t)(EAX));
  /* 10c12d96 call 0x10c128a0 */
  push32(0x10c12d9bu); f_10c128a0();
  /* 10c12d9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12d9e jmp 0x10c1327a */
  goto L_10c1327a;
L_10c12da3:;
  /* 10c12da3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12da7 je 0x10c12dc6 */
  if (C.zf) goto L_10c12dc6;
  /* 10c12da9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12dad jne 0x10c12dc6 */
  if (!C.zf) goto L_10c12dc6;
  /* 10c12daf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c12db2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12db3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12db6 push edx */
  push32((uint32_t)(EDX));
  /* 10c12db7 call 0x10c13330 */
  push32(0x10c12dbcu); f_10c13330();
  /* 10c12dbc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12dbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c12dc1 jmp 0x10c1327a */
  goto L_10c1327a;
L_10c12dc6:;
  /* 10c12dc6 mov eax, dword ptr [0x10c3ca84] */
  EAX = (r32((uint32_t)(0x10c3ca84)));
  /* 10c12dcb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c12dce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c12dd0 je 0x10c12e02 */
  if (C.zf) goto L_10c12e02;
L_10c12dd2:;
  /* 10c12dd2 call 0x10c13a40 */
  push32(0x10c12dd7u); f_10c13a40();
  /* 10c12dd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c12dd9 jne 0x10c12dfc */
  if (!C.zf) goto L_10c12dfc;
  /* 10c12ddb push 0x10c39484 */
  push32((uint32_t)(0x10c39484u));
  /* 10c12de0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12de2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10c12de7 push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c12dec push 2 */
  push32((uint32_t)(0x2u));
  /* 10c12dee call 0x10c11960 */
  push32(0x10c12df3u); f_10c11960();
  /* 10c12df3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12df6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12df9 jne 0x10c12dfc */
  if (!C.zf) goto L_10c12dfc;
  /* 10c12dfb int3  */
  x86_unimpl("int3 @ 0x10c12dfb");
L_10c12dfc:;
  /* 10c12dfc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c12dfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c12e00 jne 0x10c12dd2 */
  if (!C.zf) goto L_10c12dd2;
L_10c12e02:;
  /* 10c12e02 mov edx, dword ptr [0x10c3ca88] */
  EDX = (r32((uint32_t)(0x10c3ca88)));
  /* 10c12e08 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c12e0b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c12e0e cmp eax, dword ptr [0x10c3ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12e14 jne 0x10c12e17 */
  if (!C.zf) goto L_10c12e17;
  /* 10c12e16 int3  */
  x86_unimpl("int3 @ 0x10c12e16");
L_10c12e17:;
  /* 10c12e17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c12e1a push ecx */
  push32((uint32_t)(ECX));
  /* 10c12e1b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c12e1e push edx */
  push32((uint32_t)(EDX));
  /* 10c12e1f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c12e22 push eax */
  push32((uint32_t)(EAX));
  /* 10c12e23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c12e26 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12e27 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c12e2a push edx */
  push32((uint32_t)(EDX));
  /* 10c12e2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12e2e push eax */
  push32((uint32_t)(EAX));
  /* 10c12e2f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c12e31 call dword ptr [0x10c3cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3cc90))), 0x10c12e37u);
  /* 10c12e37 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c12e3c jne 0x10c12e9c */
  if (!C.zf) goto L_10c12e9c;
  /* 10c12e3e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12e42 je 0x10c12e6f */
  if (C.zf) goto L_10c12e6f;
L_10c12e44:;
  /* 10c12e44 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c12e47 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12e48 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c12e4b push edx */
  push32((uint32_t)(EDX));
  /* 10c12e4c push 0x10c39600 */
  push32((uint32_t)(0x10c39600u));
  /* 10c12e51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12e53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12e55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12e57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12e59 call 0x10c11960 */
  push32(0x10c12e5eu); f_10c11960();
  /* 10c12e5e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12e61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12e64 jne 0x10c12e67 */
  if (!C.zf) goto L_10c12e67;
  /* 10c12e66 int3  */
  x86_unimpl("int3 @ 0x10c12e66");
L_10c12e67:;
  /* 10c12e67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c12e69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c12e6b jne 0x10c12e44 */
  if (!C.zf) goto L_10c12e44;
  /* 10c12e6d jmp 0x10c12e95 */
  goto L_10c12e95;
L_10c12e6f:;
  /* 10c12e6f push 0x10c395dc */
  push32((uint32_t)(0x10c395dcu));
  /* 10c12e74 push 0x10c39418 */
  push32((uint32_t)(0x10c39418u));
  /* 10c12e79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12e7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12e7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12e7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12e81 call 0x10c11960 */
  push32(0x10c12e86u); f_10c11960();
  /* 10c12e86 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12e89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12e8c jne 0x10c12e8f */
  if (!C.zf) goto L_10c12e8f;
  /* 10c12e8e int3  */
  x86_unimpl("int3 @ 0x10c12e8e");
L_10c12e8f:;
  /* 10c12e8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c12e91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c12e93 jne 0x10c12e6f */
  if (!C.zf) goto L_10c12e6f;
L_10c12e95:;
  /* 10c12e95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c12e97 jmp 0x10c1327a */
  goto L_10c1327a;
L_10c12e9c:;
  /* 10c12e9c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12ea0 jbe 0x10c12ece */
  if ((C.cf||C.zf)) goto L_10c12ece;
L_10c12ea2:;
  /* 10c12ea2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c12ea5 push edx */
  push32((uint32_t)(EDX));
  /* 10c12ea6 push 0x10c395ac */
  push32((uint32_t)(0x10c395acu));
  /* 10c12eab push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12ead push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12eaf push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12eb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c12eb3 call 0x10c11960 */
  push32(0x10c12eb8u); f_10c11960();
  /* 10c12eb8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12ebb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12ebe jne 0x10c12ec1 */
  if (!C.zf) goto L_10c12ec1;
  /* 10c12ec0 int3  */
  x86_unimpl("int3 @ 0x10c12ec0");
L_10c12ec1:;
  /* 10c12ec1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c12ec3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c12ec5 jne 0x10c12ea2 */
  if (!C.zf) goto L_10c12ea2;
  /* 10c12ec7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c12ec9 jmp 0x10c1327a */
  goto L_10c1327a;
L_10c12ece:;
  /* 10c12ece cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12ed2 je 0x10c12f16 */
  if (C.zf) goto L_10c12f16;
  /* 10c12ed4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c12ed7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c12edd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12ee0 je 0x10c12f16 */
  if (C.zf) goto L_10c12f16;
  /* 10c12ee2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c12ee5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c12eeb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12eee je 0x10c12f16 */
  if (C.zf) goto L_10c12f16;
L_10c12ef0:;
  /* 10c12ef0 push 0x10c393c0 */
  push32((uint32_t)(0x10c393c0u));
  /* 10c12ef5 push 0x10c39418 */
  push32((uint32_t)(0x10c39418u));
  /* 10c12efa push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12efc push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12efe push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12f00 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c12f02 call 0x10c11960 */
  push32(0x10c12f07u); f_10c11960();
  /* 10c12f07 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12f0a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12f0d jne 0x10c12f10 */
  if (!C.zf) goto L_10c12f10;
  /* 10c12f0f int3  */
  x86_unimpl("int3 @ 0x10c12f0f");
L_10c12f10:;
  /* 10c12f10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c12f12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c12f14 jne 0x10c12ef0 */
  if (!C.zf) goto L_10c12ef0;
L_10c12f16:;
  /* 10c12f16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12f19 push ecx */
  push32((uint32_t)(ECX));
  /* 10c12f1a call 0x10c13ea0 */
  push32(0x10c12f1fu); f_10c13ea0();
  /* 10c12f1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12f22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c12f24 jne 0x10c12f47 */
  if (!C.zf) goto L_10c12f47;
  /* 10c12f26 push 0x10c39588 */
  push32((uint32_t)(0x10c39588u));
  /* 10c12f2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12f2d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10c12f32 push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c12f37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c12f39 call 0x10c11960 */
  push32(0x10c12f3eu); f_10c11960();
  /* 10c12f3e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12f41 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12f44 jne 0x10c12f47 */
  if (!C.zf) goto L_10c12f47;
  /* 10c12f46 int3  */
  x86_unimpl("int3 @ 0x10c12f46");
L_10c12f47:;
  /* 10c12f47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c12f49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c12f4b jne 0x10c12f16 */
  if (!C.zf) goto L_10c12f16;
  /* 10c12f4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c12f50 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c12f53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c12f56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c12f59 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12f5d jne 0x10c12f66 */
  if (!C.zf) goto L_10c12f66;
  /* 10c12f5f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10c12f66:;
  /* 10c12f66 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12f6a je 0x10c12faa */
  if (C.zf) goto L_10c12faa;
L_10c12f6c:;
  /* 10c12f6c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c12f6f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12f76 jne 0x10c12f81 */
  if (!C.zf) goto L_10c12f81;
  /* 10c12f78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c12f7b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12f7f je 0x10c12fa2 */
  if (C.zf) goto L_10c12fa2;
L_10c12f81:;
  /* 10c12f81 push 0x10c39540 */
  push32((uint32_t)(0x10c39540u));
  /* 10c12f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12f88 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10c12f8d push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c12f92 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c12f94 call 0x10c11960 */
  push32(0x10c12f99u); f_10c11960();
  /* 10c12f99 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c12f9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12f9f jne 0x10c12fa2 */
  if (!C.zf) goto L_10c12fa2;
  /* 10c12fa1 int3  */
  x86_unimpl("int3 @ 0x10c12fa1");
L_10c12fa2:;
  /* 10c12fa2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c12fa4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c12fa6 jne 0x10c12f6c */
  if (!C.zf) goto L_10c12f6c;
  /* 10c12fa8 jmp 0x10c1300e */
  goto L_10c1300e;
L_10c12faa:;
  /* 10c12faa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c12fad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c12fb0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c12fb5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12fb8 jne 0x10c12fcf */
  if (!C.zf) goto L_10c12fcf;
  /* 10c12fba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c12fbd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c12fc3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12fc6 jne 0x10c12fcf */
  if (!C.zf) goto L_10c12fcf;
  /* 10c12fc8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10c12fcf:;
  /* 10c12fcf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c12fd2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c12fd5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c12fda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c12fdd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c12fe3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c12fe5 je 0x10c13008 */
  if (C.zf) goto L_10c13008;
  /* 10c12fe7 push 0x10c39504 */
  push32((uint32_t)(0x10c39504u));
  /* 10c12fec push 0 */
  push32((uint32_t)(0x0u));
  /* 10c12fee push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10c12ff3 push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c12ff8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c12ffa call 0x10c11960 */
  push32(0x10c12fffu); f_10c11960();
  /* 10c12fff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13002 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13005 jne 0x10c13008 */
  if (!C.zf) goto L_10c13008;
  /* 10c13007 int3  */
  x86_unimpl("int3 @ 0x10c13007");
L_10c13008:;
  /* 10c13008 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1300a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1300c jne 0x10c12fcf */
  if (!C.zf) goto L_10c12fcf;
L_10c1300e:;
  /* 10c1300e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13012 je 0x10c13039 */
  if (C.zf) goto L_10c13039;
  /* 10c13014 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c13017 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1301a push eax */
  push32((uint32_t)(EAX));
  /* 10c1301b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1301e push ecx */
  push32((uint32_t)(ECX));
  /* 10c1301f call 0x10c16820 */
  push32(0x10c13024u); f_10c16820();
  /* 10c13024 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13027 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c1302a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1302e jne 0x10c13037 */
  if (!C.zf) goto L_10c13037;
  /* 10c13030 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c13032 jmp 0x10c1327a */
  goto L_10c1327a;
L_10c13037:;
  /* 10c13037 jmp 0x10c1305c */
  goto L_10c1305c;
L_10c13039:;
  /* 10c13039 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1303c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1303f push edx */
  push32((uint32_t)(EDX));
  /* 10c13040 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13043 push eax */
  push32((uint32_t)(EAX));
  /* 10c13044 call 0x10c16770 */
  push32(0x10c13049u); f_10c16770();
  /* 10c13049 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1304c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c1304f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13053 jne 0x10c1305c */
  if (!C.zf) goto L_10c1305c;
  /* 10c13055 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c13057 jmp 0x10c1327a */
  goto L_10c1327a;
L_10c1305c:;
  /* 10c1305c mov ecx, dword ptr [0x10c3ca88] */
  ECX = (r32((uint32_t)(0x10c3ca88)));
  /* 10c13062 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13065 mov dword ptr [0x10c3ca88], ecx */
  w32((uint32_t)(0x10c3ca88), (ECX));
  /* 10c1306b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1306f jne 0x10c130c7 */
  if (!C.zf) goto L_10c130c7;
  /* 10c13071 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c13074 mov eax, dword ptr [0x10c3e448] */
  EAX = (r32((uint32_t)(0x10c3e448)));
  /* 10c13079 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1307c mov dword ptr [0x10c3e448], eax */
  w32((uint32_t)(0x10c3e448), (EAX));
  /* 10c13081 mov ecx, dword ptr [0x10c3e448] */
  ECX = (r32((uint32_t)(0x10c3e448)));
  /* 10c13087 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1308a mov dword ptr [0x10c3e448], ecx */
  w32((uint32_t)(0x10c3e448), (ECX));
  /* 10c13090 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c13093 mov eax, dword ptr [0x10c3e450] */
  EAX = (r32((uint32_t)(0x10c3e450)));
  /* 10c13098 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1309b mov dword ptr [0x10c3e450], eax */
  w32((uint32_t)(0x10c3e450), (EAX));
  /* 10c130a0 mov ecx, dword ptr [0x10c3e450] */
  ECX = (r32((uint32_t)(0x10c3e450)));
  /* 10c130a6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c130a9 mov dword ptr [0x10c3e450], ecx */
  w32((uint32_t)(0x10c3e450), (ECX));
  /* 10c130af mov edx, dword ptr [0x10c3e450] */
  EDX = (r32((uint32_t)(0x10c3e450)));
  /* 10c130b5 cmp edx, dword ptr [0x10c3e454] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c3e454))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c130bb jbe 0x10c130c7 */
  if ((C.cf||C.zf)) goto L_10c130c7;
  /* 10c130bd mov eax, dword ptr [0x10c3e450] */
  EAX = (r32((uint32_t)(0x10c3e450)));
  /* 10c130c2 mov dword ptr [0x10c3e454], eax */
  w32((uint32_t)(0x10c3e454), (EAX));
L_10c130c7:;
  /* 10c130c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c130ca add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c130cd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c130d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c130d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c130d6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c130d9 jbe 0x10c130ff */
  if ((C.cf||C.zf)) goto L_10c130ff;
  /* 10c130db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c130de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c130e1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c130e4 push edx */
  push32((uint32_t)(EDX));
  /* 10c130e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c130e7 mov al, byte ptr [0x10c3ca92] */
  AL = (r8((uint32_t)(0x10c3ca92)));
  /* 10c130ec push eax */
  push32((uint32_t)(EAX));
  /* 10c130ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c130f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c130f3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c130f6 push edx */
  push32((uint32_t)(EDX));
  /* 10c130f7 call 0x10c16610 */
  push32(0x10c130fcu); f_10c16610();
  /* 10c130fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c130ff:;
  /* 10c130ff push 4 */
  push32((uint32_t)(0x4u));
  /* 10c13101 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c13103 mov al, byte ptr [0x10c3ca90] */
  AL = (r8((uint32_t)(0x10c3ca90)));
  /* 10c13108 push eax */
  push32((uint32_t)(EAX));
  /* 10c13109 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1310c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1310f push ecx */
  push32((uint32_t)(ECX));
  /* 10c13110 call 0x10c16610 */
  push32(0x10c13115u); f_10c16610();
  /* 10c13115 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13118 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1311c jne 0x10c13139 */
  if (!C.zf) goto L_10c13139;
  /* 10c1311e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c13121 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c13124 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c13127 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1312a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1312d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10c13130 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c13133 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c13136 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10c13139:;
  /* 10c13139 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1313c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1313f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10c13142:;
  /* 10c13142 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13146 jne 0x10c13177 */
  if (!C.zf) goto L_10c13177;
  /* 10c13148 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1314c jne 0x10c13156 */
  if (!C.zf) goto L_10c13156;
  /* 10c1314e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c13151 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13154 je 0x10c13177 */
  if (C.zf) goto L_10c13177;
L_10c13156:;
  /* 10c13156 push 0x10c394d0 */
  push32((uint32_t)(0x10c394d0u));
  /* 10c1315b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1315d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10c13162 push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c13167 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c13169 call 0x10c11960 */
  push32(0x10c1316eu); f_10c11960();
  /* 10c1316e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13171 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13174 jne 0x10c13177 */
  if (!C.zf) goto L_10c13177;
  /* 10c13176 int3  */
  x86_unimpl("int3 @ 0x10c13176");
L_10c13177:;
  /* 10c13177 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c13179 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1317b jne 0x10c13142 */
  if (!C.zf) goto L_10c13142;
  /* 10c1317d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c13180 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13183 je 0x10c1318b */
  if (C.zf) goto L_10c1318b;
  /* 10c13185 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13189 je 0x10c13193 */
  if (C.zf) goto L_10c13193;
L_10c1318b:;
  /* 10c1318b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1318e jmp 0x10c1327a */
  goto L_10c1327a;
L_10c13193:;
  /* 10c13193 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c13196 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13199 je 0x10c131ab */
  if (C.zf) goto L_10c131ab;
  /* 10c1319b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1319e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c131a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c131a3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c131a6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c131a9 jmp 0x10c131e7 */
  goto L_10c131e7;
L_10c131ab:;
  /* 10c131ab mov eax, dword ptr [0x10c3e444] */
  EAX = (r32((uint32_t)(0x10c3e444)));
  /* 10c131b0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c131b3 je 0x10c131d6 */
  if (C.zf) goto L_10c131d6;
  /* 10c131b5 push 0x10c394b4 */
  push32((uint32_t)(0x10c394b4u));
  /* 10c131ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10c131bc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10c131c1 push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c131c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c131c8 call 0x10c11960 */
  push32(0x10c131cdu); f_10c11960();
  /* 10c131cd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c131d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c131d3 jne 0x10c131d6 */
  if (!C.zf) goto L_10c131d6;
  /* 10c131d5 int3  */
  x86_unimpl("int3 @ 0x10c131d5");
L_10c131d6:;
  /* 10c131d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c131d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c131da jne 0x10c131ab */
  if (!C.zf) goto L_10c131ab;
  /* 10c131dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c131df mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c131e2 mov dword ptr [0x10c3e444], eax */
  w32((uint32_t)(0x10c3e444), (EAX));
L_10c131e7:;
  /* 10c131e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c131ea cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c131ee je 0x10c131ff */
  if (C.zf) goto L_10c131ff;
  /* 10c131f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c131f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c131f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c131f9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c131fb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c131fd jmp 0x10c1323a */
  goto L_10c1323a;
L_10c131ff:;
  /* 10c131ff mov eax, dword ptr [0x10c3e44c] */
  EAX = (r32((uint32_t)(0x10c3e44c)));
  /* 10c13204 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13207 je 0x10c1322a */
  if (C.zf) goto L_10c1322a;
  /* 10c13209 push 0x10c39498 */
  push32((uint32_t)(0x10c39498u));
  /* 10c1320e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13210 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10c13215 push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c1321a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1321c call 0x10c11960 */
  push32(0x10c13221u); f_10c11960();
  /* 10c13221 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13224 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13227 jne 0x10c1322a */
  if (!C.zf) goto L_10c1322a;
  /* 10c13229 int3  */
  x86_unimpl("int3 @ 0x10c13229");
L_10c1322a:;
  /* 10c1322a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1322c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1322e jne 0x10c131ff */
  if (!C.zf) goto L_10c131ff;
  /* 10c13230 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c13233 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c13235 mov dword ptr [0x10c3e44c], eax */
  w32((uint32_t)(0x10c3e44c), (EAX));
L_10c1323a:;
  /* 10c1323a cmp dword ptr [0x10c3e44c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e44c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13241 je 0x10c13251 */
  if (C.zf) goto L_10c13251;
  /* 10c13243 mov ecx, dword ptr [0x10c3e44c] */
  ECX = (r32((uint32_t)(0x10c3e44c)));
  /* 10c13249 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1324c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10c1324f jmp 0x10c13259 */
  goto L_10c13259;
L_10c13251:;
  /* 10c13251 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c13254 mov dword ptr [0x10c3e444], eax */
  w32((uint32_t)(0x10c3e444), (EAX));
L_10c13259:;
  /* 10c13259 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1325c mov edx, dword ptr [0x10c3e44c] */
  EDX = (r32((uint32_t)(0x10c3e44c)));
  /* 10c13262 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c13264 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c13267 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10c1326e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c13271 mov dword ptr [0x10c3e44c], ecx */
  w32((uint32_t)(0x10c3e44c), (ECX));
  /* 10c13277 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c1327a:;
  /* 10c1327a pop edi */
  EDI = (pop32());
  /* 10c1327b pop esi */
  ESI = (pop32());
  /* 10c1327c pop ebx */
  EBX = (pop32());
  /* 10c1327d mov esp, ebp */
  ESP = (EBP);
  /* 10c1327f pop ebp */
  EBP = (pop32());
  /* 10c13280 ret  */
  ESPCHK(0x10c12d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003290 @ 0x10c13290 (27 bytes, 13 insns) */
void f_10c13290(void) {
  FTRACE(0x10c13290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c13290 push ebp */
  push32((uint32_t)(EBP));
  /* 10c13291 mov ebp, esp */
  EBP = (ESP);
  /* 10c13293 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13295 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13297 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c13299 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1329c push eax */
  push32((uint32_t)(EAX));
  /* 10c1329d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c132a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c132a1 call 0x10c132b0 */
  push32(0x10c132a6u); f_10c132b0();
  /* 10c132a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c132a9 pop ebp */
  EBP = (pop32());
  /* 10c132aa ret  */
  ESPCHK(0x10c13290u, _esp0);
  ESP += 4; return;
}

/* FUN_100032b0 @ 0x10c132b0 (64 bytes, 27 insns) */
void f_10c132b0(void) {
  FTRACE(0x10c132b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c132b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c132b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c132b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c132b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c132b6 call 0x10c162a0 */
  push32(0x10c132bbu); f_10c162a0();
  /* 10c132bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c132be push 0 */
  push32((uint32_t)(0x0u));
  /* 10c132c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c132c3 push eax */
  push32((uint32_t)(EAX));
  /* 10c132c4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c132c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c132c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c132cb push edx */
  push32((uint32_t)(EDX));
  /* 10c132cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c132cf push eax */
  push32((uint32_t)(EAX));
  /* 10c132d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c132d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c132d4 call 0x10c12d70 */
  push32(0x10c132d9u); f_10c12d70();
  /* 10c132d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c132dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c132df push 9 */
  push32((uint32_t)(0x9u));
  /* 10c132e1 call 0x10c16340 */
  push32(0x10c132e6u); f_10c16340();
  /* 10c132e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c132e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c132ec mov esp, ebp */
  ESP = (EBP);
  /* 10c132ee pop ebp */
  EBP = (pop32());
  /* 10c132ef ret  */
  ESPCHK(0x10c132b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032f0 @ 0x10c132f0 (19 bytes, 9 insns) */
void f_10c132f0(void) {
  FTRACE(0x10c132f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c132f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c132f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c132f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c132f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c132f8 push eax */
  push32((uint32_t)(EAX));
  /* 10c132f9 call 0x10c13330 */
  push32(0x10c132feu); f_10c13330();
  /* 10c132fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13301 pop ebp */
  EBP = (pop32());
  /* 10c13302 ret  */
  ESPCHK(0x10c132f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003310 @ 0x10c13310 (19 bytes, 9 insns) */
void f_10c13310(void) {
  FTRACE(0x10c13310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c13310 push ebp */
  push32((uint32_t)(EBP));
  /* 10c13311 mov ebp, esp */
  EBP = (ESP);
  /* 10c13313 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c13315 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c13318 push eax */
  push32((uint32_t)(EAX));
  /* 10c13319 call 0x10c13360 */
  push32(0x10c1331eu); f_10c13360();
  /* 10c1331e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13321 pop ebp */
  EBP = (pop32());
  /* 10c13322 ret  */
  ESPCHK(0x10c13310u, _esp0);
  ESP += 4; return;
}

/* FUN_10003330 @ 0x10c13330 (41 bytes, 16 insns) */
void f_10c13330(void) {
  FTRACE(0x10c13330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c13330 push ebp */
  push32((uint32_t)(EBP));
  /* 10c13331 mov ebp, esp */
  EBP = (ESP);
  /* 10c13333 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c13335 call 0x10c162a0 */
  push32(0x10c1333au); f_10c162a0();
  /* 10c1333a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1333d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c13340 push eax */
  push32((uint32_t)(EAX));
  /* 10c13341 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c13344 push ecx */
  push32((uint32_t)(ECX));
  /* 10c13345 call 0x10c13360 */
  push32(0x10c1334au); f_10c13360();
  /* 10c1334a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1334d push 9 */
  push32((uint32_t)(0x9u));
  /* 10c1334f call 0x10c16340 */
  push32(0x10c13354u); f_10c16340();
  /* 10c13354 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13357 pop ebp */
  EBP = (pop32());
  /* 10c13358 ret  */
  ESPCHK(0x10c13330u, _esp0);
  ESP += 4; return;
}

/* FUN_10003360 @ 0x10c13360 (1004 bytes, 342 insns) */
void f_10c13360(void) {
  FTRACE(0x10c13360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c13360 push ebp */
  push32((uint32_t)(EBP));
  /* 10c13361 mov ebp, esp */
  EBP = (ESP);
  /* 10c13363 push ecx */
  push32((uint32_t)(ECX));
  /* 10c13364 push ebx */
  push32((uint32_t)(EBX));
  /* 10c13365 push esi */
  push32((uint32_t)(ESI));
  /* 10c13366 push edi */
  push32((uint32_t)(EDI));
  /* 10c13367 mov eax, dword ptr [0x10c3ca84] */
  EAX = (r32((uint32_t)(0x10c3ca84)));
  /* 10c1336c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1336f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c13371 je 0x10c133a3 */
  if (C.zf) goto L_10c133a3;
L_10c13373:;
  /* 10c13373 call 0x10c13a40 */
  push32(0x10c13378u); f_10c13a40();
  /* 10c13378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1337a jne 0x10c1339d */
  if (!C.zf) goto L_10c1339d;
  /* 10c1337c push 0x10c39484 */
  push32((uint32_t)(0x10c39484u));
  /* 10c13381 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13383 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10c13388 push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c1338d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1338f call 0x10c11960 */
  push32(0x10c13394u); f_10c11960();
  /* 10c13394 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13397 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1339a jne 0x10c1339d */
  if (!C.zf) goto L_10c1339d;
  /* 10c1339c int3  */
  x86_unimpl("int3 @ 0x10c1339c");
L_10c1339d:;
  /* 10c1339d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1339f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c133a1 jne 0x10c13373 */
  if (!C.zf) goto L_10c13373;
L_10c133a3:;
  /* 10c133a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c133a7 jne 0x10c133ae */
  if (!C.zf) goto L_10c133ae;
  /* 10c133a9 jmp 0x10c13745 */
  goto L_10c13745;
L_10c133ae:;
  /* 10c133ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10c133b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c133b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c133b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c133b7 push edx */
  push32((uint32_t)(EDX));
  /* 10c133b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c133ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c133bd push eax */
  push32((uint32_t)(EAX));
  /* 10c133be push 3 */
  push32((uint32_t)(0x3u));
  /* 10c133c0 call dword ptr [0x10c3cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3cc90))), 0x10c133c6u);
  /* 10c133c6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c133c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c133cb jne 0x10c133f8 */
  if (!C.zf) goto L_10c133f8;
L_10c133cd:;
  /* 10c133cd push 0x10c39748 */
  push32((uint32_t)(0x10c39748u));
  /* 10c133d2 push 0x10c39418 */
  push32((uint32_t)(0x10c39418u));
  /* 10c133d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c133d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c133db push 0 */
  push32((uint32_t)(0x0u));
  /* 10c133dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10c133df call 0x10c11960 */
  push32(0x10c133e4u); f_10c11960();
  /* 10c133e4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c133e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c133ea jne 0x10c133ed */
  if (!C.zf) goto L_10c133ed;
  /* 10c133ec int3  */
  x86_unimpl("int3 @ 0x10c133ec");
L_10c133ed:;
  /* 10c133ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c133ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c133f1 jne 0x10c133cd */
  if (!C.zf) goto L_10c133cd;
  /* 10c133f3 jmp 0x10c13745 */
  goto L_10c13745;
L_10c133f8:;
  /* 10c133f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c133fb push edx */
  push32((uint32_t)(EDX));
  /* 10c133fc call 0x10c13ea0 */
  push32(0x10c13401u); f_10c13ea0();
  /* 10c13401 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13404 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c13406 jne 0x10c13429 */
  if (!C.zf) goto L_10c13429;
  /* 10c13408 push 0x10c39588 */
  push32((uint32_t)(0x10c39588u));
  /* 10c1340d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1340f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10c13414 push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c13419 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1341b call 0x10c11960 */
  push32(0x10c13420u); f_10c11960();
  /* 10c13420 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13423 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13426 jne 0x10c13429 */
  if (!C.zf) goto L_10c13429;
  /* 10c13428 int3  */
  x86_unimpl("int3 @ 0x10c13428");
L_10c13429:;
  /* 10c13429 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1342b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1342d jne 0x10c133f8 */
  if (!C.zf) goto L_10c133f8;
  /* 10c1342f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c13432 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c13435 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c13438:;
  /* 10c13438 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1343b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c1343e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c13443 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13446 je 0x10c1348b */
  if (C.zf) goto L_10c1348b;
  /* 10c13448 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1344b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1344f je 0x10c1348b */
  if (C.zf) goto L_10c1348b;
  /* 10c13451 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13454 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c13457 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1345c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1345f je 0x10c1348b */
  if (C.zf) goto L_10c1348b;
  /* 10c13461 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13464 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13468 je 0x10c1348b */
  if (C.zf) goto L_10c1348b;
  /* 10c1346a push 0x10c39720 */
  push32((uint32_t)(0x10c39720u));
  /* 10c1346f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13471 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10c13476 push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c1347b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1347d call 0x10c11960 */
  push32(0x10c13482u); f_10c11960();
  /* 10c13482 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13485 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13488 jne 0x10c1348b */
  if (!C.zf) goto L_10c1348b;
  /* 10c1348a int3  */
  x86_unimpl("int3 @ 0x10c1348a");
L_10c1348b:;
  /* 10c1348b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1348d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1348f jne 0x10c13438 */
  if (!C.zf) goto L_10c13438;
  /* 10c13491 mov eax, dword ptr [0x10c3ca84] */
  EAX = (r32((uint32_t)(0x10c3ca84)));
  /* 10c13496 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c13499 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1349b jne 0x10c13566 */
  if (!C.zf) goto L_10c13566;
  /* 10c134a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c134a3 mov cl, byte ptr [0x10c3ca90] */
  CL = (r8((uint32_t)(0x10c3ca90)));
  /* 10c134a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10c134aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c134ad add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c134b0 push edx */
  push32((uint32_t)(EDX));
  /* 10c134b1 call 0x10c139b0 */
  push32(0x10c134b6u); f_10c139b0();
  /* 10c134b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c134b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c134bb jne 0x10c13500 */
  if (!C.zf) goto L_10c13500;
L_10c134bd:;
  /* 10c134bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c134c0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c134c3 push eax */
  push32((uint32_t)(EAX));
  /* 10c134c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c134c7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c134ca push edx */
  push32((uint32_t)(EDX));
  /* 10c134cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c134ce mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c134d1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c134d7 mov edx, dword ptr [ecx*4 + 0x10c3ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c3ca94)));
  /* 10c134de push edx */
  push32((uint32_t)(EDX));
  /* 10c134df push 0x10c396f4 */
  push32((uint32_t)(0x10c396f4u));
  /* 10c134e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c134e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c134e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c134ea push 1 */
  push32((uint32_t)(0x1u));
  /* 10c134ec call 0x10c11960 */
  push32(0x10c134f1u); f_10c11960();
  /* 10c134f1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c134f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c134f7 jne 0x10c134fa */
  if (!C.zf) goto L_10c134fa;
  /* 10c134f9 int3  */
  x86_unimpl("int3 @ 0x10c134f9");
L_10c134fa:;
  /* 10c134fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c134fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c134fe jne 0x10c134bd */
  if (!C.zf) goto L_10c134bd;
L_10c13500:;
  /* 10c13500 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c13502 mov cl, byte ptr [0x10c3ca90] */
  CL = (r8((uint32_t)(0x10c3ca90)));
  /* 10c13508 push ecx */
  push32((uint32_t)(ECX));
  /* 10c13509 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1350c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c1350f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13512 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10c13516 push edx */
  push32((uint32_t)(EDX));
  /* 10c13517 call 0x10c139b0 */
  push32(0x10c1351cu); f_10c139b0();
  /* 10c1351c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1351f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c13521 jne 0x10c13566 */
  if (!C.zf) goto L_10c13566;
L_10c13523:;
  /* 10c13523 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13526 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13529 push eax */
  push32((uint32_t)(EAX));
  /* 10c1352a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1352d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c13530 push edx */
  push32((uint32_t)(EDX));
  /* 10c13531 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13534 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c13537 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1353d mov edx, dword ptr [ecx*4 + 0x10c3ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c3ca94)));
  /* 10c13544 push edx */
  push32((uint32_t)(EDX));
  /* 10c13545 push 0x10c396c8 */
  push32((uint32_t)(0x10c396c8u));
  /* 10c1354a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1354c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1354e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13550 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c13552 call 0x10c11960 */
  push32(0x10c13557u); f_10c11960();
  /* 10c13557 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1355a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1355d jne 0x10c13560 */
  if (!C.zf) goto L_10c13560;
  /* 10c1355f int3  */
  x86_unimpl("int3 @ 0x10c1355f");
L_10c13560:;
  /* 10c13560 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c13562 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c13564 jne 0x10c13523 */
  if (!C.zf) goto L_10c13523;
L_10c13566:;
  /* 10c13566 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13569 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1356d jne 0x10c135db */
  if (!C.zf) goto L_10c135db;
L_10c1356f:;
  /* 10c1356f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13572 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13579 jne 0x10c13584 */
  if (!C.zf) goto L_10c13584;
  /* 10c1357b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1357e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13582 je 0x10c135a5 */
  if (C.zf) goto L_10c135a5;
L_10c13584:;
  /* 10c13584 push 0x10c39688 */
  push32((uint32_t)(0x10c39688u));
  /* 10c13589 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1358b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10c13590 push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c13595 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c13597 call 0x10c11960 */
  push32(0x10c1359cu); f_10c11960();
  /* 10c1359c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1359f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c135a2 jne 0x10c135a5 */
  if (!C.zf) goto L_10c135a5;
  /* 10c135a4 int3  */
  x86_unimpl("int3 @ 0x10c135a4");
L_10c135a5:;
  /* 10c135a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c135a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c135a9 jne 0x10c1356f */
  if (!C.zf) goto L_10c1356f;
  /* 10c135ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c135ae mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c135b1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c135b4 push eax */
  push32((uint32_t)(EAX));
  /* 10c135b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c135b7 mov cl, byte ptr [0x10c3ca91] */
  CL = (r8((uint32_t)(0x10c3ca91)));
  /* 10c135bd push ecx */
  push32((uint32_t)(ECX));
  /* 10c135be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c135c1 push edx */
  push32((uint32_t)(EDX));
  /* 10c135c2 call 0x10c16610 */
  push32(0x10c135c7u); f_10c16610();
  /* 10c135c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c135ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c135cd push eax */
  push32((uint32_t)(EAX));
  /* 10c135ce call 0x10c16a10 */
  push32(0x10c135d3u); f_10c16a10();
  /* 10c135d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c135d6 jmp 0x10c13745 */
  goto L_10c13745;
L_10c135db:;
  /* 10c135db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c135de cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c135e2 jne 0x10c135f1 */
  if (!C.zf) goto L_10c135f1;
  /* 10c135e4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c135e8 jne 0x10c135f1 */
  if (!C.zf) goto L_10c135f1;
  /* 10c135ea mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10c135f1:;
  /* 10c135f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c135f4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c135f7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c135fa je 0x10c1361d */
  if (C.zf) goto L_10c1361d;
  /* 10c135fc push 0x10c39668 */
  push32((uint32_t)(0x10c39668u));
  /* 10c13601 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13603 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10c13608 push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c1360d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1360f call 0x10c11960 */
  push32(0x10c13614u); f_10c11960();
  /* 10c13614 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13617 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1361a jne 0x10c1361d */
  if (!C.zf) goto L_10c1361d;
  /* 10c1361c int3  */
  x86_unimpl("int3 @ 0x10c1361c");
L_10c1361d:;
  /* 10c1361d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1361f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c13621 jne 0x10c135f1 */
  if (!C.zf) goto L_10c135f1;
  /* 10c13623 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13626 mov eax, dword ptr [0x10c3e450] */
  EAX = (r32((uint32_t)(0x10c3e450)));
  /* 10c1362b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1362e mov dword ptr [0x10c3e450], eax */
  w32((uint32_t)(0x10c3e450), (EAX));
  /* 10c13633 mov ecx, dword ptr [0x10c3ca84] */
  ECX = (r32((uint32_t)(0x10c3ca84)));
  /* 10c13639 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1363c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1363e jne 0x10c1371c */
  if (!C.zf) goto L_10c1371c;
  /* 10c13644 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13647 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1364a je 0x10c1365c */
  if (C.zf) goto L_10c1365c;
  /* 10c1364c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1364f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c13651 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13654 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c13657 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10c1365a jmp 0x10c1369a */
  goto L_10c1369a;
L_10c1365c:;
  /* 10c1365c mov ecx, dword ptr [0x10c3e444] */
  ECX = (r32((uint32_t)(0x10c3e444)));
  /* 10c13662 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13665 je 0x10c13688 */
  if (C.zf) goto L_10c13688;
  /* 10c13667 push 0x10c39650 */
  push32((uint32_t)(0x10c39650u));
  /* 10c1366c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1366e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10c13673 push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c13678 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1367a call 0x10c11960 */
  push32(0x10c1367fu); f_10c11960();
  /* 10c1367f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13682 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13685 jne 0x10c13688 */
  if (!C.zf) goto L_10c13688;
  /* 10c13687 int3  */
  x86_unimpl("int3 @ 0x10c13687");
L_10c13688:;
  /* 10c13688 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1368a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1368c jne 0x10c1365c */
  if (!C.zf) goto L_10c1365c;
  /* 10c1368e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13691 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c13694 mov dword ptr [0x10c3e444], ecx */
  w32((uint32_t)(0x10c3e444), (ECX));
L_10c1369a:;
  /* 10c1369a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1369d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c136a1 je 0x10c136b2 */
  if (C.zf) goto L_10c136b2;
  /* 10c136a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c136a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c136a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c136ac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c136ae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c136b0 jmp 0x10c136ef */
  goto L_10c136ef;
L_10c136b2:;
  /* 10c136b2 mov ecx, dword ptr [0x10c3e44c] */
  ECX = (r32((uint32_t)(0x10c3e44c)));
  /* 10c136b8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c136bb je 0x10c136de */
  if (C.zf) goto L_10c136de;
  /* 10c136bd push 0x10c39638 */
  push32((uint32_t)(0x10c39638u));
  /* 10c136c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c136c4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10c136c9 push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c136ce push 2 */
  push32((uint32_t)(0x2u));
  /* 10c136d0 call 0x10c11960 */
  push32(0x10c136d5u); f_10c11960();
  /* 10c136d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c136d8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c136db jne 0x10c136de */
  if (!C.zf) goto L_10c136de;
  /* 10c136dd int3  */
  x86_unimpl("int3 @ 0x10c136dd");
L_10c136de:;
  /* 10c136de xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c136e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c136e2 jne 0x10c136b2 */
  if (!C.zf) goto L_10c136b2;
  /* 10c136e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c136e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c136e9 mov dword ptr [0x10c3e44c], ecx */
  w32((uint32_t)(0x10c3e44c), (ECX));
L_10c136ef:;
  /* 10c136ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c136f2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c136f5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c136f8 push eax */
  push32((uint32_t)(EAX));
  /* 10c136f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c136fb mov cl, byte ptr [0x10c3ca91] */
  CL = (r8((uint32_t)(0x10c3ca91)));
  /* 10c13701 push ecx */
  push32((uint32_t)(ECX));
  /* 10c13702 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13705 push edx */
  push32((uint32_t)(EDX));
  /* 10c13706 call 0x10c16610 */
  push32(0x10c1370bu); f_10c16610();
  /* 10c1370b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1370e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13711 push eax */
  push32((uint32_t)(EAX));
  /* 10c13712 call 0x10c16a10 */
  push32(0x10c13717u); f_10c16a10();
  /* 10c13717 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1371a jmp 0x10c13745 */
  goto L_10c13745;
L_10c1371c:;
  /* 10c1371c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1371f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10c13726 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13729 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c1372c push eax */
  push32((uint32_t)(EAX));
  /* 10c1372d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1372f mov cl, byte ptr [0x10c3ca91] */
  CL = (r8((uint32_t)(0x10c3ca91)));
  /* 10c13735 push ecx */
  push32((uint32_t)(ECX));
  /* 10c13736 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13739 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1373c push edx */
  push32((uint32_t)(EDX));
  /* 10c1373d call 0x10c16610 */
  push32(0x10c13742u); f_10c16610();
  /* 10c13742 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c13745:;
  /* 10c13745 pop edi */
  EDI = (pop32());
  /* 10c13746 pop esi */
  ESI = (pop32());
  /* 10c13747 pop ebx */
  EBX = (pop32());
  /* 10c13748 mov esp, ebp */
  ESP = (EBP);
  /* 10c1374a pop ebp */
  EBP = (pop32());
  /* 10c1374b ret  */
  ESPCHK(0x10c13360u, _esp0);
  ESP += 4; return;
}

/* FUN_10003750 @ 0x10c13750 (19 bytes, 9 insns) */
void f_10c13750(void) {
  FTRACE(0x10c13750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c13750 push ebp */
  push32((uint32_t)(EBP));
  /* 10c13751 mov ebp, esp */
  EBP = (ESP);
  /* 10c13753 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c13755 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c13758 push eax */
  push32((uint32_t)(EAX));
  /* 10c13759 call 0x10c13770 */
  push32(0x10c1375eu); f_10c13770();
  /* 10c1375e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13761 pop ebp */
  EBP = (pop32());
  /* 10c13762 ret  */
  ESPCHK(0x10c13750u, _esp0);
  ESP += 4; return;
}

/* FUN_10003770 @ 0x10c13770 (342 bytes, 119 insns) */
void f_10c13770(void) {
  FTRACE(0x10c13770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c13770 push ebp */
  push32((uint32_t)(EBP));
  /* 10c13771 mov ebp, esp */
  EBP = (ESP);
  /* 10c13773 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c13776 push ebx */
  push32((uint32_t)(EBX));
  /* 10c13777 push esi */
  push32((uint32_t)(ESI));
  /* 10c13778 push edi */
  push32((uint32_t)(EDI));
  /* 10c13779 mov eax, dword ptr [0x10c3ca84] */
  EAX = (r32((uint32_t)(0x10c3ca84)));
  /* 10c1377e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c13781 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c13783 je 0x10c137b5 */
  if (C.zf) goto L_10c137b5;
L_10c13785:;
  /* 10c13785 call 0x10c13a40 */
  push32(0x10c1378au); f_10c13a40();
  /* 10c1378a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1378c jne 0x10c137af */
  if (!C.zf) goto L_10c137af;
  /* 10c1378e push 0x10c39484 */
  push32((uint32_t)(0x10c39484u));
  /* 10c13793 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13795 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10c1379a push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c1379f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c137a1 call 0x10c11960 */
  push32(0x10c137a6u); f_10c11960();
  /* 10c137a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c137a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c137ac jne 0x10c137af */
  if (!C.zf) goto L_10c137af;
  /* 10c137ae int3  */
  x86_unimpl("int3 @ 0x10c137ae");
L_10c137af:;
  /* 10c137af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c137b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c137b3 jne 0x10c13785 */
  if (!C.zf) goto L_10c13785;
L_10c137b5:;
  /* 10c137b5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c137b7 call 0x10c162a0 */
  push32(0x10c137bcu); f_10c162a0();
  /* 10c137bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c137bf:;
  /* 10c137bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c137c2 push edx */
  push32((uint32_t)(EDX));
  /* 10c137c3 call 0x10c13ea0 */
  push32(0x10c137c8u); f_10c13ea0();
  /* 10c137c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c137cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c137cd jne 0x10c137f0 */
  if (!C.zf) goto L_10c137f0;
  /* 10c137cf push 0x10c39588 */
  push32((uint32_t)(0x10c39588u));
  /* 10c137d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c137d6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10c137db push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c137e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c137e2 call 0x10c11960 */
  push32(0x10c137e7u); f_10c11960();
  /* 10c137e7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c137ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c137ed jne 0x10c137f0 */
  if (!C.zf) goto L_10c137f0;
  /* 10c137ef int3  */
  x86_unimpl("int3 @ 0x10c137ef");
L_10c137f0:;
  /* 10c137f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c137f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c137f4 jne 0x10c137bf */
  if (!C.zf) goto L_10c137bf;
  /* 10c137f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c137f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c137fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c137ff:;
  /* 10c137ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13802 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c13805 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1380a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1380d je 0x10c13852 */
  if (C.zf) goto L_10c13852;
  /* 10c1380f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13812 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13816 je 0x10c13852 */
  if (C.zf) goto L_10c13852;
  /* 10c13818 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1381b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c1381e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c13823 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13826 je 0x10c13852 */
  if (C.zf) goto L_10c13852;
  /* 10c13828 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1382b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1382f je 0x10c13852 */
  if (C.zf) goto L_10c13852;
  /* 10c13831 push 0x10c39720 */
  push32((uint32_t)(0x10c39720u));
  /* 10c13836 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13838 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10c1383d push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c13842 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c13844 call 0x10c11960 */
  push32(0x10c13849u); f_10c11960();
  /* 10c13849 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1384c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1384f jne 0x10c13852 */
  if (!C.zf) goto L_10c13852;
  /* 10c13851 int3  */
  x86_unimpl("int3 @ 0x10c13851");
L_10c13852:;
  /* 10c13852 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c13854 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c13856 jne 0x10c137ff */
  if (!C.zf) goto L_10c137ff;
  /* 10c13858 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1385b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1385f jne 0x10c1386e */
  if (!C.zf) goto L_10c1386e;
  /* 10c13861 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13865 jne 0x10c1386e */
  if (!C.zf) goto L_10c1386e;
  /* 10c13867 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10c1386e:;
  /* 10c1386e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13871 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13875 je 0x10c138a9 */
  if (C.zf) goto L_10c138a9;
L_10c13877:;
  /* 10c13877 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1387a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c1387d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13880 je 0x10c138a3 */
  if (C.zf) goto L_10c138a3;
  /* 10c13882 push 0x10c39668 */
  push32((uint32_t)(0x10c39668u));
  /* 10c13887 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13889 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10c1388e push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c13893 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c13895 call 0x10c11960 */
  push32(0x10c1389au); f_10c11960();
  /* 10c1389a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1389d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c138a0 jne 0x10c138a3 */
  if (!C.zf) goto L_10c138a3;
  /* 10c138a2 int3  */
  x86_unimpl("int3 @ 0x10c138a2");
L_10c138a3:;
  /* 10c138a3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c138a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c138a7 jne 0x10c13877 */
  if (!C.zf) goto L_10c13877;
L_10c138a9:;
  /* 10c138a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c138ac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c138af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c138b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c138b4 call 0x10c16340 */
  push32(0x10c138b9u); f_10c16340();
  /* 10c138b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c138bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c138bf pop edi */
  EDI = (pop32());
  /* 10c138c0 pop esi */
  ESI = (pop32());
  /* 10c138c1 pop ebx */
  EBX = (pop32());
  /* 10c138c2 mov esp, ebp */
  ESP = (EBP);
  /* 10c138c4 pop ebp */
  EBP = (pop32());
  /* 10c138c5 ret  */
  ESPCHK(0x10c13770u, _esp0);
  ESP += 4; return;
}

/* FUN_100038d0 @ 0x10c138d0 (28 bytes, 11 insns) */
void f_10c138d0(void) {
  FTRACE(0x10c138d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c138d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c138d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c138d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c138d4 mov eax, dword ptr [0x10c3ca8c] */
  EAX = (r32((uint32_t)(0x10c3ca8c)));
  /* 10c138d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c138dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c138df mov dword ptr [0x10c3ca8c], ecx */
  w32((uint32_t)(0x10c3ca8c), (ECX));
  /* 10c138e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c138e8 mov esp, ebp */
  ESP = (EBP);
  /* 10c138ea pop ebp */
  EBP = (pop32());
  /* 10c138eb ret  */
  ESPCHK(0x10c138d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100038f0 @ 0x10c138f0 (157 bytes, 59 insns) */
void f_10c138f0(void) {
  FTRACE(0x10c138f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c138f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c138f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c138f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c138f4 push ebx */
  push32((uint32_t)(EBX));
  /* 10c138f5 push esi */
  push32((uint32_t)(ESI));
  /* 10c138f6 push edi */
  push32((uint32_t)(EDI));
  /* 10c138f7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c138f9 call 0x10c162a0 */
  push32(0x10c138feu); f_10c162a0();
  /* 10c138fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13901 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c13904 push eax */
  push32((uint32_t)(EAX));
  /* 10c13905 call 0x10c13ea0 */
  push32(0x10c1390au); f_10c13ea0();
  /* 10c1390a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1390d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1390f je 0x10c1397c */
  if (C.zf) goto L_10c1397c;
  /* 10c13911 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c13914 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c13917 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c1391a:;
  /* 10c1391a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1391d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c13920 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c13925 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13928 je 0x10c1396d */
  if (C.zf) goto L_10c1396d;
  /* 10c1392a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1392d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13931 je 0x10c1396d */
  if (C.zf) goto L_10c1396d;
  /* 10c13933 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13936 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c13939 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1393e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13941 je 0x10c1396d */
  if (C.zf) goto L_10c1396d;
  /* 10c13943 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13946 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1394a je 0x10c1396d */
  if (C.zf) goto L_10c1396d;
  /* 10c1394c push 0x10c39720 */
  push32((uint32_t)(0x10c39720u));
  /* 10c13951 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13953 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10c13958 push 0x10c39478 */
  push32((uint32_t)(0x10c39478u));
  /* 10c1395d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1395f call 0x10c11960 */
  push32(0x10c13964u); f_10c11960();
  /* 10c13964 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13967 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1396a jne 0x10c1396d */
  if (!C.zf) goto L_10c1396d;
  /* 10c1396c int3  */
  x86_unimpl("int3 @ 0x10c1396c");
L_10c1396d:;
  /* 10c1396d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1396f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c13971 jne 0x10c1391a */
  if (!C.zf) goto L_10c1391a;
  /* 10c13973 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13976 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c13979 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10c1397c:;
  /* 10c1397c push 9 */
  push32((uint32_t)(0x9u));
  /* 10c1397e call 0x10c16340 */
  push32(0x10c13983u); f_10c16340();
  /* 10c13983 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13986 pop edi */
  EDI = (pop32());
  /* 10c13987 pop esi */
  ESI = (pop32());
  /* 10c13988 pop ebx */
  EBX = (pop32());
  /* 10c13989 mov esp, ebp */
  ESP = (EBP);
  /* 10c1398b pop ebp */
  EBP = (pop32());
  /* 10c1398c ret  */
  ESPCHK(0x10c138f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003990 @ 0x10c13990 (28 bytes, 11 insns) */
void f_10c13990(void) {
  FTRACE(0x10c13990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c13990 push ebp */
  push32((uint32_t)(EBP));
  /* 10c13991 mov ebp, esp */
  EBP = (ESP);
  /* 10c13993 push ecx */
  push32((uint32_t)(ECX));
  /* 10c13994 mov eax, dword ptr [0x10c3cc90] */
  EAX = (r32((uint32_t)(0x10c3cc90)));
  /* 10c13999 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1399c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1399f mov dword ptr [0x10c3cc90], ecx */
  w32((uint32_t)(0x10c3cc90), (ECX));
  /* 10c139a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c139a8 mov esp, ebp */
  ESP = (EBP);
  /* 10c139aa pop ebp */
  EBP = (pop32());
  /* 10c139ab ret  */
  ESPCHK(0x10c13990u, _esp0);
  ESP += 4; return;
}

/* FUN_100039b0 @ 0x10c139b0 (136 bytes, 55 insns) */
void f_10c139b0(void) {
  FTRACE(0x10c139b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c139b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c139b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c139b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c139b4 push ebx */
  push32((uint32_t)(EBX));
  /* 10c139b5 push esi */
  push32((uint32_t)(ESI));
  /* 10c139b6 push edi */
  push32((uint32_t)(EDI));
  /* 10c139b7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10c139be:;
  /* 10c139be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c139c1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c139c4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c139c7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10c139ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c139cc je 0x10c13a2e */
  if (C.zf) goto L_10c13a2e;
  /* 10c139ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c139d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c139d3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c139d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c139d8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c139de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c139e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c139e4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10c139e7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c139e9 je 0x10c13a2c */
  if (C.zf) goto L_10c13a2c;
L_10c139eb:;
  /* 10c139eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c139ee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c139f3 push eax */
  push32((uint32_t)(EAX));
  /* 10c139f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c139f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c139f9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10c139fc push edx */
  push32((uint32_t)(EDX));
  /* 10c139fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c13a00 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c13a03 push eax */
  push32((uint32_t)(EAX));
  /* 10c13a04 push 0x10c39764 */
  push32((uint32_t)(0x10c39764u));
  /* 10c13a09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13a0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13a0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13a11 call 0x10c11960 */
  push32(0x10c13a16u); f_10c11960();
  /* 10c13a16 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13a19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13a1c jne 0x10c13a1f */
  if (!C.zf) goto L_10c13a1f;
  /* 10c13a1e int3  */
  x86_unimpl("int3 @ 0x10c13a1e");
L_10c13a1f:;
  /* 10c13a1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c13a21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c13a23 jne 0x10c139eb */
  if (!C.zf) goto L_10c139eb;
  /* 10c13a25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c13a2c:;
  /* 10c13a2c jmp 0x10c139be */
  goto L_10c139be;
L_10c13a2e:;
  /* 10c13a2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13a31 pop edi */
  EDI = (pop32());
  /* 10c13a32 pop esi */
  ESI = (pop32());
  /* 10c13a33 pop ebx */
  EBX = (pop32());
  /* 10c13a34 mov esp, ebp */
  ESP = (EBP);
  /* 10c13a36 pop ebp */
  EBP = (pop32());
  /* 10c13a37 ret  */
  ESPCHK(0x10c139b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a40 @ 0x10c13a40 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10c13a40(void) {
  FTRACE(0x10c13a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c13a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10c13a41 mov ebp, esp */
  EBP = (ESP);
  /* 10c13a43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c13a46 push ebx */
  push32((uint32_t)(EBX));
  /* 10c13a47 push esi */
  push32((uint32_t)(ESI));
  /* 10c13a48 push edi */
  push32((uint32_t)(EDI));
  /* 10c13a49 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c13a50 mov eax, dword ptr [0x10c3ca84] */
  EAX = (r32((uint32_t)(0x10c3ca84)));
  /* 10c13a55 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10c13a58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c13a5a jne 0x10c13a66 */
  if (!C.zf) goto L_10c13a66;
  /* 10c13a5c mov eax, 1 */
  EAX = (0x1u);
  /* 10c13a61 jmp 0x10c13d98 */
  goto L_10c13d98;
L_10c13a66:;
  /* 10c13a66 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c13a68 call 0x10c162a0 */
  push32(0x10c13a6du); f_10c162a0();
  /* 10c13a6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13a70 call 0x10c16a80 */
  push32(0x10c13a75u); f_10c16a80();
  /* 10c13a75 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c13a78 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13a7c je 0x10c13b89 */
  if (C.zf) goto L_10c13b89;
  /* 10c13a82 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13a86 je 0x10c13b89 */
  if (C.zf) goto L_10c13b89;
  /* 10c13a8c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c13a8f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c13a92 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c13a95 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13a98 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c13a9b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13a9f ja 0x10c13b52 */
  if ((!C.cf&&!C.zf)) goto L_10c13b52;
  /* 10c13aa5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c13aa8 jmp dword ptr [eax*4 + 0x10c13d9f] */
  switch (EAX) {
    case 0: goto L_10c13b2a;
    case 1: goto L_10c13b02;
    case 2: goto L_10c13ada;
    case 3: goto L_10c13aaf;
    default: x86_unimpl("switch@0x10c13aa8 out of table"); return;
  }
L_10c13aaf:;
  /* 10c13aaf push 0x10c398b8 */
  push32((uint32_t)(0x10c398b8u));
  /* 10c13ab4 push 0x10c39418 */
  push32((uint32_t)(0x10c39418u));
  /* 10c13ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13abb push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13abd push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13abf push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13ac1 call 0x10c11960 */
  push32(0x10c13ac6u); f_10c11960();
  /* 10c13ac6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13ac9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13acc jne 0x10c13acf */
  if (!C.zf) goto L_10c13acf;
  /* 10c13ace int3  */
  x86_unimpl("int3 @ 0x10c13ace");
L_10c13acf:;
  /* 10c13acf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c13ad1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c13ad3 jne 0x10c13aaf */
  if (!C.zf) goto L_10c13aaf;
  /* 10c13ad5 jmp 0x10c13b78 */
  goto L_10c13b78;
L_10c13ada:;
  /* 10c13ada push 0x10c39894 */
  push32((uint32_t)(0x10c39894u));
  /* 10c13adf push 0x10c39418 */
  push32((uint32_t)(0x10c39418u));
  /* 10c13ae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13ae8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13aea push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13aec call 0x10c11960 */
  push32(0x10c13af1u); f_10c11960();
  /* 10c13af1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13af4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13af7 jne 0x10c13afa */
  if (!C.zf) goto L_10c13afa;
  /* 10c13af9 int3  */
  x86_unimpl("int3 @ 0x10c13af9");
L_10c13afa:;
  /* 10c13afa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c13afc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c13afe jne 0x10c13ada */
  if (!C.zf) goto L_10c13ada;
  /* 10c13b00 jmp 0x10c13b78 */
  goto L_10c13b78;
L_10c13b02:;
  /* 10c13b02 push 0x10c39870 */
  push32((uint32_t)(0x10c39870u));
  /* 10c13b07 push 0x10c39418 */
  push32((uint32_t)(0x10c39418u));
  /* 10c13b0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13b0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13b10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13b14 call 0x10c11960 */
  push32(0x10c13b19u); f_10c11960();
  /* 10c13b19 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13b1c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13b1f jne 0x10c13b22 */
  if (!C.zf) goto L_10c13b22;
  /* 10c13b21 int3  */
  x86_unimpl("int3 @ 0x10c13b21");
L_10c13b22:;
  /* 10c13b22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c13b24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c13b26 jne 0x10c13b02 */
  if (!C.zf) goto L_10c13b02;
  /* 10c13b28 jmp 0x10c13b78 */
  goto L_10c13b78;
L_10c13b2a:;
  /* 10c13b2a push 0x10c3984c */
  push32((uint32_t)(0x10c3984cu));
  /* 10c13b2f push 0x10c39418 */
  push32((uint32_t)(0x10c39418u));
  /* 10c13b34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13b36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13b38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13b3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13b3c call 0x10c11960 */
  push32(0x10c13b41u); f_10c11960();
  /* 10c13b41 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13b44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13b47 jne 0x10c13b4a */
  if (!C.zf) goto L_10c13b4a;
  /* 10c13b49 int3  */
  x86_unimpl("int3 @ 0x10c13b49");
L_10c13b4a:;
  /* 10c13b4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c13b4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c13b4e jne 0x10c13b2a */
  if (!C.zf) goto L_10c13b2a;
  /* 10c13b50 jmp 0x10c13b78 */
  goto L_10c13b78;
L_10c13b52:;
  /* 10c13b52 push 0x10c39820 */
  push32((uint32_t)(0x10c39820u));
  /* 10c13b57 push 0x10c39418 */
  push32((uint32_t)(0x10c39418u));
  /* 10c13b5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13b5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13b60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13b62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13b64 call 0x10c11960 */
  push32(0x10c13b69u); f_10c11960();
  /* 10c13b69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13b6c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13b6f jne 0x10c13b72 */
  if (!C.zf) goto L_10c13b72;
  /* 10c13b71 int3  */
  x86_unimpl("int3 @ 0x10c13b71");
L_10c13b72:;
  /* 10c13b72 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c13b74 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c13b76 jne 0x10c13b52 */
  if (!C.zf) goto L_10c13b52;
L_10c13b78:;
  /* 10c13b78 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c13b7a call 0x10c16340 */
  push32(0x10c13b7fu); f_10c16340();
  /* 10c13b7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13b82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c13b84 jmp 0x10c13d98 */
  goto L_10c13d98;
L_10c13b89:;
  /* 10c13b89 mov eax, dword ptr [0x10c3e44c] */
  EAX = (r32((uint32_t)(0x10c3e44c)));
  /* 10c13b8e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c13b91 jmp 0x10c13b9b */
  goto L_10c13b9b;
L_10c13b93:;
  /* 10c13b93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13b96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c13b98 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c13b9b:;
  /* 10c13b9b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13b9f je 0x10c13d8b */
  if (C.zf) goto L_10c13d8b;
  /* 10c13ba5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10c13bac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13baf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c13bb2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c13bb8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13bbb je 0x10c13be0 */
  if (C.zf) goto L_10c13be0;
  /* 10c13bbd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13bc0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13bc4 je 0x10c13be0 */
  if (C.zf) goto L_10c13be0;
  /* 10c13bc6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13bc9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c13bcc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c13bd2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13bd5 je 0x10c13be0 */
  if (C.zf) goto L_10c13be0;
  /* 10c13bd7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13bda cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13bde jne 0x10c13bf8 */
  if (!C.zf) goto L_10c13bf8;
L_10c13be0:;
  /* 10c13be0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13be3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c13be6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c13bec mov edx, dword ptr [ecx*4 + 0x10c3ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c3ca94)));
  /* 10c13bf3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c13bf6 jmp 0x10c13bff */
  goto L_10c13bff;
L_10c13bf8:;
  /* 10c13bf8 mov dword ptr [ebp - 0x14], 0x10c39818 */
  w32((uint32_t)(EBP + -0x14), (0x10c39818u));
L_10c13bff:;
  /* 10c13bff push 4 */
  push32((uint32_t)(0x4u));
  /* 10c13c01 mov al, byte ptr [0x10c3ca90] */
  AL = (r8((uint32_t)(0x10c3ca90)));
  /* 10c13c06 push eax */
  push32((uint32_t)(EAX));
  /* 10c13c07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13c0a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13c0d push ecx */
  push32((uint32_t)(ECX));
  /* 10c13c0e call 0x10c139b0 */
  push32(0x10c13c13u); f_10c139b0();
  /* 10c13c13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13c16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c13c18 jne 0x10c13c54 */
  if (!C.zf) goto L_10c13c54;
L_10c13c1a:;
  /* 10c13c1a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13c1d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13c20 push edx */
  push32((uint32_t)(EDX));
  /* 10c13c21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13c24 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10c13c27 push ecx */
  push32((uint32_t)(ECX));
  /* 10c13c28 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c13c2b push edx */
  push32((uint32_t)(EDX));
  /* 10c13c2c push 0x10c396f4 */
  push32((uint32_t)(0x10c396f4u));
  /* 10c13c31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13c39 call 0x10c11960 */
  push32(0x10c13c3eu); f_10c11960();
  /* 10c13c3e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13c41 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13c44 jne 0x10c13c47 */
  if (!C.zf) goto L_10c13c47;
  /* 10c13c46 int3  */
  x86_unimpl("int3 @ 0x10c13c46");
L_10c13c47:;
  /* 10c13c47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c13c49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c13c4b jne 0x10c13c1a */
  if (!C.zf) goto L_10c13c1a;
  /* 10c13c4d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10c13c54:;
  /* 10c13c54 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c13c56 mov cl, byte ptr [0x10c3ca90] */
  CL = (r8((uint32_t)(0x10c3ca90)));
  /* 10c13c5c push ecx */
  push32((uint32_t)(ECX));
  /* 10c13c5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13c60 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c13c63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13c66 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10c13c6a push edx */
  push32((uint32_t)(EDX));
  /* 10c13c6b call 0x10c139b0 */
  push32(0x10c13c70u); f_10c139b0();
  /* 10c13c70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13c73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c13c75 jne 0x10c13cb1 */
  if (!C.zf) goto L_10c13cb1;
L_10c13c77:;
  /* 10c13c77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13c7a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13c7d push eax */
  push32((uint32_t)(EAX));
  /* 10c13c7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13c81 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c13c84 push edx */
  push32((uint32_t)(EDX));
  /* 10c13c85 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c13c88 push eax */
  push32((uint32_t)(EAX));
  /* 10c13c89 push 0x10c396c8 */
  push32((uint32_t)(0x10c396c8u));
  /* 10c13c8e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13c90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13c92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13c94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13c96 call 0x10c11960 */
  push32(0x10c13c9bu); f_10c11960();
  /* 10c13c9b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13c9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13ca1 jne 0x10c13ca4 */
  if (!C.zf) goto L_10c13ca4;
  /* 10c13ca3 int3  */
  x86_unimpl("int3 @ 0x10c13ca3");
L_10c13ca4:;
  /* 10c13ca4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c13ca6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c13ca8 jne 0x10c13c77 */
  if (!C.zf) goto L_10c13c77;
  /* 10c13caa mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10c13cb1:;
  /* 10c13cb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13cb4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13cb8 jne 0x10c13d0a */
  if (!C.zf) goto L_10c13d0a;
  /* 10c13cba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13cbd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c13cc0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c13cc1 mov dl, byte ptr [0x10c3ca91] */
  DL = (r8((uint32_t)(0x10c3ca91)));
  /* 10c13cc7 push edx */
  push32((uint32_t)(EDX));
  /* 10c13cc8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13ccb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13cce push eax */
  push32((uint32_t)(EAX));
  /* 10c13ccf call 0x10c139b0 */
  push32(0x10c13cd4u); f_10c139b0();
  /* 10c13cd4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13cd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c13cd9 jne 0x10c13d0a */
  if (!C.zf) goto L_10c13d0a;
L_10c13cdb:;
  /* 10c13cdb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13cde add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13ce1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c13ce2 push 0x10c397ec */
  push32((uint32_t)(0x10c397ecu));
  /* 10c13ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13ce9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13ceb push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13ced push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13cef call 0x10c11960 */
  push32(0x10c13cf4u); f_10c11960();
  /* 10c13cf4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13cf7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13cfa jne 0x10c13cfd */
  if (!C.zf) goto L_10c13cfd;
  /* 10c13cfc int3  */
  x86_unimpl("int3 @ 0x10c13cfc");
L_10c13cfd:;
  /* 10c13cfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c13cff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c13d01 jne 0x10c13cdb */
  if (!C.zf) goto L_10c13cdb;
  /* 10c13d03 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10c13d0a:;
  /* 10c13d0a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13d0e jne 0x10c13d86 */
  if (!C.zf) goto L_10c13d86;
  /* 10c13d10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13d13 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13d17 je 0x10c13d4c */
  if (C.zf) goto L_10c13d4c;
L_10c13d19:;
  /* 10c13d19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13d1c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c13d1f push edx */
  push32((uint32_t)(EDX));
  /* 10c13d20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13d23 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c13d26 push ecx */
  push32((uint32_t)(ECX));
  /* 10c13d27 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c13d2a push edx */
  push32((uint32_t)(EDX));
  /* 10c13d2b push 0x10c397cc */
  push32((uint32_t)(0x10c397ccu));
  /* 10c13d30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13d36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13d38 call 0x10c11960 */
  push32(0x10c13d3du); f_10c11960();
  /* 10c13d3d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13d40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13d43 jne 0x10c13d46 */
  if (!C.zf) goto L_10c13d46;
  /* 10c13d45 int3  */
  x86_unimpl("int3 @ 0x10c13d45");
L_10c13d46:;
  /* 10c13d46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c13d48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c13d4a jne 0x10c13d19 */
  if (!C.zf) goto L_10c13d19;
L_10c13d4c:;
  /* 10c13d4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13d4f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c13d52 push edx */
  push32((uint32_t)(EDX));
  /* 10c13d53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c13d56 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13d59 push eax */
  push32((uint32_t)(EAX));
  /* 10c13d5a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c13d5d push ecx */
  push32((uint32_t)(ECX));
  /* 10c13d5e push 0x10c397a0 */
  push32((uint32_t)(0x10c397a0u));
  /* 10c13d63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13d65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13d6b call 0x10c11960 */
  push32(0x10c13d70u); f_10c11960();
  /* 10c13d70 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13d73 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13d76 jne 0x10c13d79 */
  if (!C.zf) goto L_10c13d79;
  /* 10c13d78 int3  */
  x86_unimpl("int3 @ 0x10c13d78");
L_10c13d79:;
  /* 10c13d79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c13d7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c13d7d jne 0x10c13d4c */
  if (!C.zf) goto L_10c13d4c;
  /* 10c13d7f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c13d86:;
  /* 10c13d86 jmp 0x10c13b93 */
  goto L_10c13b93;
L_10c13d8b:;
  /* 10c13d8b push 9 */
  push32((uint32_t)(0x9u));
  /* 10c13d8d call 0x10c16340 */
  push32(0x10c13d92u); f_10c16340();
  /* 10c13d92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13d95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c13d98:;
  /* 10c13d98 pop edi */
  EDI = (pop32());
  /* 10c13d99 pop esi */
  ESI = (pop32());
  /* 10c13d9a pop ebx */
  EBX = (pop32());
  /* 10c13d9b mov esp, ebp */
  ESP = (EBP);
  /* 10c13d9d pop ebp */
  EBP = (pop32());
  /* 10c13d9e ret  */
  ESPCHK(0x10c13a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003db0 @ 0x10c13db0 (34 bytes, 13 insns) */
void f_10c13db0(void) {
  FTRACE(0x10c13db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c13db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c13db1 mov ebp, esp */
  EBP = (ESP);
  /* 10c13db3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c13db4 mov eax, dword ptr [0x10c3ca84] */
  EAX = (r32((uint32_t)(0x10c3ca84)));
  /* 10c13db9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c13dbc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13dc0 je 0x10c13dcb */
  if (C.zf) goto L_10c13dcb;
  /* 10c13dc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c13dc5 mov dword ptr [0x10c3ca84], ecx */
  w32((uint32_t)(0x10c3ca84), (ECX));
L_10c13dcb:;
  /* 10c13dcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13dce mov esp, ebp */
  ESP = (EBP);
  /* 10c13dd0 pop ebp */
  EBP = (pop32());
  /* 10c13dd1 ret  */
  ESPCHK(0x10c13db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003de0 @ 0x10c13de0 (103 bytes, 38 insns) */
void f_10c13de0(void) {
  FTRACE(0x10c13de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c13de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c13de1 mov ebp, esp */
  EBP = (ESP);
  /* 10c13de3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c13de4 mov eax, dword ptr [0x10c3ca84] */
  EAX = (r32((uint32_t)(0x10c3ca84)));
  /* 10c13de9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10c13dec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c13dee jne 0x10c13df2 */
  if (!C.zf) goto L_10c13df2;
  /* 10c13df0 jmp 0x10c13e43 */
  goto L_10c13e43;
L_10c13df2:;
  /* 10c13df2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c13df4 call 0x10c162a0 */
  push32(0x10c13df9u); f_10c162a0();
  /* 10c13df9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13dfc mov ecx, dword ptr [0x10c3e44c] */
  ECX = (r32((uint32_t)(0x10c3e44c)));
  /* 10c13e02 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c13e05 jmp 0x10c13e0f */
  goto L_10c13e0f;
L_10c13e07:;
  /* 10c13e07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13e0a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c13e0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c13e0f:;
  /* 10c13e0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13e13 je 0x10c13e39 */
  if (C.zf) goto L_10c13e39;
  /* 10c13e15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13e18 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c13e1b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c13e21 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13e24 jne 0x10c13e37 */
  if (!C.zf) goto L_10c13e37;
  /* 10c13e26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c13e29 push eax */
  push32((uint32_t)(EAX));
  /* 10c13e2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13e2d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13e30 push ecx */
  push32((uint32_t)(ECX));
  /* 10c13e31 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10c13e34u);
  /* 10c13e34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c13e37:;
  /* 10c13e37 jmp 0x10c13e07 */
  goto L_10c13e07;
L_10c13e39:;
  /* 10c13e39 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c13e3b call 0x10c16340 */
  push32(0x10c13e40u); f_10c16340();
  /* 10c13e40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c13e43:;
  /* 10c13e43 mov esp, ebp */
  ESP = (EBP);
  /* 10c13e45 pop ebp */
  EBP = (pop32());
  /* 10c13e46 ret  */
  ESPCHK(0x10c13de0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10c13e50 (75 bytes, 28 insns) */
void f_10c13e50(void) {
  FTRACE(0x10c13e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c13e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10c13e51 mov ebp, esp */
  EBP = (ESP);
  /* 10c13e53 push ecx */
  push32((uint32_t)(ECX));
  /* 10c13e54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13e58 je 0x10c13e8d */
  if (C.zf) goto L_10c13e8d;
  /* 10c13e5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c13e5d push eax */
  push32((uint32_t)(EAX));
  /* 10c13e5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c13e61 push ecx */
  push32((uint32_t)(ECX));
  /* 10c13e62 call dword ptr [0x10c4028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4028c))), 0x10c13e68u);
  /* 10c13e68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c13e6a jne 0x10c13e8d */
  if (!C.zf) goto L_10c13e8d;
  /* 10c13e6c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13e70 je 0x10c13e84 */
  if (C.zf) goto L_10c13e84;
  /* 10c13e72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c13e75 push edx */
  push32((uint32_t)(EDX));
  /* 10c13e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c13e79 push eax */
  push32((uint32_t)(EAX));
  /* 10c13e7a call dword ptr [0x10c40288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40288))), 0x10c13e80u);
  /* 10c13e80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c13e82 jne 0x10c13e8d */
  if (!C.zf) goto L_10c13e8d;
L_10c13e84:;
  /* 10c13e84 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c13e8b jmp 0x10c13e94 */
  goto L_10c13e94;
L_10c13e8d:;
  /* 10c13e8d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c13e94:;
  /* 10c13e94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13e97 mov esp, ebp */
  ESP = (EBP);
  /* 10c13e99 pop ebp */
  EBP = (pop32());
  /* 10c13e9a ret  */
  ESPCHK(0x10c13e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ea0 @ 0x10c13ea0 (134 bytes, 50 insns) */
void f_10c13ea0(void) {
  FTRACE(0x10c13ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c13ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c13ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10c13ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c13ea4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13ea8 jne 0x10c13eae */
  if (!C.zf) goto L_10c13eae;
  /* 10c13eaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c13eac jmp 0x10c13f22 */
  goto L_10c13f22;
L_10c13eae:;
  /* 10c13eae push 1 */
  push32((uint32_t)(0x1u));
  /* 10c13eb0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10c13eb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c13eb5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c13eb8 push eax */
  push32((uint32_t)(EAX));
  /* 10c13eb9 call 0x10c13e50 */
  push32(0x10c13ebeu); f_10c13e50();
  /* 10c13ebe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13ec1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c13ec3 jne 0x10c13ec9 */
  if (!C.zf) goto L_10c13ec9;
  /* 10c13ec5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c13ec7 jmp 0x10c13f22 */
  goto L_10c13f22;
L_10c13ec9:;
  /* 10c13ec9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c13ecc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c13ecf push ecx */
  push32((uint32_t)(ECX));
  /* 10c13ed0 call 0x10c16ba0 */
  push32(0x10c13ed5u); f_10c16ba0();
  /* 10c13ed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13ed8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c13edb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13edf je 0x10c13ef6 */
  if (C.zf) goto L_10c13ef6;
  /* 10c13ee1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c13ee4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c13ee7 push edx */
  push32((uint32_t)(EDX));
  /* 10c13ee8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13eeb push eax */
  push32((uint32_t)(EAX));
  /* 10c13eec call 0x10c16c00 */
  push32(0x10c13ef1u); f_10c16c00();
  /* 10c13ef1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13ef4 jmp 0x10c13f22 */
  goto L_10c13f22;
L_10c13ef6:;
  /* 10c13ef6 mov ecx, dword ptr [0x10c3e400] */
  ECX = (r32((uint32_t)(0x10c3e400)));
  /* 10c13efc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10c13f02 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c13f04 je 0x10c13f0d */
  if (C.zf) goto L_10c13f0d;
  /* 10c13f06 mov eax, 1 */
  EAX = (0x1u);
  /* 10c13f0b jmp 0x10c13f22 */
  goto L_10c13f22;
L_10c13f0d:;
  /* 10c13f0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c13f10 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c13f13 push edx */
  push32((uint32_t)(EDX));
  /* 10c13f14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c13f16 mov eax, dword ptr [0x10c3fdac] */
  EAX = (r32((uint32_t)(0x10c3fdac)));
  /* 10c13f1b push eax */
  push32((uint32_t)(EAX));
  /* 10c13f1c call dword ptr [0x10c40290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40290))), 0x10c13f22u);
L_10c13f22:;
  /* 10c13f22 mov esp, ebp */
  ESP = (EBP);
  /* 10c13f24 pop ebp */
  EBP = (pop32());
  /* 10c13f25 ret  */
  ESPCHK(0x10c13ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f30 @ 0x10c13f30 (227 bytes, 80 insns) */
void f_10c13f30(void) {
  FTRACE(0x10c13f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c13f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10c13f31 mov ebp, esp */
  EBP = (ESP);
  /* 10c13f33 push ecx */
  push32((uint32_t)(ECX));
  /* 10c13f34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c13f37 push eax */
  push32((uint32_t)(EAX));
  /* 10c13f38 call 0x10c13ea0 */
  push32(0x10c13f3du); f_10c13ea0();
  /* 10c13f3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13f40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c13f42 jne 0x10c13f4b */
  if (!C.zf) goto L_10c13f4b;
  /* 10c13f44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c13f46 jmp 0x10c1400f */
  goto L_10c1400f;
L_10c13f4b:;
  /* 10c13f4b push 9 */
  push32((uint32_t)(0x9u));
  /* 10c13f4d call 0x10c162a0 */
  push32(0x10c13f52u); f_10c162a0();
  /* 10c13f52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13f55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c13f58 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c13f5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c13f5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13f61 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c13f64 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c13f69 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13f6c je 0x10c13f90 */
  if (C.zf) goto L_10c13f90;
  /* 10c13f6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13f71 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13f75 je 0x10c13f90 */
  if (C.zf) goto L_10c13f90;
  /* 10c13f77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13f7a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c13f7d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c13f82 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13f85 je 0x10c13f90 */
  if (C.zf) goto L_10c13f90;
  /* 10c13f87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13f8a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13f8e jne 0x10c14003 */
  if (!C.zf) goto L_10c14003;
L_10c13f90:;
  /* 10c13f90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c13f92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c13f95 push edx */
  push32((uint32_t)(EDX));
  /* 10c13f96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c13f99 push eax */
  push32((uint32_t)(EAX));
  /* 10c13f9a call 0x10c13e50 */
  push32(0x10c13f9fu); f_10c13e50();
  /* 10c13f9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13fa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c13fa4 je 0x10c14003 */
  if (C.zf) goto L_10c14003;
  /* 10c13fa6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13fa9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c13fac cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13faf jne 0x10c14003 */
  if (!C.zf) goto L_10c14003;
  /* 10c13fb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13fb4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10c13fb7 cmp ecx, dword ptr [0x10c3ca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3ca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13fbd jg 0x10c14003 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c14003;
  /* 10c13fbf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13fc3 je 0x10c13fd0 */
  if (C.zf) goto L_10c13fd0;
  /* 10c13fc5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c13fc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13fcb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10c13fce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c13fd0:;
  /* 10c13fd0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13fd4 je 0x10c13fe1 */
  if (C.zf) goto L_10c13fe1;
  /* 10c13fd6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c13fd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13fdc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c13fdf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c13fe1:;
  /* 10c13fe1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c13fe5 je 0x10c13ff2 */
  if (C.zf) goto L_10c13ff2;
  /* 10c13fe7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c13fea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c13fed mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c13ff0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c13ff2:;
  /* 10c13ff2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c13ff4 call 0x10c16340 */
  push32(0x10c13ff9u); f_10c16340();
  /* 10c13ff9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c13ffc mov eax, 1 */
  EAX = (0x1u);
  /* 10c14001 jmp 0x10c1400f */
  goto L_10c1400f;
L_10c14003:;
  /* 10c14003 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c14005 call 0x10c16340 */
  push32(0x10c1400au); f_10c16340();
  /* 10c1400a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1400d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c1400f:;
  /* 10c1400f mov esp, ebp */
  ESP = (EBP);
  /* 10c14011 pop ebp */
  EBP = (pop32());
  /* 10c14012 ret  */
  ESPCHK(0x10c13f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004020 @ 0x10c14020 (28 bytes, 11 insns) */
void f_10c14020(void) {
  FTRACE(0x10c14020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c14020 push ebp */
  push32((uint32_t)(EBP));
  /* 10c14021 mov ebp, esp */
  EBP = (ESP);
  /* 10c14023 push ecx */
  push32((uint32_t)(ECX));
  /* 10c14024 mov eax, dword ptr [0x10c3fdb8] */
  EAX = (r32((uint32_t)(0x10c3fdb8)));
  /* 10c14029 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1402c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1402f mov dword ptr [0x10c3fdb8], ecx */
  w32((uint32_t)(0x10c3fdb8), (ECX));
  /* 10c14035 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14038 mov esp, ebp */
  ESP = (EBP);
  /* 10c1403a pop ebp */
  EBP = (pop32());
  /* 10c1403b ret  */
  ESPCHK(0x10c14020u, _esp0);
  ESP += 4; return;
}

/* FUN_10004040 @ 0x10c14040 (362 bytes, 116 insns) */
void f_10c14040(void) {
  FTRACE(0x10c14040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c14040 push ebp */
  push32((uint32_t)(EBP));
  /* 10c14041 mov ebp, esp */
  EBP = (ESP);
  /* 10c14043 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c14046 push ebx */
  push32((uint32_t)(EBX));
  /* 10c14047 push esi */
  push32((uint32_t)(ESI));
  /* 10c14048 push edi */
  push32((uint32_t)(EDI));
  /* 10c14049 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1404d jne 0x10c1407a */
  if (!C.zf) goto L_10c1407a;
L_10c1404f:;
  /* 10c1404f push 0x10c39900 */
  push32((uint32_t)(0x10c39900u));
  /* 10c14054 push 0x10c39418 */
  push32((uint32_t)(0x10c39418u));
  /* 10c14059 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1405b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1405d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1405f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14061 call 0x10c11960 */
  push32(0x10c14066u); f_10c11960();
  /* 10c14066 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14069 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1406c jne 0x10c1406f */
  if (!C.zf) goto L_10c1406f;
  /* 10c1406e int3  */
  x86_unimpl("int3 @ 0x10c1406e");
L_10c1406f:;
  /* 10c1406f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c14071 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c14073 jne 0x10c1404f */
  if (!C.zf) goto L_10c1404f;
  /* 10c14075 jmp 0x10c141a3 */
  goto L_10c141a3;
L_10c1407a:;
  /* 10c1407a push 9 */
  push32((uint32_t)(0x9u));
  /* 10c1407c call 0x10c162a0 */
  push32(0x10c14081u); f_10c162a0();
  /* 10c14081 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14084 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c14087 mov edx, dword ptr [0x10c3e44c] */
  EDX = (r32((uint32_t)(0x10c3e44c)));
  /* 10c1408d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c1408f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c14096 jmp 0x10c140a1 */
  goto L_10c140a1;
L_10c14098:;
  /* 10c14098 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1409b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1409e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c140a1:;
  /* 10c140a1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c140a5 jge 0x10c140c5 */
  if ((C.sf==C.of)) goto L_10c140c5;
  /* 10c140a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c140aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c140ad mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10c140b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c140b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c140bb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10c140c3 jmp 0x10c14098 */
  goto L_10c14098;
L_10c140c5:;
  /* 10c140c5 mov edx, dword ptr [0x10c3e44c] */
  EDX = (r32((uint32_t)(0x10c3e44c)));
  /* 10c140cb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c140ce jmp 0x10c140d8 */
  goto L_10c140d8;
L_10c140d0:;
  /* 10c140d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c140d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c140d5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c140d8:;
  /* 10c140d8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c140dc je 0x10c14181 */
  if (C.zf) goto L_10c14181;
  /* 10c140e2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c140e5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c140e8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c140ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c140ef jl 0x10c14157 */
  if ((C.sf!=C.of)) goto L_10c14157;
  /* 10c140f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c140f4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c140f7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c140fd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14100 jge 0x10c14157 */
  if ((C.sf==C.of)) goto L_10c14157;
  /* 10c14102 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c14105 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c14108 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c1410e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c14111 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10c14115 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14118 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1411b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c1411e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c14124 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c14127 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10c1412b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1412e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c14131 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c14136 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c14139 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10c1413d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c14140 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14143 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c14146 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c14149 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1414e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c14151 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10c14155 jmp 0x10c1417c */
  goto L_10c1417c;
L_10c14157:;
  /* 10c14157 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1415a push edx */
  push32((uint32_t)(EDX));
  /* 10c1415b push 0x10c398dc */
  push32((uint32_t)(0x10c398dcu));
  /* 10c14160 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14162 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14164 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14166 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14168 call 0x10c11960 */
  push32(0x10c1416du); f_10c11960();
  /* 10c1416d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14170 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14173 jne 0x10c14176 */
  if (!C.zf) goto L_10c14176;
  /* 10c14175 int3  */
  x86_unimpl("int3 @ 0x10c14175");
L_10c14176:;
  /* 10c14176 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c14178 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1417a jne 0x10c14157 */
  if (!C.zf) goto L_10c14157;
L_10c1417c:;
  /* 10c1417c jmp 0x10c140d0 */
  goto L_10c140d0;
L_10c14181:;
  /* 10c14181 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c14184 mov edx, dword ptr [0x10c3e454] */
  EDX = (r32((uint32_t)(0x10c3e454)));
  /* 10c1418a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10c1418d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c14190 mov ecx, dword ptr [0x10c3e448] */
  ECX = (r32((uint32_t)(0x10c3e448)));
  /* 10c14196 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10c14199 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c1419b call 0x10c16340 */
  push32(0x10c141a0u); f_10c16340();
  /* 10c141a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c141a3:;
  /* 10c141a3 pop edi */
  EDI = (pop32());
  /* 10c141a4 pop esi */
  ESI = (pop32());
  /* 10c141a5 pop ebx */
  EBX = (pop32());
  /* 10c141a6 mov esp, ebp */
  ESP = (EBP);
  /* 10c141a8 pop ebp */
  EBP = (pop32());
  /* 10c141a9 ret  */
  ESPCHK(0x10c14040u, _esp0);
  ESP += 4; return;
}

/* FUN_100041b0 @ 0x10c141b0 (291 bytes, 95 insns) */
void f_10c141b0(void) {
  FTRACE(0x10c141b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c141b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c141b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c141b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c141b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c141b7 push esi */
  push32((uint32_t)(ESI));
  /* 10c141b8 push edi */
  push32((uint32_t)(EDI));
  /* 10c141b9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c141c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c141c4 je 0x10c141d2 */
  if (C.zf) goto L_10c141d2;
  /* 10c141c6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c141ca je 0x10c141d2 */
  if (C.zf) goto L_10c141d2;
  /* 10c141cc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c141d0 jne 0x10c14200 */
  if (!C.zf) goto L_10c14200;
L_10c141d2:;
  /* 10c141d2 push 0x10c39928 */
  push32((uint32_t)(0x10c39928u));
  /* 10c141d7 push 0x10c39418 */
  push32((uint32_t)(0x10c39418u));
  /* 10c141dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10c141de push 0 */
  push32((uint32_t)(0x0u));
  /* 10c141e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c141e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c141e4 call 0x10c11960 */
  push32(0x10c141e9u); f_10c11960();
  /* 10c141e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c141ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c141ef jne 0x10c141f2 */
  if (!C.zf) goto L_10c141f2;
  /* 10c141f1 int3  */
  x86_unimpl("int3 @ 0x10c141f1");
L_10c141f2:;
  /* 10c141f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c141f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c141f6 jne 0x10c141d2 */
  if (!C.zf) goto L_10c141d2;
  /* 10c141f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c141fb jmp 0x10c142cc */
  goto L_10c142cc;
L_10c14200:;
  /* 10c14200 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c14207 jmp 0x10c14212 */
  goto L_10c14212;
L_10c14209:;
  /* 10c14209 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1420c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1420f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c14212:;
  /* 10c14212 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14216 jge 0x10c1429c */
  if ((C.sf==C.of)) goto L_10c1429c;
  /* 10c1421c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1421f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14222 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14225 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c14228 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10c1422c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c14230 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14233 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c14236 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10c1423a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1423d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14240 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14243 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c14246 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10c1424a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1424e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14251 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c14254 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10c14258 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1425b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1425e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14263 jne 0x10c14272 */
  if (!C.zf) goto L_10c14272;
  /* 10c14265 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14268 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1426b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14270 je 0x10c14297 */
  if (C.zf) goto L_10c14297;
L_10c14272:;
  /* 10c14272 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14276 je 0x10c14297 */
  if (C.zf) goto L_10c14297;
  /* 10c14278 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1427c jne 0x10c14290 */
  if (!C.zf) goto L_10c14290;
  /* 10c1427e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14282 jne 0x10c14297 */
  if (!C.zf) goto L_10c14297;
  /* 10c14284 mov eax, dword ptr [0x10c3ca84] */
  EAX = (r32((uint32_t)(0x10c3ca84)));
  /* 10c14289 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10c1428c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1428e je 0x10c14297 */
  if (C.zf) goto L_10c14297;
L_10c14290:;
  /* 10c14290 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10c14297:;
  /* 10c14297 jmp 0x10c14209 */
  goto L_10c14209;
L_10c1429c:;
  /* 10c1429c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1429f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c142a2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10c142a5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c142a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c142ab mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10c142ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c142b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c142b4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10c142b7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c142ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c142bd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10c142c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c142c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c142c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c142cc:;
  /* 10c142cc pop edi */
  EDI = (pop32());
  /* 10c142cd pop esi */
  ESI = (pop32());
  /* 10c142ce pop ebx */
  EBX = (pop32());
  /* 10c142cf mov esp, ebp */
  ESP = (EBP);
  /* 10c142d1 pop ebp */
  EBP = (pop32());
  /* 10c142d2 ret  */
  ESPCHK(0x10c141b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042e0 @ 0x10c142e0 (697 bytes, 253 insns) */
void f_10c142e0(void) {
  FTRACE(0x10c142e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c142e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c142e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c142e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c142e6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c142e7 push esi */
  push32((uint32_t)(ESI));
  /* 10c142e8 push edi */
  push32((uint32_t)(EDI));
  /* 10c142e9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c142f0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c142f2 call 0x10c162a0 */
  push32(0x10c142f7u); f_10c162a0();
  /* 10c142f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c142fa:;
  /* 10c142fa push 0x10c39a20 */
  push32((uint32_t)(0x10c39a20u));
  /* 10c142ff push 0x10c39418 */
  push32((uint32_t)(0x10c39418u));
  /* 10c14304 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14306 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14308 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1430a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1430c call 0x10c11960 */
  push32(0x10c14311u); f_10c11960();
  /* 10c14311 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14314 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14317 jne 0x10c1431a */
  if (!C.zf) goto L_10c1431a;
  /* 10c14319 int3  */
  x86_unimpl("int3 @ 0x10c14319");
L_10c1431a:;
  /* 10c1431a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1431c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c1431e jne 0x10c142fa */
  if (!C.zf) goto L_10c142fa;
  /* 10c14320 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14324 je 0x10c1432e */
  if (C.zf) goto L_10c1432e;
  /* 10c14326 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c14329 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c1432b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c1432e:;
  /* 10c1432e mov eax, dword ptr [0x10c3e44c] */
  EAX = (r32((uint32_t)(0x10c3e44c)));
  /* 10c14333 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c14336 jmp 0x10c14340 */
  goto L_10c14340;
L_10c14338:;
  /* 10c14338 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1433b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c1433d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c14340:;
  /* 10c14340 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14344 je 0x10c14562 */
  if (C.zf) goto L_10c14562;
  /* 10c1434a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1434d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14350 je 0x10c14562 */
  if (C.zf) goto L_10c14562;
  /* 10c14356 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14359 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c1435c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c14362 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14365 je 0x10c14394 */
  if (C.zf) goto L_10c14394;
  /* 10c14367 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1436a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c1436d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c14373 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c14375 je 0x10c14394 */
  if (C.zf) goto L_10c14394;
  /* 10c14377 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1437a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c1437d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c14382 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14385 jne 0x10c14399 */
  if (!C.zf) goto L_10c14399;
  /* 10c14387 mov ecx, dword ptr [0x10c3ca84] */
  ECX = (r32((uint32_t)(0x10c3ca84)));
  /* 10c1438d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10c14390 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c14392 jne 0x10c14399 */
  if (!C.zf) goto L_10c14399;
L_10c14394:;
  /* 10c14394 jmp 0x10c1455d */
  goto L_10c1455d;
L_10c14399:;
  /* 10c14399 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1439c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c143a0 je 0x10c14412 */
  if (C.zf) goto L_10c14412;
  /* 10c143a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c143a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c143a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c143a9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c143ac push ecx */
  push32((uint32_t)(ECX));
  /* 10c143ad call 0x10c13e50 */
  push32(0x10c143b2u); f_10c13e50();
  /* 10c143b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c143b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c143b7 jne 0x10c143e3 */
  if (!C.zf) goto L_10c143e3;
L_10c143b9:;
  /* 10c143b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c143bc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c143bf push eax */
  push32((uint32_t)(EAX));
  /* 10c143c0 push 0x10c39a0c */
  push32((uint32_t)(0x10c39a0cu));
  /* 10c143c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c143c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c143c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c143cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10c143cd call 0x10c11960 */
  push32(0x10c143d2u); f_10c11960();
  /* 10c143d2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c143d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c143d8 jne 0x10c143db */
  if (!C.zf) goto L_10c143db;
  /* 10c143da int3  */
  x86_unimpl("int3 @ 0x10c143da");
L_10c143db:;
  /* 10c143db xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c143dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c143df jne 0x10c143b9 */
  if (!C.zf) goto L_10c143b9;
  /* 10c143e1 jmp 0x10c14412 */
  goto L_10c14412;
L_10c143e3:;
  /* 10c143e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c143e6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c143e9 push eax */
  push32((uint32_t)(EAX));
  /* 10c143ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c143ed mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c143f0 push edx */
  push32((uint32_t)(EDX));
  /* 10c143f1 push 0x10c39a00 */
  push32((uint32_t)(0x10c39a00u));
  /* 10c143f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c143f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c143fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10c143fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10c143fe call 0x10c11960 */
  push32(0x10c14403u); f_10c11960();
  /* 10c14403 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14406 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14409 jne 0x10c1440c */
  if (!C.zf) goto L_10c1440c;
  /* 10c1440b int3  */
  x86_unimpl("int3 @ 0x10c1440b");
L_10c1440c:;
  /* 10c1440c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1440e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c14410 jne 0x10c143e3 */
  if (!C.zf) goto L_10c143e3;
L_10c14412:;
  /* 10c14412 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14415 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c14418 push edx */
  push32((uint32_t)(EDX));
  /* 10c14419 push 0x10c399f8 */
  push32((uint32_t)(0x10c399f8u));
  /* 10c1441e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14420 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14422 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14424 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14426 call 0x10c11960 */
  push32(0x10c1442bu); f_10c11960();
  /* 10c1442b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1442e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14431 jne 0x10c14434 */
  if (!C.zf) goto L_10c14434;
  /* 10c14433 int3  */
  x86_unimpl("int3 @ 0x10c14433");
L_10c14434:;
  /* 10c14434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c14436 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c14438 jne 0x10c14412 */
  if (!C.zf) goto L_10c14412;
  /* 10c1443a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1443d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c14440 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c14446 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14449 jne 0x10c144bc */
  if (!C.zf) goto L_10c144bc;
L_10c1444b:;
  /* 10c1444b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1444e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c14451 push ecx */
  push32((uint32_t)(ECX));
  /* 10c14452 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14455 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c14458 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10c1445b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c14460 push eax */
  push32((uint32_t)(EAX));
  /* 10c14461 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14464 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14467 push ecx */
  push32((uint32_t)(ECX));
  /* 10c14468 push 0x10c399c4 */
  push32((uint32_t)(0x10c399c4u));
  /* 10c1446d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1446f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14471 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14473 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14475 call 0x10c11960 */
  push32(0x10c1447au); f_10c11960();
  /* 10c1447a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1447d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14480 jne 0x10c14483 */
  if (!C.zf) goto L_10c14483;
  /* 10c14482 int3  */
  x86_unimpl("int3 @ 0x10c14482");
L_10c14483:;
  /* 10c14483 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c14485 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c14487 jne 0x10c1444b */
  if (!C.zf) goto L_10c1444b;
  /* 10c14489 cmp dword ptr [0x10c3fdb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3fdb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14490 je 0x10c144ab */
  if (C.zf) goto L_10c144ab;
  /* 10c14492 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14495 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c14498 push ecx */
  push32((uint32_t)(ECX));
  /* 10c14499 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1449c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1449f push edx */
  push32((uint32_t)(EDX));
  /* 10c144a0 call dword ptr [0x10c3fdb8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3fdb8))), 0x10c144a6u);
  /* 10c144a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c144a9 jmp 0x10c144b7 */
  goto L_10c144b7;
L_10c144ab:;
  /* 10c144ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c144ae push eax */
  push32((uint32_t)(EAX));
  /* 10c144af call 0x10c145a0 */
  push32(0x10c144b4u); f_10c145a0();
  /* 10c144b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c144b7:;
  /* 10c144b7 jmp 0x10c1455d */
  goto L_10c1455d;
L_10c144bc:;
  /* 10c144bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c144bf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c144c3 jne 0x10c14502 */
  if (!C.zf) goto L_10c14502;
L_10c144c5:;
  /* 10c144c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c144c8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c144cb push eax */
  push32((uint32_t)(EAX));
  /* 10c144cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c144cf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c144d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c144d3 push 0x10c3999c */
  push32((uint32_t)(0x10c3999cu));
  /* 10c144d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c144da push 0 */
  push32((uint32_t)(0x0u));
  /* 10c144dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10c144de push 0 */
  push32((uint32_t)(0x0u));
  /* 10c144e0 call 0x10c11960 */
  push32(0x10c144e5u); f_10c11960();
  /* 10c144e5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c144e8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c144eb jne 0x10c144ee */
  if (!C.zf) goto L_10c144ee;
  /* 10c144ed int3  */
  x86_unimpl("int3 @ 0x10c144ed");
L_10c144ee:;
  /* 10c144ee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c144f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c144f2 jne 0x10c144c5 */
  if (!C.zf) goto L_10c144c5;
  /* 10c144f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c144f7 push eax */
  push32((uint32_t)(EAX));
  /* 10c144f8 call 0x10c145a0 */
  push32(0x10c144fdu); f_10c145a0();
  /* 10c144fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14500 jmp 0x10c1455d */
  goto L_10c1455d;
L_10c14502:;
  /* 10c14502 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14505 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c14508 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1450e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14511 jne 0x10c1455d */
  if (!C.zf) goto L_10c1455d;
L_10c14513:;
  /* 10c14513 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14516 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c14519 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1451a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1451d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c14520 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10c14523 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c14528 push eax */
  push32((uint32_t)(EAX));
  /* 10c14529 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1452c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1452f push ecx */
  push32((uint32_t)(ECX));
  /* 10c14530 push 0x10c39968 */
  push32((uint32_t)(0x10c39968u));
  /* 10c14535 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14537 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14539 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1453b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1453d call 0x10c11960 */
  push32(0x10c14542u); f_10c11960();
  /* 10c14542 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14545 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14548 jne 0x10c1454b */
  if (!C.zf) goto L_10c1454b;
  /* 10c1454a int3  */
  x86_unimpl("int3 @ 0x10c1454a");
L_10c1454b:;
  /* 10c1454b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1454d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1454f jne 0x10c14513 */
  if (!C.zf) goto L_10c14513;
  /* 10c14551 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14554 push eax */
  push32((uint32_t)(EAX));
  /* 10c14555 call 0x10c145a0 */
  push32(0x10c1455au); f_10c145a0();
  /* 10c1455a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1455d:;
  /* 10c1455d jmp 0x10c14338 */
  goto L_10c14338;
L_10c14562:;
  /* 10c14562 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c14564 call 0x10c16340 */
  push32(0x10c14569u); f_10c16340();
  /* 10c14569 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1456c:;
  /* 10c1456c push 0x10c39950 */
  push32((uint32_t)(0x10c39950u));
  /* 10c14571 push 0x10c39418 */
  push32((uint32_t)(0x10c39418u));
  /* 10c14576 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14578 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1457a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1457c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1457e call 0x10c11960 */
  push32(0x10c14583u); f_10c11960();
  /* 10c14583 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14586 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14589 jne 0x10c1458c */
  if (!C.zf) goto L_10c1458c;
  /* 10c1458b int3  */
  x86_unimpl("int3 @ 0x10c1458b");
L_10c1458c:;
  /* 10c1458c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c1458e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c14590 jne 0x10c1456c */
  if (!C.zf) goto L_10c1456c;
  /* 10c14592 pop edi */
  EDI = (pop32());
  /* 10c14593 pop esi */
  ESI = (pop32());
  /* 10c14594 pop ebx */
  EBX = (pop32());
  /* 10c14595 mov esp, ebp */
  ESP = (EBP);
  /* 10c14597 pop ebp */
  EBP = (pop32());
  /* 10c14598 ret  */
  ESPCHK(0x10c142e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045a0 @ 0x10c145a0 (276 bytes, 89 insns) */
void f_10c145a0(void) {
  FTRACE(0x10c145a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c145a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c145a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c145a3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c145a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c145a7 push esi */
  push32((uint32_t)(ESI));
  /* 10c145a8 push edi */
  push32((uint32_t)(EDI));
  /* 10c145a9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10c145b0 jmp 0x10c145bb */
  goto L_10c145bb;
L_10c145b2:;
  /* 10c145b2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c145b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c145b8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10c145bb:;
  /* 10c145bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c145be cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c145c2 jge 0x10c145cf */
  if ((C.sf==C.of)) goto L_10c145cf;
  /* 10c145c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c145c7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c145ca mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10c145cd jmp 0x10c145d6 */
  goto L_10c145d6;
L_10c145cf:;
  /* 10c145cf mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10c145d6:;
  /* 10c145d6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c145d9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c145dc jge 0x10c1467c */
  if ((C.sf==C.of)) goto L_10c1467c;
  /* 10c145e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c145e5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c145e8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10c145eb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10c145ee cmp dword ptr [0x10c3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c145f5 jle 0x10c14613 */
  if ((C.zf||C.sf!=C.of)) goto L_10c14613;
  /* 10c145f7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10c145fc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c145ff and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c14605 push ecx */
  push32((uint32_t)(ECX));
  /* 10c14606 call 0x10c188b0 */
  push32(0x10c1460bu); f_10c188b0();
  /* 10c1460b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1460e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10c14611 jmp 0x10c14630 */
  goto L_10c14630;
L_10c14613:;
  /* 10c14613 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c14616 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1461c mov eax, dword ptr [0x10c3cc98] */
  EAX = (r32((uint32_t)(0x10c3cc98)));
  /* 10c14621 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c14623 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10c14627 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1462d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10c14630:;
  /* 10c14630 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14634 je 0x10c14644 */
  if (C.zf) goto L_10c14644;
  /* 10c14636 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c14639 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1463f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10c14642 jmp 0x10c1464b */
  goto L_10c1464b;
L_10c14644:;
  /* 10c14644 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10c1464b:;
  /* 10c1464b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c1464e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10c14651 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10c14655 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c14658 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1465e push edx */
  push32((uint32_t)(EDX));
  /* 10c1465f push 0x10c39a44 */
  push32((uint32_t)(0x10c39a44u));
  /* 10c14664 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c14667 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1466a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10c1466e push ecx */
  push32((uint32_t)(ECX));
  /* 10c1466f call 0x10c187b0 */
  push32(0x10c14674u); f_10c187b0();
  /* 10c14674 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14677 jmp 0x10c145b2 */
  goto L_10c145b2;
L_10c1467c:;
  /* 10c1467c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c1467f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10c14684:;
  /* 10c14684 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10c14687 push eax */
  push32((uint32_t)(EAX));
  /* 10c14688 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10c1468b push ecx */
  push32((uint32_t)(ECX));
  /* 10c1468c push 0x10c39a34 */
  push32((uint32_t)(0x10c39a34u));
  /* 10c14691 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14693 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14695 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14697 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14699 call 0x10c11960 */
  push32(0x10c1469eu); f_10c11960();
  /* 10c1469e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c146a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c146a4 jne 0x10c146a7 */
  if (!C.zf) goto L_10c146a7;
  /* 10c146a6 int3  */
  x86_unimpl("int3 @ 0x10c146a6");
L_10c146a7:;
  /* 10c146a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c146a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c146ab jne 0x10c14684 */
  if (!C.zf) goto L_10c14684;
  /* 10c146ad pop edi */
  EDI = (pop32());
  /* 10c146ae pop esi */
  ESI = (pop32());
  /* 10c146af pop ebx */
  EBX = (pop32());
  /* 10c146b0 mov esp, ebp */
  ESP = (EBP);
  /* 10c146b2 pop ebp */
  EBP = (pop32());
  /* 10c146b3 ret  */
  ESPCHK(0x10c145a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100046c0 @ 0x10c146c0 (116 bytes, 46 insns) */
void f_10c146c0(void) {
  FTRACE(0x10c146c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c146c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c146c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c146c3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c146c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c146c7 push esi */
  push32((uint32_t)(ESI));
  /* 10c146c8 push edi */
  push32((uint32_t)(EDI));
  /* 10c146c9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10c146cc push eax */
  push32((uint32_t)(EAX));
  /* 10c146cd call 0x10c14040 */
  push32(0x10c146d2u); f_10c14040();
  /* 10c146d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c146d5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c146d9 jne 0x10c146f4 */
  if (!C.zf) goto L_10c146f4;
  /* 10c146db cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c146df jne 0x10c146f4 */
  if (!C.zf) goto L_10c146f4;
  /* 10c146e1 mov ecx, dword ptr [0x10c3ca84] */
  ECX = (r32((uint32_t)(0x10c3ca84)));
  /* 10c146e7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10c146ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c146ec je 0x10c1472b */
  if (C.zf) goto L_10c1472b;
  /* 10c146ee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c146f2 je 0x10c1472b */
  if (C.zf) goto L_10c1472b;
L_10c146f4:;
  /* 10c146f4 push 0x10c39a4c */
  push32((uint32_t)(0x10c39a4cu));
  /* 10c146f9 push 0x10c39418 */
  push32((uint32_t)(0x10c39418u));
  /* 10c146fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14700 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14702 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14704 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14706 call 0x10c11960 */
  push32(0x10c1470bu); f_10c11960();
  /* 10c1470b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1470e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14711 jne 0x10c14714 */
  if (!C.zf) goto L_10c14714;
  /* 10c14713 int3  */
  x86_unimpl("int3 @ 0x10c14713");
L_10c14714:;
  /* 10c14714 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c14716 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c14718 jne 0x10c146f4 */
  if (!C.zf) goto L_10c146f4;
  /* 10c1471a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1471c call 0x10c142e0 */
  push32(0x10c14721u); f_10c142e0();
  /* 10c14721 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14724 mov eax, 1 */
  EAX = (0x1u);
  /* 10c14729 jmp 0x10c1472d */
  goto L_10c1472d;
L_10c1472b:;
  /* 10c1472b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c1472d:;
  /* 10c1472d pop edi */
  EDI = (pop32());
  /* 10c1472e pop esi */
  ESI = (pop32());
  /* 10c1472f pop ebx */
  EBX = (pop32());
  /* 10c14730 mov esp, ebp */
  ESP = (EBP);
  /* 10c14732 pop ebp */
  EBP = (pop32());
  /* 10c14733 ret  */
  ESPCHK(0x10c146c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004740 @ 0x10c14740 (197 bytes, 79 insns) */
void f_10c14740(void) {
  FTRACE(0x10c14740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c14740 push ebp */
  push32((uint32_t)(EBP));
  /* 10c14741 mov ebp, esp */
  EBP = (ESP);
  /* 10c14743 push ecx */
  push32((uint32_t)(ECX));
  /* 10c14744 push ebx */
  push32((uint32_t)(EBX));
  /* 10c14745 push esi */
  push32((uint32_t)(ESI));
  /* 10c14746 push edi */
  push32((uint32_t)(EDI));
  /* 10c14747 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1474b jne 0x10c14752 */
  if (!C.zf) goto L_10c14752;
  /* 10c1474d jmp 0x10c147fe */
  goto L_10c147fe;
L_10c14752:;
  /* 10c14752 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c14759 jmp 0x10c14764 */
  goto L_10c14764;
L_10c1475b:;
  /* 10c1475b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1475e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14761 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c14764:;
  /* 10c14764 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14768 jge 0x10c147ae */
  if ((C.sf==C.of)) goto L_10c147ae;
L_10c1476a:;
  /* 10c1476a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1476d mov edx, dword ptr [ecx*4 + 0x10c3ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c3ca94)));
  /* 10c14774 push edx */
  push32((uint32_t)(EDX));
  /* 10c14775 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14778 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1477b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10c1477f push edx */
  push32((uint32_t)(EDX));
  /* 10c14780 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14783 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c14786 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10c1478a push edx */
  push32((uint32_t)(EDX));
  /* 10c1478b push 0x10c39aa8 */
  push32((uint32_t)(0x10c39aa8u));
  /* 10c14790 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14792 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14794 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14796 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14798 call 0x10c11960 */
  push32(0x10c1479du); f_10c11960();
  /* 10c1479d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c147a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c147a3 jne 0x10c147a6 */
  if (!C.zf) goto L_10c147a6;
  /* 10c147a5 int3  */
  x86_unimpl("int3 @ 0x10c147a5");
L_10c147a6:;
  /* 10c147a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c147a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c147aa jne 0x10c1476a */
  if (!C.zf) goto L_10c1476a;
  /* 10c147ac jmp 0x10c1475b */
  goto L_10c1475b;
L_10c147ae:;
  /* 10c147ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c147b1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10c147b4 push edx */
  push32((uint32_t)(EDX));
  /* 10c147b5 push 0x10c39a84 */
  push32((uint32_t)(0x10c39a84u));
  /* 10c147ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10c147bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10c147be push 0 */
  push32((uint32_t)(0x0u));
  /* 10c147c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c147c2 call 0x10c11960 */
  push32(0x10c147c7u); f_10c11960();
  /* 10c147c7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c147ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c147cd jne 0x10c147d0 */
  if (!C.zf) goto L_10c147d0;
  /* 10c147cf int3  */
  x86_unimpl("int3 @ 0x10c147cf");
L_10c147d0:;
  /* 10c147d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c147d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c147d4 jne 0x10c147ae */
  if (!C.zf) goto L_10c147ae;
L_10c147d6:;
  /* 10c147d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c147d9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10c147dc push edx */
  push32((uint32_t)(EDX));
  /* 10c147dd push 0x10c39a64 */
  push32((uint32_t)(0x10c39a64u));
  /* 10c147e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c147e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c147e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c147e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c147ea call 0x10c11960 */
  push32(0x10c147efu); f_10c11960();
  /* 10c147ef add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c147f2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c147f5 jne 0x10c147f8 */
  if (!C.zf) goto L_10c147f8;
  /* 10c147f7 int3  */
  x86_unimpl("int3 @ 0x10c147f7");
L_10c147f8:;
  /* 10c147f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c147fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c147fc jne 0x10c147d6 */
  if (!C.zf) goto L_10c147d6;
L_10c147fe:;
  /* 10c147fe pop edi */
  EDI = (pop32());
  /* 10c147ff pop esi */
  ESI = (pop32());
  /* 10c14800 pop ebx */
  EBX = (pop32());
  /* 10c14801 mov esp, ebp */
  ESP = (EBP);
  /* 10c14803 pop ebp */
  EBP = (pop32());
  /* 10c14804 ret  */
  ESPCHK(0x10c14740u, _esp0);
  ESP += 4; return;
}

/* FUN_10004810 @ 0x10c14810 (329 bytes, 102 insns) */
void f_10c14810(void) {
  FTRACE(0x10c14810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c14810 push ebp */
  push32((uint32_t)(EBP));
  /* 10c14811 mov ebp, esp */
  EBP = (ESP);
  /* 10c14813 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c14816 cmp dword ptr [0x10c3ff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3ff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1481d jne 0x10c14824 */
  if (!C.zf) goto L_10c14824;
  /* 10c1481f call 0x10c19150 */
  push32(0x10c14824u); f_10c19150();
L_10c14824:;
  /* 10c14824 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c1482b mov eax, dword ptr [0x10c3e3e8] */
  EAX = (r32((uint32_t)(0x10c3e3e8)));
  /* 10c14830 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c14833:;
  /* 10c14833 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14836 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c14839 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1483b je 0x10c14869 */
  if (C.zf) goto L_10c14869;
  /* 10c1483d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14840 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c14843 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14846 je 0x10c14851 */
  if (C.zf) goto L_10c14851;
  /* 10c14848 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1484b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1484e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c14851:;
  /* 10c14851 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14854 push eax */
  push32((uint32_t)(EAX));
  /* 10c14855 call 0x10c156d0 */
  push32(0x10c1485au); f_10c156d0();
  /* 10c1485a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1485d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14860 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c14864 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c14867 jmp 0x10c14833 */
  goto L_10c14833;
L_10c14869:;
  /* 10c14869 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10c1486b push 0x10c39ac8 */
  push32((uint32_t)(0x10c39ac8u));
  /* 10c14870 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c14872 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c14875 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10c1487c push ecx */
  push32((uint32_t)(ECX));
  /* 10c1487d call 0x10c128a0 */
  push32(0x10c14882u); f_10c128a0();
  /* 10c14882 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14885 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c14888 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1488b mov dword ptr [0x10c3e41c], edx */
  w32((uint32_t)(0x10c3e41c), (EDX));
  /* 10c14891 cmp dword ptr [0x10c3e41c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e41c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14898 jne 0x10c148a4 */
  if (!C.zf) goto L_10c148a4;
  /* 10c1489a push 9 */
  push32((uint32_t)(0x9u));
  /* 10c1489c call 0x10c11810 */
  push32(0x10c148a1u); f_10c11810();
  /* 10c148a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c148a4:;
  /* 10c148a4 mov eax, dword ptr [0x10c3e3e8] */
  EAX = (r32((uint32_t)(0x10c3e3e8)));
  /* 10c148a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c148ac jmp 0x10c148b7 */
  goto L_10c148b7;
L_10c148ae:;
  /* 10c148ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c148b1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c148b4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c148b7:;
  /* 10c148b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c148ba movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c148bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c148bf je 0x10c14927 */
  if (C.zf) goto L_10c14927;
  /* 10c148c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c148c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c148c5 call 0x10c156d0 */
  push32(0x10c148cau); f_10c156d0();
  /* 10c148ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c148cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c148d0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c148d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c148d6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c148d9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c148dc je 0x10c14925 */
  if (C.zf) goto L_10c14925;
  /* 10c148de push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10c148e0 push 0x10c39ac8 */
  push32((uint32_t)(0x10c39ac8u));
  /* 10c148e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c148e7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c148ea push ecx */
  push32((uint32_t)(ECX));
  /* 10c148eb call 0x10c128a0 */
  push32(0x10c148f0u); f_10c128a0();
  /* 10c148f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c148f3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c148f6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c148f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c148fb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c148fe jne 0x10c1490a */
  if (!C.zf) goto L_10c1490a;
  /* 10c14900 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c14902 call 0x10c11810 */
  push32(0x10c14907u); f_10c11810();
  /* 10c14907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1490a:;
  /* 10c1490a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1490d push ecx */
  push32((uint32_t)(ECX));
  /* 10c1490e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c14911 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c14913 push eax */
  push32((uint32_t)(EAX));
  /* 10c14914 call 0x10c15850 */
  push32(0x10c14919u); f_10c15850();
  /* 10c14919 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1491c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1491f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14922 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10c14925:;
  /* 10c14925 jmp 0x10c148ae */
  goto L_10c148ae;
L_10c14927:;
  /* 10c14927 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c14929 mov edx, dword ptr [0x10c3e3e8] */
  EDX = (r32((uint32_t)(0x10c3e3e8)));
  /* 10c1492f push edx */
  push32((uint32_t)(EDX));
  /* 10c14930 call 0x10c13330 */
  push32(0x10c14935u); f_10c13330();
  /* 10c14935 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14938 mov dword ptr [0x10c3e3e8], 0 */
  w32((uint32_t)(0x10c3e3e8), (0x0u));
  /* 10c14942 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c14945 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c1494b mov dword ptr [0x10c3ff20], 1 */
  w32((uint32_t)(0x10c3ff20), (0x1u));
  /* 10c14955 mov esp, ebp */
  ESP = (EBP);
  /* 10c14957 pop ebp */
  EBP = (pop32());
  /* 10c14958 ret  */
  ESPCHK(0x10c14810u, _esp0);
  ESP += 4; return;
}

/* FUN_10004960 @ 0x10c14960 (216 bytes, 69 insns) */
void f_10c14960(void) {
  FTRACE(0x10c14960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c14960 push ebp */
  push32((uint32_t)(EBP));
  /* 10c14961 mov ebp, esp */
  EBP = (ESP);
  /* 10c14963 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c14966 cmp dword ptr [0x10c3ff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3ff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1496d jne 0x10c14974 */
  if (!C.zf) goto L_10c14974;
  /* 10c1496f call 0x10c19150 */
  push32(0x10c14974u); f_10c19150();
L_10c14974:;
  /* 10c14974 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10c14979 push 0x10c3e458 */
  push32((uint32_t)(0x10c3e458u));
  /* 10c1497e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14980 call dword ptr [0x10c40248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40248))), 0x10c14986u);
  /* 10c14986 mov dword ptr [0x10c3e42c], 0x10c3e458 */
  w32((uint32_t)(0x10c3e42c), (0x10c3e458u));
  /* 10c14990 mov eax, dword ptr [0x10c3ff4c] */
  EAX = (r32((uint32_t)(0x10c3ff4c)));
  /* 10c14995 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c14998 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c1499a jne 0x10c149a7 */
  if (!C.zf) goto L_10c149a7;
  /* 10c1499c mov edx, dword ptr [0x10c3e42c] */
  EDX = (r32((uint32_t)(0x10c3e42c)));
  /* 10c149a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c149a5 jmp 0x10c149af */
  goto L_10c149af;
L_10c149a7:;
  /* 10c149a7 mov eax, dword ptr [0x10c3ff4c] */
  EAX = (r32((uint32_t)(0x10c3ff4c)));
  /* 10c149ac mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10c149af:;
  /* 10c149af mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c149b2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c149b5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10c149b8 push edx */
  push32((uint32_t)(EDX));
  /* 10c149b9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10c149bc push eax */
  push32((uint32_t)(EAX));
  /* 10c149bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10c149bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10c149c1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c149c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c149c5 call 0x10c14a40 */
  push32(0x10c149cau); f_10c14a40();
  /* 10c149ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c149cd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10c149d2 push 0x10c39ad4 */
  push32((uint32_t)(0x10c39ad4u));
  /* 10c149d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c149d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c149dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c149df lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10c149e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c149e3 call 0x10c128a0 */
  push32(0x10c149e8u); f_10c128a0();
  /* 10c149e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c149eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c149ee cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c149f2 jne 0x10c149fe */
  if (!C.zf) goto L_10c149fe;
  /* 10c149f4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10c149f6 call 0x10c11810 */
  push32(0x10c149fbu); f_10c11810();
  /* 10c149fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c149fe:;
  /* 10c149fe lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10c14a01 push edx */
  push32((uint32_t)(EDX));
  /* 10c14a02 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10c14a05 push eax */
  push32((uint32_t)(EAX));
  /* 10c14a06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c14a09 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c14a0c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10c14a0f push eax */
  push32((uint32_t)(EAX));
  /* 10c14a10 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c14a13 push ecx */
  push32((uint32_t)(ECX));
  /* 10c14a14 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c14a17 push edx */
  push32((uint32_t)(EDX));
  /* 10c14a18 call 0x10c14a40 */
  push32(0x10c14a1du); f_10c14a40();
  /* 10c14a1d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14a20 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c14a23 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c14a26 mov dword ptr [0x10c3e410], eax */
  w32((uint32_t)(0x10c3e410), (EAX));
  /* 10c14a2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c14a2e mov dword ptr [0x10c3e414], ecx */
  w32((uint32_t)(0x10c3e414), (ECX));
  /* 10c14a34 mov esp, ebp */
  ESP = (EBP);
  /* 10c14a36 pop ebp */
  EBP = (pop32());
  /* 10c14a37 ret  */
  ESPCHK(0x10c14960u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a40 @ 0x10c14a40 (1060 bytes, 360 insns) */
void f_10c14a40(void) {
  FTRACE(0x10c14a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c14a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10c14a41 mov ebp, esp */
  EBP = (ESP);
  /* 10c14a43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c14a46 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14a49 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c14a4f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c14a52 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10c14a58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c14a5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c14a5e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14a62 je 0x10c14a75 */
  if (C.zf) goto L_10c14a75;
  /* 10c14a64 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c14a67 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14a6a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c14a6c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c14a6f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14a72 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10c14a75:;
  /* 10c14a75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14a78 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c14a7b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14a7e jne 0x10c14b4d */
  if (!C.zf) goto L_10c14b4d;
L_10c14a84:;
  /* 10c14a84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14a87 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14a8a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c14a8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14a90 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c14a93 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14a96 je 0x10c14b12 */
  if (C.zf) goto L_10c14b12;
  /* 10c14a98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14a9b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c14a9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c14aa0 je 0x10c14b12 */
  if (C.zf) goto L_10c14b12;
  /* 10c14aa2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14aa5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c14aa7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c14aa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c14aab mov al, byte ptr [edx + 0x10c3fc81] */
  AL = (r8((uint32_t)(EDX + 0x10c3fc81)));
  /* 10c14ab1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c14ab4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c14ab6 je 0x10c14ae7 */
  if (C.zf) goto L_10c14ae7;
  /* 10c14ab8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14abb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c14abd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14ac0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14ac3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c14ac5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14ac9 je 0x10c14ae7 */
  if (C.zf) goto L_10c14ae7;
  /* 10c14acb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14ace mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14ad1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c14ad3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c14ad5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14ad8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14adb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10c14ade mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14ae1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14ae4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c14ae7:;
  /* 10c14ae7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14aea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c14aec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14aef mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14af2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c14af4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14af8 je 0x10c14b0d */
  if (C.zf) goto L_10c14b0d;
  /* 10c14afa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14afd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14b00 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c14b02 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c14b04 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14b07 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14b0a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10c14b0d:;
  /* 10c14b0d jmp 0x10c14a84 */
  goto L_10c14a84;
L_10c14b12:;
  /* 10c14b12 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14b15 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c14b17 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14b1a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14b1d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c14b1f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14b23 je 0x10c14b34 */
  if (C.zf) goto L_10c14b34;
  /* 10c14b25 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14b28 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10c14b2b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14b2e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14b31 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10c14b34:;
  /* 10c14b34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14b37 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c14b3a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14b3d jne 0x10c14b48 */
  if (!C.zf) goto L_10c14b48;
  /* 10c14b3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14b42 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14b45 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c14b48:;
  /* 10c14b48 jmp 0x10c14c1c */
  goto L_10c14c1c;
L_10c14b4d:;
  /* 10c14b4d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14b50 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c14b52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14b55 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14b58 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c14b5a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14b5e je 0x10c14b73 */
  if (C.zf) goto L_10c14b73;
  /* 10c14b60 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14b63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14b66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c14b68 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c14b6a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14b6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14b70 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10c14b73:;
  /* 10c14b73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14b76 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c14b78 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10c14b7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14b7e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14b81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c14b84 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c14b87 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c14b8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c14b8f mov dl, byte ptr [ecx + 0x10c3fc81] */
  DL = (r8((uint32_t)(ECX + 0x10c3fc81)));
  /* 10c14b95 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c14b98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c14b9a je 0x10c14bcb */
  if (C.zf) goto L_10c14bcb;
  /* 10c14b9c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14b9f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c14ba1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14ba4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14ba7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c14ba9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14bad je 0x10c14bc2 */
  if (C.zf) goto L_10c14bc2;
  /* 10c14baf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14bb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14bb5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c14bb7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c14bb9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14bbc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14bbf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10c14bc2:;
  /* 10c14bc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14bc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14bc8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c14bcb:;
  /* 10c14bcb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c14bce and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c14bd4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14bd7 je 0x10c14bf7 */
  if (C.zf) goto L_10c14bf7;
  /* 10c14bd9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c14bdc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c14be1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c14be3 je 0x10c14bf7 */
  if (C.zf) goto L_10c14bf7;
  /* 10c14be5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c14be8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c14bee cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14bf1 jne 0x10c14b4d */
  if (!C.zf) goto L_10c14b4d;
L_10c14bf7:;
  /* 10c14bf7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c14bfa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c14c00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c14c02 jne 0x10c14c0f */
  if (!C.zf) goto L_10c14c0f;
  /* 10c14c04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14c07 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c14c0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c14c0d jmp 0x10c14c1c */
  goto L_10c14c1c;
L_10c14c0f:;
  /* 10c14c0f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14c13 je 0x10c14c1c */
  if (C.zf) goto L_10c14c1c;
  /* 10c14c15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14c18 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10c14c1c:;
  /* 10c14c1c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10c14c23:;
  /* 10c14c23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14c26 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c14c29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c14c2b je 0x10c14c4e */
  if (C.zf) goto L_10c14c4e;
L_10c14c2d:;
  /* 10c14c2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14c30 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c14c33 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14c36 je 0x10c14c43 */
  if (C.zf) goto L_10c14c43;
  /* 10c14c38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14c3b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c14c3e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14c41 jne 0x10c14c4e */
  if (!C.zf) goto L_10c14c4e;
L_10c14c43:;
  /* 10c14c43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14c46 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14c49 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c14c4c jmp 0x10c14c2d */
  goto L_10c14c2d;
L_10c14c4e:;
  /* 10c14c4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14c51 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c14c54 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c14c56 jne 0x10c14c5d */
  if (!C.zf) goto L_10c14c5d;
  /* 10c14c58 jmp 0x10c14e3b */
  goto L_10c14e3b;
L_10c14c5d:;
  /* 10c14c5d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14c61 je 0x10c14c74 */
  if (C.zf) goto L_10c14c74;
  /* 10c14c63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c14c66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14c69 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c14c6b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c14c6e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14c71 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10c14c74:;
  /* 10c14c74 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c14c77 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c14c79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14c7c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c14c7f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10c14c81:;
  /* 10c14c81 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10c14c88 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10c14c8f:;
  /* 10c14c8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14c92 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c14c95 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14c98 jne 0x10c14cae */
  if (!C.zf) goto L_10c14cae;
  /* 10c14c9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14c9d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14ca0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c14ca3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c14ca6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14ca9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c14cac jmp 0x10c14c8f */
  goto L_10c14c8f;
L_10c14cae:;
  /* 10c14cae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14cb1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c14cb4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14cb7 jne 0x10c14d0a */
  if (!C.zf) goto L_10c14d0a;
  /* 10c14cb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c14cbc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c14cbe mov ecx, 2 */
  ECX = (0x2u);
  /* 10c14cc3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c14cc5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c14cc7 jne 0x10c14d02 */
  if (!C.zf) goto L_10c14d02;
  /* 10c14cc9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14ccd je 0x10c14cef */
  if (C.zf) goto L_10c14cef;
  /* 10c14ccf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14cd2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10c14cd6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14cd9 jne 0x10c14ce6 */
  if (!C.zf) goto L_10c14ce6;
  /* 10c14cdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14cde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14ce1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c14ce4 jmp 0x10c14ced */
  goto L_10c14ced;
L_10c14ce6:;
  /* 10c14ce6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c14ced:;
  /* 10c14ced jmp 0x10c14cf6 */
  goto L_10c14cf6;
L_10c14cef:;
  /* 10c14cef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c14cf6:;
  /* 10c14cf6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c14cf8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14cfc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10c14cff mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10c14d02:;
  /* 10c14d02 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c14d05 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c14d07 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10c14d0a:;
  /* 10c14d0a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c14d0d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c14d10 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c14d13 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c14d16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c14d18 je 0x10c14d3e */
  if (C.zf) goto L_10c14d3e;
  /* 10c14d1a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14d1e je 0x10c14d2f */
  if (C.zf) goto L_10c14d2f;
  /* 10c14d20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14d23 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10c14d26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14d29 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14d2c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10c14d2f:;
  /* 10c14d2f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14d32 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c14d34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14d37 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14d3a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c14d3c jmp 0x10c14d0a */
  goto L_10c14d0a;
L_10c14d3e:;
  /* 10c14d3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14d41 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c14d44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c14d46 je 0x10c14d64 */
  if (C.zf) goto L_10c14d64;
  /* 10c14d48 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14d4c jne 0x10c14d69 */
  if (!C.zf) goto L_10c14d69;
  /* 10c14d4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14d51 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c14d54 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14d57 je 0x10c14d64 */
  if (C.zf) goto L_10c14d64;
  /* 10c14d59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14d5c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c14d5f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14d62 jne 0x10c14d69 */
  if (!C.zf) goto L_10c14d69;
L_10c14d64:;
  /* 10c14d64 jmp 0x10c14e14 */
  goto L_10c14e14;
L_10c14d69:;
  /* 10c14d69 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14d6d je 0x10c14e06 */
  if (C.zf) goto L_10c14e06;
  /* 10c14d73 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14d77 je 0x10c14dcd */
  if (C.zf) goto L_10c14dcd;
  /* 10c14d79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14d7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c14d7e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c14d80 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c14d82 mov cl, byte ptr [eax + 0x10c3fc81] */
  CL = (r8((uint32_t)(EAX + 0x10c3fc81)));
  /* 10c14d88 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10c14d8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c14d8d je 0x10c14db8 */
  if (C.zf) goto L_10c14db8;
  /* 10c14d8f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14d92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14d95 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c14d97 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10c14d99 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14d9c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14d9f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10c14da2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14da5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14da8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c14dab mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14dae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c14db0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14db3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14db6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c14db8:;
  /* 10c14db8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14dbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14dbe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c14dc0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c14dc2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14dc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14dc8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10c14dcb jmp 0x10c14df9 */
  goto L_10c14df9;
L_10c14dcd:;
  /* 10c14dcd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14dd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c14dd2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c14dd4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c14dd6 mov cl, byte ptr [eax + 0x10c3fc81] */
  CL = (r8((uint32_t)(EAX + 0x10c3fc81)));
  /* 10c14ddc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10c14ddf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c14de1 je 0x10c14df9 */
  if (C.zf) goto L_10c14df9;
  /* 10c14de3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14de6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14de9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c14dec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14def mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c14df1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14df4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14df7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c14df9:;
  /* 10c14df9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14dfc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c14dfe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14e01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14e04 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c14e06:;
  /* 10c14e06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14e09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14e0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c14e0f jmp 0x10c14c81 */
  goto L_10c14c81;
L_10c14e14:;
  /* 10c14e14 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14e18 je 0x10c14e29 */
  if (C.zf) goto L_10c14e29;
  /* 10c14e1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14e1d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10c14e20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c14e23 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14e26 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10c14e29:;
  /* 10c14e29 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14e2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c14e2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14e31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c14e34 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c14e36 jmp 0x10c14c23 */
  goto L_10c14c23;
L_10c14e3b:;
  /* 10c14e3b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14e3f je 0x10c14e53 */
  if (C.zf) goto L_10c14e53;
  /* 10c14e41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c14e44 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c14e4a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c14e4d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14e50 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10c14e53:;
  /* 10c14e53 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c14e56 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c14e58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14e5b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c14e5e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c14e60 mov esp, ebp */
  ESP = (EBP);
  /* 10c14e62 pop ebp */
  EBP = (pop32());
  /* 10c14e63 ret  */
  ESPCHK(0x10c14a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e70 @ 0x10c14e70 (537 bytes, 173 insns) */
void f_10c14e70(void) {
  FTRACE(0x10c14e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c14e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c14e71 mov ebp, esp */
  EBP = (ESP);
  /* 10c14e73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c14e76 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10c14e7d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10c14e84 cmp dword ptr [0x10c3e55c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e55c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14e8b jne 0x10c14eca */
  if (!C.zf) goto L_10c14eca;
  /* 10c14e8d call dword ptr [0x10c40208] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40208))), 0x10c14e93u);
  /* 10c14e93 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c14e96 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14e9a je 0x10c14ea8 */
  if (C.zf) goto L_10c14ea8;
  /* 10c14e9c mov dword ptr [0x10c3e55c], 1 */
  w32((uint32_t)(0x10c3e55c), (0x1u));
  /* 10c14ea6 jmp 0x10c14eca */
  goto L_10c14eca;
L_10c14ea8:;
  /* 10c14ea8 call dword ptr [0x10c4020c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4020c))), 0x10c14eaeu);
  /* 10c14eae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c14eb1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14eb5 je 0x10c14ec3 */
  if (C.zf) goto L_10c14ec3;
  /* 10c14eb7 mov dword ptr [0x10c3e55c], 2 */
  w32((uint32_t)(0x10c3e55c), (0x2u));
  /* 10c14ec1 jmp 0x10c14eca */
  goto L_10c14eca;
L_10c14ec3:;
  /* 10c14ec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c14ec5 jmp 0x10c15085 */
  goto L_10c15085;
L_10c14eca:;
  /* 10c14eca cmp dword ptr [0x10c3e55c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e55c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14ed1 jne 0x10c14fce */
  if (!C.zf) goto L_10c14fce;
  /* 10c14ed7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14edb jne 0x10c14ef3 */
  if (!C.zf) goto L_10c14ef3;
  /* 10c14edd call dword ptr [0x10c40208] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40208))), 0x10c14ee3u);
  /* 10c14ee3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c14ee6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14eea jne 0x10c14ef3 */
  if (!C.zf) goto L_10c14ef3;
  /* 10c14eec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c14eee jmp 0x10c15085 */
  goto L_10c15085;
L_10c14ef3:;
  /* 10c14ef3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c14ef6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c14ef9:;
  /* 10c14ef9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c14efc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c14efe mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10c14f01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c14f03 je 0x10c14f25 */
  if (C.zf) goto L_10c14f25;
  /* 10c14f05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c14f08 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14f0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c14f0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c14f11 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c14f13 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10c14f16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c14f18 jne 0x10c14f23 */
  if (!C.zf) goto L_10c14f23;
  /* 10c14f1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c14f1d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14f20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c14f23:;
  /* 10c14f23 jmp 0x10c14ef9 */
  goto L_10c14ef9;
L_10c14f25:;
  /* 10c14f25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c14f28 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c14f2b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10c14f2d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14f30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c14f33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14f35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14f37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14f39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14f3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14f3e push edx */
  push32((uint32_t)(EDX));
  /* 10c14f3f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c14f42 push eax */
  push32((uint32_t)(EAX));
  /* 10c14f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14f47 call dword ptr [0x10c4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4029c))), 0x10c14f4du);
  /* 10c14f4d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c14f50 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14f54 je 0x10c14f74 */
  if (C.zf) goto L_10c14f74;
  /* 10c14f56 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10c14f58 push 0x10c39ae0 */
  push32((uint32_t)(0x10c39ae0u));
  /* 10c14f5d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c14f5f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c14f62 push ecx */
  push32((uint32_t)(ECX));
  /* 10c14f63 call 0x10c128a0 */
  push32(0x10c14f68u); f_10c128a0();
  /* 10c14f68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14f6b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c14f6e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14f72 jne 0x10c14f85 */
  if (!C.zf) goto L_10c14f85;
L_10c14f74:;
  /* 10c14f74 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c14f77 push edx */
  push32((uint32_t)(EDX));
  /* 10c14f78 call dword ptr [0x10c40298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40298))), 0x10c14f7eu);
  /* 10c14f7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c14f80 jmp 0x10c15085 */
  goto L_10c15085;
L_10c14f85:;
  /* 10c14f85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14f87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14f89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c14f8c push eax */
  push32((uint32_t)(EAX));
  /* 10c14f8d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c14f90 push ecx */
  push32((uint32_t)(ECX));
  /* 10c14f91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c14f94 push edx */
  push32((uint32_t)(EDX));
  /* 10c14f95 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c14f98 push eax */
  push32((uint32_t)(EAX));
  /* 10c14f99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c14f9d call dword ptr [0x10c4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4029c))), 0x10c14fa3u);
  /* 10c14fa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c14fa5 jne 0x10c14fbc */
  if (!C.zf) goto L_10c14fbc;
  /* 10c14fa7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c14fa9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c14fac push ecx */
  push32((uint32_t)(ECX));
  /* 10c14fad call 0x10c13330 */
  push32(0x10c14fb2u); f_10c13330();
  /* 10c14fb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c14fb5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10c14fbc:;
  /* 10c14fbc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c14fbf push edx */
  push32((uint32_t)(EDX));
  /* 10c14fc0 call dword ptr [0x10c40298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40298))), 0x10c14fc6u);
  /* 10c14fc6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c14fc9 jmp 0x10c15085 */
  goto L_10c15085;
L_10c14fce:;
  /* 10c14fce cmp dword ptr [0x10c3e55c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e55c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14fd5 jne 0x10c15083 */
  if (!C.zf) goto L_10c15083;
  /* 10c14fdb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14fdf jne 0x10c14ff7 */
  if (!C.zf) goto L_10c14ff7;
  /* 10c14fe1 call dword ptr [0x10c4020c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4020c))), 0x10c14fe7u);
  /* 10c14fe7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c14fea cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c14fee jne 0x10c14ff7 */
  if (!C.zf) goto L_10c14ff7;
  /* 10c14ff0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c14ff2 jmp 0x10c15085 */
  goto L_10c15085;
L_10c14ff7:;
  /* 10c14ff7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c14ffa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c14ffd:;
  /* 10c14ffd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c15000 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c15003 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c15005 je 0x10c15025 */
  if (C.zf) goto L_10c15025;
  /* 10c15007 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1500a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1500d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c15010 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c15013 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c15016 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c15018 jne 0x10c15023 */
  if (!C.zf) goto L_10c15023;
  /* 10c1501a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1501d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15020 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c15023:;
  /* 10c15023 jmp 0x10c14ffd */
  goto L_10c14ffd;
L_10c15025:;
  /* 10c15025 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c15028 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1502b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1502e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c15031 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10c15036 push 0x10c39ae0 */
  push32((uint32_t)(0x10c39ae0u));
  /* 10c1503b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1503d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c15040 push edx */
  push32((uint32_t)(EDX));
  /* 10c15041 call 0x10c128a0 */
  push32(0x10c15046u); f_10c128a0();
  /* 10c15046 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15049 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c1504c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15050 jne 0x10c15060 */
  if (!C.zf) goto L_10c15060;
  /* 10c15052 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c15055 push eax */
  push32((uint32_t)(EAX));
  /* 10c15056 call dword ptr [0x10c40294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40294))), 0x10c1505cu);
  /* 10c1505c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1505e jmp 0x10c15085 */
  goto L_10c15085;
L_10c15060:;
  /* 10c15060 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c15063 push ecx */
  push32((uint32_t)(ECX));
  /* 10c15064 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c15067 push edx */
  push32((uint32_t)(EDX));
  /* 10c15068 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1506b push eax */
  push32((uint32_t)(EAX));
  /* 10c1506c call 0x10c19180 */
  push32(0x10c15071u); f_10c19180();
  /* 10c15071 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15074 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c15077 push ecx */
  push32((uint32_t)(ECX));
  /* 10c15078 call dword ptr [0x10c40294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40294))), 0x10c1507eu);
  /* 10c1507e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c15081 jmp 0x10c15085 */
  goto L_10c15085;
L_10c15083:;
  /* 10c15083 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c15085:;
  /* 10c15085 mov esp, ebp */
  ESP = (EBP);
  /* 10c15087 pop ebp */
  EBP = (pop32());
  /* 10c15088 ret  */
  ESPCHK(0x10c14e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005090 @ 0x10c15090 (77 bytes, 25 insns) */
void f_10c15090(void) {
  FTRACE(0x10c15090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c15090 push ebp */
  push32((uint32_t)(EBP));
  /* 10c15091 mov ebp, esp */
  EBP = (ESP);
  /* 10c15093 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c15095 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10c1509a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1509c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c150a0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10c150a3 push eax */
  push32((uint32_t)(EAX));
  /* 10c150a4 call dword ptr [0x10c402ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402ac))), 0x10c150aau);
  /* 10c150aa mov dword ptr [0x10c3fdac], eax */
  w32((uint32_t)(0x10c3fdac), (EAX));
  /* 10c150af cmp dword ptr [0x10c3fdac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3fdac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c150b6 jne 0x10c150bc */
  if (!C.zf) goto L_10c150bc;
  /* 10c150b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c150ba jmp 0x10c150db */
  goto L_10c150db;
L_10c150bc:;
  /* 10c150bc call 0x10c16b40 */
  push32(0x10c150c1u); f_10c16b40();
  /* 10c150c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c150c3 jne 0x10c150d6 */
  if (!C.zf) goto L_10c150d6;
  /* 10c150c5 mov ecx, dword ptr [0x10c3fdac] */
  ECX = (r32((uint32_t)(0x10c3fdac)));
  /* 10c150cb push ecx */
  push32((uint32_t)(ECX));
  /* 10c150cc call dword ptr [0x10c402a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402a8))), 0x10c150d2u);
  /* 10c150d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c150d4 jmp 0x10c150db */
  goto L_10c150db;
L_10c150d6:;
  /* 10c150d6 mov eax, 1 */
  EAX = (0x1u);
L_10c150db:;
  /* 10c150db pop ebp */
  EBP = (pop32());
  /* 10c150dc ret  */
  ESPCHK(0x10c15090u, _esp0);
  ESP += 4; return;
}

/* FUN_100050e0 @ 0x10c150e0 (156 bytes, 48 insns) */
void f_10c150e0(void) {
  FTRACE(0x10c150e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c150e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c150e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c150e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c150e6 mov eax, dword ptr [0x10c3fda8] */
  EAX = (r32((uint32_t)(0x10c3fda8)));
  /* 10c150eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c150ee mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c150f5 jmp 0x10c15100 */
  goto L_10c15100;
L_10c150f7:;
  /* 10c150f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c150fa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c150fd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c15100:;
  /* 10c15100 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15103 cmp edx, dword ptr [0x10c3fda4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c3fda4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15109 jge 0x10c15156 */
  if ((C.sf==C.of)) goto L_10c15156;
  /* 10c1510b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10c15110 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10c15115 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c15118 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c1511b push ecx */
  push32((uint32_t)(ECX));
  /* 10c1511c call dword ptr [0x10c402b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402b4))), 0x10c15122u);
  /* 10c15122 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10c15127 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c15129 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1512c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c1512f push eax */
  push32((uint32_t)(EAX));
  /* 10c15130 call dword ptr [0x10c402b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402b4))), 0x10c15136u);
  /* 10c15136 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c15139 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c1513c push edx */
  push32((uint32_t)(EDX));
  /* 10c1513d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1513f mov eax, dword ptr [0x10c3fdac] */
  EAX = (r32((uint32_t)(0x10c3fdac)));
  /* 10c15144 push eax */
  push32((uint32_t)(EAX));
  /* 10c15145 call dword ptr [0x10c402b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402b0))), 0x10c1514bu);
  /* 10c1514b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1514e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15151 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c15154 jmp 0x10c150f7 */
  goto L_10c150f7;
L_10c15156:;
  /* 10c15156 mov edx, dword ptr [0x10c3fda8] */
  EDX = (r32((uint32_t)(0x10c3fda8)));
  /* 10c1515c push edx */
  push32((uint32_t)(EDX));
  /* 10c1515d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1515f mov eax, dword ptr [0x10c3fdac] */
  EAX = (r32((uint32_t)(0x10c3fdac)));
  /* 10c15164 push eax */
  push32((uint32_t)(EAX));
  /* 10c15165 call dword ptr [0x10c402b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402b0))), 0x10c1516bu);
  /* 10c1516b mov ecx, dword ptr [0x10c3fdac] */
  ECX = (r32((uint32_t)(0x10c3fdac)));
  /* 10c15171 push ecx */
  push32((uint32_t)(ECX));
  /* 10c15172 call dword ptr [0x10c402a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402a8))), 0x10c15178u);
  /* 10c15178 mov esp, ebp */
  ESP = (EBP);
  /* 10c1517a pop ebp */
  EBP = (pop32());
  /* 10c1517b ret  */
  ESPCHK(0x10c150e0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10c15180 (73 bytes, 19 insns) */
void f_10c15180(void) {
  FTRACE(0x10c15180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c15180 push ebp */
  push32((uint32_t)(EBP));
  /* 10c15181 mov ebp, esp */
  EBP = (ESP);
  /* 10c15183 cmp dword ptr [0x10c3e3f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e3f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1518a je 0x10c1519e */
  if (C.zf) goto L_10c1519e;
  /* 10c1518c cmp dword ptr [0x10c3e3f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e3f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15193 jne 0x10c151c7 */
  if (!C.zf) goto L_10c151c7;
  /* 10c15195 cmp dword ptr [0x10c3e3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1519c jne 0x10c151c7 */
  if (!C.zf) goto L_10c151c7;
L_10c1519e:;
  /* 10c1519e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10c151a3 call 0x10c151d0 */
  push32(0x10c151a8u); f_10c151d0();
  /* 10c151a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c151ab cmp dword ptr [0x10c3e560], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e560))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c151b2 je 0x10c151ba */
  if (C.zf) goto L_10c151ba;
  /* 10c151b4 call dword ptr [0x10c3e560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3e560))), 0x10c151bau);
L_10c151ba:;
  /* 10c151ba push 0xff */
  push32((uint32_t)(0xffu));
  /* 10c151bf call 0x10c151d0 */
  push32(0x10c151c4u); f_10c151d0();
  /* 10c151c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c151c7:;
  /* 10c151c7 pop ebp */
  EBP = (pop32());
  /* 10c151c8 ret  */
  ESPCHK(0x10c15180u, _esp0);
  ESP += 4; return;
}

/* FUN_100051d0 @ 0x10c151d0 (447 bytes, 131 insns) */
void f_10c151d0(void) {
  FTRACE(0x10c151d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c151d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c151d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c151d3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c151d9 push ebx */
  push32((uint32_t)(EBX));
  /* 10c151da push esi */
  push32((uint32_t)(ESI));
  /* 10c151db push edi */
  push32((uint32_t)(EDI));
  /* 10c151dc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c151e3 jmp 0x10c151ee */
  goto L_10c151ee;
L_10c151e5:;
  /* 10c151e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c151e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c151eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c151ee:;
  /* 10c151ee cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c151f2 jae 0x10c15207 */
  if (!C.cf) goto L_10c15207;
  /* 10c151f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c151f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c151fa cmp edx, dword ptr [ecx*8 + 0x10c3cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10c3cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15201 jne 0x10c15205 */
  if (!C.zf) goto L_10c15205;
  /* 10c15203 jmp 0x10c15207 */
  goto L_10c15207;
L_10c15205:;
  /* 10c15205 jmp 0x10c151e5 */
  goto L_10c151e5;
L_10c15207:;
  /* 10c15207 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1520a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1520d cmp ecx, dword ptr [eax*8 + 0x10c3cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10c3cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15214 jne 0x10c15388 */
  if (!C.zf) goto L_10c15388;
  /* 10c1521a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15221 je 0x10c15244 */
  if (C.zf) goto L_10c15244;
  /* 10c15223 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c15226 mov eax, dword ptr [edx*8 + 0x10c3cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10c3cab4)));
  /* 10c1522d push eax */
  push32((uint32_t)(EAX));
  /* 10c1522e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c15230 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c15232 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c15234 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c15236 call 0x10c11960 */
  push32(0x10c1523bu); f_10c11960();
  /* 10c1523b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1523e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15241 jne 0x10c15244 */
  if (!C.zf) goto L_10c15244;
  /* 10c15243 int3  */
  x86_unimpl("int3 @ 0x10c15243");
L_10c15244:;
  /* 10c15244 cmp dword ptr [0x10c3e3f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e3f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1524b je 0x10c1525f */
  if (C.zf) goto L_10c1525f;
  /* 10c1524d cmp dword ptr [0x10c3e3f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e3f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15254 jne 0x10c15298 */
  if (!C.zf) goto L_10c15298;
  /* 10c15256 cmp dword ptr [0x10c3e3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1525d jne 0x10c15298 */
  if (!C.zf) goto L_10c15298;
L_10c1525f:;
  /* 10c1525f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c15261 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10c15264 push ecx */
  push32((uint32_t)(ECX));
  /* 10c15265 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c15268 mov eax, dword ptr [edx*8 + 0x10c3cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10c3cab4)));
  /* 10c1526f push eax */
  push32((uint32_t)(EAX));
  /* 10c15270 call 0x10c156d0 */
  push32(0x10c15275u); f_10c156d0();
  /* 10c15275 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15278 push eax */
  push32((uint32_t)(EAX));
  /* 10c15279 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1527c mov edx, dword ptr [ecx*8 + 0x10c3cab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10c3cab4)));
  /* 10c15283 push edx */
  push32((uint32_t)(EDX));
  /* 10c15284 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10c15286 call dword ptr [0x10c4022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4022c))), 0x10c1528cu);
  /* 10c1528c push eax */
  push32((uint32_t)(EAX));
  /* 10c1528d call dword ptr [0x10c40230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40230))), 0x10c15293u);
  /* 10c15293 jmp 0x10c15388 */
  goto L_10c15388;
L_10c15298:;
  /* 10c15298 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1529f je 0x10c15388 */
  if (C.zf) goto L_10c15388;
  /* 10c152a5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10c152aa lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10c152b0 push eax */
  push32((uint32_t)(EAX));
  /* 10c152b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c152b3 call dword ptr [0x10c40248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40248))), 0x10c152b9u);
  /* 10c152b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c152bb jne 0x10c152d1 */
  if (!C.zf) goto L_10c152d1;
  /* 10c152bd push 0x10c39348 */
  push32((uint32_t)(0x10c39348u));
  /* 10c152c2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10c152c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c152c9 call 0x10c15850 */
  push32(0x10c152ceu); f_10c15850();
  /* 10c152ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c152d1:;
  /* 10c152d1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10c152d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c152da mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c152dd push eax */
  push32((uint32_t)(EAX));
  /* 10c152de call 0x10c156d0 */
  push32(0x10c152e3u); f_10c156d0();
  /* 10c152e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c152e6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c152e9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c152ec jbe 0x10c1531a */
  if ((C.cf||C.zf)) goto L_10c1531a;
  /* 10c152ee lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10c152f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c152f5 call 0x10c156d0 */
  push32(0x10c152fau); f_10c156d0();
  /* 10c152fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c152fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c15300 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10c15304 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c15307 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c15309 push 0x10c39344 */
  push32((uint32_t)(0x10c39344u));
  /* 10c1530e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c15311 push ecx */
  push32((uint32_t)(ECX));
  /* 10c15312 call 0x10c160c0 */
  push32(0x10c15317u); f_10c160c0();
  /* 10c15317 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1531a:;
  /* 10c1531a push 0x10c39d9c */
  push32((uint32_t)(0x10c39d9cu));
  /* 10c1531f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10c15325 push edx */
  push32((uint32_t)(EDX));
  /* 10c15326 call 0x10c15850 */
  push32(0x10c1532bu); f_10c15850();
  /* 10c1532b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1532e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c15331 push eax */
  push32((uint32_t)(EAX));
  /* 10c15332 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10c15338 push ecx */
  push32((uint32_t)(ECX));
  /* 10c15339 call 0x10c15860 */
  push32(0x10c1533eu); f_10c15860();
  /* 10c1533e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15341 push 0x10c392bc */
  push32((uint32_t)(0x10c392bcu));
  /* 10c15346 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10c1534c push edx */
  push32((uint32_t)(EDX));
  /* 10c1534d call 0x10c15860 */
  push32(0x10c15352u); f_10c15860();
  /* 10c15352 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15355 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c15358 mov ecx, dword ptr [eax*8 + 0x10c3cab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10c3cab4)));
  /* 10c1535f push ecx */
  push32((uint32_t)(ECX));
  /* 10c15360 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10c15366 push edx */
  push32((uint32_t)(EDX));
  /* 10c15367 call 0x10c15860 */
  push32(0x10c1536cu); f_10c15860();
  /* 10c1536c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1536f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10c15374 push 0x10c39d74 */
  push32((uint32_t)(0x10c39d74u));
  /* 10c15379 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10c1537f push eax */
  push32((uint32_t)(EAX));
  /* 10c15380 call 0x10c16000 */
  push32(0x10c15385u); f_10c16000();
  /* 10c15385 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c15388:;
  /* 10c15388 pop edi */
  EDI = (pop32());
  /* 10c15389 pop esi */
  ESI = (pop32());
  /* 10c1538a pop ebx */
  EBX = (pop32());
  /* 10c1538b mov esp, ebp */
  ESP = (EBP);
  /* 10c1538d pop ebp */
  EBP = (pop32());
  /* 10c1538e ret  */
  ESPCHK(0x10c151d0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10c15390 (80 bytes, 27 insns) */
void f_10c15390(void) {
  FTRACE(0x10c15390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c15390 push ebp */
  push32((uint32_t)(EBP));
  /* 10c15391 mov ebp, esp */
  EBP = (ESP);
  /* 10c15393 push ecx */
  push32((uint32_t)(ECX));
  /* 10c15394 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c1539b jmp 0x10c153a6 */
  goto L_10c153a6;
L_10c1539d:;
  /* 10c1539d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c153a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c153a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c153a6:;
  /* 10c153a6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c153aa jae 0x10c153bf */
  if (!C.cf) goto L_10c153bf;
  /* 10c153ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c153af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c153b2 cmp edx, dword ptr [ecx*8 + 0x10c3cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10c3cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c153b9 jne 0x10c153bd */
  if (!C.zf) goto L_10c153bd;
  /* 10c153bb jmp 0x10c153bf */
  goto L_10c153bf;
L_10c153bd:;
  /* 10c153bd jmp 0x10c1539d */
  goto L_10c1539d;
L_10c153bf:;
  /* 10c153bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c153c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c153c5 cmp ecx, dword ptr [eax*8 + 0x10c3cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10c3cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c153cc jne 0x10c153da */
  if (!C.zf) goto L_10c153da;
  /* 10c153ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c153d1 mov eax, dword ptr [edx*8 + 0x10c3cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10c3cab4)));
  /* 10c153d8 jmp 0x10c153dc */
  goto L_10c153dc;
L_10c153da:;
  /* 10c153da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c153dc:;
  /* 10c153dc mov esp, ebp */
  ESP = (EBP);
  /* 10c153de pop ebp */
  EBP = (pop32());
  /* 10c153df ret  */
  ESPCHK(0x10c15390u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10c153e0 (66 bytes, 28 insns) */
void f_10c153e0(void) {
  FTRACE(0x10c153e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c153e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c153e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c153e3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c153e7 jne 0x10c15407 */
  if (!C.zf) goto L_10c15407;
  /* 10c153e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c153ed jge 0x10c15407 */
  if ((C.sf==C.of)) goto L_10c15407;
  /* 10c153ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10c153f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c153f4 push eax */
  push32((uint32_t)(EAX));
  /* 10c153f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c153f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c153f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c153fc push edx */
  push32((uint32_t)(EDX));
  /* 10c153fd call 0x10c15430 */
  push32(0x10c15402u); f_10c15430();
  /* 10c15402 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15405 jmp 0x10c1541d */
  goto L_10c1541d;
L_10c15407:;
  /* 10c15407 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c15409 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1540c push eax */
  push32((uint32_t)(EAX));
  /* 10c1540d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c15410 push ecx */
  push32((uint32_t)(ECX));
  /* 10c15411 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c15414 push edx */
  push32((uint32_t)(EDX));
  /* 10c15415 call 0x10c15430 */
  push32(0x10c1541au); f_10c15430();
  /* 10c1541a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1541d:;
  /* 10c1541d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c15420 pop ebp */
  EBP = (pop32());
  /* 10c15421 ret  */
  ESPCHK(0x10c153e0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10c15430 (194 bytes, 71 insns) */
void f_10c15430(void) {
  FTRACE(0x10c15430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c15430 push ebp */
  push32((uint32_t)(EBP));
  /* 10c15431 mov ebp, esp */
  EBP = (ESP);
  /* 10c15433 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c15436 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c15439 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1543c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15440 je 0x10c15459 */
  if (C.zf) goto L_10c15459;
  /* 10c15442 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15445 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10c15448 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1544b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1544e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c15451 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c15454 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c15456 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10c15459:;
  /* 10c15459 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1545c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c1545f:;
  /* 10c1545f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c15462 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c15464 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c15467 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c1546a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1546d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1546f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c15472 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c15475 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15479 jbe 0x10c15491 */
  if ((C.cf||C.zf)) goto L_10c15491;
  /* 10c1547b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1547e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15481 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15484 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c15486 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15489 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1548c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c1548f jmp 0x10c154a5 */
  goto L_10c154a5;
L_10c15491:;
  /* 10c15491 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c15494 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15497 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1549a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c1549c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1549f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c154a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c154a5:;
  /* 10c154a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c154a9 ja 0x10c1545f */
  if ((!C.cf&&!C.zf)) goto L_10c1545f;
  /* 10c154ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c154ae mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10c154b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c154b4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c154b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c154ba:;
  /* 10c154ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c154bd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c154bf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10c154c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c154c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c154c8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c154ca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c154cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c154cf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10c154d2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10c154d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c154d7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c154da mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c154dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c154e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c154e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c154e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c154e9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c154ec jb 0x10c154ba */
  if (C.cf) goto L_10c154ba;
  /* 10c154ee mov esp, ebp */
  ESP = (EBP);
  /* 10c154f0 pop ebp */
  EBP = (pop32());
  /* 10c154f1 ret  */
  ESPCHK(0x10c15430u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10c15500 (63 bytes, 24 insns) */
void f_10c15500(void) {
  FTRACE(0x10c15500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c15500 push ebp */
  push32((uint32_t)(EBP));
  /* 10c15501 mov ebp, esp */
  EBP = (ESP);
  /* 10c15503 push ecx */
  push32((uint32_t)(ECX));
  /* 10c15504 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15508 jne 0x10c15519 */
  if (!C.zf) goto L_10c15519;
  /* 10c1550a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1550e jge 0x10c15519 */
  if ((C.sf==C.of)) goto L_10c15519;
  /* 10c15510 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c15517 jmp 0x10c15520 */
  goto L_10c15520;
L_10c15519:;
  /* 10c15519 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c15520:;
  /* 10c15520 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15523 push eax */
  push32((uint32_t)(EAX));
  /* 10c15524 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c15527 push ecx */
  push32((uint32_t)(ECX));
  /* 10c15528 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1552b push edx */
  push32((uint32_t)(EDX));
  /* 10c1552c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1552f push eax */
  push32((uint32_t)(EAX));
  /* 10c15530 call 0x10c15430 */
  push32(0x10c15535u); f_10c15430();
  /* 10c15535 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15538 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1553b mov esp, ebp */
  ESP = (EBP);
  /* 10c1553d pop ebp */
  EBP = (pop32());
  /* 10c1553e ret  */
  ESPCHK(0x10c15500u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10c15540 (30 bytes, 14 insns) */
void f_10c15540(void) {
  FTRACE(0x10c15540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c15540 push ebp */
  push32((uint32_t)(EBP));
  /* 10c15541 mov ebp, esp */
  EBP = (ESP);
  /* 10c15543 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c15545 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c15548 push eax */
  push32((uint32_t)(EAX));
  /* 10c15549 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1554c push ecx */
  push32((uint32_t)(ECX));
  /* 10c1554d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c15550 push edx */
  push32((uint32_t)(EDX));
  /* 10c15551 call 0x10c15430 */
  push32(0x10c15556u); f_10c15430();
  /* 10c15556 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15559 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1555c pop ebp */
  EBP = (pop32());
  /* 10c1555d ret  */
  ESPCHK(0x10c15540u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10c15560 (72 bytes, 28 insns) */
void f_10c15560(void) {
  FTRACE(0x10c15560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c15560 push ebp */
  push32((uint32_t)(EBP));
  /* 10c15561 mov ebp, esp */
  EBP = (ESP);
  /* 10c15563 push ecx */
  push32((uint32_t)(ECX));
  /* 10c15564 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15568 jne 0x10c15581 */
  if (!C.zf) goto L_10c15581;
  /* 10c1556a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1556e jg 0x10c15581 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c15581;
  /* 10c15570 jl 0x10c15578 */
  if ((C.sf!=C.of)) goto L_10c15578;
  /* 10c15572 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15576 jae 0x10c15581 */
  if (!C.cf) goto L_10c15581;
L_10c15578:;
  /* 10c15578 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c1557f jmp 0x10c15588 */
  goto L_10c15588;
L_10c15581:;
  /* 10c15581 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c15588:;
  /* 10c15588 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1558b push eax */
  push32((uint32_t)(EAX));
  /* 10c1558c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1558f push ecx */
  push32((uint32_t)(ECX));
  /* 10c15590 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c15593 push edx */
  push32((uint32_t)(EDX));
  /* 10c15594 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c15597 push eax */
  push32((uint32_t)(EAX));
  /* 10c15598 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1559b push ecx */
  push32((uint32_t)(ECX));
  /* 10c1559c call 0x10c155b0 */
  push32(0x10c155a1u); f_10c155b0();
  /* 10c155a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c155a4 mov esp, ebp */
  ESP = (EBP);
  /* 10c155a6 pop ebp */
  EBP = (pop32());
  /* 10c155a7 ret  */
  ESPCHK(0x10c15560u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10c155b0 (242 bytes, 91 insns) */
void f_10c155b0(void) {
  FTRACE(0x10c155b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c155b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c155b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c155b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c155b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c155b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c155bc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c155c0 je 0x10c155e4 */
  if (C.zf) goto L_10c155e4;
  /* 10c155c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c155c5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10c155c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c155cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c155ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c155d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c155d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c155d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c155d9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c155dc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c155de mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c155e1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10c155e4:;
  /* 10c155e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c155e7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c155ea:;
  /* 10c155ea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c155ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c155ef push ecx */
  push32((uint32_t)(ECX));
  /* 10c155f0 push eax */
  push32((uint32_t)(EAX));
  /* 10c155f1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c155f4 push edx */
  push32((uint32_t)(EDX));
  /* 10c155f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c155f8 push eax */
  push32((uint32_t)(EAX));
  /* 10c155f9 call 0x10c19530 */
  push32(0x10c155feu); f_10c19530();
  /* 10c155fe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c15601 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c15604 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c15606 push edx */
  push32((uint32_t)(EDX));
  /* 10c15607 push ecx */
  push32((uint32_t)(ECX));
  /* 10c15608 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1560b push eax */
  push32((uint32_t)(EAX));
  /* 10c1560c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1560f push ecx */
  push32((uint32_t)(ECX));
  /* 10c15610 call 0x10c194c0 */
  push32(0x10c15615u); f_10c194c0();
  /* 10c15615 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c15618 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10c1561b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1561f jbe 0x10c15637 */
  if ((C.cf||C.zf)) goto L_10c15637;
  /* 10c15621 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c15624 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15627 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1562a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c1562c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1562f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15632 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c15635 jmp 0x10c1564b */
  goto L_10c1564b;
L_10c15637:;
  /* 10c15637 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1563a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1563d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15640 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c15642 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15645 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15648 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c1564b:;
  /* 10c1564b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1564f ja 0x10c155ea */
  if ((!C.cf&&!C.zf)) goto L_10c155ea;
  /* 10c15651 jb 0x10c15659 */
  if (C.cf) goto L_10c15659;
  /* 10c15653 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15657 ja 0x10c155ea */
  if ((!C.cf&&!C.zf)) goto L_10c155ea;
L_10c15659:;
  /* 10c15659 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1565c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10c1565f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15662 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c15665 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c15668:;
  /* 10c15668 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1566b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c1566d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10c15670 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15673 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c15676 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c15678 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c1567a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1567d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10c15680 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10c15682 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15685 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c15688 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c1568b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1568e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15691 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c15694 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c15697 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1569a jb 0x10c15668 */
  if (C.cf) goto L_10c15668;
  /* 10c1569c mov esp, ebp */
  ESP = (EBP);
  /* 10c1569e pop ebp */
  EBP = (pop32());
  /* 10c1569f ret 0x14 */
  ESPCHK(0x10c155b0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10c156b0 (31 bytes, 15 insns) */
void f_10c156b0(void) {
  FTRACE(0x10c156b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c156b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c156b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c156b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c156b5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c156b8 push eax */
  push32((uint32_t)(EAX));
  /* 10c156b9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c156bc push ecx */
  push32((uint32_t)(ECX));
  /* 10c156bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c156c0 push edx */
  push32((uint32_t)(EDX));
  /* 10c156c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c156c4 push eax */
  push32((uint32_t)(EAX));
  /* 10c156c5 call 0x10c155b0 */
  push32(0x10c156cau); f_10c155b0();
  /* 10c156ca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c156cd pop ebp */
  EBP = (pop32());
  /* 10c156ce ret  */
  ESPCHK(0x10c156b0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10c156d0 (123 bytes, 44 insns) */
void f_10c156d0(void) {
  FTRACE(0x10c156d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c156d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c156d4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10c156da je 0x10c156f0 */
  if (C.zf) goto L_10c156f0;
L_10c156dc:;
  /* 10c156dc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10c156de inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10c156df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c156e1 je 0x10c15723 */
  if (C.zf) goto L_10c15723;
  /* 10c156e3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10c156e9 jne 0x10c156dc */
  if (!C.zf) goto L_10c156dc;
  /* 10c156eb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10c156f0:;
  /* 10c156f0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10c156f2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10c156f7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c156f9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c156fc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c156fe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15701 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10c15706 je 0x10c156f0 */
  if (C.zf) goto L_10c156f0;
  /* 10c15708 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10c1570b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c1570d je 0x10c15741 */
  if (C.zf) goto L_10c15741;
  /* 10c1570f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10c15711 je 0x10c15737 */
  if (C.zf) goto L_10c15737;
  /* 10c15713 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10c15718 je 0x10c1572d */
  if (C.zf) goto L_10c1572d;
  /* 10c1571a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10c1571f je 0x10c15723 */
  if (C.zf) goto L_10c15723;
  /* 10c15721 jmp 0x10c156f0 */
  goto L_10c156f0;
L_10c15723:;
  /* 10c15723 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10c15726 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c1572a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1572c ret  */
  ESPCHK(0x10c156d0u, _esp0);
  ESP += 4; return;
L_10c1572d:;
  /* 10c1572d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10c15730 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c15734 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c15736 ret  */
  ESPCHK(0x10c156d0u, _esp0);
  ESP += 4; return;
L_10c15737:;
  /* 10c15737 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10c1573a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c1573e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c15740 ret  */
  ESPCHK(0x10c156d0u, _esp0);
  ESP += 4; return;
L_10c15741:;
  /* 10c15741 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10c15744 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c15748 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1574a ret  */
  ESPCHK(0x10c156d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005750 @ 0x10c15750 (249 bytes, 93 insns) */
void f_10c15750(void) {
  FTRACE(0x10c15750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c15750 push ebp */
  push32((uint32_t)(EBP));
  /* 10c15751 mov ebp, esp */
  EBP = (ESP);
  /* 10c15753 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c15756 push ebx */
  push32((uint32_t)(EBX));
  /* 10c15757 push esi */
  push32((uint32_t)(ESI));
  /* 10c15758 push edi */
  push32((uint32_t)(EDI));
  /* 10c15759 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10c1575c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c1575f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10c15762 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10c15765:;
  /* 10c15765 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15769 jne 0x10c15789 */
  if (!C.zf) goto L_10c15789;
  /* 10c1576b push 0x10c39dd4 */
  push32((uint32_t)(0x10c39dd4u));
  /* 10c15770 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c15772 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10c15774 push 0x10c39dc8 */
  push32((uint32_t)(0x10c39dc8u));
  /* 10c15779 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1577b call 0x10c11960 */
  push32(0x10c15780u); f_10c11960();
  /* 10c15780 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15783 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15786 jne 0x10c15789 */
  if (!C.zf) goto L_10c15789;
  /* 10c15788 int3  */
  x86_unimpl("int3 @ 0x10c15788");
L_10c15789:;
  /* 10c15789 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1578b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1578d jne 0x10c15765 */
  if (!C.zf) goto L_10c15765;
L_10c1578f:;
  /* 10c1578f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15793 jne 0x10c157b3 */
  if (!C.zf) goto L_10c157b3;
  /* 10c15795 push 0x10c39db8 */
  push32((uint32_t)(0x10c39db8u));
  /* 10c1579a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1579c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10c1579e push 0x10c39dc8 */
  push32((uint32_t)(0x10c39dc8u));
  /* 10c157a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c157a5 call 0x10c11960 */
  push32(0x10c157aau); f_10c11960();
  /* 10c157aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c157ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c157b0 jne 0x10c157b3 */
  if (!C.zf) goto L_10c157b3;
  /* 10c157b2 int3  */
  x86_unimpl("int3 @ 0x10c157b2");
L_10c157b3:;
  /* 10c157b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c157b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c157b7 jne 0x10c1578f */
  if (!C.zf) goto L_10c1578f;
  /* 10c157b9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c157bc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10c157c3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c157c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c157c9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c157cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c157cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c157d2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c157d4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c157d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c157da mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10c157dd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c157e0 push edx */
  push32((uint32_t)(EDX));
  /* 10c157e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c157e4 push eax */
  push32((uint32_t)(EAX));
  /* 10c157e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c157e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c157e9 call 0x10c19830 */
  push32(0x10c157eeu); f_10c19830();
  /* 10c157ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c157f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c157f4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c157f7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c157fa sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c157fd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c15800 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10c15803 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c15806 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1580a jl 0x10c1582e */
  if ((C.sf!=C.of)) goto L_10c1582e;
  /* 10c1580c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c1580f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c15811 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10c15814 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c15816 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1581c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10c1581f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c15822 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c15824 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15827 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c1582a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c1582c jmp 0x10c1583f */
  goto L_10c1583f;
L_10c1582e:;
  /* 10c1582e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c15831 push eax */
  push32((uint32_t)(EAX));
  /* 10c15832 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c15834 call 0x10c195b0 */
  push32(0x10c15839u); f_10c195b0();
  /* 10c15839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1583c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10c1583f:;
  /* 10c1583f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c15842 pop edi */
  EDI = (pop32());
  /* 10c15843 pop esi */
  ESI = (pop32());
  /* 10c15844 pop ebx */
  EBX = (pop32());
  /* 10c15845 mov esp, ebp */
  ESP = (EBP);
  /* 10c15847 pop ebp */
  EBP = (pop32());
  /* 10c15848 ret  */
  ESPCHK(0x10c15750u, _esp0);
  ESP += 4; return;
}

/* FUN_10005850 @ 0x10c15850 (7 bytes, 3 insns) */
void f_10c15850(void) {
  FTRACE(0x10c15850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c15850 push edi */
  push32((uint32_t)(EDI));
  /* 10c15851 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10c15855 jmp 0x10c158c1 */
  jmp_ind(0x10c158c1u); return;
}

/* FUN_10005860 @ 0x10c15860 (224 bytes, 84 insns) */
void f_10c15860(void) {
  FTRACE(0x10c15860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c15860 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c15864 push edi */
  push32((uint32_t)(EDI));
  /* 10c15865 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10c1586b je 0x10c1587c */
  if (C.zf) goto L_10c1587c;
L_10c1586d:;
  /* 10c1586d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10c1586f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10c15870 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c15872 je 0x10c158af */
  if (C.zf) goto L_10c158af;
  /* 10c15874 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10c1587a jne 0x10c1586d */
  if (!C.zf) goto L_10c1586d;
L_10c1587c:;
  /* 10c1587c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10c1587e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10c15883 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15885 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c15888 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1588a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1588d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10c15892 je 0x10c1587c */
  if (C.zf) goto L_10c1587c;
  /* 10c15894 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10c15897 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c15899 je 0x10c158be */
  if (C.zf) goto L_10c158be;
  /* 10c1589b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10c1589d je 0x10c158b9 */
  if (C.zf) goto L_10c158b9;
  /* 10c1589f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10c158a4 je 0x10c158b4 */
  if (C.zf) goto L_10c158b4;
  /* 10c158a6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10c158ab je 0x10c158af */
  if (C.zf) goto L_10c158af;
  /* 10c158ad jmp 0x10c1587c */
  goto L_10c1587c;
L_10c158af:;
  /* 10c158af lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10c158b2 jmp 0x10c158c1 */
  goto L_10c158c1;
L_10c158b4:;
  /* 10c158b4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10c158b7 jmp 0x10c158c1 */
  goto L_10c158c1;
L_10c158b9:;
  /* 10c158b9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10c158bc jmp 0x10c158c1 */
  goto L_10c158c1;
L_10c158be:;
  /* 10c158be lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10c158c1:;
  /* 10c158c1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c158c5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10c158cb je 0x10c158e6 */
  if (C.zf) goto L_10c158e6;
L_10c158cd:;
  /* 10c158cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c158cf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10c158d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10c158d2 je 0x10c15938 */
  if (C.zf) goto L_10c15938;
  /* 10c158d4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10c158d6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c158d7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10c158dd jne 0x10c158cd */
  if (!C.zf) goto L_10c158cd;
  /* 10c158df jmp 0x10c158e6 */
  goto L_10c158e6;
L_10c158e1:;
  /* 10c158e1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10c158e3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10c158e6:;
  /* 10c158e6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10c158eb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10c158ed add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c158ef xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c158f2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c158f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c158f6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c158f9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10c158fe je 0x10c158e1 */
  if (C.zf) goto L_10c158e1;
  /* 10c15900 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10c15902 je 0x10c15938 */
  if (C.zf) goto L_10c15938;
  /* 10c15904 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10c15906 je 0x10c1592f */
  if (C.zf) goto L_10c1592f;
  /* 10c15908 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10c1590e je 0x10c15922 */
  if (C.zf) goto L_10c15922;
  /* 10c15910 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10c15916 je 0x10c1591a */
  if (C.zf) goto L_10c1591a;
  /* 10c15918 jmp 0x10c158e1 */
  goto L_10c158e1;
L_10c1591a:;
  /* 10c1591a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10c1591c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c15920 pop edi */
  EDI = (pop32());
  /* 10c15921 ret  */
  ESPCHK(0x10c15860u, _esp0);
  ESP += 4; return;
L_10c15922:;
  /* 10c15922 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10c15925 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c15929 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10c1592d pop edi */
  EDI = (pop32());
  /* 10c1592e ret  */
  ESPCHK(0x10c15860u, _esp0);
  ESP += 4; return;
L_10c1592f:;
  /* 10c1592f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10c15932 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c15936 pop edi */
  EDI = (pop32());
  /* 10c15937 ret  */
  ESPCHK(0x10c15860u, _esp0);
  ESP += 4; return;
L_10c15938:;
  /* 10c15938 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10c1593a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c1593e pop edi */
  EDI = (pop32());
  /* 10c1593f ret  */
  ESPCHK(0x10c15860u, _esp0);
  ESP += 4; return;
}

/* FUN_10005940 @ 0x10c15940 (243 bytes, 91 insns) */
void f_10c15940(void) {
  FTRACE(0x10c15940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c15940 push ebp */
  push32((uint32_t)(EBP));
  /* 10c15941 mov ebp, esp */
  EBP = (ESP);
  /* 10c15943 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c15946 push ebx */
  push32((uint32_t)(EBX));
  /* 10c15947 push esi */
  push32((uint32_t)(ESI));
  /* 10c15948 push edi */
  push32((uint32_t)(EDI));
  /* 10c15949 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10c1594c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c1594f:;
  /* 10c1594f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15953 jne 0x10c15973 */
  if (!C.zf) goto L_10c15973;
  /* 10c15955 push 0x10c39dd4 */
  push32((uint32_t)(0x10c39dd4u));
  /* 10c1595a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1595c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10c1595e push 0x10c39de4 */
  push32((uint32_t)(0x10c39de4u));
  /* 10c15963 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c15965 call 0x10c11960 */
  push32(0x10c1596au); f_10c11960();
  /* 10c1596a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1596d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15970 jne 0x10c15973 */
  if (!C.zf) goto L_10c15973;
  /* 10c15972 int3  */
  x86_unimpl("int3 @ 0x10c15972");
L_10c15973:;
  /* 10c15973 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c15975 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c15977 jne 0x10c1594f */
  if (!C.zf) goto L_10c1594f;
L_10c15979:;
  /* 10c15979 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1597d jne 0x10c1599d */
  if (!C.zf) goto L_10c1599d;
  /* 10c1597f push 0x10c39db8 */
  push32((uint32_t)(0x10c39db8u));
  /* 10c15984 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c15986 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10c15988 push 0x10c39de4 */
  push32((uint32_t)(0x10c39de4u));
  /* 10c1598d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1598f call 0x10c11960 */
  push32(0x10c15994u); f_10c11960();
  /* 10c15994 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15997 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1599a jne 0x10c1599d */
  if (!C.zf) goto L_10c1599d;
  /* 10c1599c int3  */
  x86_unimpl("int3 @ 0x10c1599c");
L_10c1599d:;
  /* 10c1599d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1599f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c159a1 jne 0x10c15979 */
  if (!C.zf) goto L_10c15979;
  /* 10c159a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c159a6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10c159ad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c159b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c159b3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10c159b6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c159b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c159bc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c159be mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c159c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c159c4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10c159c7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c159ca push ecx */
  push32((uint32_t)(ECX));
  /* 10c159cb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c159ce push edx */
  push32((uint32_t)(EDX));
  /* 10c159cf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c159d2 push eax */
  push32((uint32_t)(EAX));
  /* 10c159d3 call 0x10c19830 */
  push32(0x10c159d8u); f_10c19830();
  /* 10c159d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c159db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c159de mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c159e1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c159e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c159e7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c159ea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c159ed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c159f0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c159f4 jl 0x10c15a18 */
  if ((C.sf!=C.of)) goto L_10c15a18;
  /* 10c159f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c159f9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c159fb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c159fe xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c15a00 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c15a06 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10c15a09 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c15a0c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c15a0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15a11 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c15a14 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c15a16 jmp 0x10c15a29 */
  goto L_10c15a29;
L_10c15a18:;
  /* 10c15a18 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c15a1b push edx */
  push32((uint32_t)(EDX));
  /* 10c15a1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c15a1e call 0x10c195b0 */
  push32(0x10c15a23u); f_10c195b0();
  /* 10c15a23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15a26 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10c15a29:;
  /* 10c15a29 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c15a2c pop edi */
  EDI = (pop32());
  /* 10c15a2d pop esi */
  ESI = (pop32());
  /* 10c15a2e pop ebx */
  EBX = (pop32());
  /* 10c15a2f mov esp, ebp */
  ESP = (EBP);
  /* 10c15a31 pop ebp */
  EBP = (pop32());
  /* 10c15a32 ret  */
  ESPCHK(0x10c15940u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a40 @ 0x10c15a40 (47 bytes, 17 insns) */
void f_10c15a40(void) {
  FTRACE(0x10c15a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c15a40 push ecx */
  push32((uint32_t)(ECX));
  /* 10c15a41 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15a46 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10c15a4a jb 0x10c15a60 */
  if (C.cf) goto L_10c15a60;
L_10c15a4c:;
  /* 10c15a4c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c15a52 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c15a57 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10c15a59 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15a5e jae 0x10c15a4c */
  if (!C.cf) goto L_10c15a4c;
L_10c15a60:;
  /* 10c15a60 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c15a62 mov eax, esp */
  EAX = (ESP);
  /* 10c15a64 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10c15a66 mov esp, ecx */
  ESP = (ECX);
  /* 10c15a68 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c15a6a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c15a6d push eax */
  push32((uint32_t)(EAX));
  /* 10c15a6e ret  */
  ESPCHK(0x10c15a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a70 @ 0x10c15a70 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10c15a70(void) {
  FTRACE(0x10c15a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c15a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c15a71 mov ebp, esp */
  EBP = (ESP);
  /* 10c15a73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c15a76 push esi */
  push32((uint32_t)(ESI));
  /* 10c15a77 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15a7b je 0x10c15a83 */
  if (C.zf) goto L_10c15a83;
  /* 10c15a7d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15a81 jne 0x10c15a88 */
  if (!C.zf) goto L_10c15a88;
L_10c15a83:;
  /* 10c15a83 jmp 0x10c15c58 */
  goto L_10c15c58;
L_10c15a88:;
  /* 10c15a88 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15a8c je 0x10c15aa4 */
  if (C.zf) goto L_10c15aa4;
  /* 10c15a8e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15a92 je 0x10c15aa4 */
  if (C.zf) goto L_10c15aa4;
  /* 10c15a94 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15a98 je 0x10c15aa4 */
  if (C.zf) goto L_10c15aa4;
  /* 10c15a9a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15a9e jne 0x10c15b81 */
  if (!C.zf) goto L_10c15b81;
L_10c15aa4:;
  /* 10c15aa4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c15aa6 call 0x10c162a0 */
  push32(0x10c15aabu); f_10c162a0();
  /* 10c15aab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15aae cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15ab2 je 0x10c15aba */
  if (C.zf) goto L_10c15aba;
  /* 10c15ab4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15ab8 jne 0x10c15aff */
  if (!C.zf) goto L_10c15aff;
L_10c15aba:;
  /* 10c15aba cmp dword ptr [0x10c3e574], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e574))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15ac1 jne 0x10c15aff */
  if (!C.zf) goto L_10c15aff;
  /* 10c15ac3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c15ac5 push 0x10c15ca0 */
  push32((uint32_t)(0x10c15ca0u));
  /* 10c15aca call dword ptr [0x10c402b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402b8))), 0x10c15ad0u);
  /* 10c15ad0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15ad3 jne 0x10c15ae1 */
  if (!C.zf) goto L_10c15ae1;
  /* 10c15ad5 mov dword ptr [0x10c3e574], 1 */
  w32((uint32_t)(0x10c3e574), (0x1u));
  /* 10c15adf jmp 0x10c15aff */
  goto L_10c15aff;
L_10c15ae1:;
  /* 10c15ae1 call dword ptr [0x10c40270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40270))), 0x10c15ae7u);
  /* 10c15ae7 mov esi, eax */
  ESI = (EAX);
  /* 10c15ae9 call 0x10c1a780 */
  push32(0x10c15aeeu); f_10c1a780();
  /* 10c15aee mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10c15af0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c15af2 call 0x10c16340 */
  push32(0x10c15af7u); f_10c16340();
  /* 10c15af7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15afa jmp 0x10c15c58 */
  goto L_10c15c58;
L_10c15aff:;
  /* 10c15aff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c15b02 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c15b05 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c15b08 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c15b0b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c15b0e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15b12 ja 0x10c15b72 */
  if ((!C.cf&&!C.zf)) goto L_10c15b72;
  /* 10c15b14 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c15b17 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c15b19 mov dl, byte ptr [eax + 0x10c15c7f] */
  DL = (r8((uint32_t)(EAX + 0x10c15c7f)));
  /* 10c15b1f jmp dword ptr [edx*4 + 0x10c15c6b] */
  switch (EDX) {
    case 0: goto L_10c15b26;
    case 1: goto L_10c15b60;
    case 2: goto L_10c15b3a;
    case 3: goto L_10c15b4d;
    case 4: goto L_10c15b72;
    default: x86_unimpl("switch@0x10c15b1f out of table"); return;
  }
L_10c15b26:;
  /* 10c15b26 mov ecx, dword ptr [0x10c3e564] */
  ECX = (r32((uint32_t)(0x10c3e564)));
  /* 10c15b2c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c15b2f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c15b32 mov dword ptr [0x10c3e564], edx */
  w32((uint32_t)(0x10c3e564), (EDX));
  /* 10c15b38 jmp 0x10c15b72 */
  goto L_10c15b72;
L_10c15b3a:;
  /* 10c15b3a mov eax, dword ptr [0x10c3e568] */
  EAX = (r32((uint32_t)(0x10c3e568)));
  /* 10c15b3f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c15b42 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c15b45 mov dword ptr [0x10c3e568], ecx */
  w32((uint32_t)(0x10c3e568), (ECX));
  /* 10c15b4b jmp 0x10c15b72 */
  goto L_10c15b72;
L_10c15b4d:;
  /* 10c15b4d mov edx, dword ptr [0x10c3e56c] */
  EDX = (r32((uint32_t)(0x10c3e56c)));
  /* 10c15b53 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c15b56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c15b59 mov dword ptr [0x10c3e56c], eax */
  w32((uint32_t)(0x10c3e56c), (EAX));
  /* 10c15b5e jmp 0x10c15b72 */
  goto L_10c15b72;
L_10c15b60:;
  /* 10c15b60 mov ecx, dword ptr [0x10c3e570] */
  ECX = (r32((uint32_t)(0x10c3e570)));
  /* 10c15b66 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c15b69 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c15b6c mov dword ptr [0x10c3e570], edx */
  w32((uint32_t)(0x10c3e570), (EDX));
L_10c15b72:;
  /* 10c15b72 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c15b74 call 0x10c16340 */
  push32(0x10c15b79u); f_10c16340();
  /* 10c15b79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15b7c jmp 0x10c15c53 */
  goto L_10c15c53;
L_10c15b81:;
  /* 10c15b81 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15b85 je 0x10c15b98 */
  if (C.zf) goto L_10c15b98;
  /* 10c15b87 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15b8b je 0x10c15b98 */
  if (C.zf) goto L_10c15b98;
  /* 10c15b8d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15b91 je 0x10c15b98 */
  if (C.zf) goto L_10c15b98;
  /* 10c15b93 jmp 0x10c15c58 */
  goto L_10c15c58;
L_10c15b98:;
  /* 10c15b98 call 0x10c122e0 */
  push32(0x10c15b9du); f_10c122e0();
  /* 10c15b9d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c15ba0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15ba3 cmp dword ptr [eax + 0x50], 0x10c3cc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10c3cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15baa jne 0x10c15bf5 */
  if (!C.zf) goto L_10c15bf5;
  /* 10c15bac push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10c15bb1 push 0x10c39df0 */
  push32((uint32_t)(0x10c39df0u));
  /* 10c15bb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c15bb8 mov ecx, dword ptr [0x10c3cc80] */
  ECX = (r32((uint32_t)(0x10c3cc80)));
  /* 10c15bbe push ecx */
  push32((uint32_t)(ECX));
  /* 10c15bbf call 0x10c128a0 */
  push32(0x10c15bc4u); f_10c128a0();
  /* 10c15bc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15bc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15bca mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10c15bcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15bd0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15bd4 je 0x10c15bf3 */
  if (C.zf) goto L_10c15bf3;
  /* 10c15bd6 mov ecx, dword ptr [0x10c3cc80] */
  ECX = (r32((uint32_t)(0x10c3cc80)));
  /* 10c15bdc push ecx */
  push32((uint32_t)(ECX));
  /* 10c15bdd push 0x10c3cc00 */
  push32((uint32_t)(0x10c3cc00u));
  /* 10c15be2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15be5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10c15be8 push eax */
  push32((uint32_t)(EAX));
  /* 10c15be9 call 0x10c19180 */
  push32(0x10c15beeu); f_10c19180();
  /* 10c15bee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15bf1 jmp 0x10c15bf5 */
  goto L_10c15bf5;
L_10c15bf3:;
  /* 10c15bf3 jmp 0x10c15c58 */
  goto L_10c15c58;
L_10c15bf5:;
  /* 10c15bf5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15bf8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10c15bfb push edx */
  push32((uint32_t)(EDX));
  /* 10c15bfc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c15bff push eax */
  push32((uint32_t)(EAX));
  /* 10c15c00 call 0x10c15f80 */
  push32(0x10c15c05u); f_10c15f80();
  /* 10c15c05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15c08 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c15c0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15c0f jne 0x10c15c13 */
  if (!C.zf) goto L_10c15c13;
  /* 10c15c11 jmp 0x10c15c58 */
  goto L_10c15c58;
L_10c15c13:;
  /* 10c15c13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c15c16 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c15c19 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c15c1c:;
  /* 10c15c1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c15c1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c15c22 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15c25 jne 0x10c15c53 */
  if (!C.zf) goto L_10c15c53;
  /* 10c15c27 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c15c2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c15c2d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c15c30 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c15c33 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15c36 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c15c39 mov edx, dword ptr [0x10c3cc84] */
  EDX = (r32((uint32_t)(0x10c3cc84)));
  /* 10c15c3f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c15c42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15c45 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10c15c48 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15c4a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15c4d jb 0x10c15c51 */
  if (C.cf) goto L_10c15c51;
  /* 10c15c4f jmp 0x10c15c53 */
  goto L_10c15c53;
L_10c15c51:;
  /* 10c15c51 jmp 0x10c15c1c */
  goto L_10c15c1c;
L_10c15c53:;
  /* 10c15c53 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c15c56 jmp 0x10c15c66 */
  goto L_10c15c66;
L_10c15c58:;
  /* 10c15c58 call 0x10c1a770 */
  push32(0x10c15c5du); f_10c1a770();
  /* 10c15c5d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10c15c63 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c15c66:;
  /* 10c15c66 pop esi */
  ESI = (pop32());
  /* 10c15c67 mov esp, ebp */
  ESP = (EBP);
  /* 10c15c69 pop ebp */
  EBP = (pop32());
  /* 10c15c6a ret  */
  ESPCHK(0x10c15a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ca0 @ 0x10c15ca0 (146 bytes, 45 insns) */
void f_10c15ca0(void) {
  FTRACE(0x10c15ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c15ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c15ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10c15ca3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c15ca6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c15ca8 call 0x10c162a0 */
  push32(0x10c15cadu); f_10c162a0();
  /* 10c15cad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15cb0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15cb4 jne 0x10c15cce */
  if (!C.zf) goto L_10c15cce;
  /* 10c15cb6 mov dword ptr [ebp - 8], 0x10c3e564 */
  w32((uint32_t)(EBP + -0x8), (0x10c3e564u));
  /* 10c15cbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c15cc0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c15cc2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c15cc5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10c15ccc jmp 0x10c15ce4 */
  goto L_10c15ce4;
L_10c15cce:;
  /* 10c15cce mov dword ptr [ebp - 8], 0x10c3e568 */
  w32((uint32_t)(EBP + -0x8), (0x10c3e568u));
  /* 10c15cd5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c15cd8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c15cda mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c15cdd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10c15ce4:;
  /* 10c15ce4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15ce8 jne 0x10c15cf8 */
  if (!C.zf) goto L_10c15cf8;
  /* 10c15cea push 1 */
  push32((uint32_t)(0x1u));
  /* 10c15cec call 0x10c16340 */
  push32(0x10c15cf1u); f_10c16340();
  /* 10c15cf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15cf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c15cf6 jmp 0x10c15d2c */
  goto L_10c15d2c;
L_10c15cf8:;
  /* 10c15cf8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15cfc je 0x10c15d1d */
  if (C.zf) goto L_10c15d1d;
  /* 10c15cfe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c15d01 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10c15d07 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c15d09 call 0x10c16340 */
  push32(0x10c15d0eu); f_10c16340();
  /* 10c15d0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15d11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15d14 push edx */
  push32((uint32_t)(EDX));
  /* 10c15d15 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10c15d18u);
  /* 10c15d18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15d1b jmp 0x10c15d27 */
  goto L_10c15d27;
L_10c15d1d:;
  /* 10c15d1d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c15d1f call 0x10c16340 */
  push32(0x10c15d24u); f_10c16340();
  /* 10c15d24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c15d27:;
  /* 10c15d27 mov eax, 1 */
  EAX = (0x1u);
L_10c15d2c:;
  /* 10c15d2c mov esp, ebp */
  ESP = (EBP);
  /* 10c15d2e pop ebp */
  EBP = (pop32());
  /* 10c15d2f ret 4 */
  ESPCHK(0x10c15ca0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005d40 @ 0x10c15d40 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10c15d40(void) {
  FTRACE(0x10c15d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c15d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10c15d41 mov ebp, esp */
  EBP = (ESP);
  /* 10c15d43 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c15d46 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c15d4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c15d50 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c15d53 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c15d56 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c15d59 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c15d5c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15d60 ja 0x10c15e0e */
  if ((!C.cf&&!C.zf)) goto L_10c15e0e;
  /* 10c15d66 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c15d69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c15d6b mov dl, byte ptr [eax + 0x10c15f62] */
  DL = (r8((uint32_t)(EAX + 0x10c15f62)));
  /* 10c15d71 jmp dword ptr [edx*4 + 0x10c15f4a] */
  switch (EDX) {
    case 0: goto L_10c15d78;
    case 1: goto L_10c15de3;
    case 2: goto L_10c15dc9;
    case 3: goto L_10c15d95;
    case 4: goto L_10c15daf;
    case 5: goto L_10c15e0e;
    default: x86_unimpl("switch@0x10c15d71 out of table"); return;
  }
L_10c15d78:;
  /* 10c15d78 mov dword ptr [ebp - 0x18], 0x10c3e564 */
  w32((uint32_t)(EBP + -0x18), (0x10c3e564u));
  /* 10c15d7f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c15d82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c15d84 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c15d87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c15d8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15d8d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c15d90 jmp 0x10c15e16 */
  goto L_10c15e16;
L_10c15d95:;
  /* 10c15d95 mov dword ptr [ebp - 0x18], 0x10c3e568 */
  w32((uint32_t)(EBP + -0x18), (0x10c3e568u));
  /* 10c15d9c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c15d9f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c15da1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c15da4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c15da7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15daa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c15dad jmp 0x10c15e16 */
  goto L_10c15e16;
L_10c15daf:;
  /* 10c15daf mov dword ptr [ebp - 0x18], 0x10c3e56c */
  w32((uint32_t)(EBP + -0x18), (0x10c3e56cu));
  /* 10c15db6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c15db9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c15dbb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c15dbe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c15dc1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15dc4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c15dc7 jmp 0x10c15e16 */
  goto L_10c15e16;
L_10c15dc9:;
  /* 10c15dc9 mov dword ptr [ebp - 0x18], 0x10c3e570 */
  w32((uint32_t)(EBP + -0x18), (0x10c3e570u));
  /* 10c15dd0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c15dd3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c15dd5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c15dd8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c15ddb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15dde mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c15de1 jmp 0x10c15e16 */
  goto L_10c15e16;
L_10c15de3:;
  /* 10c15de3 call 0x10c122e0 */
  push32(0x10c15de8u); f_10c122e0();
  /* 10c15de8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c15deb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15dee mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10c15df1 push edx */
  push32((uint32_t)(EDX));
  /* 10c15df2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c15df5 push eax */
  push32((uint32_t)(EAX));
  /* 10c15df6 call 0x10c15f80 */
  push32(0x10c15dfbu); f_10c15f80();
  /* 10c15dfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15dfe add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15e01 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c15e04 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c15e07 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c15e09 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c15e0c jmp 0x10c15e16 */
  goto L_10c15e16;
L_10c15e0e:;
  /* 10c15e0e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c15e11 jmp 0x10c15f46 */
  goto L_10c15f46;
L_10c15e16:;
  /* 10c15e16 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15e1a je 0x10c15e26 */
  if (C.zf) goto L_10c15e26;
  /* 10c15e1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c15e1e call 0x10c162a0 */
  push32(0x10c15e23u); f_10c162a0();
  /* 10c15e23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c15e26:;
  /* 10c15e26 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15e2a jne 0x10c15e43 */
  if (!C.zf) goto L_10c15e43;
  /* 10c15e2c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15e30 je 0x10c15e3c */
  if (C.zf) goto L_10c15e3c;
  /* 10c15e32 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c15e34 call 0x10c16340 */
  push32(0x10c15e39u); f_10c16340();
  /* 10c15e39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c15e3c:;
  /* 10c15e3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c15e3e jmp 0x10c15f46 */
  goto L_10c15f46;
L_10c15e43:;
  /* 10c15e43 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15e47 jne 0x10c15e60 */
  if (!C.zf) goto L_10c15e60;
  /* 10c15e49 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15e4d je 0x10c15e59 */
  if (C.zf) goto L_10c15e59;
  /* 10c15e4f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c15e51 call 0x10c16340 */
  push32(0x10c15e56u); f_10c16340();
  /* 10c15e56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c15e59:;
  /* 10c15e59 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c15e5b call 0x10c12060 */
  push32(0x10c15e60u); f_10c12060();
L_10c15e60:;
  /* 10c15e60 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15e64 je 0x10c15e72 */
  if (C.zf) goto L_10c15e72;
  /* 10c15e66 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15e6a je 0x10c15e72 */
  if (C.zf) goto L_10c15e72;
  /* 10c15e6c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15e70 jne 0x10c15e9e */
  if (!C.zf) goto L_10c15e9e;
L_10c15e72:;
  /* 10c15e72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15e75 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10c15e78 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c15e7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15e7e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10c15e85 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15e89 jne 0x10c15e9e */
  if (!C.zf) goto L_10c15e9e;
  /* 10c15e8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15e8e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10c15e91 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c15e94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15e97 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10c15e9e:;
  /* 10c15e9e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15ea2 jne 0x10c15ee0 */
  if (!C.zf) goto L_10c15ee0;
  /* 10c15ea4 mov eax, dword ptr [0x10c3cc78] */
  EAX = (r32((uint32_t)(0x10c3cc78)));
  /* 10c15ea9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c15eac jmp 0x10c15eb7 */
  goto L_10c15eb7;
L_10c15eae:;
  /* 10c15eae mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c15eb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15eb4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c15eb7:;
  /* 10c15eb7 mov edx, dword ptr [0x10c3cc78] */
  EDX = (r32((uint32_t)(0x10c3cc78)));
  /* 10c15ebd add edx, dword ptr [0x10c3cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c3cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15ec3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15ec6 jge 0x10c15ede */
  if ((C.sf==C.of)) goto L_10c15ede;
  /* 10c15ec8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c15ecb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c15ece mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15ed1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10c15ed4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10c15edc jmp 0x10c15eae */
  goto L_10c15eae;
L_10c15ede:;
  /* 10c15ede jmp 0x10c15ee9 */
  goto L_10c15ee9;
L_10c15ee0:;
  /* 10c15ee0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c15ee3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10c15ee9:;
  /* 10c15ee9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15eed je 0x10c15ef9 */
  if (C.zf) goto L_10c15ef9;
  /* 10c15eef push 1 */
  push32((uint32_t)(0x1u));
  /* 10c15ef1 call 0x10c16340 */
  push32(0x10c15ef6u); f_10c16340();
  /* 10c15ef6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c15ef9:;
  /* 10c15ef9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15efd jne 0x10c15f10 */
  if (!C.zf) goto L_10c15f10;
  /* 10c15eff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15f02 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10c15f05 push edx */
  push32((uint32_t)(EDX));
  /* 10c15f06 push 8 */
  push32((uint32_t)(0x8u));
  /* 10c15f08 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10c15f0bu);
  /* 10c15f0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15f0e jmp 0x10c15f1a */
  goto L_10c15f1a;
L_10c15f10:;
  /* 10c15f10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c15f13 push eax */
  push32((uint32_t)(EAX));
  /* 10c15f14 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10c15f17u);
  /* 10c15f17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c15f1a:;
  /* 10c15f1a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15f1e je 0x10c15f2c */
  if (C.zf) goto L_10c15f2c;
  /* 10c15f20 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15f24 je 0x10c15f2c */
  if (C.zf) goto L_10c15f2c;
  /* 10c15f26 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15f2a jne 0x10c15f44 */
  if (!C.zf) goto L_10c15f44;
L_10c15f2c:;
  /* 10c15f2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15f2f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c15f32 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10c15f35 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15f39 jne 0x10c15f44 */
  if (!C.zf) goto L_10c15f44;
  /* 10c15f3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15f3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c15f41 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10c15f44:;
  /* 10c15f44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c15f46:;
  /* 10c15f46 mov esp, ebp */
  ESP = (EBP);
  /* 10c15f48 pop ebp */
  EBP = (pop32());
  /* 10c15f49 ret  */
  ESPCHK(0x10c15d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f80 @ 0x10c15f80 (91 bytes, 35 insns) */
void f_10c15f80(void) {
  FTRACE(0x10c15f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c15f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10c15f81 mov ebp, esp */
  EBP = (ESP);
  /* 10c15f83 push ecx */
  push32((uint32_t)(ECX));
  /* 10c15f84 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c15f87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c15f8a:;
  /* 10c15f8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15f8d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c15f90 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15f93 je 0x10c15fb3 */
  if (C.zf) goto L_10c15fb3;
  /* 10c15f95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15f98 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15f9b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c15f9e mov ecx, dword ptr [0x10c3cc84] */
  ECX = (r32((uint32_t)(0x10c3cc84)));
  /* 10c15fa4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c15fa7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c15faa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15fac cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15faf jae 0x10c15fb3 */
  if (!C.cf) goto L_10c15fb3;
  /* 10c15fb1 jmp 0x10c15f8a */
  goto L_10c15f8a;
L_10c15fb3:;
  /* 10c15fb3 mov eax, dword ptr [0x10c3cc84] */
  EAX = (r32((uint32_t)(0x10c3cc84)));
  /* 10c15fb8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c15fbb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c15fbe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15fc0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15fc3 jae 0x10c15fd5 */
  if (!C.cf) goto L_10c15fd5;
  /* 10c15fc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15fc8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c15fcb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c15fce jne 0x10c15fd5 */
  if (!C.zf) goto L_10c15fd5;
  /* 10c15fd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c15fd3 jmp 0x10c15fd7 */
  goto L_10c15fd7;
L_10c15fd5:;
  /* 10c15fd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c15fd7:;
  /* 10c15fd7 mov esp, ebp */
  ESP = (EBP);
  /* 10c15fd9 pop ebp */
  EBP = (pop32());
  /* 10c15fda ret  */
  ESPCHK(0x10c15f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fe0 @ 0x10c15fe0 (13 bytes, 6 insns) */
void f_10c15fe0(void) {
  FTRACE(0x10c15fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c15fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c15fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10c15fe3 call 0x10c122e0 */
  push32(0x10c15fe8u); f_10c122e0();
  /* 10c15fe8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15feb pop ebp */
  EBP = (pop32());
  /* 10c15fec ret  */
  ESPCHK(0x10c15fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ff0 @ 0x10c15ff0 (13 bytes, 6 insns) */
void f_10c15ff0(void) {
  FTRACE(0x10c15ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c15ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c15ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10c15ff3 call 0x10c122e0 */
  push32(0x10c15ff8u); f_10c122e0();
  /* 10c15ff8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c15ffb pop ebp */
  EBP = (pop32());
  /* 10c15ffc ret  */
  ESPCHK(0x10c15ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006000 @ 0x10c16000 (187 bytes, 54 insns) */
void f_10c16000(void) {
  FTRACE(0x10c16000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16000 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16001 mov ebp, esp */
  EBP = (ESP);
  /* 10c16003 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16006 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c1600d cmp dword ptr [0x10c3e578], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e578))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16014 jne 0x10c16073 */
  if (!C.zf) goto L_10c16073;
  /* 10c16016 push 0x10c3921c */
  push32((uint32_t)(0x10c3921cu));
  /* 10c1601b call dword ptr [0x10c40240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40240))), 0x10c16021u);
  /* 10c16021 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c16024 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16028 je 0x10c16047 */
  if (C.zf) goto L_10c16047;
  /* 10c1602a push 0x10c39e20 */
  push32((uint32_t)(0x10c39e20u));
  /* 10c1602f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16032 push eax */
  push32((uint32_t)(EAX));
  /* 10c16033 call dword ptr [0x10c4023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4023c))), 0x10c16039u);
  /* 10c16039 mov dword ptr [0x10c3e578], eax */
  w32((uint32_t)(0x10c3e578), (EAX));
  /* 10c1603e cmp dword ptr [0x10c3e578], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e578))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16045 jne 0x10c1604b */
  if (!C.zf) goto L_10c1604b;
L_10c16047:;
  /* 10c16047 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c16049 jmp 0x10c160b7 */
  goto L_10c160b7;
L_10c1604b:;
  /* 10c1604b push 0x10c39e10 */
  push32((uint32_t)(0x10c39e10u));
  /* 10c16050 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16053 push ecx */
  push32((uint32_t)(ECX));
  /* 10c16054 call dword ptr [0x10c4023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4023c))), 0x10c1605au);
  /* 10c1605a mov dword ptr [0x10c3e57c], eax */
  w32((uint32_t)(0x10c3e57c), (EAX));
  /* 10c1605f push 0x10c39dfc */
  push32((uint32_t)(0x10c39dfcu));
  /* 10c16064 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16067 push edx */
  push32((uint32_t)(EDX));
  /* 10c16068 call dword ptr [0x10c4023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4023c))), 0x10c1606eu);
  /* 10c1606e mov dword ptr [0x10c3e580], eax */
  w32((uint32_t)(0x10c3e580), (EAX));
L_10c16073:;
  /* 10c16073 cmp dword ptr [0x10c3e57c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e57c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1607a je 0x10c16085 */
  if (C.zf) goto L_10c16085;
  /* 10c1607c call dword ptr [0x10c3e57c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3e57c))), 0x10c16082u);
  /* 10c16082 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c16085:;
  /* 10c16085 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16089 je 0x10c160a1 */
  if (C.zf) goto L_10c160a1;
  /* 10c1608b cmp dword ptr [0x10c3e580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16092 je 0x10c160a1 */
  if (C.zf) goto L_10c160a1;
  /* 10c16094 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16097 push eax */
  push32((uint32_t)(EAX));
  /* 10c16098 call dword ptr [0x10c3e580] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3e580))), 0x10c1609eu);
  /* 10c1609e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c160a1:;
  /* 10c160a1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c160a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c160a5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c160a8 push edx */
  push32((uint32_t)(EDX));
  /* 10c160a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c160ac push eax */
  push32((uint32_t)(EAX));
  /* 10c160ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c160b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c160b1 call dword ptr [0x10c3e578] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c3e578))), 0x10c160b7u);
L_10c160b7:;
  /* 10c160b7 mov esp, ebp */
  ESP = (EBP);
  /* 10c160b9 pop ebp */
  EBP = (pop32());
  /* 10c160ba ret  */
  ESPCHK(0x10c16000u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10c160c0 (254 bytes, 109 insns) */
void f_10c160c0(void) {
  FTRACE(0x10c160c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c160c0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c160c4 push edi */
  push32((uint32_t)(EDI));
  /* 10c160c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c160c7 je 0x10c16143 */
  if (C.zf) goto L_10c16143;
  /* 10c160c9 push esi */
  push32((uint32_t)(ESI));
  /* 10c160ca push ebx */
  push32((uint32_t)(EBX));
  /* 10c160cb mov ebx, ecx */
  EBX = (ECX);
  /* 10c160cd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10c160d1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10c160d7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10c160db jne 0x10c160e4 */
  if (!C.zf) goto L_10c160e4;
  /* 10c160dd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c160e0 jne 0x10c16151 */
  if (!C.zf) goto L_10c16151;
  /* 10c160e2 jmp 0x10c16105 */
  goto L_10c16105;
L_10c160e4:;
  /* 10c160e4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c160e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c160e7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c160e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c160ea dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c160eb je 0x10c16112 */
  if (C.zf) goto L_10c16112;
  /* 10c160ed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c160ef je 0x10c1611a */
  if (C.zf) goto L_10c1611a;
  /* 10c160f1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10c160f7 jne 0x10c160e4 */
  if (!C.zf) goto L_10c160e4;
  /* 10c160f9 mov ebx, ecx */
  EBX = (ECX);
  /* 10c160fb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c160fe jne 0x10c16151 */
  if (!C.zf) goto L_10c16151;
L_10c16100:;
  /* 10c16100 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10c16103 je 0x10c16112 */
  if (C.zf) goto L_10c16112;
L_10c16105:;
  /* 10c16105 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c16107 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c16108 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c1610a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c1610b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c1610d je 0x10c1613e */
  if (C.zf) goto L_10c1613e;
  /* 10c1610f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10c16110 jne 0x10c16105 */
  if (!C.zf) goto L_10c16105;
L_10c16112:;
  /* 10c16112 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c16116 pop ebx */
  EBX = (pop32());
  /* 10c16117 pop esi */
  ESI = (pop32());
  /* 10c16118 pop edi */
  EDI = (pop32());
  /* 10c16119 ret  */
  ESPCHK(0x10c160c0u, _esp0);
  ESP += 4; return;
L_10c1611a:;
  /* 10c1611a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10c16120 je 0x10c16134 */
  if (C.zf) goto L_10c16134;
L_10c16122:;
  /* 10c16122 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c16124 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c16125 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c16126 je 0x10c161b6 */
  if (C.zf) goto L_10c161b6;
  /* 10c1612c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10c16132 jne 0x10c16122 */
  if (!C.zf) goto L_10c16122;
L_10c16134:;
  /* 10c16134 mov ebx, ecx */
  EBX = (ECX);
  /* 10c16136 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c16139 jne 0x10c161a7 */
  if (!C.zf) goto L_10c161a7;
L_10c1613b:;
  /* 10c1613b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c1613d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10c1613e:;
  /* 10c1613e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10c1613f jne 0x10c1613b */
  if (!C.zf) goto L_10c1613b;
  /* 10c16141 pop ebx */
  EBX = (pop32());
  /* 10c16142 pop esi */
  ESI = (pop32());
L_10c16143:;
  /* 10c16143 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c16147 pop edi */
  EDI = (pop32());
  /* 10c16148 ret  */
  ESPCHK(0x10c160c0u, _esp0);
  ESP += 4; return;
L_10c16149:;
  /* 10c16149 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10c1614b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1614e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c1614f je 0x10c16100 */
  if (C.zf) goto L_10c16100;
L_10c16151:;
  /* 10c16151 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10c16156 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10c16158 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1615a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c1615d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1615f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10c16161 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16164 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10c16169 je 0x10c16149 */
  if (C.zf) goto L_10c16149;
  /* 10c1616b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10c1616d je 0x10c1619b */
  if (C.zf) goto L_10c1619b;
  /* 10c1616f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10c16171 je 0x10c16191 */
  if (C.zf) goto L_10c16191;
  /* 10c16173 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10c16179 je 0x10c16187 */
  if (C.zf) goto L_10c16187;
  /* 10c1617b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10c16181 jne 0x10c16149 */
  if (!C.zf) goto L_10c16149;
  /* 10c16183 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10c16185 jmp 0x10c1619f */
  goto L_10c1619f;
L_10c16187:;
  /* 10c16187 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c1618d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10c1618f jmp 0x10c1619f */
  goto L_10c1619f;
L_10c16191:;
  /* 10c16191 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c16197 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10c16199 jmp 0x10c1619f */
  goto L_10c1619f;
L_10c1619b:;
  /* 10c1619b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1619d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10c1619f:;
  /* 10c1619f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c161a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c161a4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c161a5 je 0x10c161b1 */
  if (C.zf) goto L_10c161b1;
L_10c161a7:;
  /* 10c161a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c161a9:;
  /* 10c161a9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10c161ab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c161ae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c161af jne 0x10c161a9 */
  if (!C.zf) goto L_10c161a9;
L_10c161b1:;
  /* 10c161b1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10c161b4 jne 0x10c1613b */
  if (!C.zf) goto L_10c1613b;
L_10c161b6:;
  /* 10c161b6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c161ba pop ebx */
  EBX = (pop32());
  /* 10c161bb pop esi */
  ESI = (pop32());
  /* 10c161bc pop edi */
  EDI = (pop32());
  /* 10c161bd ret  */
  ESPCHK(0x10c160c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061c0 @ 0x10c161c0 (55 bytes, 16 insns) */
void f_10c161c0(void) {
  FTRACE(0x10c161c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c161c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c161c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c161c3 mov eax, dword ptr [0x10c3cb84] */
  EAX = (r32((uint32_t)(0x10c3cb84)));
  /* 10c161c8 push eax */
  push32((uint32_t)(EAX));
  /* 10c161c9 call dword ptr [0x10c402bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402bc))), 0x10c161cfu);
  /* 10c161cf mov ecx, dword ptr [0x10c3cb74] */
  ECX = (r32((uint32_t)(0x10c3cb74)));
  /* 10c161d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c161d6 call dword ptr [0x10c402bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402bc))), 0x10c161dcu);
  /* 10c161dc mov edx, dword ptr [0x10c3cb64] */
  EDX = (r32((uint32_t)(0x10c3cb64)));
  /* 10c161e2 push edx */
  push32((uint32_t)(EDX));
  /* 10c161e3 call dword ptr [0x10c402bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402bc))), 0x10c161e9u);
  /* 10c161e9 mov eax, dword ptr [0x10c3cb44] */
  EAX = (r32((uint32_t)(0x10c3cb44)));
  /* 10c161ee push eax */
  push32((uint32_t)(EAX));
  /* 10c161ef call dword ptr [0x10c402bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402bc))), 0x10c161f5u);
  /* 10c161f5 pop ebp */
  EBP = (pop32());
  /* 10c161f6 ret  */
  ESPCHK(0x10c161c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006200 @ 0x10c16200 (159 bytes, 47 insns) */
void f_10c16200(void) {
  FTRACE(0x10c16200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16200 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16201 mov ebp, esp */
  EBP = (ESP);
  /* 10c16203 push ecx */
  push32((uint32_t)(ECX));
  /* 10c16204 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c1620b jmp 0x10c16216 */
  goto L_10c16216;
L_10c1620d:;
  /* 10c1620d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16210 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16213 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c16216:;
  /* 10c16216 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1621a jge 0x10c16269 */
  if ((C.sf==C.of)) goto L_10c16269;
  /* 10c1621c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1621f cmp dword ptr [ecx*4 + 0x10c3cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10c3cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16227 je 0x10c16267 */
  if (C.zf) goto L_10c16267;
  /* 10c16229 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1622d je 0x10c16267 */
  if (C.zf) goto L_10c16267;
  /* 10c1622f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16233 je 0x10c16267 */
  if (C.zf) goto L_10c16267;
  /* 10c16235 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16239 je 0x10c16267 */
  if (C.zf) goto L_10c16267;
  /* 10c1623b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1623f je 0x10c16267 */
  if (C.zf) goto L_10c16267;
  /* 10c16241 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16244 mov eax, dword ptr [edx*4 + 0x10c3cb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c3cb40)));
  /* 10c1624b push eax */
  push32((uint32_t)(EAX));
  /* 10c1624c call dword ptr [0x10c40284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40284))), 0x10c16252u);
  /* 10c16252 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c16254 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16257 mov edx, dword ptr [ecx*4 + 0x10c3cb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c3cb40)));
  /* 10c1625e push edx */
  push32((uint32_t)(EDX));
  /* 10c1625f call 0x10c13330 */
  push32(0x10c16264u); f_10c13330();
  /* 10c16264 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c16267:;
  /* 10c16267 jmp 0x10c1620d */
  goto L_10c1620d;
L_10c16269:;
  /* 10c16269 mov eax, dword ptr [0x10c3cb64] */
  EAX = (r32((uint32_t)(0x10c3cb64)));
  /* 10c1626e push eax */
  push32((uint32_t)(EAX));
  /* 10c1626f call dword ptr [0x10c40284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40284))), 0x10c16275u);
  /* 10c16275 mov ecx, dword ptr [0x10c3cb74] */
  ECX = (r32((uint32_t)(0x10c3cb74)));
  /* 10c1627b push ecx */
  push32((uint32_t)(ECX));
  /* 10c1627c call dword ptr [0x10c40284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40284))), 0x10c16282u);
  /* 10c16282 mov edx, dword ptr [0x10c3cb84] */
  EDX = (r32((uint32_t)(0x10c3cb84)));
  /* 10c16288 push edx */
  push32((uint32_t)(EDX));
  /* 10c16289 call dword ptr [0x10c40284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40284))), 0x10c1628fu);
  /* 10c1628f mov eax, dword ptr [0x10c3cb44] */
  EAX = (r32((uint32_t)(0x10c3cb44)));
  /* 10c16294 push eax */
  push32((uint32_t)(EAX));
  /* 10c16295 call dword ptr [0x10c40284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40284))), 0x10c1629bu);
  /* 10c1629b mov esp, ebp */
  ESP = (EBP);
  /* 10c1629d pop ebp */
  EBP = (pop32());
  /* 10c1629e ret  */
  ESPCHK(0x10c16200u, _esp0);
  ESP += 4; return;
}

/* FUN_100062a0 @ 0x10c162a0 (151 bytes, 46 insns) */
void f_10c162a0(void) {
  FTRACE(0x10c162a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c162a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c162a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c162a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c162a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c162a7 cmp dword ptr [eax*4 + 0x10c3cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10c3cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c162af jne 0x10c16322 */
  if (!C.zf) goto L_10c16322;
  /* 10c162b1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10c162b6 push 0x10c39e2c */
  push32((uint32_t)(0x10c39e2cu));
  /* 10c162bb push 2 */
  push32((uint32_t)(0x2u));
  /* 10c162bd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10c162bf call 0x10c128a0 */
  push32(0x10c162c4u); f_10c128a0();
  /* 10c162c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c162c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c162ca cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c162ce jne 0x10c162da */
  if (!C.zf) goto L_10c162da;
  /* 10c162d0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c162d2 call 0x10c11810 */
  push32(0x10c162d7u); f_10c11810();
  /* 10c162d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c162da:;
  /* 10c162da push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c162dc call 0x10c162a0 */
  push32(0x10c162e1u); f_10c162a0();
  /* 10c162e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c162e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c162e7 cmp dword ptr [ecx*4 + 0x10c3cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10c3cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c162ef jne 0x10c1630a */
  if (!C.zf) goto L_10c1630a;
  /* 10c162f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c162f4 push edx */
  push32((uint32_t)(EDX));
  /* 10c162f5 call dword ptr [0x10c402bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402bc))), 0x10c162fbu);
  /* 10c162fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c162fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16301 mov dword ptr [eax*4 + 0x10c3cb40], ecx */
  w32((uint32_t)(EAX*4 + 0x10c3cb40), (ECX));
  /* 10c16308 jmp 0x10c16318 */
  goto L_10c16318;
L_10c1630a:;
  /* 10c1630a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1630c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1630f push edx */
  push32((uint32_t)(EDX));
  /* 10c16310 call 0x10c13330 */
  push32(0x10c16315u); f_10c13330();
  /* 10c16315 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c16318:;
  /* 10c16318 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c1631a call 0x10c16340 */
  push32(0x10c1631fu); f_10c16340();
  /* 10c1631f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c16322:;
  /* 10c16322 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16325 mov ecx, dword ptr [eax*4 + 0x10c3cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10c3cb40)));
  /* 10c1632c push ecx */
  push32((uint32_t)(ECX));
  /* 10c1632d call dword ptr [0x10c402c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402c0))), 0x10c16333u);
  /* 10c16333 mov esp, ebp */
  ESP = (EBP);
  /* 10c16335 pop ebp */
  EBP = (pop32());
  /* 10c16336 ret  */
  ESPCHK(0x10c162a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006340 @ 0x10c16340 (22 bytes, 8 insns) */
void f_10c16340(void) {
  FTRACE(0x10c16340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16340 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16341 mov ebp, esp */
  EBP = (ESP);
  /* 10c16343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16346 mov ecx, dword ptr [eax*4 + 0x10c3cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10c3cb40)));
  /* 10c1634d push ecx */
  push32((uint32_t)(ECX));
  /* 10c1634e call dword ptr [0x10c402c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402c4))), 0x10c16354u);
  /* 10c16354 pop ebp */
  EBP = (pop32());
  /* 10c16355 ret  */
  ESPCHK(0x10c16340u, _esp0);
  ESP += 4; return;
}

/* FUN_10006360 @ 0x10c16360 (26 bytes, 10 insns) */
void f_10c16360(void) {
  FTRACE(0x10c16360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16360 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16361 mov ebp, esp */
  EBP = (ESP);
  /* 10c16363 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16366 push eax */
  push32((uint32_t)(EAX));
  /* 10c16367 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c16369 call dword ptr [0x10c402c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402c8))), 0x10c1636fu);
  /* 10c1636f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10c16374 call dword ptr [0x10c4024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4024c))), 0x10c1637au);
  /* 10c1637a pop ebp */
  EBP = (pop32());
  /* 10c1637b ret  */
  ESPCHK(0x10c16360u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10c16380 (446 bytes, 130 insns) */
void f_10c16380(void) {
  FTRACE(0x10c16380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16380 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16381 mov ebp, esp */
  EBP = (ESP);
  /* 10c16383 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16386 call 0x10c122e0 */
  push32(0x10c1638bu); f_10c122e0();
  /* 10c1638b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c1638e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16391 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10c16394 push ecx */
  push32((uint32_t)(ECX));
  /* 10c16395 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16398 push edx */
  push32((uint32_t)(EDX));
  /* 10c16399 call 0x10c16540 */
  push32(0x10c1639eu); f_10c16540();
  /* 10c1639e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c163a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c163a4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c163a8 je 0x10c163b3 */
  if (C.zf) goto L_10c163b3;
  /* 10c163aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c163ad cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c163b1 jne 0x10c163c2 */
  if (!C.zf) goto L_10c163c2;
L_10c163b3:;
  /* 10c163b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c163b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c163b7 call dword ptr [0x10c402cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402cc))), 0x10c163bdu);
  /* 10c163bd jmp 0x10c1653a */
  goto L_10c1653a;
L_10c163c2:;
  /* 10c163c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c163c5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c163c9 jne 0x10c163df */
  if (!C.zf) goto L_10c163df;
  /* 10c163cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c163ce mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10c163d5 mov eax, 1 */
  EAX = (0x1u);
  /* 10c163da jmp 0x10c1653a */
  goto L_10c1653a;
L_10c163df:;
  /* 10c163df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c163e2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c163e6 jne 0x10c163f0 */
  if (!C.zf) goto L_10c163f0;
  /* 10c163e8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c163eb jmp 0x10c1653a */
  goto L_10c1653a;
L_10c163f0:;
  /* 10c163f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c163f3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c163f6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c163f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c163fc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10c163ff mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c16402 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16405 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c16408 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10c1640b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1640e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16412 jne 0x10c16517 */
  if (!C.zf) goto L_10c16517;
  /* 10c16418 mov eax, dword ptr [0x10c3cc78] */
  EAX = (r32((uint32_t)(0x10c3cc78)));
  /* 10c1641d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c16420 jmp 0x10c1642b */
  goto L_10c1642b;
L_10c16422:;
  /* 10c16422 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c16425 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16428 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10c1642b:;
  /* 10c1642b mov edx, dword ptr [0x10c3cc78] */
  EDX = (r32((uint32_t)(0x10c3cc78)));
  /* 10c16431 add edx, dword ptr [0x10c3cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c3cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16437 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1643a jge 0x10c16452 */
  if ((C.sf==C.of)) goto L_10c16452;
  /* 10c1643c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1643f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c16442 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16445 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10c16448 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10c16450 jmp 0x10c16422 */
  goto L_10c16422;
L_10c16452:;
  /* 10c16452 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16455 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10c16458 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1645b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1645e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16464 jne 0x10c16475 */
  if (!C.zf) goto L_10c16475;
  /* 10c16466 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16469 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10c16470 jmp 0x10c164fd */
  goto L_10c164fd;
L_10c16475:;
  /* 10c16475 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c16478 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1647e jne 0x10c1648c */
  if (!C.zf) goto L_10c1648c;
  /* 10c16480 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16483 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10c1648a jmp 0x10c164fd */
  goto L_10c164fd;
L_10c1648c:;
  /* 10c1648c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1648f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16495 jne 0x10c164a3 */
  if (!C.zf) goto L_10c164a3;
  /* 10c16497 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1649a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10c164a1 jmp 0x10c164fd */
  goto L_10c164fd;
L_10c164a3:;
  /* 10c164a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c164a6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c164ac jne 0x10c164ba */
  if (!C.zf) goto L_10c164ba;
  /* 10c164ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c164b1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10c164b8 jmp 0x10c164fd */
  goto L_10c164fd;
L_10c164ba:;
  /* 10c164ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c164bd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c164c3 jne 0x10c164d1 */
  if (!C.zf) goto L_10c164d1;
  /* 10c164c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c164c8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10c164cf jmp 0x10c164fd */
  goto L_10c164fd;
L_10c164d1:;
  /* 10c164d1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c164d4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c164da jne 0x10c164e8 */
  if (!C.zf) goto L_10c164e8;
  /* 10c164dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c164df mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10c164e6 jmp 0x10c164fd */
  goto L_10c164fd;
L_10c164e8:;
  /* 10c164e8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c164eb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c164f1 jne 0x10c164fd */
  if (!C.zf) goto L_10c164fd;
  /* 10c164f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c164f6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10c164fd:;
  /* 10c164fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16500 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10c16503 push edx */
  push32((uint32_t)(EDX));
  /* 10c16504 push 8 */
  push32((uint32_t)(0x8u));
  /* 10c16506 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10c16509u);
  /* 10c16509 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1650c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c1650f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c16512 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10c16515 jmp 0x10c1652e */
  goto L_10c1652e;
L_10c16517:;
  /* 10c16517 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1651a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10c16521 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c16524 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c16527 push ecx */
  push32((uint32_t)(ECX));
  /* 10c16528 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10c1652bu);
  /* 10c1652b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1652e:;
  /* 10c1652e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16531 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c16534 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10c16537 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c1653a:;
  /* 10c1653a mov esp, ebp */
  ESP = (EBP);
  /* 10c1653c pop ebp */
  EBP = (pop32());
  /* 10c1653d ret  */
  ESPCHK(0x10c16380u, _esp0);
  ESP += 4; return;
}

/* FUN_10006540 @ 0x10c16540 (89 bytes, 35 insns) */
void f_10c16540(void) {
  FTRACE(0x10c16540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16540 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16541 mov ebp, esp */
  EBP = (ESP);
  /* 10c16543 push ecx */
  push32((uint32_t)(ECX));
  /* 10c16544 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c16547 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c1654a:;
  /* 10c1654a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1654d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c1654f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16552 je 0x10c16572 */
  if (C.zf) goto L_10c16572;
  /* 10c16554 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16557 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1655a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c1655d mov ecx, dword ptr [0x10c3cc84] */
  ECX = (r32((uint32_t)(0x10c3cc84)));
  /* 10c16563 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c16566 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c16569 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1656b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1656e jae 0x10c16572 */
  if (!C.cf) goto L_10c16572;
  /* 10c16570 jmp 0x10c1654a */
  goto L_10c1654a;
L_10c16572:;
  /* 10c16572 mov eax, dword ptr [0x10c3cc84] */
  EAX = (r32((uint32_t)(0x10c3cc84)));
  /* 10c16577 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c1657a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1657d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1657f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16582 jae 0x10c1658e */
  if (!C.cf) goto L_10c1658e;
  /* 10c16584 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16587 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c16589 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1658c je 0x10c16592 */
  if (C.zf) goto L_10c16592;
L_10c1658e:;
  /* 10c1658e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c16590 jmp 0x10c16595 */
  goto L_10c16595;
L_10c16592:;
  /* 10c16592 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c16595:;
  /* 10c16595 mov esp, ebp */
  ESP = (EBP);
  /* 10c16597 pop ebp */
  EBP = (pop32());
  /* 10c16598 ret  */
  ESPCHK(0x10c16540u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10c165a0 (48 bytes, 17 insns) */
void f_10c165a0(void) {
  FTRACE(0x10c165a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c165a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c165a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c165a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c165a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c165a6 call 0x10c162a0 */
  push32(0x10c165abu); f_10c162a0();
  /* 10c165ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c165ae mov eax, dword ptr [0x10c3e5ec] */
  EAX = (r32((uint32_t)(0x10c3e5ec)));
  /* 10c165b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c165b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c165b9 mov dword ptr [0x10c3e5ec], ecx */
  w32((uint32_t)(0x10c3e5ec), (ECX));
  /* 10c165bf push 9 */
  push32((uint32_t)(0x9u));
  /* 10c165c1 call 0x10c16340 */
  push32(0x10c165c6u); f_10c16340();
  /* 10c165c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c165c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c165cc mov esp, ebp */
  ESP = (EBP);
  /* 10c165ce pop ebp */
  EBP = (pop32());
  /* 10c165cf ret  */
  ESPCHK(0x10c165a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100065d0 @ 0x10c165d0 (10 bytes, 5 insns) */
void f_10c165d0(void) {
  FTRACE(0x10c165d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c165d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c165d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c165d3 mov eax, dword ptr [0x10c3e5ec] */
  EAX = (r32((uint32_t)(0x10c3e5ec)));
  /* 10c165d8 pop ebp */
  EBP = (pop32());
  /* 10c165d9 ret  */
  ESPCHK(0x10c165d0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10c165e0 (45 bytes, 19 insns) */
void f_10c165e0(void) {
  FTRACE(0x10c165e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c165e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c165e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c165e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c165e4 mov eax, dword ptr [0x10c3e5ec] */
  EAX = (r32((uint32_t)(0x10c3e5ec)));
  /* 10c165e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c165ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c165f0 je 0x10c16600 */
  if (C.zf) goto L_10c16600;
  /* 10c165f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c165f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c165f6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10c165f9u);
  /* 10c165f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c165fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c165fe jne 0x10c16604 */
  if (!C.zf) goto L_10c16604;
L_10c16600:;
  /* 10c16600 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c16602 jmp 0x10c16609 */
  goto L_10c16609;
L_10c16604:;
  /* 10c16604 mov eax, 1 */
  EAX = (0x1u);
L_10c16609:;
  /* 10c16609 mov esp, ebp */
  ESP = (EBP);
  /* 10c1660b pop ebp */
  EBP = (pop32());
  /* 10c1660c ret  */
  ESPCHK(0x10c165e0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10c16610 (88 bytes, 40 insns) */
void f_10c16610(void) {
  FTRACE(0x10c16610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16610 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c16614 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c16618 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1661a je 0x10c16663 */
  if (C.zf) goto L_10c16663;
  /* 10c1661c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1661e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10c16622 push edi */
  push32((uint32_t)(EDI));
  /* 10c16623 mov edi, ecx */
  EDI = (ECX);
  /* 10c16625 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16628 jb 0x10c16657 */
  if (C.cf) goto L_10c16657;
  /* 10c1662a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c1662c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1662f je 0x10c16639 */
  if (C.zf) goto L_10c16639;
  /* 10c16631 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10c16633:;
  /* 10c16633 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c16635 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c16636 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c16637 jne 0x10c16633 */
  if (!C.zf) goto L_10c16633;
L_10c16639:;
  /* 10c16639 mov ecx, eax */
  ECX = (EAX);
  /* 10c1663b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10c1663e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16640 mov ecx, eax */
  ECX = (EAX);
  /* 10c16642 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10c16645 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16647 mov ecx, edx */
  ECX = (EDX);
  /* 10c16649 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1664c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c1664f je 0x10c16657 */
  if (C.zf) goto L_10c16657;
  /* 10c16651 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c16653 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c16655 je 0x10c1665d */
  if (C.zf) goto L_10c1665d;
L_10c16657:;
  /* 10c16657 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c16659 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c1665a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10c1665b jne 0x10c16657 */
  if (!C.zf) goto L_10c16657;
L_10c1665d:;
  /* 10c1665d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c16661 pop edi */
  EDI = (pop32());
  /* 10c16662 ret  */
  ESPCHK(0x10c16610u, _esp0);
  ESP += 4; return;
L_10c16663:;
  /* 10c16663 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c16667 ret  */
  ESPCHK(0x10c16610u, _esp0);
  ESP += 4; return;
}

/* FUN_10006670 @ 0x10c16670 (23 bytes, 10 insns) */
void f_10c16670(void) {
  FTRACE(0x10c16670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16670 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16671 mov ebp, esp */
  EBP = (ESP);
  /* 10c16673 mov eax, dword ptr [0x10c3e5e8] */
  EAX = (r32((uint32_t)(0x10c3e5e8)));
  /* 10c16678 push eax */
  push32((uint32_t)(EAX));
  /* 10c16679 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1667c push ecx */
  push32((uint32_t)(ECX));
  /* 10c1667d call 0x10c16690 */
  push32(0x10c16682u); f_10c16690();
  /* 10c16682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16685 pop ebp */
  EBP = (pop32());
  /* 10c16686 ret  */
  ESPCHK(0x10c16670u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10c16690 (87 bytes, 34 insns) */
void f_10c16690(void) {
  FTRACE(0x10c16690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16690 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16691 mov ebp, esp */
  EBP = (ESP);
  /* 10c16693 push ecx */
  push32((uint32_t)(ECX));
  /* 10c16694 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16698 jbe 0x10c1669e */
  if ((C.cf||C.zf)) goto L_10c1669e;
  /* 10c1669a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1669c jmp 0x10c166e3 */
  goto L_10c166e3;
L_10c1669e:;
  /* 10c1669e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c166a2 ja 0x10c166b5 */
  if ((!C.cf&&!C.zf)) goto L_10c166b5;
  /* 10c166a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c166a7 push eax */
  push32((uint32_t)(EAX));
  /* 10c166a8 call 0x10c166f0 */
  push32(0x10c166adu); f_10c166f0();
  /* 10c166ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c166b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c166b3 jmp 0x10c166bc */
  goto L_10c166bc;
L_10c166b5:;
  /* 10c166b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c166bc:;
  /* 10c166bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c166c0 jne 0x10c166c8 */
  if (!C.zf) goto L_10c166c8;
  /* 10c166c2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c166c6 jne 0x10c166cd */
  if (!C.zf) goto L_10c166cd;
L_10c166c8:;
  /* 10c166c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c166cb jmp 0x10c166e3 */
  goto L_10c166e3;
L_10c166cd:;
  /* 10c166cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c166d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c166d1 call 0x10c165e0 */
  push32(0x10c166d6u); f_10c165e0();
  /* 10c166d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c166d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c166db jne 0x10c166e1 */
  if (!C.zf) goto L_10c166e1;
  /* 10c166dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c166df jmp 0x10c166e3 */
  goto L_10c166e3;
L_10c166e1:;
  /* 10c166e1 jmp 0x10c1669e */
  goto L_10c1669e;
L_10c166e3:;
  /* 10c166e3 mov esp, ebp */
  ESP = (EBP);
  /* 10c166e5 pop ebp */
  EBP = (pop32());
  /* 10c166e6 ret  */
  ESPCHK(0x10c16690u, _esp0);
  ESP += 4; return;
}

/* FUN_100066f0 @ 0x10c166f0 (109 bytes, 37 insns) */
void f_10c166f0(void) {
  FTRACE(0x10c166f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c166f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c166f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c166f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c166f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c166f7 cmp eax, dword ptr [0x10c3cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c166fd ja 0x10c1672d */
  if ((!C.cf&&!C.zf)) goto L_10c1672d;
  /* 10c166ff push 9 */
  push32((uint32_t)(0x9u));
  /* 10c16701 call 0x10c162a0 */
  push32(0x10c16706u); f_10c162a0();
  /* 10c16706 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16709 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1670c push ecx */
  push32((uint32_t)(ECX));
  /* 10c1670d call 0x10c17230 */
  push32(0x10c16712u); f_10c17230();
  /* 10c16712 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16715 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c16718 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c1671a call 0x10c16340 */
  push32(0x10c1671fu); f_10c16340();
  /* 10c1671f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16722 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16726 je 0x10c1672d */
  if (C.zf) goto L_10c1672d;
  /* 10c16728 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1672b jmp 0x10c16759 */
  goto L_10c16759;
L_10c1672d:;
  /* 10c1672d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16731 jne 0x10c1673a */
  if (!C.zf) goto L_10c1673a;
  /* 10c16733 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10c1673a:;
  /* 10c1673a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1673d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16740 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10c16743 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10c16746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16749 push eax */
  push32((uint32_t)(EAX));
  /* 10c1674a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c1674c mov ecx, dword ptr [0x10c3fdac] */
  ECX = (r32((uint32_t)(0x10c3fdac)));
  /* 10c16752 push ecx */
  push32((uint32_t)(ECX));
  /* 10c16753 call dword ptr [0x10c402d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402d0))), 0x10c16759u);
L_10c16759:;
  /* 10c16759 mov esp, ebp */
  ESP = (EBP);
  /* 10c1675b pop ebp */
  EBP = (pop32());
  /* 10c1675c ret  */
  ESPCHK(0x10c166f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006760 @ 0x10c16760 (10 bytes, 5 insns) */
void f_10c16760(void) {
  FTRACE(0x10c16760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16760 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16761 mov ebp, esp */
  EBP = (ESP);
  /* 10c16763 mov eax, 1 */
  EAX = (0x1u);
  /* 10c16768 pop ebp */
  EBP = (pop32());
  /* 10c16769 ret  */
  ESPCHK(0x10c16760u, _esp0);
  ESP += 4; return;
}

/* FUN_10006770 @ 0x10c16770 (173 bytes, 59 insns) */
void f_10c16770(void) {
  FTRACE(0x10c16770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16770 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16771 mov ebp, esp */
  EBP = (ESP);
  /* 10c16773 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16776 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1677a jbe 0x10c16783 */
  if ((C.cf||C.zf)) goto L_10c16783;
  /* 10c1677c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1677e jmp 0x10c16819 */
  goto L_10c16819;
L_10c16783:;
  /* 10c16783 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c16785 call 0x10c162a0 */
  push32(0x10c1678au); f_10c162a0();
  /* 10c1678a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1678d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16790 push eax */
  push32((uint32_t)(EAX));
  /* 10c16791 call 0x10c16ba0 */
  push32(0x10c16796u); f_10c16ba0();
  /* 10c16796 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16799 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c1679c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c167a0 je 0x10c167e1 */
  if (C.zf) goto L_10c167e1;
  /* 10c167a2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c167a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c167ac cmp ecx, dword ptr [0x10c3cc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c167b2 ja 0x10c167d2 */
  if ((!C.cf&&!C.zf)) goto L_10c167d2;
  /* 10c167b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c167b7 push edx */
  push32((uint32_t)(EDX));
  /* 10c167b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c167bb push eax */
  push32((uint32_t)(EAX));
  /* 10c167bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c167bf push ecx */
  push32((uint32_t)(ECX));
  /* 10c167c0 call 0x10c17a70 */
  push32(0x10c167c5u); f_10c17a70();
  /* 10c167c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c167c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c167ca je 0x10c167d2 */
  if (C.zf) goto L_10c167d2;
  /* 10c167cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c167cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c167d2:;
  /* 10c167d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c167d4 call 0x10c16340 */
  push32(0x10c167d9u); f_10c16340();
  /* 10c167d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c167dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c167df jmp 0x10c16819 */
  goto L_10c16819;
L_10c167e1:;
  /* 10c167e1 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c167e3 call 0x10c16340 */
  push32(0x10c167e8u); f_10c16340();
  /* 10c167e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c167eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c167ef jne 0x10c167f8 */
  if (!C.zf) goto L_10c167f8;
  /* 10c167f1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10c167f8:;
  /* 10c167f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c167fb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c167fe and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10c16800 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10c16803 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c16806 push ecx */
  push32((uint32_t)(ECX));
  /* 10c16807 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1680a push edx */
  push32((uint32_t)(EDX));
  /* 10c1680b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10c1680d mov eax, dword ptr [0x10c3fdac] */
  EAX = (r32((uint32_t)(0x10c3fdac)));
  /* 10c16812 push eax */
  push32((uint32_t)(EAX));
  /* 10c16813 call dword ptr [0x10c402d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402d4))), 0x10c16819u);
L_10c16819:;
  /* 10c16819 mov esp, ebp */
  ESP = (EBP);
  /* 10c1681b pop ebp */
  EBP = (pop32());
  /* 10c1681c ret  */
  ESPCHK(0x10c16770u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x10c16820 (490 bytes, 165 insns) */
void f_10c16820(void) {
  FTRACE(0x10c16820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16820 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16821 mov ebp, esp */
  EBP = (ESP);
  /* 10c16823 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16826 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1682a jne 0x10c1683d */
  if (!C.zf) goto L_10c1683d;
  /* 10c1682c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1682f push eax */
  push32((uint32_t)(EAX));
  /* 10c16830 call 0x10c16670 */
  push32(0x10c16835u); f_10c16670();
  /* 10c16835 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16838 jmp 0x10c16a06 */
  goto L_10c16a06;
L_10c1683d:;
  /* 10c1683d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16841 jne 0x10c16856 */
  if (!C.zf) goto L_10c16856;
  /* 10c16843 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16846 push ecx */
  push32((uint32_t)(ECX));
  /* 10c16847 call 0x10c16a10 */
  push32(0x10c1684cu); f_10c16a10();
  /* 10c1684c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1684f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c16851 jmp 0x10c16a06 */
  goto L_10c16a06;
L_10c16856:;
  /* 10c16856 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c1685d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16861 ja 0x10c169d9 */
  if ((!C.cf&&!C.zf)) goto L_10c169d9;
  /* 10c16867 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c16869 call 0x10c162a0 */
  push32(0x10c1686eu); f_10c162a0();
  /* 10c1686e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16871 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16874 push edx */
  push32((uint32_t)(EDX));
  /* 10c16875 call 0x10c16ba0 */
  push32(0x10c1687au); f_10c16ba0();
  /* 10c1687a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1687d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c16880 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16884 je 0x10c1699c */
  if (C.zf) goto L_10c1699c;
  /* 10c1688a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1688d cmp eax, dword ptr [0x10c3cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16893 ja 0x10c16910 */
  if ((!C.cf&&!C.zf)) goto L_10c16910;
  /* 10c16895 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c16898 push ecx */
  push32((uint32_t)(ECX));
  /* 10c16899 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1689c push edx */
  push32((uint32_t)(EDX));
  /* 10c1689d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c168a0 push eax */
  push32((uint32_t)(EAX));
  /* 10c168a1 call 0x10c17a70 */
  push32(0x10c168a6u); f_10c17a70();
  /* 10c168a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c168a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c168ab je 0x10c168b5 */
  if (C.zf) goto L_10c168b5;
  /* 10c168ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c168b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c168b3 jmp 0x10c16910 */
  goto L_10c16910;
L_10c168b5:;
  /* 10c168b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c168b8 push edx */
  push32((uint32_t)(EDX));
  /* 10c168b9 call 0x10c17230 */
  push32(0x10c168beu); f_10c17230();
  /* 10c168be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c168c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c168c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c168c8 je 0x10c16910 */
  if (C.zf) goto L_10c16910;
  /* 10c168ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c168cd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10c168d0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c168d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c168d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c168d9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c168dc jae 0x10c168e6 */
  if (!C.cf) goto L_10c168e6;
  /* 10c168de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c168e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c168e4 jmp 0x10c168ec */
  goto L_10c168ec;
L_10c168e6:;
  /* 10c168e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c168e9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c168ec:;
  /* 10c168ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c168ef push edx */
  push32((uint32_t)(EDX));
  /* 10c168f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c168f3 push eax */
  push32((uint32_t)(EAX));
  /* 10c168f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c168f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c168f8 call 0x10c19180 */
  push32(0x10c168fdu); f_10c19180();
  /* 10c168fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16900 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16903 push edx */
  push32((uint32_t)(EDX));
  /* 10c16904 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c16907 push eax */
  push32((uint32_t)(EAX));
  /* 10c16908 call 0x10c16c60 */
  push32(0x10c1690du); f_10c16c60();
  /* 10c1690d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c16910:;
  /* 10c16910 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16914 jne 0x10c16990 */
  if (!C.zf) goto L_10c16990;
  /* 10c16916 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1691a jne 0x10c16923 */
  if (!C.zf) goto L_10c16923;
  /* 10c1691c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10c16923:;
  /* 10c16923 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c16926 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16929 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10c1692c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10c1692f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c16932 push edx */
  push32((uint32_t)(EDX));
  /* 10c16933 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c16935 mov eax, dword ptr [0x10c3fdac] */
  EAX = (r32((uint32_t)(0x10c3fdac)));
  /* 10c1693a push eax */
  push32((uint32_t)(EAX));
  /* 10c1693b call dword ptr [0x10c402d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402d0))), 0x10c16941u);
  /* 10c16941 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c16944 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16948 je 0x10c16990 */
  if (C.zf) goto L_10c16990;
  /* 10c1694a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1694d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10c16950 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c16953 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c16956 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16959 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1695c jae 0x10c16966 */
  if (!C.cf) goto L_10c16966;
  /* 10c1695e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16961 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c16964 jmp 0x10c1696c */
  goto L_10c1696c;
L_10c16966:;
  /* 10c16966 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c16969 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10c1696c:;
  /* 10c1696c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c1696f push eax */
  push32((uint32_t)(EAX));
  /* 10c16970 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16973 push ecx */
  push32((uint32_t)(ECX));
  /* 10c16974 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c16977 push edx */
  push32((uint32_t)(EDX));
  /* 10c16978 call 0x10c19180 */
  push32(0x10c1697du); f_10c19180();
  /* 10c1697d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16980 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16983 push eax */
  push32((uint32_t)(EAX));
  /* 10c16984 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c16987 push ecx */
  push32((uint32_t)(ECX));
  /* 10c16988 call 0x10c16c60 */
  push32(0x10c1698du); f_10c16c60();
  /* 10c1698d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c16990:;
  /* 10c16990 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c16992 call 0x10c16340 */
  push32(0x10c16997u); f_10c16340();
  /* 10c16997 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1699a jmp 0x10c169d9 */
  goto L_10c169d9;
L_10c1699c:;
  /* 10c1699c push 9 */
  push32((uint32_t)(0x9u));
  /* 10c1699e call 0x10c16340 */
  push32(0x10c169a3u); f_10c16340();
  /* 10c169a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c169a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c169aa jne 0x10c169b3 */
  if (!C.zf) goto L_10c169b3;
  /* 10c169ac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10c169b3:;
  /* 10c169b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c169b6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c169b9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10c169bc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10c169bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c169c2 push eax */
  push32((uint32_t)(EAX));
  /* 10c169c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c169c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c169c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c169c9 mov edx, dword ptr [0x10c3fdac] */
  EDX = (r32((uint32_t)(0x10c3fdac)));
  /* 10c169cf push edx */
  push32((uint32_t)(EDX));
  /* 10c169d0 call dword ptr [0x10c402d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402d4))), 0x10c169d6u);
  /* 10c169d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c169d9:;
  /* 10c169d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c169dd jne 0x10c169e8 */
  if (!C.zf) goto L_10c169e8;
  /* 10c169df cmp dword ptr [0x10c3e5e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e5e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c169e6 jne 0x10c169ed */
  if (!C.zf) goto L_10c169ed;
L_10c169e8:;
  /* 10c169e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c169eb jmp 0x10c16a06 */
  goto L_10c16a06;
L_10c169ed:;
  /* 10c169ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c169f0 push eax */
  push32((uint32_t)(EAX));
  /* 10c169f1 call 0x10c165e0 */
  push32(0x10c169f6u); f_10c165e0();
  /* 10c169f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c169f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c169fb jne 0x10c16a01 */
  if (!C.zf) goto L_10c16a01;
  /* 10c169fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c169ff jmp 0x10c16a06 */
  goto L_10c16a06;
L_10c16a01:;
  /* 10c16a01 jmp 0x10c16856 */
  goto L_10c16856;
L_10c16a06:;
  /* 10c16a06 mov esp, ebp */
  ESP = (EBP);
  /* 10c16a08 pop ebp */
  EBP = (pop32());
  /* 10c16a09 ret  */
  ESPCHK(0x10c16820u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a10 @ 0x10c16a10 (104 bytes, 38 insns) */
void f_10c16a10(void) {
  FTRACE(0x10c16a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16a11 mov ebp, esp */
  EBP = (ESP);
  /* 10c16a13 push ecx */
  push32((uint32_t)(ECX));
  /* 10c16a14 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16a18 jne 0x10c16a1c */
  if (!C.zf) goto L_10c16a1c;
  /* 10c16a1a jmp 0x10c16a74 */
  goto L_10c16a74;
L_10c16a1c:;
  /* 10c16a1c push 9 */
  push32((uint32_t)(0x9u));
  /* 10c16a1e call 0x10c162a0 */
  push32(0x10c16a23u); f_10c162a0();
  /* 10c16a23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16a26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16a29 push eax */
  push32((uint32_t)(EAX));
  /* 10c16a2a call 0x10c16ba0 */
  push32(0x10c16a2fu); f_10c16ba0();
  /* 10c16a2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16a32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c16a35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16a39 je 0x10c16a57 */
  if (C.zf) goto L_10c16a57;
  /* 10c16a3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16a3e push ecx */
  push32((uint32_t)(ECX));
  /* 10c16a3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16a42 push edx */
  push32((uint32_t)(EDX));
  /* 10c16a43 call 0x10c16c60 */
  push32(0x10c16a48u); f_10c16c60();
  /* 10c16a48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16a4b push 9 */
  push32((uint32_t)(0x9u));
  /* 10c16a4d call 0x10c16340 */
  push32(0x10c16a52u); f_10c16340();
  /* 10c16a52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16a55 jmp 0x10c16a74 */
  goto L_10c16a74;
L_10c16a57:;
  /* 10c16a57 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c16a59 call 0x10c16340 */
  push32(0x10c16a5eu); f_10c16340();
  /* 10c16a5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16a61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c16a64 push eax */
  push32((uint32_t)(EAX));
  /* 10c16a65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c16a67 mov ecx, dword ptr [0x10c3fdac] */
  ECX = (r32((uint32_t)(0x10c3fdac)));
  /* 10c16a6d push ecx */
  push32((uint32_t)(ECX));
  /* 10c16a6e call dword ptr [0x10c402b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402b0))), 0x10c16a74u);
L_10c16a74:;
  /* 10c16a74 mov esp, ebp */
  ESP = (EBP);
  /* 10c16a76 pop ebp */
  EBP = (pop32());
  /* 10c16a77 ret  */
  ESPCHK(0x10c16a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a80 @ 0x10c16a80 (116 bytes, 34 insns) */
void f_10c16a80(void) {
  FTRACE(0x10c16a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16a81 mov ebp, esp */
  EBP = (ESP);
  /* 10c16a83 push ecx */
  push32((uint32_t)(ECX));
  /* 10c16a84 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10c16a8b push 9 */
  push32((uint32_t)(0x9u));
  /* 10c16a8d call 0x10c162a0 */
  push32(0x10c16a92u); f_10c162a0();
  /* 10c16a92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16a95 call 0x10c18190 */
  push32(0x10c16a9au); f_10c18190();
  /* 10c16a9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c16a9c jge 0x10c16aa5 */
  if ((C.sf==C.of)) goto L_10c16aa5;
  /* 10c16a9e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10c16aa5:;
  /* 10c16aa5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c16aa7 call 0x10c16340 */
  push32(0x10c16aacu); f_10c16340();
  /* 10c16aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c16aaf push 0 */
  push32((uint32_t)(0x0u));
  /* 10c16ab1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c16ab3 mov eax, dword ptr [0x10c3fdac] */
  EAX = (r32((uint32_t)(0x10c3fdac)));
  /* 10c16ab8 push eax */
  push32((uint32_t)(EAX));
  /* 10c16ab9 call dword ptr [0x10c40290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40290))), 0x10c16abfu);
  /* 10c16abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c16ac1 jne 0x10c16aed */
  if (!C.zf) goto L_10c16aed;
  /* 10c16ac3 call dword ptr [0x10c40270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40270))), 0x10c16ac9u);
  /* 10c16ac9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c16acc jne 0x10c16ae6 */
  if (!C.zf) goto L_10c16ae6;
  /* 10c16ace call 0x10c1a780 */
  push32(0x10c16ad3u); f_10c1a780();
  /* 10c16ad3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10c16ad9 call 0x10c1a770 */
  push32(0x10c16adeu); f_10c1a770();
  /* 10c16ade mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10c16ae4 jmp 0x10c16aed */
  goto L_10c16aed;
L_10c16ae6:;
  /* 10c16ae6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10c16aed:;
  /* 10c16aed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c16af0 mov esp, ebp */
  ESP = (EBP);
  /* 10c16af2 pop ebp */
  EBP = (pop32());
  /* 10c16af3 ret  */
  ESPCHK(0x10c16a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b00 @ 0x10c16b00 (10 bytes, 5 insns) */
void f_10c16b00(void) {
  FTRACE(0x10c16b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c16b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10c16b01 mov ebp, esp */
  EBP = (ESP);
  /* 10c16b03 call 0x10c16a80 */
  push32(0x10c16b08u); f_10c16a80();
  /* 10c16b08 pop ebp */
  EBP = (pop32());
  /* 10c16b09 ret  */
  ESPCHK(0x10c16b00u, _esp0);
  ESP += 4; return;
}

