#include "recomp.h"

/* thunk_FUN_10001cb0 @ 0x10d11005 (5 bytes, 1 insns) */
void f_10d11005(void) {
  FTRACE(0x10d11005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d11005 jmp 0x10d11cb0 */
  f_10d11cb0(); return;
}

/* OnInit @ 0x10d1100a (5 bytes, 1 insns) */
void f_10d1100a(void) {
  FTRACE(0x10d1100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1100a jmp 0x10d110a0 */
  f_10d110a0(); return;
}

/* thunk_FUN_10001d00 @ 0x10d1100f (5 bytes, 1 insns) */
void f_10d1100f(void) {
  FTRACE(0x10d1100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1100f jmp 0x10d11d00 */
  f_10d11d00(); return;
}

/* thunk_FUN_10001040 @ 0x10d11014 (5 bytes, 1 insns) */
void f_10d11014(void) {
  FTRACE(0x10d11014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d11014 jmp 0x10d11040 */
  f_10d11040(); return;
}

/* ProcessScenary @ 0x10d11019 (5 bytes, 1 insns) */
void f_10d11019(void) {
  FTRACE(0x10d11019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d11019 jmp 0x10d11210 */
  f_10d11210(); return;
}

/* FUN_10001040 @ 0x10d11040 (67 bytes, 26 insns) */
void f_10d11040(void) {
  FTRACE(0x10d11040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d11040 push ebp */
  push32((uint32_t)(EBP));
  /* 10d11041 mov ebp, esp */
  EBP = (ESP);
  /* 10d11043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d11046 push ebx */
  push32((uint32_t)(EBX));
  /* 10d11047 push esi */
  push32((uint32_t)(ESI));
  /* 10d11048 push edi */
  push32((uint32_t)(EDI));
  /* 10d11049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10d1104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10d11051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10d11056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d11058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11062 je 0x10d11066 */
  if (C.zf) goto L_10d11066;
  /* 10d11064 jmp 0x10d1106b */
  goto L_10d1106b;
L_10d11066:;
  /* 10d11066 call 0x10d1100a */
  push32(0x10d1106bu); f_10d1100a();
L_10d1106b:;
  /* 10d1106b mov eax, 1 */
  EAX = (0x1u);
  /* 10d11070 pop edi */
  EDI = (pop32());
  /* 10d11071 pop esi */
  ESI = (pop32());
  /* 10d11072 pop ebx */
  EBX = (pop32());
  /* 10d11073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11078 call 0x10d11dc0 */
  push32(0x10d1107du); f_10d11dc0();
  /* 10d1107d mov esp, ebp */
  ESP = (EBP);
  /* 10d1107f pop ebp */
  EBP = (pop32());
  /* 10d11080 ret 0xc */
  ESPCHK(0x10d11040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x10d110a0 (291 bytes, 89 insns) */
void f_10d110a0(void) {
  FTRACE(0x10d110a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d110a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d110a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d110a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d110a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d110a7 push esi */
  push32((uint32_t)(ESI));
  /* 10d110a8 push edi */
  push32((uint32_t)(EDI));
  /* 10d110a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10d110ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10d110b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10d110b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d110b8 mov esi, esp */
  ESI = (ESP);
  /* 10d110ba push 0x10d3905c */
  push32((uint32_t)(0x10d3905cu));
  /* 10d110bf push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d110c4 call dword ptr [0x10d403f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403f4))), 0x10d110cau);
  /* 10d110ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d110cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d110cf call 0x10d11dc0 */
  push32(0x10d110d4u); f_10d11dc0();
  /* 10d110d4 mov esi, esp */
  ESI = (ESP);
  /* 10d110d6 push 0x10d39054 */
  push32((uint32_t)(0x10d39054u));
  /* 10d110db push 0x10d3e3e0 */
  push32((uint32_t)(0x10d3e3e0u));
  /* 10d110e0 call dword ptr [0x10d403ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403ec))), 0x10d110e6u);
  /* 10d110e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d110e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d110eb call 0x10d11dc0 */
  push32(0x10d110f0u); f_10d11dc0();
  /* 10d110f0 mov esi, esp */
  ESI = (ESP);
  /* 10d110f2 push 0x10d39048 */
  push32((uint32_t)(0x10d39048u));
  /* 10d110f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d110f9 call dword ptr [0x10d403fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403fc))), 0x10d110ffu);
  /* 10d110ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11102 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11104 call 0x10d11dc0 */
  push32(0x10d11109u); f_10d11dc0();
  /* 10d11109 mov esi, esp */
  ESI = (ESP);
  /* 10d1110b push 0x10d39040 */
  push32((uint32_t)(0x10d39040u));
  /* 10d11110 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d11112 call dword ptr [0x10d403fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403fc))), 0x10d11118u);
  /* 10d11118 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1111b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1111d call 0x10d11dc0 */
  push32(0x10d11122u); f_10d11dc0();
  /* 10d11122 mov esi, esp */
  ESI = (ESP);
  /* 10d11124 push 0x10d39034 */
  push32((uint32_t)(0x10d39034u));
  /* 10d11129 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d1112b call dword ptr [0x10d403fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403fc))), 0x10d11131u);
  /* 10d11131 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11134 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11136 call 0x10d11dc0 */
  push32(0x10d1113bu); f_10d11dc0();
  /* 10d1113b mov esi, esp */
  ESI = (ESP);
  /* 10d1113d push 0x10d3902c */
  push32((uint32_t)(0x10d3902cu));
  /* 10d11142 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d11144 call dword ptr [0x10d403fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403fc))), 0x10d1114au);
  /* 10d1114a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1114d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1114f call 0x10d11dc0 */
  push32(0x10d11154u); f_10d11dc0();
  /* 10d11154 mov esi, esp */
  ESI = (ESP);
  /* 10d11156 push 0x10d3901c */
  push32((uint32_t)(0x10d3901cu));
  /* 10d1115b push 0x10d3e3f0 */
  push32((uint32_t)(0x10d3e3f0u));
  /* 10d11160 call dword ptr [0x10d40400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40400))), 0x10d11166u);
  /* 10d11166 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11169 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1116b call 0x10d11dc0 */
  push32(0x10d11170u); f_10d11dc0();
  /* 10d11170 mov esi, esp */
  ESI = (ESP);
  /* 10d11172 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10d11174 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d11176 call dword ptr [0x10d403f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403f8))), 0x10d1117cu);
  /* 10d1117c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1117f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11181 call 0x10d11dc0 */
  push32(0x10d11186u); f_10d11dc0();
  /* 10d11186 mov esi, esp */
  ESI = (ESP);
  /* 10d11188 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10d1118a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1118c call dword ptr [0x10d403f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403f8))), 0x10d11192u);
  /* 10d11192 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11195 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11197 call 0x10d11dc0 */
  push32(0x10d1119cu); f_10d11dc0();
  /* 10d1119c mov esi, esp */
  ESI = (ESP);
  /* 10d1119e push 0xe */
  push32((uint32_t)(0xeu));
  /* 10d111a0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d111a2 call dword ptr [0x10d403f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403f8))), 0x10d111a8u);
  /* 10d111a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d111ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d111ad call 0x10d11dc0 */
  push32(0x10d111b2u); f_10d11dc0();
  /* 10d111b2 pop edi */
  EDI = (pop32());
  /* 10d111b3 pop esi */
  ESI = (pop32());
  /* 10d111b4 pop ebx */
  EBX = (pop32());
  /* 10d111b5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d111b8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d111ba call 0x10d11dc0 */
  push32(0x10d111bfu); f_10d11dc0();
  /* 10d111bf mov esp, ebp */
  ESP = (EBP);
  /* 10d111c1 pop ebp */
  EBP = (pop32());
  /* 10d111c2 ret  */
  ESPCHK(0x10d110a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001210 @ 0x10d11210 (2173 bytes, 655 insns) */
void f_10d11210(void) {
  FTRACE(0x10d11210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d11210 push ebp */
  push32((uint32_t)(EBP));
  /* 10d11211 mov ebp, esp */
  EBP = (ESP);
  /* 10d11213 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d11216 push ebx */
  push32((uint32_t)(EBX));
  /* 10d11217 push esi */
  push32((uint32_t)(ESI));
  /* 10d11218 push edi */
  push32((uint32_t)(EDI));
  /* 10d11219 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10d1121c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10d11221 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10d11226 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d11228 mov esi, esp */
  ESI = (ESP);
  /* 10d1122a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1122c call dword ptr [0x10d403cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403cc))), 0x10d11232u);
  /* 10d11232 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11235 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11237 call 0x10d11dc0 */
  push32(0x10d1123cu); f_10d11dc0();
  /* 10d1123c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d11241 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11243 je 0x10d115ec */
  if (C.zf) goto L_10d115ec;
  /* 10d11249 mov esi, esp */
  ESI = (ESP);
  /* 10d1124b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1124d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1124f call dword ptr [0x10d403d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403d0))), 0x10d11255u);
  /* 10d11255 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11258 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1125a call 0x10d11dc0 */
  push32(0x10d1125fu); f_10d11dc0();
  /* 10d1125f mov esi, esp */
  ESI = (ESP);
  /* 10d11261 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d11266 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d11268 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1126a call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d11270u);
  /* 10d11270 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11273 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11275 call 0x10d11dc0 */
  push32(0x10d1127au); f_10d11dc0();
  /* 10d1127a mov esi, esp */
  ESI = (ESP);
  /* 10d1127c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d11281 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d11283 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d11285 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d1128bu);
  /* 10d1128b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1128e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11290 call 0x10d11dc0 */
  push32(0x10d11295u); f_10d11dc0();
  /* 10d11295 mov esi, esp */
  ESI = (ESP);
  /* 10d11297 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d1129c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1129e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d112a0 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d112a6u);
  /* 10d112a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d112a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d112ab call 0x10d11dc0 */
  push32(0x10d112b0u); f_10d11dc0();
  /* 10d112b0 mov esi, esp */
  ESI = (ESP);
  /* 10d112b2 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d112b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d112b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d112bb call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d112c1u);
  /* 10d112c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d112c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d112c6 call 0x10d11dc0 */
  push32(0x10d112cbu); f_10d11dc0();
  /* 10d112cb mov esi, esp */
  ESI = (ESP);
  /* 10d112cd push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d112d2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d112d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d112d6 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d112dcu);
  /* 10d112dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d112df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d112e1 call 0x10d11dc0 */
  push32(0x10d112e6u); f_10d11dc0();
  /* 10d112e6 mov esi, esp */
  ESI = (ESP);
  /* 10d112e8 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d112ed push 4 */
  push32((uint32_t)(0x4u));
  /* 10d112ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10d112f1 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d112f7u);
  /* 10d112f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d112fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d112fc call 0x10d11dc0 */
  push32(0x10d11301u); f_10d11dc0();
  /* 10d11301 mov esi, esp */
  ESI = (ESP);
  /* 10d11303 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d11308 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d1130a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1130c call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d11312u);
  /* 10d11312 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11315 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11317 call 0x10d11dc0 */
  push32(0x10d1131cu); f_10d11dc0();
  /* 10d1131c mov esi, esp */
  ESI = (ESP);
  /* 10d1131e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d11323 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d11325 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d11327 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d1132du);
  /* 10d1132d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11330 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11332 call 0x10d11dc0 */
  push32(0x10d11337u); f_10d11dc0();
  /* 10d11337 mov esi, esp */
  ESI = (ESP);
  /* 10d11339 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d1133e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d11340 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d11342 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d11348u);
  /* 10d11348 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1134b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1134d call 0x10d11dc0 */
  push32(0x10d11352u); f_10d11dc0();
  /* 10d11352 mov esi, esp */
  ESI = (ESP);
  /* 10d11354 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d11359 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1135b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1135d call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d11363u);
  /* 10d11363 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11366 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11368 call 0x10d11dc0 */
  push32(0x10d1136du); f_10d11dc0();
  /* 10d1136d mov esi, esp */
  ESI = (ESP);
  /* 10d1136f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d11374 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d11376 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d11378 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d1137eu);
  /* 10d1137e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11381 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11383 call 0x10d11dc0 */
  push32(0x10d11388u); f_10d11dc0();
  /* 10d11388 mov esi, esp */
  ESI = (ESP);
  /* 10d1138a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d1138f push 4 */
  push32((uint32_t)(0x4u));
  /* 10d11391 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d11393 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d11399u);
  /* 10d11399 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1139c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1139e call 0x10d11dc0 */
  push32(0x10d113a3u); f_10d11dc0();
  /* 10d113a3 mov esi, esp */
  ESI = (ESP);
  /* 10d113a5 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d113aa push 3 */
  push32((uint32_t)(0x3u));
  /* 10d113ac push 2 */
  push32((uint32_t)(0x2u));
  /* 10d113ae call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d113b4u);
  /* 10d113b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d113b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d113b9 call 0x10d11dc0 */
  push32(0x10d113beu); f_10d11dc0();
  /* 10d113be mov esi, esp */
  ESI = (ESP);
  /* 10d113c0 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d113c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d113c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d113c9 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d113cfu);
  /* 10d113cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d113d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d113d4 call 0x10d11dc0 */
  push32(0x10d113d9u); f_10d11dc0();
  /* 10d113d9 mov esi, esp */
  ESI = (ESP);
  /* 10d113db push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d113e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d113e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d113e4 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d113eau);
  /* 10d113ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d113ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d113ef call 0x10d11dc0 */
  push32(0x10d113f4u); f_10d11dc0();
  /* 10d113f4 mov esi, esp */
  ESI = (ESP);
  /* 10d113f6 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d113fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10d113fd push 2 */
  push32((uint32_t)(0x2u));
  /* 10d113ff call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d11405u);
  /* 10d11405 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11408 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1140a call 0x10d11dc0 */
  push32(0x10d1140fu); f_10d11dc0();
  /* 10d1140f mov esi, esp */
  ESI = (ESP);
  /* 10d11411 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d11416 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d11418 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1141a call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d11420u);
  /* 10d11420 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11423 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11425 call 0x10d11dc0 */
  push32(0x10d1142au); f_10d11dc0();
  /* 10d1142a mov esi, esp */
  ESI = (ESP);
  /* 10d1142c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d11431 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d11433 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d11435 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d1143bu);
  /* 10d1143b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1143e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11440 call 0x10d11dc0 */
  push32(0x10d11445u); f_10d11dc0();
  /* 10d11445 mov esi, esp */
  ESI = (ESP);
  /* 10d11447 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d1144c push 3 */
  push32((uint32_t)(0x3u));
  /* 10d1144e push 3 */
  push32((uint32_t)(0x3u));
  /* 10d11450 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d11456u);
  /* 10d11456 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1145b call 0x10d11dc0 */
  push32(0x10d11460u); f_10d11dc0();
  /* 10d11460 mov esi, esp */
  ESI = (ESP);
  /* 10d11462 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d11467 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d11469 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d1146b call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d11471u);
  /* 10d11471 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11474 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11476 call 0x10d11dc0 */
  push32(0x10d1147bu); f_10d11dc0();
  /* 10d1147b mov esi, esp */
  ESI = (ESP);
  /* 10d1147d push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d11482 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d11484 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d11486 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d1148cu);
  /* 10d1148c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1148f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11491 call 0x10d11dc0 */
  push32(0x10d11496u); f_10d11dc0();
  /* 10d11496 mov esi, esp */
  ESI = (ESP);
  /* 10d11498 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d1149d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1149f push 3 */
  push32((uint32_t)(0x3u));
  /* 10d114a1 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d114a7u);
  /* 10d114a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d114aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d114ac call 0x10d11dc0 */
  push32(0x10d114b1u); f_10d11dc0();
  /* 10d114b1 mov esi, esp */
  ESI = (ESP);
  /* 10d114b3 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d114b8 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d114ba push 3 */
  push32((uint32_t)(0x3u));
  /* 10d114bc call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d114c2u);
  /* 10d114c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d114c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d114c7 call 0x10d11dc0 */
  push32(0x10d114ccu); f_10d11dc0();
  /* 10d114cc mov esi, esp */
  ESI = (ESP);
  /* 10d114ce push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d114d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d114d5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d114d7 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d114ddu);
  /* 10d114dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d114e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d114e2 call 0x10d11dc0 */
  push32(0x10d114e7u); f_10d11dc0();
  /* 10d114e7 mov esi, esp */
  ESI = (ESP);
  /* 10d114e9 push 0x98967f */
  push32((uint32_t)(0x98967fu));
  /* 10d114ee push 3 */
  push32((uint32_t)(0x3u));
  /* 10d114f0 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d114f2 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d114f8u);
  /* 10d114f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d114fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d114fd call 0x10d11dc0 */
  push32(0x10d11502u); f_10d11dc0();
  /* 10d11502 mov esi, esp */
  ESI = (ESP);
  /* 10d11504 push 0x98967f */
  push32((uint32_t)(0x98967fu));
  /* 10d11509 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1150b push 5 */
  push32((uint32_t)(0x5u));
  /* 10d1150d call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d11513u);
  /* 10d11513 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11516 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11518 call 0x10d11dc0 */
  push32(0x10d1151du); f_10d11dc0();
  /* 10d1151d mov esi, esp */
  ESI = (ESP);
  /* 10d1151f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d11524 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d11526 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d11528 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d1152eu);
  /* 10d1152e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11531 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11533 call 0x10d11dc0 */
  push32(0x10d11538u); f_10d11dc0();
  /* 10d11538 mov esi, esp */
  ESI = (ESP);
  /* 10d1153a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d1153f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d11541 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d11543 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d11549u);
  /* 10d11549 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1154c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1154e call 0x10d11dc0 */
  push32(0x10d11553u); f_10d11dc0();
  /* 10d11553 mov esi, esp */
  ESI = (ESP);
  /* 10d11555 push 0x98967f */
  push32((uint32_t)(0x98967fu));
  /* 10d1155a push 5 */
  push32((uint32_t)(0x5u));
  /* 10d1155c push 5 */
  push32((uint32_t)(0x5u));
  /* 10d1155e call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d11564u);
  /* 10d11564 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11567 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11569 call 0x10d11dc0 */
  push32(0x10d1156eu); f_10d11dc0();
  /* 10d1156e mov esi, esp */
  ESI = (ESP);
  /* 10d11570 push 0x98967f */
  push32((uint32_t)(0x98967fu));
  /* 10d11575 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d11577 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d11579 call dword ptr [0x10d403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c8))), 0x10d1157fu);
  /* 10d1157f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11582 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11584 call 0x10d11dc0 */
  push32(0x10d11589u); f_10d11dc0();
  /* 10d11589 mov esi, esp */
  ESI = (ESP);
  /* 10d1158b push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d1158d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1158f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d11591 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d11593 push 0x10d39094 */
  push32((uint32_t)(0x10d39094u));
  /* 10d11598 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1159a call dword ptr [0x10d403d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403d8))), 0x10d115a0u);
  /* 10d115a0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d115a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d115a5 call 0x10d11dc0 */
  push32(0x10d115aau); f_10d11dc0();
  /* 10d115aa mov esi, esp */
  ESI = (ESP);
  /* 10d115ac push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d115ae push 1 */
  push32((uint32_t)(0x1u));
  /* 10d115b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d115b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d115b4 push 0x10d39088 */
  push32((uint32_t)(0x10d39088u));
  /* 10d115b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d115bb call dword ptr [0x10d403d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403d8))), 0x10d115c1u);
  /* 10d115c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d115c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d115c6 call 0x10d11dc0 */
  push32(0x10d115cbu); f_10d11dc0();
  /* 10d115cb mov esi, esp */
  ESI = (ESP);
  /* 10d115cd push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d115cf push 1 */
  push32((uint32_t)(0x1u));
  /* 10d115d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d115d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d115d5 push 0x10d3907c */
  push32((uint32_t)(0x10d3907cu));
  /* 10d115da push 3 */
  push32((uint32_t)(0x3u));
  /* 10d115dc call dword ptr [0x10d403d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403d8))), 0x10d115e2u);
  /* 10d115e2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d115e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d115e7 call 0x10d11dc0 */
  push32(0x10d115ecu); f_10d11dc0();
L_10d115ec:;
  /* 10d115ec mov esi, esp */
  ESI = (ESP);
  /* 10d115ee push 2 */
  push32((uint32_t)(0x2u));
  /* 10d115f0 call dword ptr [0x10d403cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403cc))), 0x10d115f6u);
  /* 10d115f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d115f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d115fb call 0x10d11dc0 */
  push32(0x10d11600u); f_10d11dc0();
  /* 10d11600 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d11605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11607 je 0x10d11658 */
  if (C.zf) goto L_10d11658;
  /* 10d11609 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1160b push 0x10d3e3f0 */
  push32((uint32_t)(0x10d3e3f0u));
  /* 10d11610 call 0x10d1100f */
  push32(0x10d11615u); f_10d1100f();
  /* 10d11615 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11618 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1161a jle 0x10d11658 */
  if ((C.zf||C.sf!=C.of)) goto L_10d11658;
  /* 10d1161c mov esi, esp */
  ESI = (ESP);
  /* 10d1161e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d11620 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d11622 call dword ptr [0x10d403d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403d0))), 0x10d11628u);
  /* 10d11628 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1162b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1162d call 0x10d11dc0 */
  push32(0x10d11632u); f_10d11dc0();
  /* 10d11632 mov esi, esp */
  ESI = (ESP);
  /* 10d11634 push 0x10d39074 */
  push32((uint32_t)(0x10d39074u));
  /* 10d11639 call dword ptr [0x10d403dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403dc))), 0x10d1163fu);
  /* 10d1163f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11642 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11644 call 0x10d11dc0 */
  push32(0x10d11649u); f_10d11dc0();
  /* 10d11649 mov esi, esp */
  ESI = (ESP);
  /* 10d1164b call dword ptr [0x10d403d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403d4))), 0x10d11651u);
  /* 10d11651 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11653 call 0x10d11dc0 */
  push32(0x10d11658u); f_10d11dc0();
L_10d11658:;
  /* 10d11658 mov esi, esp */
  ESI = (ESP);
  /* 10d1165a push 3 */
  push32((uint32_t)(0x3u));
  /* 10d1165c call dword ptr [0x10d403cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403cc))), 0x10d11662u);
  /* 10d11662 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11665 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11667 call 0x10d11dc0 */
  push32(0x10d1166cu); f_10d11dc0();
  /* 10d1166c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d11671 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11673 je 0x10d116c2 */
  if (C.zf) goto L_10d116c2;
  /* 10d11675 push 0x10d3e3e0 */
  push32((uint32_t)(0x10d3e3e0u));
  /* 10d1167a call 0x10d11005 */
  push32(0x10d1167fu); f_10d11005();
  /* 10d1167f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11682 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11684 jne 0x10d116c2 */
  if (!C.zf) goto L_10d116c2;
  /* 10d11686 mov esi, esp */
  ESI = (ESP);
  /* 10d11688 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1168a push 3 */
  push32((uint32_t)(0x3u));
  /* 10d1168c call dword ptr [0x10d403d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403d0))), 0x10d11692u);
  /* 10d11692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11695 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11697 call 0x10d11dc0 */
  push32(0x10d1169cu); f_10d11dc0();
  /* 10d1169c mov esi, esp */
  ESI = (ESP);
  /* 10d1169e push 0x10d3906c */
  push32((uint32_t)(0x10d3906cu));
  /* 10d116a3 call dword ptr [0x10d403dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403dc))), 0x10d116a9u);
  /* 10d116a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d116ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d116ae call 0x10d11dc0 */
  push32(0x10d116b3u); f_10d11dc0();
  /* 10d116b3 mov esi, esp */
  ESI = (ESP);
  /* 10d116b5 call dword ptr [0x10d403e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e4))), 0x10d116bbu);
  /* 10d116bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d116bd call 0x10d11dc0 */
  push32(0x10d116c2u); f_10d11dc0();
L_10d116c2:;
  /* 10d116c2 mov esi, esp */
  ESI = (ESP);
  /* 10d116c4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d116c6 call dword ptr [0x10d403cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403cc))), 0x10d116ccu);
  /* 10d116cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d116cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d116d1 call 0x10d11dc0 */
  push32(0x10d116d6u); f_10d11dc0();
  /* 10d116d6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d116db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d116dd je 0x10d11754 */
  if (C.zf) goto L_10d11754;
  /* 10d116df push 1 */
  push32((uint32_t)(0x1u));
  /* 10d116e1 push 0x10d3e3f0 */
  push32((uint32_t)(0x10d3e3f0u));
  /* 10d116e6 call 0x10d1100f */
  push32(0x10d116ebu); f_10d1100f();
  /* 10d116eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d116ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d116f0 jg 0x10d11718 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d11718;
  /* 10d116f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d116f4 push 0x10d3e3f0 */
  push32((uint32_t)(0x10d3e3f0u));
  /* 10d116f9 call 0x10d1100f */
  push32(0x10d116feu); f_10d1100f();
  /* 10d116fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11701 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11703 jg 0x10d11718 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d11718;
  /* 10d11705 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d11707 push 0x10d3e3f0 */
  push32((uint32_t)(0x10d3e3f0u));
  /* 10d1170c call 0x10d1100f */
  push32(0x10d11711u); f_10d1100f();
  /* 10d11711 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11714 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11716 jle 0x10d11754 */
  if ((C.zf||C.sf!=C.of)) goto L_10d11754;
L_10d11718:;
  /* 10d11718 mov esi, esp */
  ESI = (ESP);
  /* 10d1171a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1171c push 4 */
  push32((uint32_t)(0x4u));
  /* 10d1171e call dword ptr [0x10d403d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403d0))), 0x10d11724u);
  /* 10d11724 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11727 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11729 call 0x10d11dc0 */
  push32(0x10d1172eu); f_10d11dc0();
  /* 10d1172e mov esi, esp */
  ESI = (ESP);
  /* 10d11730 push 0x10d39064 */
  push32((uint32_t)(0x10d39064u));
  /* 10d11735 call dword ptr [0x10d403dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403dc))), 0x10d1173bu);
  /* 10d1173b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1173e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11740 call 0x10d11dc0 */
  push32(0x10d11745u); f_10d11dc0();
  /* 10d11745 mov esi, esp */
  ESI = (ESP);
  /* 10d11747 call dword ptr [0x10d403e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e4))), 0x10d1174du);
  /* 10d1174d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1174f call 0x10d11dc0 */
  push32(0x10d11754u); f_10d11dc0();
L_10d11754:;
  /* 10d11754 mov esi, esp */
  ESI = (ESP);
  /* 10d11756 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d11758 push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d1175d call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d11763u);
  /* 10d11763 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11766 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11768 call 0x10d11dc0 */
  push32(0x10d1176du); f_10d11dc0();
  /* 10d1176d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1176f jle 0x10d1181e */
  if ((C.zf||C.sf!=C.of)) goto L_10d1181e;
  /* 10d11775 mov esi, esp */
  ESI = (ESP);
  /* 10d11777 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d11779 push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d1177e call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d11784u);
  /* 10d11784 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11787 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11789 call 0x10d11dc0 */
  push32(0x10d1178eu); f_10d11dc0();
  /* 10d1178e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11790 jne 0x10d1181e */
  if (!C.zf) goto L_10d1181e;
  /* 10d11796 mov esi, esp */
  ESI = (ESP);
  /* 10d11798 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1179a push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d1179f call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d117a5u);
  /* 10d117a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d117a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d117aa call 0x10d11dc0 */
  push32(0x10d117afu); f_10d11dc0();
  /* 10d117af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d117b1 jne 0x10d1181e */
  if (!C.zf) goto L_10d1181e;
  /* 10d117b3 mov esi, esp */
  ESI = (ESP);
  /* 10d117b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d117b7 push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d117bc call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d117c2u);
  /* 10d117c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d117c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d117c7 call 0x10d11dc0 */
  push32(0x10d117ccu); f_10d11dc0();
  /* 10d117cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d117ce jne 0x10d1181e */
  if (!C.zf) goto L_10d1181e;
  /* 10d117d0 mov esi, esp */
  ESI = (ESP);
  /* 10d117d2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d117d4 push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d117d9 call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d117dfu);
  /* 10d117df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d117e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d117e4 call 0x10d11dc0 */
  push32(0x10d117e9u); f_10d11dc0();
  /* 10d117e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d117eb jne 0x10d1181e */
  if (!C.zf) goto L_10d1181e;
  /* 10d117ed mov esi, esp */
  ESI = (ESP);
  /* 10d117ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10d117f1 push 0x10d3e3e0 */
  push32((uint32_t)(0x10d3e3e0u));
  /* 10d117f6 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d117f8 call dword ptr [0x10d403e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e0))), 0x10d117feu);
  /* 10d117fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11801 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11803 call 0x10d11dc0 */
  push32(0x10d11808u); f_10d11dc0();
  /* 10d11808 mov esi, esp */
  ESI = (ESP);
  /* 10d1180a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1180c push 5 */
  push32((uint32_t)(0x5u));
  /* 10d1180e call dword ptr [0x10d403f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403f0))), 0x10d11814u);
  /* 10d11814 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11817 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11819 call 0x10d11dc0 */
  push32(0x10d1181eu); f_10d11dc0();
L_10d1181e:;
  /* 10d1181e mov esi, esp */
  ESI = (ESP);
  /* 10d11820 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d11822 push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d11827 call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d1182du);
  /* 10d1182d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11830 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11832 call 0x10d11dc0 */
  push32(0x10d11837u); f_10d11dc0();
  /* 10d11837 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11839 jle 0x10d118e8 */
  if ((C.zf||C.sf!=C.of)) goto L_10d118e8;
  /* 10d1183f mov esi, esp */
  ESI = (ESP);
  /* 10d11841 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d11843 push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d11848 call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d1184eu);
  /* 10d1184e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11851 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11853 call 0x10d11dc0 */
  push32(0x10d11858u); f_10d11dc0();
  /* 10d11858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1185a jne 0x10d118e8 */
  if (!C.zf) goto L_10d118e8;
  /* 10d11860 mov esi, esp */
  ESI = (ESP);
  /* 10d11862 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d11864 push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d11869 call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d1186fu);
  /* 10d1186f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11872 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11874 call 0x10d11dc0 */
  push32(0x10d11879u); f_10d11dc0();
  /* 10d11879 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1187b jne 0x10d118e8 */
  if (!C.zf) goto L_10d118e8;
  /* 10d1187d mov esi, esp */
  ESI = (ESP);
  /* 10d1187f push 3 */
  push32((uint32_t)(0x3u));
  /* 10d11881 push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d11886 call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d1188cu);
  /* 10d1188c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1188f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11891 call 0x10d11dc0 */
  push32(0x10d11896u); f_10d11dc0();
  /* 10d11896 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11898 jne 0x10d118e8 */
  if (!C.zf) goto L_10d118e8;
  /* 10d1189a mov esi, esp */
  ESI = (ESP);
  /* 10d1189c push 5 */
  push32((uint32_t)(0x5u));
  /* 10d1189e push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d118a3 call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d118a9u);
  /* 10d118a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d118ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d118ae call 0x10d11dc0 */
  push32(0x10d118b3u); f_10d11dc0();
  /* 10d118b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d118b5 jne 0x10d118e8 */
  if (!C.zf) goto L_10d118e8;
  /* 10d118b7 mov esi, esp */
  ESI = (ESP);
  /* 10d118b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d118bb push 0x10d3e3e0 */
  push32((uint32_t)(0x10d3e3e0u));
  /* 10d118c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d118c2 call dword ptr [0x10d403e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e0))), 0x10d118c8u);
  /* 10d118c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d118cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d118cd call 0x10d11dc0 */
  push32(0x10d118d2u); f_10d11dc0();
  /* 10d118d2 mov esi, esp */
  ESI = (ESP);
  /* 10d118d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d118d6 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d118d8 call dword ptr [0x10d403f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403f0))), 0x10d118deu);
  /* 10d118de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d118e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d118e3 call 0x10d11dc0 */
  push32(0x10d118e8u); f_10d11dc0();
L_10d118e8:;
  /* 10d118e8 mov esi, esp */
  ESI = (ESP);
  /* 10d118ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10d118ec push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d118f1 call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d118f7u);
  /* 10d118f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d118fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d118fc call 0x10d11dc0 */
  push32(0x10d11901u); f_10d11dc0();
  /* 10d11901 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11903 jle 0x10d119b2 */
  if ((C.zf||C.sf!=C.of)) goto L_10d119b2;
  /* 10d11909 mov esi, esp */
  ESI = (ESP);
  /* 10d1190b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1190d push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d11912 call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d11918u);
  /* 10d11918 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1191b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1191d call 0x10d11dc0 */
  push32(0x10d11922u); f_10d11dc0();
  /* 10d11922 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11924 jne 0x10d119b2 */
  if (!C.zf) goto L_10d119b2;
  /* 10d1192a mov esi, esp */
  ESI = (ESP);
  /* 10d1192c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1192e push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d11933 call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d11939u);
  /* 10d11939 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1193c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1193e call 0x10d11dc0 */
  push32(0x10d11943u); f_10d11dc0();
  /* 10d11943 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11945 jne 0x10d119b2 */
  if (!C.zf) goto L_10d119b2;
  /* 10d11947 mov esi, esp */
  ESI = (ESP);
  /* 10d11949 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d1194b push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d11950 call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d11956u);
  /* 10d11956 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11959 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1195b call 0x10d11dc0 */
  push32(0x10d11960u); f_10d11dc0();
  /* 10d11960 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11962 jne 0x10d119b2 */
  if (!C.zf) goto L_10d119b2;
  /* 10d11964 mov esi, esp */
  ESI = (ESP);
  /* 10d11966 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d11968 push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d1196d call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d11973u);
  /* 10d11973 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11976 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11978 call 0x10d11dc0 */
  push32(0x10d1197du); f_10d11dc0();
  /* 10d1197d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1197f jne 0x10d119b2 */
  if (!C.zf) goto L_10d119b2;
  /* 10d11981 mov esi, esp */
  ESI = (ESP);
  /* 10d11983 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d11985 push 0x10d3e3e0 */
  push32((uint32_t)(0x10d3e3e0u));
  /* 10d1198a push 5 */
  push32((uint32_t)(0x5u));
  /* 10d1198c call dword ptr [0x10d403e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e0))), 0x10d11992u);
  /* 10d11992 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11995 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11997 call 0x10d11dc0 */
  push32(0x10d1199cu); f_10d11dc0();
  /* 10d1199c mov esi, esp */
  ESI = (ESP);
  /* 10d1199e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d119a0 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d119a2 call dword ptr [0x10d403f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403f0))), 0x10d119a8u);
  /* 10d119a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d119ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d119ad call 0x10d11dc0 */
  push32(0x10d119b2u); f_10d11dc0();
L_10d119b2:;
  /* 10d119b2 mov esi, esp */
  ESI = (ESP);
  /* 10d119b4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d119b6 push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d119bb call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d119c1u);
  /* 10d119c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d119c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d119c6 call 0x10d11dc0 */
  push32(0x10d119cbu); f_10d11dc0();
  /* 10d119cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d119cd jle 0x10d11a7c */
  if ((C.zf||C.sf!=C.of)) goto L_10d11a7c;
  /* 10d119d3 mov esi, esp */
  ESI = (ESP);
  /* 10d119d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d119d7 push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d119dc call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d119e2u);
  /* 10d119e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d119e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d119e7 call 0x10d11dc0 */
  push32(0x10d119ecu); f_10d11dc0();
  /* 10d119ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d119ee jne 0x10d11a7c */
  if (!C.zf) goto L_10d11a7c;
  /* 10d119f4 mov esi, esp */
  ESI = (ESP);
  /* 10d119f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d119f8 push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d119fd call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d11a03u);
  /* 10d11a03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11a06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11a08 call 0x10d11dc0 */
  push32(0x10d11a0du); f_10d11dc0();
  /* 10d11a0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11a0f jne 0x10d11a7c */
  if (!C.zf) goto L_10d11a7c;
  /* 10d11a11 mov esi, esp */
  ESI = (ESP);
  /* 10d11a13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d11a15 push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d11a1a call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d11a20u);
  /* 10d11a20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11a23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11a25 call 0x10d11dc0 */
  push32(0x10d11a2au); f_10d11dc0();
  /* 10d11a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11a2c jne 0x10d11a7c */
  if (!C.zf) goto L_10d11a7c;
  /* 10d11a2e mov esi, esp */
  ESI = (ESP);
  /* 10d11a30 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d11a32 push 0x10d3e3e8 */
  push32((uint32_t)(0x10d3e3e8u));
  /* 10d11a37 call dword ptr [0x10d403e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e8))), 0x10d11a3du);
  /* 10d11a3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11a40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11a42 call 0x10d11dc0 */
  push32(0x10d11a47u); f_10d11dc0();
  /* 10d11a47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11a49 jne 0x10d11a7c */
  if (!C.zf) goto L_10d11a7c;
  /* 10d11a4b mov esi, esp */
  ESI = (ESP);
  /* 10d11a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d11a4f push 0x10d3e3e0 */
  push32((uint32_t)(0x10d3e3e0u));
  /* 10d11a54 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d11a56 call dword ptr [0x10d403e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403e0))), 0x10d11a5cu);
  /* 10d11a5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11a5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11a61 call 0x10d11dc0 */
  push32(0x10d11a66u); f_10d11dc0();
  /* 10d11a66 mov esi, esp */
  ESI = (ESP);
  /* 10d11a68 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d11a6a push 5 */
  push32((uint32_t)(0x5u));
  /* 10d11a6c call dword ptr [0x10d403f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403f0))), 0x10d11a72u);
  /* 10d11a72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11a75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11a77 call 0x10d11dc0 */
  push32(0x10d11a7cu); f_10d11dc0();
L_10d11a7c:;
  /* 10d11a7c pop edi */
  EDI = (pop32());
  /* 10d11a7d pop esi */
  ESI = (pop32());
  /* 10d11a7e pop ebx */
  EBX = (pop32());
  /* 10d11a7f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11a82 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11a84 call 0x10d11dc0 */
  push32(0x10d11a89u); f_10d11dc0();
  /* 10d11a89 mov esp, ebp */
  ESP = (EBP);
  /* 10d11a8b pop ebp */
  EBP = (pop32());
  /* 10d11a8c ret  */
  ESPCHK(0x10d11210u, _esp0);
  ESP += 4; return;
}

/* FUN_10001cb0 @ 0x10d11cb0 (63 bytes, 26 insns) */
void f_10d11cb0(void) {
  FTRACE(0x10d11cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d11cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d11cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10d11cb3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d11cb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d11cb7 push esi */
  push32((uint32_t)(ESI));
  /* 10d11cb8 push edi */
  push32((uint32_t)(EDI));
  /* 10d11cb9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10d11cbc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10d11cc1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10d11cc6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d11cc8 mov esi, esp */
  ESI = (ESP);
  /* 10d11cca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d11ccd push eax */
  push32((uint32_t)(EAX));
  /* 10d11cce call dword ptr [0x10d403c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c0))), 0x10d11cd4u);
  /* 10d11cd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11cd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11cd9 call 0x10d11dc0 */
  push32(0x10d11cdeu); f_10d11dc0();
  /* 10d11cde pop edi */
  EDI = (pop32());
  /* 10d11cdf pop esi */
  ESI = (pop32());
  /* 10d11ce0 pop ebx */
  EBX = (pop32());
  /* 10d11ce1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11ce4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11ce6 call 0x10d11dc0 */
  push32(0x10d11cebu); f_10d11dc0();
  /* 10d11ceb mov esp, ebp */
  ESP = (EBP);
  /* 10d11ced pop ebp */
  EBP = (pop32());
  /* 10d11cee ret  */
  ESPCHK(0x10d11cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d00 @ 0x10d11d00 (67 bytes, 28 insns) */
void f_10d11d00(void) {
  FTRACE(0x10d11d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d11d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d11d01 mov ebp, esp */
  EBP = (ESP);
  /* 10d11d03 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d11d06 push ebx */
  push32((uint32_t)(EBX));
  /* 10d11d07 push esi */
  push32((uint32_t)(ESI));
  /* 10d11d08 push edi */
  push32((uint32_t)(EDI));
  /* 10d11d09 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10d11d0c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10d11d11 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10d11d16 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d11d18 mov esi, esp */
  ESI = (ESP);
  /* 10d11d1a mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 10d11d1d push eax */
  push32((uint32_t)(EAX));
  /* 10d11d1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d11d21 push ecx */
  push32((uint32_t)(ECX));
  /* 10d11d22 call dword ptr [0x10d403c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d403c4))), 0x10d11d28u);
  /* 10d11d28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11d2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11d2d call 0x10d11dc0 */
  push32(0x10d11d32u); f_10d11dc0();
  /* 10d11d32 pop edi */
  EDI = (pop32());
  /* 10d11d33 pop esi */
  ESI = (pop32());
  /* 10d11d34 pop ebx */
  EBX = (pop32());
  /* 10d11d35 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11d38 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11d3a call 0x10d11dc0 */
  push32(0x10d11d3fu); f_10d11dc0();
  /* 10d11d3f mov esp, ebp */
  ESP = (EBP);
  /* 10d11d41 pop ebp */
  EBP = (pop32());
  /* 10d11d42 ret  */
  ESPCHK(0x10d11d00u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10d11dc0 (56 bytes, 28 insns) */
void f_10d11dc0(void) {
  FTRACE(0x10d11dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d11dc0 jne 0x10d11dc3 */
  if (!C.zf) goto L_10d11dc3;
  /* 10d11dc2 ret  */
  ESPCHK(0x10d11dc0u, _esp0);
  ESP += 4; return;
L_10d11dc3:;
  /* 10d11dc3 push ebp */
  push32((uint32_t)(EBP));
  /* 10d11dc4 mov ebp, esp */
  EBP = (ESP);
  /* 10d11dc6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d11dc9 push eax */
  push32((uint32_t)(EAX));
  /* 10d11dca push edx */
  push32((uint32_t)(EDX));
  /* 10d11dcb push ebx */
  push32((uint32_t)(EBX));
  /* 10d11dcc push esi */
  push32((uint32_t)(ESI));
  /* 10d11dcd push edi */
  push32((uint32_t)(EDI));
  /* 10d11dce push 0x10d390b4 */
  push32((uint32_t)(0x10d390b4u));
  /* 10d11dd3 push 0x10d390b0 */
  push32((uint32_t)(0x10d390b0u));
  /* 10d11dd8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10d11dda push 0x10d390a0 */
  push32((uint32_t)(0x10d390a0u));
  /* 10d11ddf push 1 */
  push32((uint32_t)(0x1u));
  /* 10d11de1 call 0x10d12190 */
  push32(0x10d11de6u); f_10d12190();
  /* 10d11de6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11de9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11dec jne 0x10d11def */
  if (!C.zf) goto L_10d11def;
  /* 10d11dee int3  */
  x86_unimpl("int3 @ 0x10d11dee");
L_10d11def:;
  /* 10d11def pop edi */
  EDI = (pop32());
  /* 10d11df0 pop esi */
  ESI = (pop32());
  /* 10d11df1 pop ebx */
  EBX = (pop32());
  /* 10d11df2 pop edx */
  EDX = (pop32());
  /* 10d11df3 pop eax */
  EAX = (pop32());
  /* 10d11df4 mov esp, ebp */
  ESP = (EBP);
  /* 10d11df6 pop ebp */
  EBP = (pop32());
  /* 10d11df7 ret  */
  ESPCHK(0x10d11dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e00 @ 0x10d11e00 (313 bytes, 78 insns) */
void f_10d11e00(void) {
  FTRACE(0x10d11e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d11e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d11e01 mov ebp, esp */
  EBP = (ESP);
  /* 10d11e03 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11e07 jne 0x10d11ec7 */
  if (!C.zf) goto L_10d11ec7;
  /* 10d11e0d call dword ptr [0x10d40284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40284))), 0x10d11e13u);
  /* 10d11e13 mov dword ptr [0x10d3e420], eax */
  w32((uint32_t)(0x10d3e420), (EAX));
  /* 10d11e18 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d11e1a call 0x10d158c0 */
  push32(0x10d11e1fu); f_10d158c0();
  /* 10d11e1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11e22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11e24 jne 0x10d11e2d */
  if (!C.zf) goto L_10d11e2d;
  /* 10d11e26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d11e28 jmp 0x10d11f35 */
  goto L_10d11f35;
L_10d11e2d:;
  /* 10d11e2d mov eax, dword ptr [0x10d3e420] */
  EAX = (r32((uint32_t)(0x10d3e420)));
  /* 10d11e32 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10d11e35 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d11e3a mov dword ptr [0x10d3e42c], eax */
  w32((uint32_t)(0x10d3e42c), (EAX));
  /* 10d11e3f mov ecx, dword ptr [0x10d3e420] */
  ECX = (r32((uint32_t)(0x10d3e420)));
  /* 10d11e45 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d11e4b mov dword ptr [0x10d3e428], ecx */
  w32((uint32_t)(0x10d3e428), (ECX));
  /* 10d11e51 mov edx, dword ptr [0x10d3e428] */
  EDX = (r32((uint32_t)(0x10d3e428)));
  /* 10d11e57 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10d11e5a add edx, dword ptr [0x10d3e42c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d3e42c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11e60 mov dword ptr [0x10d3e424], edx */
  w32((uint32_t)(0x10d3e424), (EDX));
  /* 10d11e66 mov eax, dword ptr [0x10d3e420] */
  EAX = (r32((uint32_t)(0x10d3e420)));
  /* 10d11e6b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10d11e6e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d11e73 mov dword ptr [0x10d3e420], eax */
  w32((uint32_t)(0x10d3e420), (EAX));
  /* 10d11e78 call 0x10d12a30 */
  push32(0x10d11e7du); f_10d12a30();
  /* 10d11e7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11e7f jne 0x10d11e8d */
  if (!C.zf) goto L_10d11e8d;
  /* 10d11e81 call 0x10d15910 */
  push32(0x10d11e86u); f_10d15910();
  /* 10d11e86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d11e88 jmp 0x10d11f35 */
  goto L_10d11f35;
L_10d11e8d:;
  /* 10d11e8d call dword ptr [0x10d40280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40280))), 0x10d11e93u);
  /* 10d11e93 mov dword ptr [0x10d3ff6c], eax */
  w32((uint32_t)(0x10d3ff6c), (EAX));
  /* 10d11e98 call 0x10d156a0 */
  push32(0x10d11e9du); f_10d156a0();
  /* 10d11e9d mov dword ptr [0x10d3e408], eax */
  w32((uint32_t)(0x10d3e408), (EAX));
  /* 10d11ea2 call 0x10d12ce0 */
  push32(0x10d11ea7u); f_10d12ce0();
  /* 10d11ea7 call 0x10d15190 */
  push32(0x10d11eacu); f_10d15190();
  /* 10d11eac call 0x10d15040 */
  push32(0x10d11eb1u); f_10d15040();
  /* 10d11eb1 call 0x10d12830 */
  push32(0x10d11eb6u); f_10d12830();
  /* 10d11eb6 mov ecx, dword ptr [0x10d3e404] */
  ECX = (r32((uint32_t)(0x10d3e404)));
  /* 10d11ebc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11ebf mov dword ptr [0x10d3e404], ecx */
  w32((uint32_t)(0x10d3e404), (ECX));
  /* 10d11ec5 jmp 0x10d11f30 */
  goto L_10d11f30;
L_10d11ec7:;
  /* 10d11ec7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11ecb jne 0x10d11f20 */
  if (!C.zf) goto L_10d11f20;
  /* 10d11ecd cmp dword ptr [0x10d3e404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11ed4 jle 0x10d11f1a */
  if ((C.zf||C.sf!=C.of)) goto L_10d11f1a;
  /* 10d11ed6 mov edx, dword ptr [0x10d3e404] */
  EDX = (r32((uint32_t)(0x10d3e404)));
  /* 10d11edc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d11edf mov dword ptr [0x10d3e404], edx */
  w32((uint32_t)(0x10d3e404), (EDX));
  /* 10d11ee5 cmp dword ptr [0x10d3e458], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e458))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11eec jne 0x10d11ef3 */
  if (!C.zf) goto L_10d11ef3;
  /* 10d11eee call 0x10d128b0 */
  push32(0x10d11ef3u); f_10d128b0();
L_10d11ef3:;
  /* 10d11ef3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d11ef5 call 0x10d145e0 */
  push32(0x10d11efau); f_10d145e0();
  /* 10d11efa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d11efd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10d11f00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11f02 je 0x10d11f09 */
  if (C.zf) goto L_10d11f09;
  /* 10d11f04 call 0x10d14ef0 */
  push32(0x10d11f09u); f_10d14ef0();
L_10d11f09:;
  /* 10d11f09 call 0x10d13010 */
  push32(0x10d11f0eu); f_10d13010();
  /* 10d11f0e call 0x10d12ac0 */
  push32(0x10d11f13u); f_10d12ac0();
  /* 10d11f13 call 0x10d15910 */
  push32(0x10d11f18u); f_10d15910();
  /* 10d11f18 jmp 0x10d11f1e */
  goto L_10d11f1e;
L_10d11f1a:;
  /* 10d11f1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d11f1c jmp 0x10d11f35 */
  goto L_10d11f35;
L_10d11f1e:;
  /* 10d11f1e jmp 0x10d11f30 */
  goto L_10d11f30;
L_10d11f20:;
  /* 10d11f20 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11f24 jne 0x10d11f30 */
  if (!C.zf) goto L_10d11f30;
  /* 10d11f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d11f28 call 0x10d12bb0 */
  push32(0x10d11f2du); f_10d12bb0();
  /* 10d11f2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d11f30:;
  /* 10d11f30 mov eax, 1 */
  EAX = (0x1u);
L_10d11f35:;
  /* 10d11f35 pop ebp */
  EBP = (pop32());
  /* 10d11f36 ret 0xc */
  ESPCHK(0x10d11e00u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10d11f40 (243 bytes, 86 insns) */
void f_10d11f40(void) {
  FTRACE(0x10d11f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d11f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10d11f41 mov ebp, esp */
  EBP = (ESP);
  /* 10d11f43 push ecx */
  push32((uint32_t)(ECX));
  /* 10d11f44 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d11f4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11f4f jne 0x10d11f61 */
  if (!C.zf) goto L_10d11f61;
  /* 10d11f51 cmp dword ptr [0x10d3e404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11f58 jne 0x10d11f61 */
  if (!C.zf) goto L_10d11f61;
  /* 10d11f5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d11f5c jmp 0x10d1202d */
  goto L_10d1202d;
L_10d11f61:;
  /* 10d11f61 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11f65 je 0x10d11f6d */
  if (C.zf) goto L_10d11f6d;
  /* 10d11f67 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11f6b jne 0x10d11faf */
  if (!C.zf) goto L_10d11faf;
L_10d11f6d:;
  /* 10d11f6d cmp dword ptr [0x10d3ff7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3ff7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11f74 je 0x10d11f8b */
  if (C.zf) goto L_10d11f8b;
  /* 10d11f76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d11f79 push eax */
  push32((uint32_t)(EAX));
  /* 10d11f7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d11f7d push ecx */
  push32((uint32_t)(ECX));
  /* 10d11f7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d11f81 push edx */
  push32((uint32_t)(EDX));
  /* 10d11f82 call dword ptr [0x10d3ff7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3ff7c))), 0x10d11f88u);
  /* 10d11f88 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d11f8b:;
  /* 10d11f8b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11f8f je 0x10d11fa5 */
  if (C.zf) goto L_10d11fa5;
  /* 10d11f91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d11f94 push eax */
  push32((uint32_t)(EAX));
  /* 10d11f95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d11f98 push ecx */
  push32((uint32_t)(ECX));
  /* 10d11f99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d11f9c push edx */
  push32((uint32_t)(EDX));
  /* 10d11f9d call 0x10d11e00 */
  push32(0x10d11fa2u); f_10d11e00();
  /* 10d11fa2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d11fa5:;
  /* 10d11fa5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11fa9 jne 0x10d11faf */
  if (!C.zf) goto L_10d11faf;
  /* 10d11fab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d11fad jmp 0x10d1202d */
  goto L_10d1202d;
L_10d11faf:;
  /* 10d11faf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d11fb2 push eax */
  push32((uint32_t)(EAX));
  /* 10d11fb3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d11fb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d11fb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d11fba push edx */
  push32((uint32_t)(EDX));
  /* 10d11fbb call 0x10d11014 */
  push32(0x10d11fc0u); f_10d11014();
  /* 10d11fc0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d11fc3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11fc7 jne 0x10d11fde */
  if (!C.zf) goto L_10d11fde;
  /* 10d11fc9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11fcd jne 0x10d11fde */
  if (!C.zf) goto L_10d11fde;
  /* 10d11fcf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d11fd2 push eax */
  push32((uint32_t)(EAX));
  /* 10d11fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d11fd5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d11fd8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d11fd9 call 0x10d11e00 */
  push32(0x10d11fdeu); f_10d11e00();
L_10d11fde:;
  /* 10d11fde cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11fe2 je 0x10d11fea */
  if (C.zf) goto L_10d11fea;
  /* 10d11fe4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d11fe8 jne 0x10d1202a */
  if (!C.zf) goto L_10d1202a;
L_10d11fea:;
  /* 10d11fea mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d11fed push edx */
  push32((uint32_t)(EDX));
  /* 10d11fee mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d11ff1 push eax */
  push32((uint32_t)(EAX));
  /* 10d11ff2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d11ff5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d11ff6 call 0x10d11e00 */
  push32(0x10d11ffbu); f_10d11e00();
  /* 10d11ffb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d11ffd jne 0x10d12006 */
  if (!C.zf) goto L_10d12006;
  /* 10d11fff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d12006:;
  /* 10d12006 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1200a je 0x10d1202a */
  if (C.zf) goto L_10d1202a;
  /* 10d1200c cmp dword ptr [0x10d3ff7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3ff7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12013 je 0x10d1202a */
  if (C.zf) goto L_10d1202a;
  /* 10d12015 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d12018 push edx */
  push32((uint32_t)(EDX));
  /* 10d12019 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1201c push eax */
  push32((uint32_t)(EAX));
  /* 10d1201d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12020 push ecx */
  push32((uint32_t)(ECX));
  /* 10d12021 call dword ptr [0x10d3ff7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3ff7c))), 0x10d12027u);
  /* 10d12027 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d1202a:;
  /* 10d1202a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d1202d:;
  /* 10d1202d mov esp, ebp */
  ESP = (EBP);
  /* 10d1202f pop ebp */
  EBP = (pop32());
  /* 10d12030 ret 0xc */
  ESPCHK(0x10d11f40u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10d12040 (58 bytes, 18 insns) */
void f_10d12040(void) {
  FTRACE(0x10d12040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d12040 push ebp */
  push32((uint32_t)(EBP));
  /* 10d12041 mov ebp, esp */
  EBP = (ESP);
  /* 10d12043 cmp dword ptr [0x10d3e410], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e410))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1204a je 0x10d1205e */
  if (C.zf) goto L_10d1205e;
  /* 10d1204c cmp dword ptr [0x10d3e410], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e410))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12053 jne 0x10d12063 */
  if (!C.zf) goto L_10d12063;
  /* 10d12055 cmp dword ptr [0x10d3e414], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e414))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1205c jne 0x10d12063 */
  if (!C.zf) goto L_10d12063;
L_10d1205e:;
  /* 10d1205e call 0x10d159b0 */
  push32(0x10d12063u); f_10d159b0();
L_10d12063:;
  /* 10d12063 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12066 push eax */
  push32((uint32_t)(EAX));
  /* 10d12067 call 0x10d15a00 */
  push32(0x10d1206cu); f_10d15a00();
  /* 10d1206c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1206f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10d12074 call dword ptr [0x10d3ca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3ca30))), 0x10d1207au);
  /* 10d1207a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1207d pop ebp */
  EBP = (pop32());
  /* 10d1207e ret  */
  ESPCHK(0x10d12040u, _esp0);
  ESP += 4; return;
}

/* FUN_10002080 @ 0x10d12080 (11 bytes, 5 insns) */
void f_10d12080(void) {
  FTRACE(0x10d12080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d12080 push ebp */
  push32((uint32_t)(EBP));
  /* 10d12081 mov ebp, esp */
  EBP = (ESP);
  /* 10d12083 call dword ptr [0x10d40288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40288))), 0x10d12089u);
  /* 10d12089 pop ebp */
  EBP = (pop32());
  /* 10d1208a ret  */
  ESPCHK(0x10d12080u, _esp0);
  ESP += 4; return;
}

/* FUN_10002090 @ 0x10d12090 (87 bytes, 30 insns) */
void f_10d12090(void) {
  FTRACE(0x10d12090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d12090 push ebp */
  push32((uint32_t)(EBP));
  /* 10d12091 mov ebp, esp */
  EBP = (ESP);
  /* 10d12093 push ecx */
  push32((uint32_t)(ECX));
  /* 10d12094 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12098 jl 0x10d120a0 */
  if ((C.sf!=C.of)) goto L_10d120a0;
  /* 10d1209a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1209e jl 0x10d120a5 */
  if ((C.sf!=C.of)) goto L_10d120a5;
L_10d120a0:;
  /* 10d120a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d120a3 jmp 0x10d120e3 */
  goto L_10d120e3;
L_10d120a5:;
  /* 10d120a5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d120a9 jne 0x10d120b7 */
  if (!C.zf) goto L_10d120b7;
  /* 10d120ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d120ae mov eax, dword ptr [eax*4 + 0x10d3ca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10d3ca38)));
  /* 10d120b5 jmp 0x10d120e3 */
  goto L_10d120e3;
L_10d120b7:;
  /* 10d120b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d120ba and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10d120bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d120bf je 0x10d120c6 */
  if (C.zf) goto L_10d120c6;
  /* 10d120c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d120c4 jmp 0x10d120e3 */
  goto L_10d120e3;
L_10d120c6:;
  /* 10d120c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d120c9 mov eax, dword ptr [edx*4 + 0x10d3ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d3ca38)));
  /* 10d120d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d120d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d120d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d120d9 mov dword ptr [ecx*4 + 0x10d3ca38], edx */
  w32((uint32_t)(ECX*4 + 0x10d3ca38), (EDX));
  /* 10d120e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d120e3:;
  /* 10d120e3 mov esp, ebp */
  ESP = (EBP);
  /* 10d120e5 pop ebp */
  EBP = (pop32());
  /* 10d120e6 ret  */
  ESPCHK(0x10d12090u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10d120f0 (126 bytes, 38 insns) */
void f_10d120f0(void) {
  FTRACE(0x10d120f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d120f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d120f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d120f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d120f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d120f8 jl 0x10d12100 */
  if ((C.sf!=C.of)) goto L_10d12100;
  /* 10d120fa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d120fe jl 0x10d12107 */
  if ((C.sf!=C.of)) goto L_10d12107;
L_10d12100:;
  /* 10d12100 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10d12105 jmp 0x10d1216a */
  goto L_10d1216a;
L_10d12107:;
  /* 10d12107 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1210b jne 0x10d12119 */
  if (!C.zf) goto L_10d12119;
  /* 10d1210d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12110 mov eax, dword ptr [eax*4 + 0x10d3ca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10d3ca44)));
  /* 10d12117 jmp 0x10d1216a */
  goto L_10d1216a;
L_10d12119:;
  /* 10d12119 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1211c mov edx, dword ptr [ecx*4 + 0x10d3ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d3ca44)));
  /* 10d12123 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d12126 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1212a jne 0x10d12140 */
  if (!C.zf) goto L_10d12140;
  /* 10d1212c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10d1212e call dword ptr [0x10d4028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4028c))), 0x10d12134u);
  /* 10d12134 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12137 mov dword ptr [ecx*4 + 0x10d3ca44], eax */
  w32((uint32_t)(ECX*4 + 0x10d3ca44), (EAX));
  /* 10d1213e jmp 0x10d12167 */
  goto L_10d12167;
L_10d12140:;
  /* 10d12140 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12144 jne 0x10d1215a */
  if (!C.zf) goto L_10d1215a;
  /* 10d12146 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10d12148 call dword ptr [0x10d4028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4028c))), 0x10d1214eu);
  /* 10d1214e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12151 mov dword ptr [edx*4 + 0x10d3ca44], eax */
  w32((uint32_t)(EDX*4 + 0x10d3ca44), (EAX));
  /* 10d12158 jmp 0x10d12167 */
  goto L_10d12167;
L_10d1215a:;
  /* 10d1215a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1215d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d12160 mov dword ptr [eax*4 + 0x10d3ca44], ecx */
  w32((uint32_t)(EAX*4 + 0x10d3ca44), (ECX));
L_10d12167:;
  /* 10d12167 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d1216a:;
  /* 10d1216a mov esp, ebp */
  ESP = (EBP);
  /* 10d1216c pop ebp */
  EBP = (pop32());
  /* 10d1216d ret  */
  ESPCHK(0x10d120f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002170 @ 0x10d12170 (28 bytes, 11 insns) */
void f_10d12170(void) {
  FTRACE(0x10d12170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d12170 push ebp */
  push32((uint32_t)(EBP));
  /* 10d12171 mov ebp, esp */
  EBP = (ESP);
  /* 10d12173 push ecx */
  push32((uint32_t)(ECX));
  /* 10d12174 mov eax, dword ptr [0x10d3ff60] */
  EAX = (r32((uint32_t)(0x10d3ff60)));
  /* 10d12179 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1217c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1217f mov dword ptr [0x10d3ff60], ecx */
  w32((uint32_t)(0x10d3ff60), (ECX));
  /* 10d12185 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d12188 mov esp, ebp */
  ESP = (EBP);
  /* 10d1218a pop ebp */
  EBP = (pop32());
  /* 10d1218b ret  */
  ESPCHK(0x10d12170u, _esp0);
  ESP += 4; return;
}

/* FUN_10002190 @ 0x10d12190 (912 bytes, 248 insns) */
void f_10d12190(void) {
  FTRACE(0x10d12190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d12190 push ebp */
  push32((uint32_t)(EBP));
  /* 10d12191 mov ebp, esp */
  EBP = (ESP);
  /* 10d12193 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10d12198 call 0x10d16270 */
  push32(0x10d1219du); f_10d16270();
  /* 10d1219d push edi */
  push32((uint32_t)(EDI));
  /* 10d1219e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10d121a5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10d121aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d121ac lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10d121b2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d121b4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10d121b6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10d121b7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10d121be mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10d121c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d121c5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10d121cb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d121cd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10d121cf stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10d121d0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10d121d7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10d121dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d121de lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10d121e4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d121e6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10d121e8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10d121e9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10d121ec mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10d121f2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d121f6 jl 0x10d121fe */
  if ((C.sf!=C.of)) goto L_10d121fe;
  /* 10d121f8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d121fc jl 0x10d12206 */
  if ((C.sf!=C.of)) goto L_10d12206;
L_10d121fe:;
  /* 10d121fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d12201 jmp 0x10d1251b */
  goto L_10d1251b;
L_10d12206:;
  /* 10d12206 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1220a jne 0x10d122b0 */
  if (!C.zf) goto L_10d122b0;
  /* 10d12210 push 0x10d3ca34 */
  push32((uint32_t)(0x10d3ca34u));
  /* 10d12215 call dword ptr [0x10d402a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402a4))), 0x10d1221bu);
  /* 10d1221b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1221d jle 0x10d122b0 */
  if ((C.zf||C.sf!=C.of)) goto L_10d122b0;
  /* 10d12223 cmp dword ptr [0x10d3e418], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e418))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1222a jne 0x10d1226e */
  if (!C.zf) goto L_10d1226e;
  /* 10d1222c push 0x10d3925c */
  push32((uint32_t)(0x10d3925cu));
  /* 10d12231 call dword ptr [0x10d402a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402a0))), 0x10d12237u);
  /* 10d12237 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10d1223d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12244 je 0x10d12266 */
  if (C.zf) goto L_10d12266;
  /* 10d12246 push 0x10d39250 */
  push32((uint32_t)(0x10d39250u));
  /* 10d1224b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10d12251 push ecx */
  push32((uint32_t)(ECX));
  /* 10d12252 call dword ptr [0x10d4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4029c))), 0x10d12258u);
  /* 10d12258 mov dword ptr [0x10d3e418], eax */
  w32((uint32_t)(0x10d3e418), (EAX));
  /* 10d1225d cmp dword ptr [0x10d3e418], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e418))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12264 jne 0x10d1226e */
  if (!C.zf) goto L_10d1226e;
L_10d12266:;
  /* 10d12266 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d12269 jmp 0x10d1251b */
  goto L_10d1251b;
L_10d1226e:;
  /* 10d1226e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d12271 push edx */
  push32((uint32_t)(EDX));
  /* 10d12272 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d12275 push eax */
  push32((uint32_t)(EAX));
  /* 10d12276 push 0x10d3921c */
  push32((uint32_t)(0x10d3921cu));
  /* 10d1227b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10d12281 push ecx */
  push32((uint32_t)(ECX));
  /* 10d12282 call dword ptr [0x10d3e418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3e418))), 0x10d12288u);
  /* 10d12288 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1228b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10d12291 push edx */
  push32((uint32_t)(EDX));
  /* 10d12292 call dword ptr [0x10d40298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40298))), 0x10d12298u);
  /* 10d12298 push 0x10d3ca34 */
  push32((uint32_t)(0x10d3ca34u));
  /* 10d1229d call dword ptr [0x10d40294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40294))), 0x10d122a3u);
  /* 10d122a3 call 0x10d12080 */
  push32(0x10d122a8u); f_10d12080();
  /* 10d122a8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d122ab jmp 0x10d1251b */
  goto L_10d1251b;
L_10d122b0:;
  /* 10d122b0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d122b4 je 0x10d122ed */
  if (C.zf) goto L_10d122ed;
  /* 10d122b6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10d122bc push eax */
  push32((uint32_t)(EAX));
  /* 10d122bd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d122c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d122c1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10d122c6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10d122cc push edx */
  push32((uint32_t)(EDX));
  /* 10d122cd call 0x10d16170 */
  push32(0x10d122d2u); f_10d16170();
  /* 10d122d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d122d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d122d7 jge 0x10d122ed */
  if ((C.sf==C.of)) goto L_10d122ed;
  /* 10d122d9 push 0x10d391f0 */
  push32((uint32_t)(0x10d391f0u));
  /* 10d122de lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10d122e4 push eax */
  push32((uint32_t)(EAX));
  /* 10d122e5 call 0x10d16080 */
  push32(0x10d122eau); f_10d16080();
  /* 10d122ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d122ed:;
  /* 10d122ed cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d122f1 jne 0x10d12325 */
  if (!C.zf) goto L_10d12325;
  /* 10d122f3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d122f7 je 0x10d12305 */
  if (C.zf) goto L_10d12305;
  /* 10d122f9 mov dword ptr [ebp - 0x3028], 0x10d391dc */
  w32((uint32_t)(EBP + -0x3028), (0x10d391dcu));
  /* 10d12303 jmp 0x10d1230f */
  goto L_10d1230f;
L_10d12305:;
  /* 10d12305 mov dword ptr [ebp - 0x3028], 0x10d391c8 */
  w32((uint32_t)(EBP + -0x3028), (0x10d391c8u));
L_10d1230f:;
  /* 10d1230f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10d12315 push ecx */
  push32((uint32_t)(ECX));
  /* 10d12316 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10d1231c push edx */
  push32((uint32_t)(EDX));
  /* 10d1231d call 0x10d16080 */
  push32(0x10d12322u); f_10d16080();
  /* 10d12322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d12325:;
  /* 10d12325 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10d1232b push eax */
  push32((uint32_t)(EAX));
  /* 10d1232c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10d12332 push ecx */
  push32((uint32_t)(ECX));
  /* 10d12333 call 0x10d16090 */
  push32(0x10d12338u); f_10d16090();
  /* 10d12338 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1233b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1233f jne 0x10d1237a */
  if (!C.zf) goto L_10d1237a;
  /* 10d12341 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12344 mov eax, dword ptr [edx*4 + 0x10d3ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d3ca38)));
  /* 10d1234b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1234e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d12350 je 0x10d12366 */
  if (C.zf) goto L_10d12366;
  /* 10d12352 push 0x10d391c4 */
  push32((uint32_t)(0x10d391c4u));
  /* 10d12357 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10d1235d push ecx */
  push32((uint32_t)(ECX));
  /* 10d1235e call 0x10d16090 */
  push32(0x10d12363u); f_10d16090();
  /* 10d12363 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d12366:;
  /* 10d12366 push 0x10d391c0 */
  push32((uint32_t)(0x10d391c0u));
  /* 10d1236b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10d12371 push edx */
  push32((uint32_t)(EDX));
  /* 10d12372 call 0x10d16090 */
  push32(0x10d12377u); f_10d16090();
  /* 10d12377 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1237a:;
  /* 10d1237a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1237e je 0x10d123c2 */
  if (C.zf) goto L_10d123c2;
  /* 10d12380 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10d12386 push eax */
  push32((uint32_t)(EAX));
  /* 10d12387 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1238a push ecx */
  push32((uint32_t)(ECX));
  /* 10d1238b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1238e push edx */
  push32((uint32_t)(EDX));
  /* 10d1238f push 0x10d391b4 */
  push32((uint32_t)(0x10d391b4u));
  /* 10d12394 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10d12399 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10d1239f push eax */
  push32((uint32_t)(EAX));
  /* 10d123a0 call 0x10d15f80 */
  push32(0x10d123a5u); f_10d15f80();
  /* 10d123a5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d123a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d123aa jge 0x10d123c0 */
  if ((C.sf==C.of)) goto L_10d123c0;
  /* 10d123ac push 0x10d391f0 */
  push32((uint32_t)(0x10d391f0u));
  /* 10d123b1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10d123b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d123b8 call 0x10d16080 */
  push32(0x10d123bdu); f_10d16080();
  /* 10d123bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d123c0:;
  /* 10d123c0 jmp 0x10d123d8 */
  goto L_10d123d8;
L_10d123c2:;
  /* 10d123c2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10d123c8 push edx */
  push32((uint32_t)(EDX));
  /* 10d123c9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10d123cf push eax */
  push32((uint32_t)(EAX));
  /* 10d123d0 call 0x10d16080 */
  push32(0x10d123d5u); f_10d16080();
  /* 10d123d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d123d8:;
  /* 10d123d8 cmp dword ptr [0x10d3ff60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3ff60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d123df je 0x10d1241c */
  if (C.zf) goto L_10d1241c;
  /* 10d123e1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10d123e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d123e8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10d123ee push edx */
  push32((uint32_t)(EDX));
  /* 10d123ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d123f2 push eax */
  push32((uint32_t)(EAX));
  /* 10d123f3 call dword ptr [0x10d3ff60] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3ff60))), 0x10d123f9u);
  /* 10d123f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d123fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d123fe je 0x10d1241c */
  if (C.zf) goto L_10d1241c;
  /* 10d12400 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12404 jne 0x10d12411 */
  if (!C.zf) goto L_10d12411;
  /* 10d12406 push 0x10d3ca34 */
  push32((uint32_t)(0x10d3ca34u));
  /* 10d1240b call dword ptr [0x10d40294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40294))), 0x10d12411u);
L_10d12411:;
  /* 10d12411 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10d12417 jmp 0x10d1251b */
  goto L_10d1251b;
L_10d1241c:;
  /* 10d1241c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1241f mov edx, dword ptr [ecx*4 + 0x10d3ca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d3ca38)));
  /* 10d12426 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d12429 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1242b je 0x10d1246b */
  if (C.zf) goto L_10d1246b;
  /* 10d1242d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12430 cmp dword ptr [eax*4 + 0x10d3ca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10d3ca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12438 je 0x10d1246b */
  if (C.zf) goto L_10d1246b;
  /* 10d1243a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1243c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10d12442 push ecx */
  push32((uint32_t)(ECX));
  /* 10d12443 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10d12449 push edx */
  push32((uint32_t)(EDX));
  /* 10d1244a call 0x10d15f00 */
  push32(0x10d1244fu); f_10d15f00();
  /* 10d1244f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12452 push eax */
  push32((uint32_t)(EAX));
  /* 10d12453 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10d12459 push eax */
  push32((uint32_t)(EAX));
  /* 10d1245a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1245d mov edx, dword ptr [ecx*4 + 0x10d3ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d3ca44)));
  /* 10d12464 push edx */
  push32((uint32_t)(EDX));
  /* 10d12465 call dword ptr [0x10d40290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40290))), 0x10d1246bu);
L_10d1246b:;
  /* 10d1246b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1246e mov ecx, dword ptr [eax*4 + 0x10d3ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10d3ca38)));
  /* 10d12475 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10d12478 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1247a je 0x10d12489 */
  if (C.zf) goto L_10d12489;
  /* 10d1247c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10d12482 push edx */
  push32((uint32_t)(EDX));
  /* 10d12483 call dword ptr [0x10d40298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40298))), 0x10d12489u);
L_10d12489:;
  /* 10d12489 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1248c mov ecx, dword ptr [eax*4 + 0x10d3ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10d3ca38)));
  /* 10d12493 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10d12496 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d12498 je 0x10d12508 */
  if (C.zf) goto L_10d12508;
  /* 10d1249a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1249e je 0x10d124bd */
  if (C.zf) goto L_10d124bd;
  /* 10d124a0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10d124a2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10d124a8 push edx */
  push32((uint32_t)(EDX));
  /* 10d124a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d124ac push eax */
  push32((uint32_t)(EAX));
  /* 10d124ad call 0x10d15c10 */
  push32(0x10d124b2u); f_10d15c10();
  /* 10d124b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d124b5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10d124bb jmp 0x10d124c7 */
  goto L_10d124c7;
L_10d124bd:;
  /* 10d124bd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10d124c7:;
  /* 10d124c7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10d124cd push ecx */
  push32((uint32_t)(ECX));
  /* 10d124ce mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d124d1 push edx */
  push32((uint32_t)(EDX));
  /* 10d124d2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10d124d8 push eax */
  push32((uint32_t)(EAX));
  /* 10d124d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d124dc push ecx */
  push32((uint32_t)(ECX));
  /* 10d124dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d124e0 push edx */
  push32((uint32_t)(EDX));
  /* 10d124e1 call 0x10d12520 */
  push32(0x10d124e6u); f_10d12520();
  /* 10d124e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d124e9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10d124ef cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d124f3 jne 0x10d12500 */
  if (!C.zf) goto L_10d12500;
  /* 10d124f5 push 0x10d3ca34 */
  push32((uint32_t)(0x10d3ca34u));
  /* 10d124fa call dword ptr [0x10d40294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40294))), 0x10d12500u);
L_10d12500:;
  /* 10d12500 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10d12506 jmp 0x10d1251b */
  goto L_10d1251b;
L_10d12508:;
  /* 10d12508 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1250c jne 0x10d12519 */
  if (!C.zf) goto L_10d12519;
  /* 10d1250e push 0x10d3ca34 */
  push32((uint32_t)(0x10d3ca34u));
  /* 10d12513 call dword ptr [0x10d40294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40294))), 0x10d12519u);
L_10d12519:;
  /* 10d12519 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d1251b:;
  /* 10d1251b pop edi */
  EDI = (pop32());
  /* 10d1251c mov esp, ebp */
  ESP = (EBP);
  /* 10d1251e pop ebp */
  EBP = (pop32());
  /* 10d1251f ret  */
  ESPCHK(0x10d12190u, _esp0);
  ESP += 4; return;
}

/* FUN_10002520 @ 0x10d12520 (780 bytes, 197 insns) */
void f_10d12520(void) {
  FTRACE(0x10d12520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d12520 push ebp */
  push32((uint32_t)(EBP));
  /* 10d12521 mov ebp, esp */
  EBP = (ESP);
  /* 10d12523 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10d12528 call 0x10d16270 */
  push32(0x10d1252du); f_10d16270();
L_10d1252d:;
  /* 10d1252d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12531 jne 0x10d12558 */
  if (!C.zf) goto L_10d12558;
  /* 10d12533 push 0x10d393ac */
  push32((uint32_t)(0x10d393acu));
  /* 10d12538 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1253a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10d1253f push 0x10d393a0 */
  push32((uint32_t)(0x10d393a0u));
  /* 10d12544 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d12546 call 0x10d12190 */
  push32(0x10d1254bu); f_10d12190();
  /* 10d1254b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1254e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12551 jne 0x10d12558 */
  if (!C.zf) goto L_10d12558;
  /* 10d12553 call 0x10d12080 */
  push32(0x10d12558u); f_10d12080();
L_10d12558:;
  /* 10d12558 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1255a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1255c jne 0x10d1252d */
  if (!C.zf) goto L_10d1252d;
  /* 10d1255e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10d12563 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10d12569 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1256a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1256c call dword ptr [0x10d402a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402a8))), 0x10d12572u);
  /* 10d12572 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d12574 jne 0x10d1258a */
  if (!C.zf) goto L_10d1258a;
  /* 10d12576 push 0x10d39388 */
  push32((uint32_t)(0x10d39388u));
  /* 10d1257b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10d12581 push edx */
  push32((uint32_t)(EDX));
  /* 10d12582 call 0x10d16080 */
  push32(0x10d12587u); f_10d16080();
  /* 10d12587 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1258a:;
  /* 10d1258a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10d12590 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d12593 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d12596 push ecx */
  push32((uint32_t)(ECX));
  /* 10d12597 call 0x10d15f00 */
  push32(0x10d1259cu); f_10d15f00();
  /* 10d1259c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1259f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d125a2 jbe 0x10d125cd */
  if ((C.cf||C.zf)) goto L_10d125cd;
  /* 10d125a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d125a7 push edx */
  push32((uint32_t)(EDX));
  /* 10d125a8 call 0x10d15f00 */
  push32(0x10d125adu); f_10d15f00();
  /* 10d125ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d125b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d125b3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10d125b7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d125ba push 3 */
  push32((uint32_t)(0x3u));
  /* 10d125bc push 0x10d39384 */
  push32((uint32_t)(0x10d39384u));
  /* 10d125c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d125c4 push eax */
  push32((uint32_t)(EAX));
  /* 10d125c5 call 0x10d168f0 */
  push32(0x10d125cau); f_10d168f0();
  /* 10d125ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d125cd:;
  /* 10d125cd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d125d0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10d125d6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d125dd je 0x10d12628 */
  if (C.zf) goto L_10d12628;
  /* 10d125df mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10d125e5 push edx */
  push32((uint32_t)(EDX));
  /* 10d125e6 call 0x10d15f00 */
  push32(0x10d125ebu); f_10d15f00();
  /* 10d125eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d125ee cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d125f1 jbe 0x10d12628 */
  if ((C.cf||C.zf)) goto L_10d12628;
  /* 10d125f3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10d125f9 push eax */
  push32((uint32_t)(EAX));
  /* 10d125fa call 0x10d15f00 */
  push32(0x10d125ffu); f_10d15f00();
  /* 10d125ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12602 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10d12608 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10d1260c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10d12612 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d12614 push 0x10d39384 */
  push32((uint32_t)(0x10d39384u));
  /* 10d12619 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10d1261f push eax */
  push32((uint32_t)(EAX));
  /* 10d12620 call 0x10d168f0 */
  push32(0x10d12625u); f_10d168f0();
  /* 10d12625 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d12628:;
  /* 10d12628 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1262c jne 0x10d1263a */
  if (!C.zf) goto L_10d1263a;
  /* 10d1262e mov dword ptr [ebp - 0x1114], 0x10d39310 */
  w32((uint32_t)(EBP + -0x1114), (0x10d39310u));
  /* 10d12638 jmp 0x10d12644 */
  goto L_10d12644;
L_10d1263a:;
  /* 10d1263a mov dword ptr [ebp - 0x1114], 0x10d390b0 */
  w32((uint32_t)(EBP + -0x1114), (0x10d390b0u));
L_10d12644:;
  /* 10d12644 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d12647 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d1264a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1264c je 0x10d12659 */
  if (C.zf) goto L_10d12659;
  /* 10d1264e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d12651 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10d12657 jmp 0x10d12663 */
  goto L_10d12663;
L_10d12659:;
  /* 10d12659 mov dword ptr [ebp - 0x1118], 0x10d390b0 */
  w32((uint32_t)(EBP + -0x1118), (0x10d390b0u));
L_10d12663:;
  /* 10d12663 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d12666 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d12669 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1266b je 0x10d1267f */
  if (C.zf) goto L_10d1267f;
  /* 10d1266d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12671 jne 0x10d1267f */
  if (!C.zf) goto L_10d1267f;
  /* 10d12673 mov dword ptr [ebp - 0x111c], 0x10d39300 */
  w32((uint32_t)(EBP + -0x111c), (0x10d39300u));
  /* 10d1267d jmp 0x10d12689 */
  goto L_10d12689;
L_10d1267f:;
  /* 10d1267f mov dword ptr [ebp - 0x111c], 0x10d390b0 */
  w32((uint32_t)(EBP + -0x111c), (0x10d390b0u));
L_10d12689:;
  /* 10d12689 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d1268c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1268f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d12691 je 0x10d1269f */
  if (C.zf) goto L_10d1269f;
  /* 10d12693 mov dword ptr [ebp - 0x1120], 0x10d392fc */
  w32((uint32_t)(EBP + -0x1120), (0x10d392fcu));
  /* 10d1269d jmp 0x10d126a9 */
  goto L_10d126a9;
L_10d1269f:;
  /* 10d1269f mov dword ptr [ebp - 0x1120], 0x10d390b0 */
  w32((uint32_t)(EBP + -0x1120), (0x10d390b0u));
L_10d126a9:;
  /* 10d126a9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d126ad je 0x10d126ba */
  if (C.zf) goto L_10d126ba;
  /* 10d126af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d126b2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10d126b8 jmp 0x10d126c4 */
  goto L_10d126c4;
L_10d126ba:;
  /* 10d126ba mov dword ptr [ebp - 0x1124], 0x10d390b0 */
  w32((uint32_t)(EBP + -0x1124), (0x10d390b0u));
L_10d126c4:;
  /* 10d126c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d126c8 je 0x10d126d6 */
  if (C.zf) goto L_10d126d6;
  /* 10d126ca mov dword ptr [ebp - 0x1128], 0x10d392f4 */
  w32((uint32_t)(EBP + -0x1128), (0x10d392f4u));
  /* 10d126d4 jmp 0x10d126e0 */
  goto L_10d126e0;
L_10d126d6:;
  /* 10d126d6 mov dword ptr [ebp - 0x1128], 0x10d390b0 */
  w32((uint32_t)(EBP + -0x1128), (0x10d390b0u));
L_10d126e0:;
  /* 10d126e0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d126e4 je 0x10d126f1 */
  if (C.zf) goto L_10d126f1;
  /* 10d126e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d126e9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10d126ef jmp 0x10d126fb */
  goto L_10d126fb;
L_10d126f1:;
  /* 10d126f1 mov dword ptr [ebp - 0x112c], 0x10d390b0 */
  w32((uint32_t)(EBP + -0x112c), (0x10d390b0u));
L_10d126fb:;
  /* 10d126fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d126ff je 0x10d1270d */
  if (C.zf) goto L_10d1270d;
  /* 10d12701 mov dword ptr [ebp - 0x1130], 0x10d392ec */
  w32((uint32_t)(EBP + -0x1130), (0x10d392ecu));
  /* 10d1270b jmp 0x10d12717 */
  goto L_10d12717;
L_10d1270d:;
  /* 10d1270d mov dword ptr [ebp - 0x1130], 0x10d390b0 */
  w32((uint32_t)(EBP + -0x1130), (0x10d390b0u));
L_10d12717:;
  /* 10d12717 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1271e je 0x10d1272e */
  if (C.zf) goto L_10d1272e;
  /* 10d12720 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10d12726 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10d1272c jmp 0x10d12738 */
  goto L_10d12738;
L_10d1272e:;
  /* 10d1272e mov dword ptr [ebp - 0x1134], 0x10d390b0 */
  w32((uint32_t)(EBP + -0x1134), (0x10d390b0u));
L_10d12738:;
  /* 10d12738 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1273f je 0x10d1274d */
  if (C.zf) goto L_10d1274d;
  /* 10d12741 mov dword ptr [ebp - 0x1138], 0x10d392e0 */
  w32((uint32_t)(EBP + -0x1138), (0x10d392e0u));
  /* 10d1274b jmp 0x10d12757 */
  goto L_10d12757;
L_10d1274d:;
  /* 10d1274d mov dword ptr [ebp - 0x1138], 0x10d390b0 */
  w32((uint32_t)(EBP + -0x1138), (0x10d390b0u));
L_10d12757:;
  /* 10d12757 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10d1275d push edx */
  push32((uint32_t)(EDX));
  /* 10d1275e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10d12764 push eax */
  push32((uint32_t)(EAX));
  /* 10d12765 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10d1276b push ecx */
  push32((uint32_t)(ECX));
  /* 10d1276c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10d12772 push edx */
  push32((uint32_t)(EDX));
  /* 10d12773 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10d12779 push eax */
  push32((uint32_t)(EAX));
  /* 10d1277a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10d12780 push ecx */
  push32((uint32_t)(ECX));
  /* 10d12781 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10d12787 push edx */
  push32((uint32_t)(EDX));
  /* 10d12788 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10d1278e push eax */
  push32((uint32_t)(EAX));
  /* 10d1278f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10d12795 push ecx */
  push32((uint32_t)(ECX));
  /* 10d12796 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10d1279c push edx */
  push32((uint32_t)(EDX));
  /* 10d1279d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d127a0 push eax */
  push32((uint32_t)(EAX));
  /* 10d127a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d127a4 mov edx, dword ptr [ecx*4 + 0x10d3ca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d3ca50)));
  /* 10d127ab push edx */
  push32((uint32_t)(EDX));
  /* 10d127ac push 0x10d3928c */
  push32((uint32_t)(0x10d3928cu));
  /* 10d127b1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10d127b6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10d127bc push eax */
  push32((uint32_t)(EAX));
  /* 10d127bd call 0x10d15f80 */
  push32(0x10d127c2u); f_10d15f80();
  /* 10d127c2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d127c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d127c7 jge 0x10d127dd */
  if ((C.sf==C.of)) goto L_10d127dd;
  /* 10d127c9 push 0x10d391f0 */
  push32((uint32_t)(0x10d391f0u));
  /* 10d127ce lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10d127d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d127d5 call 0x10d16080 */
  push32(0x10d127dau); f_10d16080();
  /* 10d127da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d127dd:;
  /* 10d127dd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10d127e2 push 0x10d39268 */
  push32((uint32_t)(0x10d39268u));
  /* 10d127e7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10d127ed push edx */
  push32((uint32_t)(EDX));
  /* 10d127ee call 0x10d16830 */
  push32(0x10d127f3u); f_10d16830();
  /* 10d127f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d127f6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10d127fc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12803 jne 0x10d12816 */
  if (!C.zf) goto L_10d12816;
  /* 10d12805 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10d12807 call 0x10d16570 */
  push32(0x10d1280cu); f_10d16570();
  /* 10d1280c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1280f push 3 */
  push32((uint32_t)(0x3u));
  /* 10d12811 call 0x10d12890 */
  push32(0x10d12816u); f_10d12890();
L_10d12816:;
  /* 10d12816 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1281d jne 0x10d12826 */
  if (!C.zf) goto L_10d12826;
  /* 10d1281f mov eax, 1 */
  EAX = (0x1u);
  /* 10d12824 jmp 0x10d12828 */
  goto L_10d12828;
L_10d12826:;
  /* 10d12826 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d12828:;
  /* 10d12828 mov esp, ebp */
  ESP = (EBP);
  /* 10d1282a pop ebp */
  EBP = (pop32());
  /* 10d1282b ret  */
  ESPCHK(0x10d12520u, _esp0);
  ESP += 4; return;
}

/* FUN_10002830 @ 0x10d12830 (56 bytes, 15 insns) */
void f_10d12830(void) {
  FTRACE(0x10d12830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d12830 push ebp */
  push32((uint32_t)(EBP));
  /* 10d12831 mov ebp, esp */
  EBP = (ESP);
  /* 10d12833 cmp dword ptr [0x10d3ff5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3ff5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1283a je 0x10d12842 */
  if (C.zf) goto L_10d12842;
  /* 10d1283c call dword ptr [0x10d3ff5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3ff5c))), 0x10d12842u);
L_10d12842:;
  /* 10d12842 push 0x10d3c418 */
  push32((uint32_t)(0x10d3c418u));
  /* 10d12847 push 0x10d3c208 */
  push32((uint32_t)(0x10d3c208u));
  /* 10d1284c call 0x10d12a00 */
  push32(0x10d12851u); f_10d12a00();
  /* 10d12851 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12854 push 0x10d3c104 */
  push32((uint32_t)(0x10d3c104u));
  /* 10d12859 push 0x10d3c000 */
  push32((uint32_t)(0x10d3c000u));
  /* 10d1285e call 0x10d12a00 */
  push32(0x10d12863u); f_10d12a00();
  /* 10d12863 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12866 pop ebp */
  EBP = (pop32());
  /* 10d12867 ret  */
  ESPCHK(0x10d12830u, _esp0);
  ESP += 4; return;
}

/* FUN_10002870 @ 0x10d12870 (21 bytes, 10 insns) */
void f_10d12870(void) {
  FTRACE(0x10d12870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d12870 push ebp */
  push32((uint32_t)(EBP));
  /* 10d12871 mov ebp, esp */
  EBP = (ESP);
  /* 10d12873 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d12875 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d12877 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1287a push eax */
  push32((uint32_t)(EAX));
  /* 10d1287b call 0x10d128f0 */
  push32(0x10d12880u); f_10d128f0();
  /* 10d12880 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12883 pop ebp */
  EBP = (pop32());
  /* 10d12884 ret  */
  ESPCHK(0x10d12870u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10d12890 (21 bytes, 10 insns) */
void f_10d12890(void) {
  FTRACE(0x10d12890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d12890 push ebp */
  push32((uint32_t)(EBP));
  /* 10d12891 mov ebp, esp */
  EBP = (ESP);
  /* 10d12893 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d12895 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d12897 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1289a push eax */
  push32((uint32_t)(EAX));
  /* 10d1289b call 0x10d128f0 */
  push32(0x10d128a0u); f_10d128f0();
  /* 10d128a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d128a3 pop ebp */
  EBP = (pop32());
  /* 10d128a4 ret  */
  ESPCHK(0x10d12890u, _esp0);
  ESP += 4; return;
}

/* FUN_100028b0 @ 0x10d128b0 (19 bytes, 9 insns) */
void f_10d128b0(void) {
  FTRACE(0x10d128b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d128b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d128b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d128b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d128b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d128b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d128b9 call 0x10d128f0 */
  push32(0x10d128beu); f_10d128f0();
  /* 10d128be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d128c1 pop ebp */
  EBP = (pop32());
  /* 10d128c2 ret  */
  ESPCHK(0x10d128b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100028d0 @ 0x10d128d0 (19 bytes, 9 insns) */
void f_10d128d0(void) {
  FTRACE(0x10d128d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d128d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d128d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d128d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d128d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d128d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d128d9 call 0x10d128f0 */
  push32(0x10d128deu); f_10d128f0();
  /* 10d128de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d128e1 pop ebp */
  EBP = (pop32());
  /* 10d128e2 ret  */
  ESPCHK(0x10d128d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100028f0 @ 0x10d128f0 (227 bytes, 61 insns) */
void f_10d128f0(void) {
  FTRACE(0x10d128f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d128f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d128f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d128f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d128f4 call 0x10d129e0 */
  push32(0x10d128f9u); f_10d129e0();
  /* 10d128f9 cmp dword ptr [0x10d3e45c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e45c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12900 jne 0x10d12913 */
  if (!C.zf) goto L_10d12913;
  /* 10d12902 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12905 push eax */
  push32((uint32_t)(EAX));
  /* 10d12906 call dword ptr [0x10d402b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402b4))), 0x10d1290cu);
  /* 10d1290c push eax */
  push32((uint32_t)(EAX));
  /* 10d1290d call dword ptr [0x10d402b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402b0))), 0x10d12913u);
L_10d12913:;
  /* 10d12913 mov dword ptr [0x10d3e458], 1 */
  w32((uint32_t)(0x10d3e458), (0x1u));
  /* 10d1291d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10d12920 mov byte ptr [0x10d3e454], cl */
  w8((uint32_t)(0x10d3e454), (CL));
  /* 10d12926 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1292a jne 0x10d12973 */
  if (!C.zf) goto L_10d12973;
  /* 10d1292c cmp dword ptr [0x10d3ff58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3ff58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12933 je 0x10d12961 */
  if (C.zf) goto L_10d12961;
  /* 10d12935 mov edx, dword ptr [0x10d3ff54] */
  EDX = (r32((uint32_t)(0x10d3ff54)));
  /* 10d1293b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d1293e:;
  /* 10d1293e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d12941 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d12944 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d12947 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1294a cmp ecx, dword ptr [0x10d3ff58] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3ff58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12950 jb 0x10d12961 */
  if (C.cf) goto L_10d12961;
  /* 10d12952 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d12955 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12958 je 0x10d1295f */
  if (C.zf) goto L_10d1295f;
  /* 10d1295a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1295d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10d1295fu);
L_10d1295f:;
  /* 10d1295f jmp 0x10d1293e */
  goto L_10d1293e;
L_10d12961:;
  /* 10d12961 push 0x10d3c724 */
  push32((uint32_t)(0x10d3c724u));
  /* 10d12966 push 0x10d3c51c */
  push32((uint32_t)(0x10d3c51cu));
  /* 10d1296b call 0x10d12a00 */
  push32(0x10d12970u); f_10d12a00();
  /* 10d12970 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d12973:;
  /* 10d12973 push 0x10d3c92c */
  push32((uint32_t)(0x10d3c92cu));
  /* 10d12978 push 0x10d3c828 */
  push32((uint32_t)(0x10d3c828u));
  /* 10d1297d call 0x10d12a00 */
  push32(0x10d12982u); f_10d12a00();
  /* 10d12982 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12985 cmp dword ptr [0x10d3e460], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e460))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1298c jne 0x10d129ae */
  if (!C.zf) goto L_10d129ae;
  /* 10d1298e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d12990 call 0x10d145e0 */
  push32(0x10d12995u); f_10d145e0();
  /* 10d12995 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12998 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1299b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1299d je 0x10d129ae */
  if (C.zf) goto L_10d129ae;
  /* 10d1299f mov dword ptr [0x10d3e460], 1 */
  w32((uint32_t)(0x10d3e460), (0x1u));
  /* 10d129a9 call 0x10d14ef0 */
  push32(0x10d129aeu); f_10d14ef0();
L_10d129ae:;
  /* 10d129ae cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d129b2 je 0x10d129bb */
  if (C.zf) goto L_10d129bb;
  /* 10d129b4 call 0x10d129f0 */
  push32(0x10d129b9u); f_10d129f0();
  /* 10d129b9 jmp 0x10d129cf */
  goto L_10d129cf;
L_10d129bb:;
  /* 10d129bb mov dword ptr [0x10d3e45c], 1 */
  w32((uint32_t)(0x10d3e45c), (0x1u));
  /* 10d129c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d129c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d129c9 call dword ptr [0x10d402ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402ac))), 0x10d129cfu);
L_10d129cf:;
  /* 10d129cf mov esp, ebp */
  ESP = (EBP);
  /* 10d129d1 pop ebp */
  EBP = (pop32());
  /* 10d129d2 ret  */
  ESPCHK(0x10d128f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100029e0 @ 0x10d129e0 (15 bytes, 7 insns) */
void f_10d129e0(void) {
  FTRACE(0x10d129e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d129e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d129e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d129e3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10d129e5 call 0x10d16ad0 */
  push32(0x10d129eau); f_10d16ad0();
  /* 10d129ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d129ed pop ebp */
  EBP = (pop32());
  /* 10d129ee ret  */
  ESPCHK(0x10d129e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100029f0 @ 0x10d129f0 (15 bytes, 7 insns) */
void f_10d129f0(void) {
  FTRACE(0x10d129f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d129f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d129f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d129f3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10d129f5 call 0x10d16b70 */
  push32(0x10d129fau); f_10d16b70();
  /* 10d129fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d129fd pop ebp */
  EBP = (pop32());
  /* 10d129fe ret  */
  ESPCHK(0x10d129f0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10d12a00 (37 bytes, 16 insns) */
void f_10d12a00(void) {
  FTRACE(0x10d12a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d12a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d12a01 mov ebp, esp */
  EBP = (ESP);
L_10d12a03:;
  /* 10d12a03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12a06 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12a09 jae 0x10d12a23 */
  if (!C.cf) goto L_10d12a23;
  /* 10d12a0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12a0e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12a11 je 0x10d12a18 */
  if (C.zf) goto L_10d12a18;
  /* 10d12a13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12a16 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10d12a18u);
L_10d12a18:;
  /* 10d12a18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12a1b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12a1e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d12a21 jmp 0x10d12a03 */
  goto L_10d12a03;
L_10d12a23:;
  /* 10d12a23 pop ebp */
  EBP = (pop32());
  /* 10d12a24 ret  */
  ESPCHK(0x10d12a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a30 @ 0x10d12a30 (130 bytes, 42 insns) */
void f_10d12a30(void) {
  FTRACE(0x10d12a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d12a30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d12a31 mov ebp, esp */
  EBP = (ESP);
  /* 10d12a33 push ecx */
  push32((uint32_t)(ECX));
  /* 10d12a34 call 0x10d169f0 */
  push32(0x10d12a39u); f_10d169f0();
  /* 10d12a39 call dword ptr [0x10d402c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402c0))), 0x10d12a3fu);
  /* 10d12a3f mov dword ptr [0x10d3ca5c], eax */
  w32((uint32_t)(0x10d3ca5c), (EAX));
  /* 10d12a44 cmp dword ptr [0x10d3ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12a4b jne 0x10d12a51 */
  if (!C.zf) goto L_10d12a51;
  /* 10d12a4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d12a4f jmp 0x10d12aae */
  goto L_10d12aae;
L_10d12a51:;
  /* 10d12a51 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10d12a53 push 0x10d393c4 */
  push32((uint32_t)(0x10d393c4u));
  /* 10d12a58 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d12a5a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10d12a5c push 1 */
  push32((uint32_t)(0x1u));
  /* 10d12a5e call 0x10d134e0 */
  push32(0x10d12a63u); f_10d134e0();
  /* 10d12a63 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12a66 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d12a69 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12a6d je 0x10d12a84 */
  if (C.zf) goto L_10d12a84;
  /* 10d12a6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d12a72 push eax */
  push32((uint32_t)(EAX));
  /* 10d12a73 mov ecx, dword ptr [0x10d3ca5c] */
  ECX = (r32((uint32_t)(0x10d3ca5c)));
  /* 10d12a79 push ecx */
  push32((uint32_t)(ECX));
  /* 10d12a7a call dword ptr [0x10d402bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402bc))), 0x10d12a80u);
  /* 10d12a80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d12a82 jne 0x10d12a88 */
  if (!C.zf) goto L_10d12a88;
L_10d12a84:;
  /* 10d12a84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d12a86 jmp 0x10d12aae */
  goto L_10d12aae;
L_10d12a88:;
  /* 10d12a88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d12a8b push edx */
  push32((uint32_t)(EDX));
  /* 10d12a8c call 0x10d12af0 */
  push32(0x10d12a91u); f_10d12af0();
  /* 10d12a91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12a94 call dword ptr [0x10d402b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402b8))), 0x10d12a9au);
  /* 10d12a9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d12a9d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d12a9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d12aa2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10d12aa9 mov eax, 1 */
  EAX = (0x1u);
L_10d12aae:;
  /* 10d12aae mov esp, ebp */
  ESP = (EBP);
  /* 10d12ab0 pop ebp */
  EBP = (pop32());
  /* 10d12ab1 ret  */
  ESPCHK(0x10d12a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ac0 @ 0x10d12ac0 (41 bytes, 11 insns) */
void f_10d12ac0(void) {
  FTRACE(0x10d12ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d12ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d12ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10d12ac3 call 0x10d16a30 */
  push32(0x10d12ac8u); f_10d16a30();
  /* 10d12ac8 cmp dword ptr [0x10d3ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12acf je 0x10d12ae7 */
  if (C.zf) goto L_10d12ae7;
  /* 10d12ad1 mov eax, dword ptr [0x10d3ca5c] */
  EAX = (r32((uint32_t)(0x10d3ca5c)));
  /* 10d12ad6 push eax */
  push32((uint32_t)(EAX));
  /* 10d12ad7 call dword ptr [0x10d402c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402c4))), 0x10d12addu);
  /* 10d12add mov dword ptr [0x10d3ca5c], 0xffffffff */
  w32((uint32_t)(0x10d3ca5c), (0xffffffffu));
L_10d12ae7:;
  /* 10d12ae7 pop ebp */
  EBP = (pop32());
  /* 10d12ae8 ret  */
  ESPCHK(0x10d12ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002af0 @ 0x10d12af0 (25 bytes, 8 insns) */
void f_10d12af0(void) {
  FTRACE(0x10d12af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d12af0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d12af1 mov ebp, esp */
  EBP = (ESP);
  /* 10d12af3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12af6 mov dword ptr [eax + 0x50], 0x10d3cc00 */
  w32((uint32_t)(EAX + 0x50), (0x10d3cc00u));
  /* 10d12afd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12b00 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10d12b07 pop ebp */
  EBP = (pop32());
  /* 10d12b08 ret  */
  ESPCHK(0x10d12af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b10 @ 0x10d12b10 (152 bytes, 48 insns) */
void f_10d12b10(void) {
  FTRACE(0x10d12b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d12b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d12b11 mov ebp, esp */
  EBP = (ESP);
  /* 10d12b13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d12b16 call dword ptr [0x10d402d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402d0))), 0x10d12b1cu);
  /* 10d12b1c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d12b1f mov eax, dword ptr [0x10d3ca5c] */
  EAX = (r32((uint32_t)(0x10d3ca5c)));
  /* 10d12b24 push eax */
  push32((uint32_t)(EAX));
  /* 10d12b25 call dword ptr [0x10d402cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402cc))), 0x10d12b2bu);
  /* 10d12b2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d12b2e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12b32 jne 0x10d12b97 */
  if (!C.zf) goto L_10d12b97;
  /* 10d12b34 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10d12b39 push 0x10d393c4 */
  push32((uint32_t)(0x10d393c4u));
  /* 10d12b3e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d12b40 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10d12b42 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d12b44 call 0x10d134e0 */
  push32(0x10d12b49u); f_10d134e0();
  /* 10d12b49 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12b4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d12b4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12b53 je 0x10d12b8d */
  if (C.zf) goto L_10d12b8d;
  /* 10d12b55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d12b58 push ecx */
  push32((uint32_t)(ECX));
  /* 10d12b59 mov edx, dword ptr [0x10d3ca5c] */
  EDX = (r32((uint32_t)(0x10d3ca5c)));
  /* 10d12b5f push edx */
  push32((uint32_t)(EDX));
  /* 10d12b60 call dword ptr [0x10d402bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402bc))), 0x10d12b66u);
  /* 10d12b66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d12b68 je 0x10d12b8d */
  if (C.zf) goto L_10d12b8d;
  /* 10d12b6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d12b6d push eax */
  push32((uint32_t)(EAX));
  /* 10d12b6e call 0x10d12af0 */
  push32(0x10d12b73u); f_10d12af0();
  /* 10d12b73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12b76 call dword ptr [0x10d402b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402b8))), 0x10d12b7cu);
  /* 10d12b7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d12b7f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d12b81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d12b84 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10d12b8b jmp 0x10d12b97 */
  goto L_10d12b97;
L_10d12b8d:;
  /* 10d12b8d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10d12b8f call 0x10d12040 */
  push32(0x10d12b94u); f_10d12040();
  /* 10d12b94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d12b97:;
  /* 10d12b97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d12b9a push eax */
  push32((uint32_t)(EAX));
  /* 10d12b9b call dword ptr [0x10d402c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402c8))), 0x10d12ba1u);
  /* 10d12ba1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d12ba4 mov esp, ebp */
  ESP = (EBP);
  /* 10d12ba6 pop ebp */
  EBP = (pop32());
  /* 10d12ba7 ret  */
  ESPCHK(0x10d12b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bb0 @ 0x10d12bb0 (263 bytes, 86 insns) */
void f_10d12bb0(void) {
  FTRACE(0x10d12bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d12bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d12bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10d12bb3 cmp dword ptr [0x10d3ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12bba je 0x10d12cb5 */
  if (C.zf) goto L_10d12cb5;
  /* 10d12bc0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12bc4 jne 0x10d12bd5 */
  if (!C.zf) goto L_10d12bd5;
  /* 10d12bc6 mov eax, dword ptr [0x10d3ca5c] */
  EAX = (r32((uint32_t)(0x10d3ca5c)));
  /* 10d12bcb push eax */
  push32((uint32_t)(EAX));
  /* 10d12bcc call dword ptr [0x10d402cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402cc))), 0x10d12bd2u);
  /* 10d12bd2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10d12bd5:;
  /* 10d12bd5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12bd9 je 0x10d12ca6 */
  if (C.zf) goto L_10d12ca6;
  /* 10d12bdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12be2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12be6 je 0x10d12bf9 */
  if (C.zf) goto L_10d12bf9;
  /* 10d12be8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d12bea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12bed mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10d12bf0 push eax */
  push32((uint32_t)(EAX));
  /* 10d12bf1 call 0x10d13b60 */
  push32(0x10d12bf6u); f_10d13b60();
  /* 10d12bf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d12bf9:;
  /* 10d12bf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12bfc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12c00 je 0x10d12c13 */
  if (C.zf) goto L_10d12c13;
  /* 10d12c02 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d12c04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12c07 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10d12c0a push eax */
  push32((uint32_t)(EAX));
  /* 10d12c0b call 0x10d13b60 */
  push32(0x10d12c10u); f_10d13b60();
  /* 10d12c10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d12c13:;
  /* 10d12c13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12c16 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12c1a je 0x10d12c2d */
  if (C.zf) goto L_10d12c2d;
  /* 10d12c1c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d12c1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12c21 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10d12c24 push eax */
  push32((uint32_t)(EAX));
  /* 10d12c25 call 0x10d13b60 */
  push32(0x10d12c2au); f_10d13b60();
  /* 10d12c2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d12c2d:;
  /* 10d12c2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12c30 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12c34 je 0x10d12c47 */
  if (C.zf) goto L_10d12c47;
  /* 10d12c36 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d12c38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12c3b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10d12c3e push eax */
  push32((uint32_t)(EAX));
  /* 10d12c3f call 0x10d13b60 */
  push32(0x10d12c44u); f_10d13b60();
  /* 10d12c44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d12c47:;
  /* 10d12c47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12c4a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12c4e je 0x10d12c61 */
  if (C.zf) goto L_10d12c61;
  /* 10d12c50 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d12c52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12c55 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10d12c58 push eax */
  push32((uint32_t)(EAX));
  /* 10d12c59 call 0x10d13b60 */
  push32(0x10d12c5eu); f_10d13b60();
  /* 10d12c5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d12c61:;
  /* 10d12c61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12c64 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12c68 je 0x10d12c7b */
  if (C.zf) goto L_10d12c7b;
  /* 10d12c6a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d12c6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12c6f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10d12c72 push eax */
  push32((uint32_t)(EAX));
  /* 10d12c73 call 0x10d13b60 */
  push32(0x10d12c78u); f_10d13b60();
  /* 10d12c78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d12c7b:;
  /* 10d12c7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12c7e cmp dword ptr [ecx + 0x50], 0x10d3cc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10d3cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12c85 je 0x10d12c98 */
  if (C.zf) goto L_10d12c98;
  /* 10d12c87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d12c89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12c8c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10d12c8f push eax */
  push32((uint32_t)(EAX));
  /* 10d12c90 call 0x10d13b60 */
  push32(0x10d12c95u); f_10d13b60();
  /* 10d12c95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d12c98:;
  /* 10d12c98 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d12c9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d12c9d push ecx */
  push32((uint32_t)(ECX));
  /* 10d12c9e call 0x10d13b60 */
  push32(0x10d12ca3u); f_10d13b60();
  /* 10d12ca3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d12ca6:;
  /* 10d12ca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d12ca8 mov edx, dword ptr [0x10d3ca5c] */
  EDX = (r32((uint32_t)(0x10d3ca5c)));
  /* 10d12cae push edx */
  push32((uint32_t)(EDX));
  /* 10d12caf call dword ptr [0x10d402bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402bc))), 0x10d12cb5u);
L_10d12cb5:;
  /* 10d12cb5 pop ebp */
  EBP = (pop32());
  /* 10d12cb6 ret  */
  ESPCHK(0x10d12bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cc0 @ 0x10d12cc0 (11 bytes, 5 insns) */
void f_10d12cc0(void) {
  FTRACE(0x10d12cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d12cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d12cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10d12cc3 call dword ptr [0x10d402b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402b8))), 0x10d12cc9u);
  /* 10d12cc9 pop ebp */
  EBP = (pop32());
  /* 10d12cca ret  */
  ESPCHK(0x10d12cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cd0 @ 0x10d12cd0 (11 bytes, 5 insns) */
void f_10d12cd0(void) {
  FTRACE(0x10d12cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d12cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d12cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10d12cd3 call dword ptr [0x10d402d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402d4))), 0x10d12cd9u);
  /* 10d12cd9 pop ebp */
  EBP = (pop32());
  /* 10d12cda ret  */
  ESPCHK(0x10d12cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ce0 @ 0x10d12ce0 (804 bytes, 236 insns) */
void f_10d12ce0(void) {
  FTRACE(0x10d12ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d12ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d12ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10d12ce3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d12ce6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10d12ceb push 0x10d393d0 */
  push32((uint32_t)(0x10d393d0u));
  /* 10d12cf0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d12cf2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10d12cf7 call 0x10d130d0 */
  push32(0x10d12cfcu); f_10d130d0();
  /* 10d12cfc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12cff mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10d12d02 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12d06 jne 0x10d12d12 */
  if (!C.zf) goto L_10d12d12;
  /* 10d12d08 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10d12d0a call 0x10d12040 */
  push32(0x10d12d0fu); f_10d12040();
  /* 10d12d0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d12d12:;
  /* 10d12d12 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12d15 mov dword ptr [0x10d3fe00], eax */
  w32((uint32_t)(0x10d3fe00), (EAX));
  /* 10d12d1a mov dword ptr [0x10d3ff3c], 0x20 */
  w32((uint32_t)(0x10d3ff3c), (0x20u));
  /* 10d12d24 jmp 0x10d12d2f */
  goto L_10d12d2f;
L_10d12d26:;
  /* 10d12d26 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12d29 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12d2c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10d12d2f:;
  /* 10d12d2f mov edx, dword ptr [0x10d3fe00] */
  EDX = (r32((uint32_t)(0x10d3fe00)));
  /* 10d12d35 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12d3b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12d3e jae 0x10d12d63 */
  if (!C.cf) goto L_10d12d63;
  /* 10d12d40 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12d43 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10d12d47 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12d4a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10d12d50 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12d53 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10d12d57 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12d5a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10d12d61 jmp 0x10d12d26 */
  goto L_10d12d26;
L_10d12d63:;
  /* 10d12d63 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10d12d66 push ecx */
  push32((uint32_t)(ECX));
  /* 10d12d67 call dword ptr [0x10d402e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402e0))), 0x10d12d6du);
  /* 10d12d6d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10d12d70 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d12d76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d12d78 je 0x10d12f05 */
  if (C.zf) goto L_10d12f05;
  /* 10d12d7e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12d82 je 0x10d12f05 */
  if (C.zf) goto L_10d12f05;
  /* 10d12d88 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d12d8b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d12d8d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10d12d90 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d12d93 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12d96 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d12d99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d12d9c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12d9f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10d12da2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12da9 jge 0x10d12db3 */
  if ((C.sf==C.of)) goto L_10d12db3;
  /* 10d12dab mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10d12dae mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10d12db1 jmp 0x10d12dba */
  goto L_10d12dba;
L_10d12db3:;
  /* 10d12db3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10d12dba:;
  /* 10d12dba mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10d12dbd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10d12dc0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10d12dc7 jmp 0x10d12dd2 */
  goto L_10d12dd2;
L_10d12dc9:;
  /* 10d12dc9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10d12dcc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12dcf mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10d12dd2:;
  /* 10d12dd2 mov ecx, dword ptr [0x10d3ff3c] */
  ECX = (r32((uint32_t)(0x10d3ff3c)));
  /* 10d12dd8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12ddb jge 0x10d12e72 */
  if ((C.sf==C.of)) goto L_10d12e72;
  /* 10d12de1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10d12de6 push 0x10d393d0 */
  push32((uint32_t)(0x10d393d0u));
  /* 10d12deb push 2 */
  push32((uint32_t)(0x2u));
  /* 10d12ded push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10d12df2 call 0x10d130d0 */
  push32(0x10d12df7u); f_10d130d0();
  /* 10d12df7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12dfa mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10d12dfd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12e01 jne 0x10d12e0e */
  if (!C.zf) goto L_10d12e0e;
  /* 10d12e03 mov edx, dword ptr [0x10d3ff3c] */
  EDX = (r32((uint32_t)(0x10d3ff3c)));
  /* 10d12e09 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10d12e0c jmp 0x10d12e72 */
  goto L_10d12e72;
L_10d12e0e:;
  /* 10d12e0e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10d12e11 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12e14 mov dword ptr [eax*4 + 0x10d3fe00], ecx */
  w32((uint32_t)(EAX*4 + 0x10d3fe00), (ECX));
  /* 10d12e1b mov edx, dword ptr [0x10d3ff3c] */
  EDX = (r32((uint32_t)(0x10d3ff3c)));
  /* 10d12e21 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12e24 mov dword ptr [0x10d3ff3c], edx */
  w32((uint32_t)(0x10d3ff3c), (EDX));
  /* 10d12e2a jmp 0x10d12e35 */
  goto L_10d12e35;
L_10d12e2c:;
  /* 10d12e2c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12e2f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12e32 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10d12e35:;
  /* 10d12e35 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10d12e38 mov edx, dword ptr [ecx*4 + 0x10d3fe00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d3fe00)));
  /* 10d12e3f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12e45 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12e48 jae 0x10d12e6d */
  if (!C.cf) goto L_10d12e6d;
  /* 10d12e4a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12e4d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10d12e51 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12e54 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10d12e5a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12e5d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10d12e61 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12e64 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10d12e6b jmp 0x10d12e2c */
  goto L_10d12e2c;
L_10d12e6d:;
  /* 10d12e6d jmp 0x10d12dc9 */
  goto L_10d12dc9;
L_10d12e72:;
  /* 10d12e72 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10d12e79 jmp 0x10d12e96 */
  goto L_10d12e96;
L_10d12e7b:;
  /* 10d12e7b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d12e7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12e81 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10d12e84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d12e87 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12e8a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d12e8d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10d12e90 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12e93 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10d12e96:;
  /* 10d12e96 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d12e99 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12e9c jge 0x10d12f05 */
  if ((C.sf==C.of)) goto L_10d12f05;
  /* 10d12e9e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10d12ea1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12ea4 je 0x10d12f00 */
  if (C.zf) goto L_10d12f00;
  /* 10d12ea6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d12ea9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d12eac and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d12eaf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d12eb1 je 0x10d12f00 */
  if (C.zf) goto L_10d12f00;
  /* 10d12eb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d12eb6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d12eb9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10d12ebc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d12ebe jne 0x10d12ed0 */
  if (!C.zf) goto L_10d12ed0;
  /* 10d12ec0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10d12ec3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d12ec5 push edx */
  push32((uint32_t)(EDX));
  /* 10d12ec6 call dword ptr [0x10d402dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402dc))), 0x10d12eccu);
  /* 10d12ecc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d12ece je 0x10d12f00 */
  if (C.zf) goto L_10d12f00;
L_10d12ed0:;
  /* 10d12ed0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d12ed3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d12ed6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d12ed9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d12edc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d12edf mov edx, dword ptr [eax*4 + 0x10d3fe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d3fe00)));
  /* 10d12ee6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12ee8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10d12eeb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12eee mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10d12ef1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d12ef3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d12ef5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12ef8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d12efb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d12efd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10d12f00:;
  /* 10d12f00 jmp 0x10d12e7b */
  goto L_10d12e7b;
L_10d12f05:;
  /* 10d12f05 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10d12f0c jmp 0x10d12f17 */
  goto L_10d12f17;
L_10d12f0e:;
  /* 10d12f0e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d12f11 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12f14 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10d12f17:;
  /* 10d12f17 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12f1b jge 0x10d12ff4 */
  if ((C.sf==C.of)) goto L_10d12ff4;
  /* 10d12f21 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d12f24 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d12f27 mov edx, dword ptr [0x10d3fe00] */
  EDX = (r32((uint32_t)(0x10d3fe00)));
  /* 10d12f2d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12f2f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10d12f32 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12f35 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12f38 jne 0x10d12fe0 */
  if (!C.zf) goto L_10d12fe0;
  /* 10d12f3e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12f41 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10d12f45 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12f49 jne 0x10d12f54 */
  if (!C.zf) goto L_10d12f54;
  /* 10d12f4b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10d12f52 jmp 0x10d12f64 */
  goto L_10d12f64;
L_10d12f54:;
  /* 10d12f54 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d12f57 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d12f5a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d12f5c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d12f5e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d12f61 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10d12f64:;
  /* 10d12f64 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10d12f67 push eax */
  push32((uint32_t)(EAX));
  /* 10d12f68 call dword ptr [0x10d4028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4028c))), 0x10d12f6eu);
  /* 10d12f6e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10d12f71 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12f75 je 0x10d12fcf */
  if (C.zf) goto L_10d12fcf;
  /* 10d12f77 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d12f7a push ecx */
  push32((uint32_t)(ECX));
  /* 10d12f7b call dword ptr [0x10d402dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402dc))), 0x10d12f81u);
  /* 10d12f81 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10d12f84 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12f88 je 0x10d12fcf */
  if (C.zf) goto L_10d12fcf;
  /* 10d12f8a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12f8d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d12f90 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d12f92 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10d12f95 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d12f9b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12f9e jne 0x10d12fb0 */
  if (!C.zf) goto L_10d12fb0;
  /* 10d12fa0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12fa3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10d12fa6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10d12fa8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12fab mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10d12fae jmp 0x10d12fcd */
  goto L_10d12fcd;
L_10d12fb0:;
  /* 10d12fb0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10d12fb3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d12fb9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d12fbc jne 0x10d12fcd */
  if (!C.zf) goto L_10d12fcd;
  /* 10d12fbe mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12fc1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d12fc4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10d12fc7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12fca mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10d12fcd:;
  /* 10d12fcd jmp 0x10d12fde */
  goto L_10d12fde;
L_10d12fcf:;
  /* 10d12fcf mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12fd2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d12fd5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10d12fd8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12fdb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10d12fde:;
  /* 10d12fde jmp 0x10d12fef */
  goto L_10d12fef;
L_10d12fe0:;
  /* 10d12fe0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12fe3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d12fe6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10d12fe9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d12fec mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10d12fef:;
  /* 10d12fef jmp 0x10d12f0e */
  goto L_10d12f0e;
L_10d12ff4:;
  /* 10d12ff4 mov eax, dword ptr [0x10d3ff3c] */
  EAX = (r32((uint32_t)(0x10d3ff3c)));
  /* 10d12ff9 push eax */
  push32((uint32_t)(EAX));
  /* 10d12ffa call dword ptr [0x10d402d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402d8))), 0x10d13000u);
  /* 10d13000 mov esp, ebp */
  ESP = (EBP);
  /* 10d13002 pop ebp */
  EBP = (pop32());
  /* 10d13003 ret  */
  ESPCHK(0x10d12ce0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10d13010 (155 bytes, 45 insns) */
void f_10d13010(void) {
  FTRACE(0x10d13010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d13010 push ebp */
  push32((uint32_t)(EBP));
  /* 10d13011 mov ebp, esp */
  EBP = (ESP);
  /* 10d13013 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d13016 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d1301d jmp 0x10d13028 */
  goto L_10d13028;
L_10d1301f:;
  /* 10d1301f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d13022 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13025 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d13028:;
  /* 10d13028 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1302c jge 0x10d130a7 */
  if ((C.sf==C.of)) goto L_10d130a7;
  /* 10d1302e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d13031 cmp dword ptr [ecx*4 + 0x10d3fe00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10d3fe00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13039 je 0x10d130a2 */
  if (C.zf) goto L_10d130a2;
  /* 10d1303b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1303e mov eax, dword ptr [edx*4 + 0x10d3fe00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d3fe00)));
  /* 10d13045 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d13048 jmp 0x10d13053 */
  goto L_10d13053;
L_10d1304a:;
  /* 10d1304a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1304d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13050 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d13053:;
  /* 10d13053 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d13056 mov eax, dword ptr [edx*4 + 0x10d3fe00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d3fe00)));
  /* 10d1305d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13062 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13065 jae 0x10d1307f */
  if (!C.cf) goto L_10d1307f;
  /* 10d13067 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1306a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1306e je 0x10d1307d */
  if (C.zf) goto L_10d1307d;
  /* 10d13070 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13073 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13076 push edx */
  push32((uint32_t)(EDX));
  /* 10d13077 call dword ptr [0x10d402e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402e4))), 0x10d1307du);
L_10d1307d:;
  /* 10d1307d jmp 0x10d1304a */
  goto L_10d1304a;
L_10d1307f:;
  /* 10d1307f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d13081 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d13084 mov ecx, dword ptr [eax*4 + 0x10d3fe00] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10d3fe00)));
  /* 10d1308b push ecx */
  push32((uint32_t)(ECX));
  /* 10d1308c call 0x10d13b60 */
  push32(0x10d13091u); f_10d13b60();
  /* 10d13091 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13094 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d13097 mov dword ptr [edx*4 + 0x10d3fe00], 0 */
  w32((uint32_t)(EDX*4 + 0x10d3fe00), (0x0u));
L_10d130a2:;
  /* 10d130a2 jmp 0x10d1301f */
  goto L_10d1301f;
L_10d130a7:;
  /* 10d130a7 mov esp, ebp */
  ESP = (EBP);
  /* 10d130a9 pop ebp */
  EBP = (pop32());
  /* 10d130aa ret  */
  ESPCHK(0x10d13010u, _esp0);
  ESP += 4; return;
}

/* FUN_100030b0 @ 0x10d130b0 (29 bytes, 13 insns) */
void f_10d130b0(void) {
  FTRACE(0x10d130b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d130b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d130b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d130b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d130b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d130b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d130b9 mov eax, dword ptr [0x10d3e608] */
  EAX = (r32((uint32_t)(0x10d3e608)));
  /* 10d130be push eax */
  push32((uint32_t)(EAX));
  /* 10d130bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d130c2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d130c3 call 0x10d13120 */
  push32(0x10d130c8u); f_10d13120();
  /* 10d130c8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d130cb pop ebp */
  EBP = (pop32());
  /* 10d130cc ret  */
  ESPCHK(0x10d130b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100030d0 @ 0x10d130d0 (35 bytes, 16 insns) */
void f_10d130d0(void) {
  FTRACE(0x10d130d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d130d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d130d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d130d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d130d6 push eax */
  push32((uint32_t)(EAX));
  /* 10d130d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d130da push ecx */
  push32((uint32_t)(ECX));
  /* 10d130db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d130de push edx */
  push32((uint32_t)(EDX));
  /* 10d130df mov eax, dword ptr [0x10d3e608] */
  EAX = (r32((uint32_t)(0x10d3e608)));
  /* 10d130e4 push eax */
  push32((uint32_t)(EAX));
  /* 10d130e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d130e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d130e9 call 0x10d13120 */
  push32(0x10d130eeu); f_10d13120();
  /* 10d130ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d130f1 pop ebp */
  EBP = (pop32());
  /* 10d130f2 ret  */
  ESPCHK(0x10d130d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003100 @ 0x10d13100 (27 bytes, 13 insns) */
void f_10d13100(void) {
  FTRACE(0x10d13100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d13100 push ebp */
  push32((uint32_t)(EBP));
  /* 10d13101 mov ebp, esp */
  EBP = (ESP);
  /* 10d13103 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13105 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13107 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d13109 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1310c push eax */
  push32((uint32_t)(EAX));
  /* 10d1310d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13110 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13111 call 0x10d13120 */
  push32(0x10d13116u); f_10d13120();
  /* 10d13116 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13119 pop ebp */
  EBP = (pop32());
  /* 10d1311a ret  */
  ESPCHK(0x10d13100u, _esp0);
  ESP += 4; return;
}

/* FUN_10003120 @ 0x10d13120 (94 bytes, 38 insns) */
void f_10d13120(void) {
  FTRACE(0x10d13120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d13120 push ebp */
  push32((uint32_t)(EBP));
  /* 10d13121 mov ebp, esp */
  EBP = (ESP);
  /* 10d13123 push ecx */
  push32((uint32_t)(ECX));
L_10d13124:;
  /* 10d13124 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d13126 call 0x10d16ad0 */
  push32(0x10d1312bu); f_10d16ad0();
  /* 10d1312b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1312e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d13131 push eax */
  push32((uint32_t)(EAX));
  /* 10d13132 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d13135 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13136 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d13139 push edx */
  push32((uint32_t)(EDX));
  /* 10d1313a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1313d push eax */
  push32((uint32_t)(EAX));
  /* 10d1313e call 0x10d131a0 */
  push32(0x10d13143u); f_10d131a0();
  /* 10d13143 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13146 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d13149 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d1314b call 0x10d16b70 */
  push32(0x10d13150u); f_10d16b70();
  /* 10d13150 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13153 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13157 jne 0x10d1315f */
  if (!C.zf) goto L_10d1315f;
  /* 10d13159 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1315d jne 0x10d13164 */
  if (!C.zf) goto L_10d13164;
L_10d1315f:;
  /* 10d1315f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13162 jmp 0x10d1317a */
  goto L_10d1317a;
L_10d13164:;
  /* 10d13164 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13167 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13168 call 0x10d16e10 */
  push32(0x10d1316du); f_10d16e10();
  /* 10d1316d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13170 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13172 jne 0x10d13178 */
  if (!C.zf) goto L_10d13178;
  /* 10d13174 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d13176 jmp 0x10d1317a */
  goto L_10d1317a;
L_10d13178:;
  /* 10d13178 jmp 0x10d13124 */
  goto L_10d13124;
L_10d1317a:;
  /* 10d1317a mov esp, ebp */
  ESP = (EBP);
  /* 10d1317c pop ebp */
  EBP = (pop32());
  /* 10d1317d ret  */
  ESPCHK(0x10d13120u, _esp0);
  ESP += 4; return;
}

/* FUN_10003180 @ 0x10d13180 (23 bytes, 11 insns) */
void f_10d13180(void) {
  FTRACE(0x10d13180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d13180 push ebp */
  push32((uint32_t)(EBP));
  /* 10d13181 mov ebp, esp */
  EBP = (ESP);
  /* 10d13183 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13185 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13187 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d13189 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1318c push eax */
  push32((uint32_t)(EAX));
  /* 10d1318d call 0x10d131a0 */
  push32(0x10d13192u); f_10d131a0();
  /* 10d13192 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13195 pop ebp */
  EBP = (pop32());
  /* 10d13196 ret  */
  ESPCHK(0x10d13180u, _esp0);
  ESP += 4; return;
}

/* FUN_100031a0 @ 0x10d131a0 (787 bytes, 254 insns) */
void f_10d131a0(void) {
  FTRACE(0x10d131a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d131a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d131a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d131a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d131a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d131a7 push esi */
  push32((uint32_t)(ESI));
  /* 10d131a8 push edi */
  push32((uint32_t)(EDI));
  /* 10d131a9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d131b0 mov eax, dword ptr [0x10d3ca84] */
  EAX = (r32((uint32_t)(0x10d3ca84)));
  /* 10d131b5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d131b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d131ba je 0x10d131ec */
  if (C.zf) goto L_10d131ec;
L_10d131bc:;
  /* 10d131bc call 0x10d14270 */
  push32(0x10d131c1u); f_10d14270();
  /* 10d131c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d131c3 jne 0x10d131e6 */
  if (!C.zf) goto L_10d131e6;
  /* 10d131c5 push 0x10d394c4 */
  push32((uint32_t)(0x10d394c4u));
  /* 10d131ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10d131cc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10d131d1 push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d131d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d131d8 call 0x10d12190 */
  push32(0x10d131ddu); f_10d12190();
  /* 10d131dd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d131e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d131e3 jne 0x10d131e6 */
  if (!C.zf) goto L_10d131e6;
  /* 10d131e5 int3  */
  x86_unimpl("int3 @ 0x10d131e5");
L_10d131e6:;
  /* 10d131e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d131e8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d131ea jne 0x10d131bc */
  if (!C.zf) goto L_10d131bc;
L_10d131ec:;
  /* 10d131ec mov edx, dword ptr [0x10d3ca88] */
  EDX = (r32((uint32_t)(0x10d3ca88)));
  /* 10d131f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d131f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d131f8 cmp eax, dword ptr [0x10d3ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d131fe jne 0x10d13201 */
  if (!C.zf) goto L_10d13201;
  /* 10d13200 int3  */
  x86_unimpl("int3 @ 0x10d13200");
L_10d13201:;
  /* 10d13201 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d13204 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13205 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d13208 push edx */
  push32((uint32_t)(EDX));
  /* 10d13209 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1320c push eax */
  push32((uint32_t)(EAX));
  /* 10d1320d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d13210 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13211 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13214 push edx */
  push32((uint32_t)(EDX));
  /* 10d13215 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13217 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d13219 call dword ptr [0x10d3cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3cc90))), 0x10d1321fu);
  /* 10d1321f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13222 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13224 jne 0x10d13284 */
  if (!C.zf) goto L_10d13284;
  /* 10d13226 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1322a je 0x10d13257 */
  if (C.zf) goto L_10d13257;
L_10d1322c:;
  /* 10d1322c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1322f push eax */
  push32((uint32_t)(EAX));
  /* 10d13230 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d13233 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13234 push 0x10d39480 */
  push32((uint32_t)(0x10d39480u));
  /* 10d13239 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1323b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1323d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1323f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13241 call 0x10d12190 */
  push32(0x10d13246u); f_10d12190();
  /* 10d13246 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13249 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1324c jne 0x10d1324f */
  if (!C.zf) goto L_10d1324f;
  /* 10d1324e int3  */
  x86_unimpl("int3 @ 0x10d1324e");
L_10d1324f:;
  /* 10d1324f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d13251 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d13253 jne 0x10d1322c */
  if (!C.zf) goto L_10d1322c;
  /* 10d13255 jmp 0x10d1327d */
  goto L_10d1327d;
L_10d13257:;
  /* 10d13257 push 0x10d3945c */
  push32((uint32_t)(0x10d3945cu));
  /* 10d1325c push 0x10d39458 */
  push32((uint32_t)(0x10d39458u));
  /* 10d13261 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13263 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13265 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13267 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13269 call 0x10d12190 */
  push32(0x10d1326eu); f_10d12190();
  /* 10d1326e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13271 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13274 jne 0x10d13277 */
  if (!C.zf) goto L_10d13277;
  /* 10d13276 int3  */
  x86_unimpl("int3 @ 0x10d13276");
L_10d13277:;
  /* 10d13277 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d13279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1327b jne 0x10d13257 */
  if (!C.zf) goto L_10d13257;
L_10d1327d:;
  /* 10d1327d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1327f jmp 0x10d134ac */
  goto L_10d134ac;
L_10d13284:;
  /* 10d13284 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d13287 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1328d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13290 je 0x10d132a6 */
  if (C.zf) goto L_10d132a6;
  /* 10d13292 mov edx, dword ptr [0x10d3ca84] */
  EDX = (r32((uint32_t)(0x10d3ca84)));
  /* 10d13298 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1329b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1329d jne 0x10d132a6 */
  if (!C.zf) goto L_10d132a6;
  /* 10d1329f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10d132a6:;
  /* 10d132a6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d132aa ja 0x10d132b7 */
  if ((!C.cf&&!C.zf)) goto L_10d132b7;
  /* 10d132ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d132af add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d132b2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d132b5 jbe 0x10d132e3 */
  if ((C.cf||C.zf)) goto L_10d132e3;
L_10d132b7:;
  /* 10d132b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d132ba push ecx */
  push32((uint32_t)(ECX));
  /* 10d132bb push 0x10d39434 */
  push32((uint32_t)(0x10d39434u));
  /* 10d132c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d132c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d132c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d132c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d132c8 call 0x10d12190 */
  push32(0x10d132cdu); f_10d12190();
  /* 10d132cd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d132d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d132d3 jne 0x10d132d6 */
  if (!C.zf) goto L_10d132d6;
  /* 10d132d5 int3  */
  x86_unimpl("int3 @ 0x10d132d5");
L_10d132d6:;
  /* 10d132d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d132d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d132da jne 0x10d132b7 */
  if (!C.zf) goto L_10d132b7;
  /* 10d132dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d132de jmp 0x10d134ac */
  goto L_10d134ac;
L_10d132e3:;
  /* 10d132e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d132e6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d132eb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d132ee je 0x10d13330 */
  if (C.zf) goto L_10d13330;
  /* 10d132f0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d132f4 je 0x10d13330 */
  if (C.zf) goto L_10d13330;
  /* 10d132f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d132f9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d132ff cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13302 je 0x10d13330 */
  if (C.zf) goto L_10d13330;
  /* 10d13304 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13308 je 0x10d13330 */
  if (C.zf) goto L_10d13330;
L_10d1330a:;
  /* 10d1330a push 0x10d39400 */
  push32((uint32_t)(0x10d39400u));
  /* 10d1330f push 0x10d39458 */
  push32((uint32_t)(0x10d39458u));
  /* 10d13314 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13316 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13318 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1331a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1331c call 0x10d12190 */
  push32(0x10d13321u); f_10d12190();
  /* 10d13321 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13324 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13327 jne 0x10d1332a */
  if (!C.zf) goto L_10d1332a;
  /* 10d13329 int3  */
  x86_unimpl("int3 @ 0x10d13329");
L_10d1332a:;
  /* 10d1332a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1332c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1332e jne 0x10d1330a */
  if (!C.zf) goto L_10d1330a;
L_10d13330:;
  /* 10d13330 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13333 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13336 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d13339 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1333c push ecx */
  push32((uint32_t)(ECX));
  /* 10d1333d call 0x10d16f20 */
  push32(0x10d13342u); f_10d16f20();
  /* 10d13342 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13345 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d13348 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1334c jne 0x10d13355 */
  if (!C.zf) goto L_10d13355;
  /* 10d1334e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d13350 jmp 0x10d134ac */
  goto L_10d134ac;
L_10d13355:;
  /* 10d13355 mov edx, dword ptr [0x10d3ca88] */
  EDX = (r32((uint32_t)(0x10d3ca88)));
  /* 10d1335b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1335e mov dword ptr [0x10d3ca88], edx */
  w32((uint32_t)(0x10d3ca88), (EDX));
  /* 10d13364 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13368 je 0x10d133b3 */
  if (C.zf) goto L_10d133b3;
  /* 10d1336a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1336d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d13373 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13376 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10d1337d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13380 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10d13387 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1338a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10d13391 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13394 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13397 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10d1339a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1339d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10d133a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d133a7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10d133ae jmp 0x10d13453 */
  goto L_10d13453;
L_10d133b3:;
  /* 10d133b3 mov edx, dword ptr [0x10d3e468] */
  EDX = (r32((uint32_t)(0x10d3e468)));
  /* 10d133b9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d133bc mov dword ptr [0x10d3e468], edx */
  w32((uint32_t)(0x10d3e468), (EDX));
  /* 10d133c2 mov eax, dword ptr [0x10d3e470] */
  EAX = (r32((uint32_t)(0x10d3e470)));
  /* 10d133c7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d133ca mov dword ptr [0x10d3e470], eax */
  w32((uint32_t)(0x10d3e470), (EAX));
  /* 10d133cf mov ecx, dword ptr [0x10d3e470] */
  ECX = (r32((uint32_t)(0x10d3e470)));
  /* 10d133d5 cmp ecx, dword ptr [0x10d3e474] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3e474))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d133db jbe 0x10d133e9 */
  if ((C.cf||C.zf)) goto L_10d133e9;
  /* 10d133dd mov edx, dword ptr [0x10d3e470] */
  EDX = (r32((uint32_t)(0x10d3e470)));
  /* 10d133e3 mov dword ptr [0x10d3e474], edx */
  w32((uint32_t)(0x10d3e474), (EDX));
L_10d133e9:;
  /* 10d133e9 cmp dword ptr [0x10d3e46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d133f0 je 0x10d133ff */
  if (C.zf) goto L_10d133ff;
  /* 10d133f2 mov eax, dword ptr [0x10d3e46c] */
  EAX = (r32((uint32_t)(0x10d3e46c)));
  /* 10d133f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d133fa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10d133fd jmp 0x10d13408 */
  goto L_10d13408;
L_10d133ff:;
  /* 10d133ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13402 mov dword ptr [0x10d3e464], edx */
  w32((uint32_t)(0x10d3e464), (EDX));
L_10d13408:;
  /* 10d13408 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1340b mov ecx, dword ptr [0x10d3e46c] */
  ECX = (r32((uint32_t)(0x10d3e46c)));
  /* 10d13411 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d13413 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13416 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10d1341d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13420 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d13423 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10d13426 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13429 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1342c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10d1342f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13432 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13435 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10d13438 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1343b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1343e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10d13441 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13444 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d13447 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10d1344a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1344d mov dword ptr [0x10d3e46c], ecx */
  w32((uint32_t)(0x10d3e46c), (ECX));
L_10d13453:;
  /* 10d13453 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d13455 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d13457 mov dl, byte ptr [0x10d3ca90] */
  DL = (r8((uint32_t)(0x10d3ca90)));
  /* 10d1345d push edx */
  push32((uint32_t)(EDX));
  /* 10d1345e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13461 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13464 push eax */
  push32((uint32_t)(EAX));
  /* 10d13465 call 0x10d16e40 */
  push32(0x10d1346au); f_10d16e40();
  /* 10d1346a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1346d push 4 */
  push32((uint32_t)(0x4u));
  /* 10d1346f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d13471 mov cl, byte ptr [0x10d3ca90] */
  CL = (r8((uint32_t)(0x10d3ca90)));
  /* 10d13477 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13478 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1347b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1347e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10d13482 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13483 call 0x10d16e40 */
  push32(0x10d13488u); f_10d16e40();
  /* 10d13488 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1348b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1348e push edx */
  push32((uint32_t)(EDX));
  /* 10d1348f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d13491 mov al, byte ptr [0x10d3ca92] */
  AL = (r8((uint32_t)(0x10d3ca92)));
  /* 10d13496 push eax */
  push32((uint32_t)(EAX));
  /* 10d13497 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1349a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1349d push ecx */
  push32((uint32_t)(ECX));
  /* 10d1349e call 0x10d16e40 */
  push32(0x10d134a3u); f_10d16e40();
  /* 10d134a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d134a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d134a9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10d134ac:;
  /* 10d134ac pop edi */
  EDI = (pop32());
  /* 10d134ad pop esi */
  ESI = (pop32());
  /* 10d134ae pop ebx */
  EBX = (pop32());
  /* 10d134af mov esp, ebp */
  ESP = (EBP);
  /* 10d134b1 pop ebp */
  EBP = (pop32());
  /* 10d134b2 ret  */
  ESPCHK(0x10d131a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034c0 @ 0x10d134c0 (27 bytes, 13 insns) */
void f_10d134c0(void) {
  FTRACE(0x10d134c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d134c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d134c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d134c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d134c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d134c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d134c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d134cc push eax */
  push32((uint32_t)(EAX));
  /* 10d134cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d134d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d134d1 call 0x10d134e0 */
  push32(0x10d134d6u); f_10d134e0();
  /* 10d134d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d134d9 pop ebp */
  EBP = (pop32());
  /* 10d134da ret  */
  ESPCHK(0x10d134c0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10d134e0 (96 bytes, 37 insns) */
void f_10d134e0(void) {
  FTRACE(0x10d134e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d134e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d134e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d134e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d134e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d134e9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d134ed mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10d134f0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d134f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d134f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d134f7 push edx */
  push32((uint32_t)(EDX));
  /* 10d134f8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d134fb push eax */
  push32((uint32_t)(EAX));
  /* 10d134fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d134ff push ecx */
  push32((uint32_t)(ECX));
  /* 10d13500 call 0x10d130d0 */
  push32(0x10d13505u); f_10d130d0();
  /* 10d13505 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13508 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1350b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1350f je 0x10d13539 */
  if (C.zf) goto L_10d13539;
  /* 10d13511 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d13514 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d13517 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1351a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1351d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d13520:;
  /* 10d13520 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d13523 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13526 jae 0x10d13539 */
  if (!C.cf) goto L_10d13539;
  /* 10d13528 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1352b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10d1352e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d13531 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13534 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d13537 jmp 0x10d13520 */
  goto L_10d13520;
L_10d13539:;
  /* 10d13539 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1353c mov esp, ebp */
  ESP = (EBP);
  /* 10d1353e pop ebp */
  EBP = (pop32());
  /* 10d1353f ret  */
  ESPCHK(0x10d134e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003540 @ 0x10d13540 (27 bytes, 13 insns) */
void f_10d13540(void) {
  FTRACE(0x10d13540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d13540 push ebp */
  push32((uint32_t)(EBP));
  /* 10d13541 mov ebp, esp */
  EBP = (ESP);
  /* 10d13543 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13545 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13547 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d13549 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1354c push eax */
  push32((uint32_t)(EAX));
  /* 10d1354d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13550 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13551 call 0x10d13560 */
  push32(0x10d13556u); f_10d13560();
  /* 10d13556 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13559 pop ebp */
  EBP = (pop32());
  /* 10d1355a ret  */
  ESPCHK(0x10d13540u, _esp0);
  ESP += 4; return;
}

/* FUN_10003560 @ 0x10d13560 (64 bytes, 27 insns) */
void f_10d13560(void) {
  FTRACE(0x10d13560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d13560 push ebp */
  push32((uint32_t)(EBP));
  /* 10d13561 mov ebp, esp */
  EBP = (ESP);
  /* 10d13563 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13564 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d13566 call 0x10d16ad0 */
  push32(0x10d1356bu); f_10d16ad0();
  /* 10d1356b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1356e push 1 */
  push32((uint32_t)(0x1u));
  /* 10d13570 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d13573 push eax */
  push32((uint32_t)(EAX));
  /* 10d13574 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d13577 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13578 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1357b push edx */
  push32((uint32_t)(EDX));
  /* 10d1357c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1357f push eax */
  push32((uint32_t)(EAX));
  /* 10d13580 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13583 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13584 call 0x10d135a0 */
  push32(0x10d13589u); f_10d135a0();
  /* 10d13589 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1358c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1358f push 9 */
  push32((uint32_t)(0x9u));
  /* 10d13591 call 0x10d16b70 */
  push32(0x10d13596u); f_10d16b70();
  /* 10d13596 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13599 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1359c mov esp, ebp */
  ESP = (EBP);
  /* 10d1359e pop ebp */
  EBP = (pop32());
  /* 10d1359f ret  */
  ESPCHK(0x10d13560u, _esp0);
  ESP += 4; return;
}

/* FUN_100035a0 @ 0x10d135a0 (1297 bytes, 431 insns) */
void f_10d135a0(void) {
  FTRACE(0x10d135a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d135a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d135a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d135a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d135a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d135a7 push esi */
  push32((uint32_t)(ESI));
  /* 10d135a8 push edi */
  push32((uint32_t)(EDI));
  /* 10d135a9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10d135b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d135b4 jne 0x10d135d3 */
  if (!C.zf) goto L_10d135d3;
  /* 10d135b6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d135b9 push eax */
  push32((uint32_t)(EAX));
  /* 10d135ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d135bd push ecx */
  push32((uint32_t)(ECX));
  /* 10d135be mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d135c1 push edx */
  push32((uint32_t)(EDX));
  /* 10d135c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d135c5 push eax */
  push32((uint32_t)(EAX));
  /* 10d135c6 call 0x10d130d0 */
  push32(0x10d135cbu); f_10d130d0();
  /* 10d135cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d135ce jmp 0x10d13aaa */
  goto L_10d13aaa;
L_10d135d3:;
  /* 10d135d3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d135d7 je 0x10d135f6 */
  if (C.zf) goto L_10d135f6;
  /* 10d135d9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d135dd jne 0x10d135f6 */
  if (!C.zf) goto L_10d135f6;
  /* 10d135df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d135e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d135e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d135e6 push edx */
  push32((uint32_t)(EDX));
  /* 10d135e7 call 0x10d13b60 */
  push32(0x10d135ecu); f_10d13b60();
  /* 10d135ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d135ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d135f1 jmp 0x10d13aaa */
  goto L_10d13aaa;
L_10d135f6:;
  /* 10d135f6 mov eax, dword ptr [0x10d3ca84] */
  EAX = (r32((uint32_t)(0x10d3ca84)));
  /* 10d135fb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d135fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13600 je 0x10d13632 */
  if (C.zf) goto L_10d13632;
L_10d13602:;
  /* 10d13602 call 0x10d14270 */
  push32(0x10d13607u); f_10d14270();
  /* 10d13607 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13609 jne 0x10d1362c */
  if (!C.zf) goto L_10d1362c;
  /* 10d1360b push 0x10d394c4 */
  push32((uint32_t)(0x10d394c4u));
  /* 10d13610 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13612 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10d13617 push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d1361c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1361e call 0x10d12190 */
  push32(0x10d13623u); f_10d12190();
  /* 10d13623 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13626 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13629 jne 0x10d1362c */
  if (!C.zf) goto L_10d1362c;
  /* 10d1362b int3  */
  x86_unimpl("int3 @ 0x10d1362b");
L_10d1362c:;
  /* 10d1362c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1362e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d13630 jne 0x10d13602 */
  if (!C.zf) goto L_10d13602;
L_10d13632:;
  /* 10d13632 mov edx, dword ptr [0x10d3ca88] */
  EDX = (r32((uint32_t)(0x10d3ca88)));
  /* 10d13638 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d1363b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1363e cmp eax, dword ptr [0x10d3ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13644 jne 0x10d13647 */
  if (!C.zf) goto L_10d13647;
  /* 10d13646 int3  */
  x86_unimpl("int3 @ 0x10d13646");
L_10d13647:;
  /* 10d13647 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d1364a push ecx */
  push32((uint32_t)(ECX));
  /* 10d1364b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1364e push edx */
  push32((uint32_t)(EDX));
  /* 10d1364f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d13652 push eax */
  push32((uint32_t)(EAX));
  /* 10d13653 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d13656 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13657 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1365a push edx */
  push32((uint32_t)(EDX));
  /* 10d1365b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1365e push eax */
  push32((uint32_t)(EAX));
  /* 10d1365f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d13661 call dword ptr [0x10d3cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3cc90))), 0x10d13667u);
  /* 10d13667 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1366a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1366c jne 0x10d136cc */
  if (!C.zf) goto L_10d136cc;
  /* 10d1366e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13672 je 0x10d1369f */
  if (C.zf) goto L_10d1369f;
L_10d13674:;
  /* 10d13674 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d13677 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13678 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1367b push edx */
  push32((uint32_t)(EDX));
  /* 10d1367c push 0x10d39640 */
  push32((uint32_t)(0x10d39640u));
  /* 10d13681 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13683 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13685 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13687 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13689 call 0x10d12190 */
  push32(0x10d1368eu); f_10d12190();
  /* 10d1368e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13691 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13694 jne 0x10d13697 */
  if (!C.zf) goto L_10d13697;
  /* 10d13696 int3  */
  x86_unimpl("int3 @ 0x10d13696");
L_10d13697:;
  /* 10d13697 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d13699 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1369b jne 0x10d13674 */
  if (!C.zf) goto L_10d13674;
  /* 10d1369d jmp 0x10d136c5 */
  goto L_10d136c5;
L_10d1369f:;
  /* 10d1369f push 0x10d3961c */
  push32((uint32_t)(0x10d3961cu));
  /* 10d136a4 push 0x10d39458 */
  push32((uint32_t)(0x10d39458u));
  /* 10d136a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d136ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10d136ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10d136af push 0 */
  push32((uint32_t)(0x0u));
  /* 10d136b1 call 0x10d12190 */
  push32(0x10d136b6u); f_10d12190();
  /* 10d136b6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d136b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d136bc jne 0x10d136bf */
  if (!C.zf) goto L_10d136bf;
  /* 10d136be int3  */
  x86_unimpl("int3 @ 0x10d136be");
L_10d136bf:;
  /* 10d136bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d136c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d136c3 jne 0x10d1369f */
  if (!C.zf) goto L_10d1369f;
L_10d136c5:;
  /* 10d136c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d136c7 jmp 0x10d13aaa */
  goto L_10d13aaa;
L_10d136cc:;
  /* 10d136cc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d136d0 jbe 0x10d136fe */
  if ((C.cf||C.zf)) goto L_10d136fe;
L_10d136d2:;
  /* 10d136d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d136d5 push edx */
  push32((uint32_t)(EDX));
  /* 10d136d6 push 0x10d395ec */
  push32((uint32_t)(0x10d395ecu));
  /* 10d136db push 0 */
  push32((uint32_t)(0x0u));
  /* 10d136dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10d136df push 0 */
  push32((uint32_t)(0x0u));
  /* 10d136e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d136e3 call 0x10d12190 */
  push32(0x10d136e8u); f_10d12190();
  /* 10d136e8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d136eb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d136ee jne 0x10d136f1 */
  if (!C.zf) goto L_10d136f1;
  /* 10d136f0 int3  */
  x86_unimpl("int3 @ 0x10d136f0");
L_10d136f1:;
  /* 10d136f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d136f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d136f5 jne 0x10d136d2 */
  if (!C.zf) goto L_10d136d2;
  /* 10d136f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d136f9 jmp 0x10d13aaa */
  goto L_10d13aaa;
L_10d136fe:;
  /* 10d136fe cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13702 je 0x10d13746 */
  if (C.zf) goto L_10d13746;
  /* 10d13704 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d13707 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1370d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13710 je 0x10d13746 */
  if (C.zf) goto L_10d13746;
  /* 10d13712 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d13715 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1371b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1371e je 0x10d13746 */
  if (C.zf) goto L_10d13746;
L_10d13720:;
  /* 10d13720 push 0x10d39400 */
  push32((uint32_t)(0x10d39400u));
  /* 10d13725 push 0x10d39458 */
  push32((uint32_t)(0x10d39458u));
  /* 10d1372a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1372c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1372e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13730 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d13732 call 0x10d12190 */
  push32(0x10d13737u); f_10d12190();
  /* 10d13737 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1373a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1373d jne 0x10d13740 */
  if (!C.zf) goto L_10d13740;
  /* 10d1373f int3  */
  x86_unimpl("int3 @ 0x10d1373f");
L_10d13740:;
  /* 10d13740 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d13742 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13744 jne 0x10d13720 */
  if (!C.zf) goto L_10d13720;
L_10d13746:;
  /* 10d13746 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13749 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1374a call 0x10d146d0 */
  push32(0x10d1374fu); f_10d146d0();
  /* 10d1374f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13752 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13754 jne 0x10d13777 */
  if (!C.zf) goto L_10d13777;
  /* 10d13756 push 0x10d395c8 */
  push32((uint32_t)(0x10d395c8u));
  /* 10d1375b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1375d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10d13762 push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d13767 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d13769 call 0x10d12190 */
  push32(0x10d1376eu); f_10d12190();
  /* 10d1376e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13771 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13774 jne 0x10d13777 */
  if (!C.zf) goto L_10d13777;
  /* 10d13776 int3  */
  x86_unimpl("int3 @ 0x10d13776");
L_10d13777:;
  /* 10d13777 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d13779 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1377b jne 0x10d13746 */
  if (!C.zf) goto L_10d13746;
  /* 10d1377d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13780 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d13783 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d13786 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d13789 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1378d jne 0x10d13796 */
  if (!C.zf) goto L_10d13796;
  /* 10d1378f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10d13796:;
  /* 10d13796 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1379a je 0x10d137da */
  if (C.zf) goto L_10d137da;
L_10d1379c:;
  /* 10d1379c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1379f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d137a6 jne 0x10d137b1 */
  if (!C.zf) goto L_10d137b1;
  /* 10d137a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d137ab cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d137af je 0x10d137d2 */
  if (C.zf) goto L_10d137d2;
L_10d137b1:;
  /* 10d137b1 push 0x10d39580 */
  push32((uint32_t)(0x10d39580u));
  /* 10d137b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d137b8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10d137bd push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d137c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d137c4 call 0x10d12190 */
  push32(0x10d137c9u); f_10d12190();
  /* 10d137c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d137cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d137cf jne 0x10d137d2 */
  if (!C.zf) goto L_10d137d2;
  /* 10d137d1 int3  */
  x86_unimpl("int3 @ 0x10d137d1");
L_10d137d2:;
  /* 10d137d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d137d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d137d6 jne 0x10d1379c */
  if (!C.zf) goto L_10d1379c;
  /* 10d137d8 jmp 0x10d1383e */
  goto L_10d1383e;
L_10d137da:;
  /* 10d137da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d137dd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d137e0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d137e5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d137e8 jne 0x10d137ff */
  if (!C.zf) goto L_10d137ff;
  /* 10d137ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d137ed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d137f3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d137f6 jne 0x10d137ff */
  if (!C.zf) goto L_10d137ff;
  /* 10d137f8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10d137ff:;
  /* 10d137ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d13802 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d13805 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1380a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1380d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d13813 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13815 je 0x10d13838 */
  if (C.zf) goto L_10d13838;
  /* 10d13817 push 0x10d39544 */
  push32((uint32_t)(0x10d39544u));
  /* 10d1381c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1381e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10d13823 push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d13828 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1382a call 0x10d12190 */
  push32(0x10d1382fu); f_10d12190();
  /* 10d1382f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13832 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13835 jne 0x10d13838 */
  if (!C.zf) goto L_10d13838;
  /* 10d13837 int3  */
  x86_unimpl("int3 @ 0x10d13837");
L_10d13838:;
  /* 10d13838 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1383a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1383c jne 0x10d137ff */
  if (!C.zf) goto L_10d137ff;
L_10d1383e:;
  /* 10d1383e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13842 je 0x10d13869 */
  if (C.zf) goto L_10d13869;
  /* 10d13844 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d13847 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1384a push eax */
  push32((uint32_t)(EAX));
  /* 10d1384b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1384e push ecx */
  push32((uint32_t)(ECX));
  /* 10d1384f call 0x10d17050 */
  push32(0x10d13854u); f_10d17050();
  /* 10d13854 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13857 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d1385a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1385e jne 0x10d13867 */
  if (!C.zf) goto L_10d13867;
  /* 10d13860 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d13862 jmp 0x10d13aaa */
  goto L_10d13aaa;
L_10d13867:;
  /* 10d13867 jmp 0x10d1388c */
  goto L_10d1388c;
L_10d13869:;
  /* 10d13869 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1386c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1386f push edx */
  push32((uint32_t)(EDX));
  /* 10d13870 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d13873 push eax */
  push32((uint32_t)(EAX));
  /* 10d13874 call 0x10d16fa0 */
  push32(0x10d13879u); f_10d16fa0();
  /* 10d13879 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1387c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d1387f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13883 jne 0x10d1388c */
  if (!C.zf) goto L_10d1388c;
  /* 10d13885 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d13887 jmp 0x10d13aaa */
  goto L_10d13aaa;
L_10d1388c:;
  /* 10d1388c mov ecx, dword ptr [0x10d3ca88] */
  ECX = (r32((uint32_t)(0x10d3ca88)));
  /* 10d13892 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13895 mov dword ptr [0x10d3ca88], ecx */
  w32((uint32_t)(0x10d3ca88), (ECX));
  /* 10d1389b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1389f jne 0x10d138f7 */
  if (!C.zf) goto L_10d138f7;
  /* 10d138a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d138a4 mov eax, dword ptr [0x10d3e468] */
  EAX = (r32((uint32_t)(0x10d3e468)));
  /* 10d138a9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d138ac mov dword ptr [0x10d3e468], eax */
  w32((uint32_t)(0x10d3e468), (EAX));
  /* 10d138b1 mov ecx, dword ptr [0x10d3e468] */
  ECX = (r32((uint32_t)(0x10d3e468)));
  /* 10d138b7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d138ba mov dword ptr [0x10d3e468], ecx */
  w32((uint32_t)(0x10d3e468), (ECX));
  /* 10d138c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d138c3 mov eax, dword ptr [0x10d3e470] */
  EAX = (r32((uint32_t)(0x10d3e470)));
  /* 10d138c8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d138cb mov dword ptr [0x10d3e470], eax */
  w32((uint32_t)(0x10d3e470), (EAX));
  /* 10d138d0 mov ecx, dword ptr [0x10d3e470] */
  ECX = (r32((uint32_t)(0x10d3e470)));
  /* 10d138d6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d138d9 mov dword ptr [0x10d3e470], ecx */
  w32((uint32_t)(0x10d3e470), (ECX));
  /* 10d138df mov edx, dword ptr [0x10d3e470] */
  EDX = (r32((uint32_t)(0x10d3e470)));
  /* 10d138e5 cmp edx, dword ptr [0x10d3e474] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d3e474))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d138eb jbe 0x10d138f7 */
  if ((C.cf||C.zf)) goto L_10d138f7;
  /* 10d138ed mov eax, dword ptr [0x10d3e470] */
  EAX = (r32((uint32_t)(0x10d3e470)));
  /* 10d138f2 mov dword ptr [0x10d3e474], eax */
  w32((uint32_t)(0x10d3e474), (EAX));
L_10d138f7:;
  /* 10d138f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d138fa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d138fd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d13900 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d13903 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d13906 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13909 jbe 0x10d1392f */
  if ((C.cf||C.zf)) goto L_10d1392f;
  /* 10d1390b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1390e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d13911 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d13914 push edx */
  push32((uint32_t)(EDX));
  /* 10d13915 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d13917 mov al, byte ptr [0x10d3ca92] */
  AL = (r8((uint32_t)(0x10d3ca92)));
  /* 10d1391c push eax */
  push32((uint32_t)(EAX));
  /* 10d1391d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d13920 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13923 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13926 push edx */
  push32((uint32_t)(EDX));
  /* 10d13927 call 0x10d16e40 */
  push32(0x10d1392cu); f_10d16e40();
  /* 10d1392c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1392f:;
  /* 10d1392f push 4 */
  push32((uint32_t)(0x4u));
  /* 10d13931 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d13933 mov al, byte ptr [0x10d3ca90] */
  AL = (r8((uint32_t)(0x10d3ca90)));
  /* 10d13938 push eax */
  push32((uint32_t)(EAX));
  /* 10d13939 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1393c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1393f push ecx */
  push32((uint32_t)(ECX));
  /* 10d13940 call 0x10d16e40 */
  push32(0x10d13945u); f_10d16e40();
  /* 10d13945 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13948 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1394c jne 0x10d13969 */
  if (!C.zf) goto L_10d13969;
  /* 10d1394e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d13951 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d13954 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d13957 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1395a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d1395d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10d13960 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d13963 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d13966 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10d13969:;
  /* 10d13969 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1396c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1396f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10d13972:;
  /* 10d13972 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13976 jne 0x10d139a7 */
  if (!C.zf) goto L_10d139a7;
  /* 10d13978 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1397c jne 0x10d13986 */
  if (!C.zf) goto L_10d13986;
  /* 10d1397e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d13981 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13984 je 0x10d139a7 */
  if (C.zf) goto L_10d139a7;
L_10d13986:;
  /* 10d13986 push 0x10d39510 */
  push32((uint32_t)(0x10d39510u));
  /* 10d1398b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1398d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10d13992 push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d13997 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d13999 call 0x10d12190 */
  push32(0x10d1399eu); f_10d12190();
  /* 10d1399e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d139a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d139a4 jne 0x10d139a7 */
  if (!C.zf) goto L_10d139a7;
  /* 10d139a6 int3  */
  x86_unimpl("int3 @ 0x10d139a6");
L_10d139a7:;
  /* 10d139a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d139a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d139ab jne 0x10d13972 */
  if (!C.zf) goto L_10d13972;
  /* 10d139ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d139b0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d139b3 je 0x10d139bb */
  if (C.zf) goto L_10d139bb;
  /* 10d139b5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d139b9 je 0x10d139c3 */
  if (C.zf) goto L_10d139c3;
L_10d139bb:;
  /* 10d139bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d139be jmp 0x10d13aaa */
  goto L_10d13aaa;
L_10d139c3:;
  /* 10d139c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d139c6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d139c9 je 0x10d139db */
  if (C.zf) goto L_10d139db;
  /* 10d139cb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d139ce mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d139d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d139d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d139d6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d139d9 jmp 0x10d13a17 */
  goto L_10d13a17;
L_10d139db:;
  /* 10d139db mov eax, dword ptr [0x10d3e464] */
  EAX = (r32((uint32_t)(0x10d3e464)));
  /* 10d139e0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d139e3 je 0x10d13a06 */
  if (C.zf) goto L_10d13a06;
  /* 10d139e5 push 0x10d394f4 */
  push32((uint32_t)(0x10d394f4u));
  /* 10d139ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10d139ec push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10d139f1 push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d139f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d139f8 call 0x10d12190 */
  push32(0x10d139fdu); f_10d12190();
  /* 10d139fd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13a00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13a03 jne 0x10d13a06 */
  if (!C.zf) goto L_10d13a06;
  /* 10d13a05 int3  */
  x86_unimpl("int3 @ 0x10d13a05");
L_10d13a06:;
  /* 10d13a06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d13a08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d13a0a jne 0x10d139db */
  if (!C.zf) goto L_10d139db;
  /* 10d13a0c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d13a0f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d13a12 mov dword ptr [0x10d3e464], eax */
  w32((uint32_t)(0x10d3e464), (EAX));
L_10d13a17:;
  /* 10d13a17 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d13a1a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13a1e je 0x10d13a2f */
  if (C.zf) goto L_10d13a2f;
  /* 10d13a20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d13a23 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d13a26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d13a29 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d13a2b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d13a2d jmp 0x10d13a6a */
  goto L_10d13a6a;
L_10d13a2f:;
  /* 10d13a2f mov eax, dword ptr [0x10d3e46c] */
  EAX = (r32((uint32_t)(0x10d3e46c)));
  /* 10d13a34 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13a37 je 0x10d13a5a */
  if (C.zf) goto L_10d13a5a;
  /* 10d13a39 push 0x10d394d8 */
  push32((uint32_t)(0x10d394d8u));
  /* 10d13a3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13a40 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10d13a45 push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d13a4a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d13a4c call 0x10d12190 */
  push32(0x10d13a51u); f_10d12190();
  /* 10d13a51 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13a54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13a57 jne 0x10d13a5a */
  if (!C.zf) goto L_10d13a5a;
  /* 10d13a59 int3  */
  x86_unimpl("int3 @ 0x10d13a59");
L_10d13a5a:;
  /* 10d13a5a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d13a5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d13a5e jne 0x10d13a2f */
  if (!C.zf) goto L_10d13a2f;
  /* 10d13a60 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d13a63 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d13a65 mov dword ptr [0x10d3e46c], eax */
  w32((uint32_t)(0x10d3e46c), (EAX));
L_10d13a6a:;
  /* 10d13a6a cmp dword ptr [0x10d3e46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13a71 je 0x10d13a81 */
  if (C.zf) goto L_10d13a81;
  /* 10d13a73 mov ecx, dword ptr [0x10d3e46c] */
  ECX = (r32((uint32_t)(0x10d3e46c)));
  /* 10d13a79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d13a7c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10d13a7f jmp 0x10d13a89 */
  goto L_10d13a89;
L_10d13a81:;
  /* 10d13a81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d13a84 mov dword ptr [0x10d3e464], eax */
  w32((uint32_t)(0x10d3e464), (EAX));
L_10d13a89:;
  /* 10d13a89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d13a8c mov edx, dword ptr [0x10d3e46c] */
  EDX = (r32((uint32_t)(0x10d3e46c)));
  /* 10d13a92 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d13a94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d13a97 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10d13a9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d13aa1 mov dword ptr [0x10d3e46c], ecx */
  w32((uint32_t)(0x10d3e46c), (ECX));
  /* 10d13aa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d13aaa:;
  /* 10d13aaa pop edi */
  EDI = (pop32());
  /* 10d13aab pop esi */
  ESI = (pop32());
  /* 10d13aac pop ebx */
  EBX = (pop32());
  /* 10d13aad mov esp, ebp */
  ESP = (EBP);
  /* 10d13aaf pop ebp */
  EBP = (pop32());
  /* 10d13ab0 ret  */
  ESPCHK(0x10d135a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ac0 @ 0x10d13ac0 (27 bytes, 13 insns) */
void f_10d13ac0(void) {
  FTRACE(0x10d13ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d13ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d13ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10d13ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13ac7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d13ac9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d13acc push eax */
  push32((uint32_t)(EAX));
  /* 10d13acd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13ad0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13ad1 call 0x10d13ae0 */
  push32(0x10d13ad6u); f_10d13ae0();
  /* 10d13ad6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13ad9 pop ebp */
  EBP = (pop32());
  /* 10d13ada ret  */
  ESPCHK(0x10d13ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ae0 @ 0x10d13ae0 (64 bytes, 27 insns) */
void f_10d13ae0(void) {
  FTRACE(0x10d13ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d13ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d13ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10d13ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13ae4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d13ae6 call 0x10d16ad0 */
  push32(0x10d13aebu); f_10d16ad0();
  /* 10d13aeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13aee push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13af0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d13af3 push eax */
  push32((uint32_t)(EAX));
  /* 10d13af4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d13af7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13af8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d13afb push edx */
  push32((uint32_t)(EDX));
  /* 10d13afc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d13aff push eax */
  push32((uint32_t)(EAX));
  /* 10d13b00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13b03 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13b04 call 0x10d135a0 */
  push32(0x10d13b09u); f_10d135a0();
  /* 10d13b09 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13b0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d13b0f push 9 */
  push32((uint32_t)(0x9u));
  /* 10d13b11 call 0x10d16b70 */
  push32(0x10d13b16u); f_10d16b70();
  /* 10d13b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13b19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13b1c mov esp, ebp */
  ESP = (EBP);
  /* 10d13b1e pop ebp */
  EBP = (pop32());
  /* 10d13b1f ret  */
  ESPCHK(0x10d13ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b20 @ 0x10d13b20 (19 bytes, 9 insns) */
void f_10d13b20(void) {
  FTRACE(0x10d13b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d13b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10d13b21 mov ebp, esp */
  EBP = (ESP);
  /* 10d13b23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d13b25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13b28 push eax */
  push32((uint32_t)(EAX));
  /* 10d13b29 call 0x10d13b60 */
  push32(0x10d13b2eu); f_10d13b60();
  /* 10d13b2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13b31 pop ebp */
  EBP = (pop32());
  /* 10d13b32 ret  */
  ESPCHK(0x10d13b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b40 @ 0x10d13b40 (19 bytes, 9 insns) */
void f_10d13b40(void) {
  FTRACE(0x10d13b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d13b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10d13b41 mov ebp, esp */
  EBP = (ESP);
  /* 10d13b43 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d13b45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13b48 push eax */
  push32((uint32_t)(EAX));
  /* 10d13b49 call 0x10d13b90 */
  push32(0x10d13b4eu); f_10d13b90();
  /* 10d13b4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13b51 pop ebp */
  EBP = (pop32());
  /* 10d13b52 ret  */
  ESPCHK(0x10d13b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b60 @ 0x10d13b60 (41 bytes, 16 insns) */
void f_10d13b60(void) {
  FTRACE(0x10d13b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d13b60 push ebp */
  push32((uint32_t)(EBP));
  /* 10d13b61 mov ebp, esp */
  EBP = (ESP);
  /* 10d13b63 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d13b65 call 0x10d16ad0 */
  push32(0x10d13b6au); f_10d16ad0();
  /* 10d13b6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13b6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d13b70 push eax */
  push32((uint32_t)(EAX));
  /* 10d13b71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13b74 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13b75 call 0x10d13b90 */
  push32(0x10d13b7au); f_10d13b90();
  /* 10d13b7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13b7d push 9 */
  push32((uint32_t)(0x9u));
  /* 10d13b7f call 0x10d16b70 */
  push32(0x10d13b84u); f_10d16b70();
  /* 10d13b84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13b87 pop ebp */
  EBP = (pop32());
  /* 10d13b88 ret  */
  ESPCHK(0x10d13b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b90 @ 0x10d13b90 (1004 bytes, 342 insns) */
void f_10d13b90(void) {
  FTRACE(0x10d13b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d13b90 push ebp */
  push32((uint32_t)(EBP));
  /* 10d13b91 mov ebp, esp */
  EBP = (ESP);
  /* 10d13b93 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13b94 push ebx */
  push32((uint32_t)(EBX));
  /* 10d13b95 push esi */
  push32((uint32_t)(ESI));
  /* 10d13b96 push edi */
  push32((uint32_t)(EDI));
  /* 10d13b97 mov eax, dword ptr [0x10d3ca84] */
  EAX = (r32((uint32_t)(0x10d3ca84)));
  /* 10d13b9c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d13b9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13ba1 je 0x10d13bd3 */
  if (C.zf) goto L_10d13bd3;
L_10d13ba3:;
  /* 10d13ba3 call 0x10d14270 */
  push32(0x10d13ba8u); f_10d14270();
  /* 10d13ba8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13baa jne 0x10d13bcd */
  if (!C.zf) goto L_10d13bcd;
  /* 10d13bac push 0x10d394c4 */
  push32((uint32_t)(0x10d394c4u));
  /* 10d13bb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13bb3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10d13bb8 push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d13bbd push 2 */
  push32((uint32_t)(0x2u));
  /* 10d13bbf call 0x10d12190 */
  push32(0x10d13bc4u); f_10d12190();
  /* 10d13bc4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13bc7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13bca jne 0x10d13bcd */
  if (!C.zf) goto L_10d13bcd;
  /* 10d13bcc int3  */
  x86_unimpl("int3 @ 0x10d13bcc");
L_10d13bcd:;
  /* 10d13bcd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d13bcf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d13bd1 jne 0x10d13ba3 */
  if (!C.zf) goto L_10d13ba3;
L_10d13bd3:;
  /* 10d13bd3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13bd7 jne 0x10d13bde */
  if (!C.zf) goto L_10d13bde;
  /* 10d13bd9 jmp 0x10d13f75 */
  goto L_10d13f75;
L_10d13bde:;
  /* 10d13bde push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13be0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13be2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13be4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d13be7 push edx */
  push32((uint32_t)(EDX));
  /* 10d13be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13bea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13bed push eax */
  push32((uint32_t)(EAX));
  /* 10d13bee push 3 */
  push32((uint32_t)(0x3u));
  /* 10d13bf0 call dword ptr [0x10d3cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3cc90))), 0x10d13bf6u);
  /* 10d13bf6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13bf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13bfb jne 0x10d13c28 */
  if (!C.zf) goto L_10d13c28;
L_10d13bfd:;
  /* 10d13bfd push 0x10d39788 */
  push32((uint32_t)(0x10d39788u));
  /* 10d13c02 push 0x10d39458 */
  push32((uint32_t)(0x10d39458u));
  /* 10d13c07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13c09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13c0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13c0f call 0x10d12190 */
  push32(0x10d13c14u); f_10d12190();
  /* 10d13c14 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13c17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13c1a jne 0x10d13c1d */
  if (!C.zf) goto L_10d13c1d;
  /* 10d13c1c int3  */
  x86_unimpl("int3 @ 0x10d13c1c");
L_10d13c1d:;
  /* 10d13c1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d13c1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d13c21 jne 0x10d13bfd */
  if (!C.zf) goto L_10d13bfd;
  /* 10d13c23 jmp 0x10d13f75 */
  goto L_10d13f75;
L_10d13c28:;
  /* 10d13c28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13c2b push edx */
  push32((uint32_t)(EDX));
  /* 10d13c2c call 0x10d146d0 */
  push32(0x10d13c31u); f_10d146d0();
  /* 10d13c31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13c34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13c36 jne 0x10d13c59 */
  if (!C.zf) goto L_10d13c59;
  /* 10d13c38 push 0x10d395c8 */
  push32((uint32_t)(0x10d395c8u));
  /* 10d13c3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13c3f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10d13c44 push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d13c49 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d13c4b call 0x10d12190 */
  push32(0x10d13c50u); f_10d12190();
  /* 10d13c50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13c53 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13c56 jne 0x10d13c59 */
  if (!C.zf) goto L_10d13c59;
  /* 10d13c58 int3  */
  x86_unimpl("int3 @ 0x10d13c58");
L_10d13c59:;
  /* 10d13c59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d13c5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13c5d jne 0x10d13c28 */
  if (!C.zf) goto L_10d13c28;
  /* 10d13c5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13c62 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d13c65 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d13c68:;
  /* 10d13c68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13c6b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d13c6e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d13c73 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13c76 je 0x10d13cbb */
  if (C.zf) goto L_10d13cbb;
  /* 10d13c78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13c7b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13c7f je 0x10d13cbb */
  if (C.zf) goto L_10d13cbb;
  /* 10d13c81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13c84 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d13c87 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d13c8c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13c8f je 0x10d13cbb */
  if (C.zf) goto L_10d13cbb;
  /* 10d13c91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13c94 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13c98 je 0x10d13cbb */
  if (C.zf) goto L_10d13cbb;
  /* 10d13c9a push 0x10d39760 */
  push32((uint32_t)(0x10d39760u));
  /* 10d13c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13ca1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10d13ca6 push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d13cab push 2 */
  push32((uint32_t)(0x2u));
  /* 10d13cad call 0x10d12190 */
  push32(0x10d13cb2u); f_10d12190();
  /* 10d13cb2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13cb5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13cb8 jne 0x10d13cbb */
  if (!C.zf) goto L_10d13cbb;
  /* 10d13cba int3  */
  x86_unimpl("int3 @ 0x10d13cba");
L_10d13cbb:;
  /* 10d13cbb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d13cbd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d13cbf jne 0x10d13c68 */
  if (!C.zf) goto L_10d13c68;
  /* 10d13cc1 mov eax, dword ptr [0x10d3ca84] */
  EAX = (r32((uint32_t)(0x10d3ca84)));
  /* 10d13cc6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d13cc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13ccb jne 0x10d13d96 */
  if (!C.zf) goto L_10d13d96;
  /* 10d13cd1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d13cd3 mov cl, byte ptr [0x10d3ca90] */
  CL = (r8((uint32_t)(0x10d3ca90)));
  /* 10d13cd9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13cda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13cdd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13ce0 push edx */
  push32((uint32_t)(EDX));
  /* 10d13ce1 call 0x10d141e0 */
  push32(0x10d13ce6u); f_10d141e0();
  /* 10d13ce6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13ce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13ceb jne 0x10d13d30 */
  if (!C.zf) goto L_10d13d30;
L_10d13ced:;
  /* 10d13ced mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13cf0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13cf3 push eax */
  push32((uint32_t)(EAX));
  /* 10d13cf4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13cf7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d13cfa push edx */
  push32((uint32_t)(EDX));
  /* 10d13cfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13cfe mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d13d01 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d13d07 mov edx, dword ptr [ecx*4 + 0x10d3ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d3ca94)));
  /* 10d13d0e push edx */
  push32((uint32_t)(EDX));
  /* 10d13d0f push 0x10d39734 */
  push32((uint32_t)(0x10d39734u));
  /* 10d13d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13d18 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13d1a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d13d1c call 0x10d12190 */
  push32(0x10d13d21u); f_10d12190();
  /* 10d13d21 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13d24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13d27 jne 0x10d13d2a */
  if (!C.zf) goto L_10d13d2a;
  /* 10d13d29 int3  */
  x86_unimpl("int3 @ 0x10d13d29");
L_10d13d2a:;
  /* 10d13d2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d13d2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13d2e jne 0x10d13ced */
  if (!C.zf) goto L_10d13ced;
L_10d13d30:;
  /* 10d13d30 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d13d32 mov cl, byte ptr [0x10d3ca90] */
  CL = (r8((uint32_t)(0x10d3ca90)));
  /* 10d13d38 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13d39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13d3c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d13d3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13d42 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10d13d46 push edx */
  push32((uint32_t)(EDX));
  /* 10d13d47 call 0x10d141e0 */
  push32(0x10d13d4cu); f_10d141e0();
  /* 10d13d4c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13d4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13d51 jne 0x10d13d96 */
  if (!C.zf) goto L_10d13d96;
L_10d13d53:;
  /* 10d13d53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13d56 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13d59 push eax */
  push32((uint32_t)(EAX));
  /* 10d13d5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13d5d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d13d60 push edx */
  push32((uint32_t)(EDX));
  /* 10d13d61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13d64 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d13d67 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d13d6d mov edx, dword ptr [ecx*4 + 0x10d3ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d3ca94)));
  /* 10d13d74 push edx */
  push32((uint32_t)(EDX));
  /* 10d13d75 push 0x10d39708 */
  push32((uint32_t)(0x10d39708u));
  /* 10d13d7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13d7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13d7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13d80 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d13d82 call 0x10d12190 */
  push32(0x10d13d87u); f_10d12190();
  /* 10d13d87 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13d8a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13d8d jne 0x10d13d90 */
  if (!C.zf) goto L_10d13d90;
  /* 10d13d8f int3  */
  x86_unimpl("int3 @ 0x10d13d8f");
L_10d13d90:;
  /* 10d13d90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d13d92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13d94 jne 0x10d13d53 */
  if (!C.zf) goto L_10d13d53;
L_10d13d96:;
  /* 10d13d96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13d99 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13d9d jne 0x10d13e0b */
  if (!C.zf) goto L_10d13e0b;
L_10d13d9f:;
  /* 10d13d9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13da2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13da9 jne 0x10d13db4 */
  if (!C.zf) goto L_10d13db4;
  /* 10d13dab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13dae cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13db2 je 0x10d13dd5 */
  if (C.zf) goto L_10d13dd5;
L_10d13db4:;
  /* 10d13db4 push 0x10d396c8 */
  push32((uint32_t)(0x10d396c8u));
  /* 10d13db9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13dbb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10d13dc0 push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d13dc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d13dc7 call 0x10d12190 */
  push32(0x10d13dccu); f_10d12190();
  /* 10d13dcc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13dcf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13dd2 jne 0x10d13dd5 */
  if (!C.zf) goto L_10d13dd5;
  /* 10d13dd4 int3  */
  x86_unimpl("int3 @ 0x10d13dd4");
L_10d13dd5:;
  /* 10d13dd5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d13dd7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d13dd9 jne 0x10d13d9f */
  if (!C.zf) goto L_10d13d9f;
  /* 10d13ddb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13dde mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d13de1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13de4 push eax */
  push32((uint32_t)(EAX));
  /* 10d13de5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d13de7 mov cl, byte ptr [0x10d3ca91] */
  CL = (r8((uint32_t)(0x10d3ca91)));
  /* 10d13ded push ecx */
  push32((uint32_t)(ECX));
  /* 10d13dee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13df1 push edx */
  push32((uint32_t)(EDX));
  /* 10d13df2 call 0x10d16e40 */
  push32(0x10d13df7u); f_10d16e40();
  /* 10d13df7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13dfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13dfd push eax */
  push32((uint32_t)(EAX));
  /* 10d13dfe call 0x10d17240 */
  push32(0x10d13e03u); f_10d17240();
  /* 10d13e03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13e06 jmp 0x10d13f75 */
  goto L_10d13f75;
L_10d13e0b:;
  /* 10d13e0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13e0e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13e12 jne 0x10d13e21 */
  if (!C.zf) goto L_10d13e21;
  /* 10d13e14 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13e18 jne 0x10d13e21 */
  if (!C.zf) goto L_10d13e21;
  /* 10d13e1a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10d13e21:;
  /* 10d13e21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13e24 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d13e27 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13e2a je 0x10d13e4d */
  if (C.zf) goto L_10d13e4d;
  /* 10d13e2c push 0x10d396a8 */
  push32((uint32_t)(0x10d396a8u));
  /* 10d13e31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13e33 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10d13e38 push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d13e3d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d13e3f call 0x10d12190 */
  push32(0x10d13e44u); f_10d12190();
  /* 10d13e44 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13e47 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13e4a jne 0x10d13e4d */
  if (!C.zf) goto L_10d13e4d;
  /* 10d13e4c int3  */
  x86_unimpl("int3 @ 0x10d13e4c");
L_10d13e4d:;
  /* 10d13e4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d13e4f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d13e51 jne 0x10d13e21 */
  if (!C.zf) goto L_10d13e21;
  /* 10d13e53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13e56 mov eax, dword ptr [0x10d3e470] */
  EAX = (r32((uint32_t)(0x10d3e470)));
  /* 10d13e5b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d13e5e mov dword ptr [0x10d3e470], eax */
  w32((uint32_t)(0x10d3e470), (EAX));
  /* 10d13e63 mov ecx, dword ptr [0x10d3ca84] */
  ECX = (r32((uint32_t)(0x10d3ca84)));
  /* 10d13e69 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10d13e6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d13e6e jne 0x10d13f4c */
  if (!C.zf) goto L_10d13f4c;
  /* 10d13e74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13e77 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13e7a je 0x10d13e8c */
  if (C.zf) goto L_10d13e8c;
  /* 10d13e7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13e7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d13e81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13e84 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d13e87 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10d13e8a jmp 0x10d13eca */
  goto L_10d13eca;
L_10d13e8c:;
  /* 10d13e8c mov ecx, dword ptr [0x10d3e464] */
  ECX = (r32((uint32_t)(0x10d3e464)));
  /* 10d13e92 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13e95 je 0x10d13eb8 */
  if (C.zf) goto L_10d13eb8;
  /* 10d13e97 push 0x10d39690 */
  push32((uint32_t)(0x10d39690u));
  /* 10d13e9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13e9e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10d13ea3 push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d13ea8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d13eaa call 0x10d12190 */
  push32(0x10d13eafu); f_10d12190();
  /* 10d13eaf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13eb2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13eb5 jne 0x10d13eb8 */
  if (!C.zf) goto L_10d13eb8;
  /* 10d13eb7 int3  */
  x86_unimpl("int3 @ 0x10d13eb7");
L_10d13eb8:;
  /* 10d13eb8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d13eba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d13ebc jne 0x10d13e8c */
  if (!C.zf) goto L_10d13e8c;
  /* 10d13ebe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13ec1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d13ec4 mov dword ptr [0x10d3e464], ecx */
  w32((uint32_t)(0x10d3e464), (ECX));
L_10d13eca:;
  /* 10d13eca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13ecd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13ed1 je 0x10d13ee2 */
  if (C.zf) goto L_10d13ee2;
  /* 10d13ed3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13ed6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d13ed9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13edc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d13ede mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d13ee0 jmp 0x10d13f1f */
  goto L_10d13f1f;
L_10d13ee2:;
  /* 10d13ee2 mov ecx, dword ptr [0x10d3e46c] */
  ECX = (r32((uint32_t)(0x10d3e46c)));
  /* 10d13ee8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13eeb je 0x10d13f0e */
  if (C.zf) goto L_10d13f0e;
  /* 10d13eed push 0x10d39678 */
  push32((uint32_t)(0x10d39678u));
  /* 10d13ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13ef4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10d13ef9 push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d13efe push 2 */
  push32((uint32_t)(0x2u));
  /* 10d13f00 call 0x10d12190 */
  push32(0x10d13f05u); f_10d12190();
  /* 10d13f05 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13f08 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13f0b jne 0x10d13f0e */
  if (!C.zf) goto L_10d13f0e;
  /* 10d13f0d int3  */
  x86_unimpl("int3 @ 0x10d13f0d");
L_10d13f0e:;
  /* 10d13f0e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d13f10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d13f12 jne 0x10d13ee2 */
  if (!C.zf) goto L_10d13ee2;
  /* 10d13f14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13f17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d13f19 mov dword ptr [0x10d3e46c], ecx */
  w32((uint32_t)(0x10d3e46c), (ECX));
L_10d13f1f:;
  /* 10d13f1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13f22 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d13f25 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13f28 push eax */
  push32((uint32_t)(EAX));
  /* 10d13f29 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d13f2b mov cl, byte ptr [0x10d3ca91] */
  CL = (r8((uint32_t)(0x10d3ca91)));
  /* 10d13f31 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13f32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13f35 push edx */
  push32((uint32_t)(EDX));
  /* 10d13f36 call 0x10d16e40 */
  push32(0x10d13f3bu); f_10d16e40();
  /* 10d13f3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13f3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13f41 push eax */
  push32((uint32_t)(EAX));
  /* 10d13f42 call 0x10d17240 */
  push32(0x10d13f47u); f_10d17240();
  /* 10d13f47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13f4a jmp 0x10d13f75 */
  goto L_10d13f75;
L_10d13f4c:;
  /* 10d13f4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13f4f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10d13f56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13f59 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d13f5c push eax */
  push32((uint32_t)(EAX));
  /* 10d13f5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d13f5f mov cl, byte ptr [0x10d3ca91] */
  CL = (r8((uint32_t)(0x10d3ca91)));
  /* 10d13f65 push ecx */
  push32((uint32_t)(ECX));
  /* 10d13f66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d13f69 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13f6c push edx */
  push32((uint32_t)(EDX));
  /* 10d13f6d call 0x10d16e40 */
  push32(0x10d13f72u); f_10d16e40();
  /* 10d13f72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d13f75:;
  /* 10d13f75 pop edi */
  EDI = (pop32());
  /* 10d13f76 pop esi */
  ESI = (pop32());
  /* 10d13f77 pop ebx */
  EBX = (pop32());
  /* 10d13f78 mov esp, ebp */
  ESP = (EBP);
  /* 10d13f7a pop ebp */
  EBP = (pop32());
  /* 10d13f7b ret  */
  ESPCHK(0x10d13b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f80 @ 0x10d13f80 (19 bytes, 9 insns) */
void f_10d13f80(void) {
  FTRACE(0x10d13f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d13f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10d13f81 mov ebp, esp */
  EBP = (ESP);
  /* 10d13f83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d13f85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13f88 push eax */
  push32((uint32_t)(EAX));
  /* 10d13f89 call 0x10d13fa0 */
  push32(0x10d13f8eu); f_10d13fa0();
  /* 10d13f8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13f91 pop ebp */
  EBP = (pop32());
  /* 10d13f92 ret  */
  ESPCHK(0x10d13f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fa0 @ 0x10d13fa0 (342 bytes, 119 insns) */
void f_10d13fa0(void) {
  FTRACE(0x10d13fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d13fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d13fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10d13fa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d13fa6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d13fa7 push esi */
  push32((uint32_t)(ESI));
  /* 10d13fa8 push edi */
  push32((uint32_t)(EDI));
  /* 10d13fa9 mov eax, dword ptr [0x10d3ca84] */
  EAX = (r32((uint32_t)(0x10d3ca84)));
  /* 10d13fae and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d13fb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13fb3 je 0x10d13fe5 */
  if (C.zf) goto L_10d13fe5;
L_10d13fb5:;
  /* 10d13fb5 call 0x10d14270 */
  push32(0x10d13fbau); f_10d14270();
  /* 10d13fba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13fbc jne 0x10d13fdf */
  if (!C.zf) goto L_10d13fdf;
  /* 10d13fbe push 0x10d394c4 */
  push32((uint32_t)(0x10d394c4u));
  /* 10d13fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d13fc5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10d13fca push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d13fcf push 2 */
  push32((uint32_t)(0x2u));
  /* 10d13fd1 call 0x10d12190 */
  push32(0x10d13fd6u); f_10d12190();
  /* 10d13fd6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13fd9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d13fdc jne 0x10d13fdf */
  if (!C.zf) goto L_10d13fdf;
  /* 10d13fde int3  */
  x86_unimpl("int3 @ 0x10d13fde");
L_10d13fdf:;
  /* 10d13fdf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d13fe1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d13fe3 jne 0x10d13fb5 */
  if (!C.zf) goto L_10d13fb5;
L_10d13fe5:;
  /* 10d13fe5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d13fe7 call 0x10d16ad0 */
  push32(0x10d13fecu); f_10d16ad0();
  /* 10d13fec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d13fef:;
  /* 10d13fef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d13ff2 push edx */
  push32((uint32_t)(EDX));
  /* 10d13ff3 call 0x10d146d0 */
  push32(0x10d13ff8u); f_10d146d0();
  /* 10d13ff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d13ffb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d13ffd jne 0x10d14020 */
  if (!C.zf) goto L_10d14020;
  /* 10d13fff push 0x10d395c8 */
  push32((uint32_t)(0x10d395c8u));
  /* 10d14004 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14006 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10d1400b push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d14010 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d14012 call 0x10d12190 */
  push32(0x10d14017u); f_10d12190();
  /* 10d14017 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1401a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1401d jne 0x10d14020 */
  if (!C.zf) goto L_10d14020;
  /* 10d1401f int3  */
  x86_unimpl("int3 @ 0x10d1401f");
L_10d14020:;
  /* 10d14020 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d14022 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d14024 jne 0x10d13fef */
  if (!C.zf) goto L_10d13fef;
  /* 10d14026 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14029 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1402c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d1402f:;
  /* 10d1402f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d14032 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d14035 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1403a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1403d je 0x10d14082 */
  if (C.zf) goto L_10d14082;
  /* 10d1403f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d14042 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14046 je 0x10d14082 */
  if (C.zf) goto L_10d14082;
  /* 10d14048 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1404b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d1404e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d14053 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14056 je 0x10d14082 */
  if (C.zf) goto L_10d14082;
  /* 10d14058 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1405b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1405f je 0x10d14082 */
  if (C.zf) goto L_10d14082;
  /* 10d14061 push 0x10d39760 */
  push32((uint32_t)(0x10d39760u));
  /* 10d14066 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14068 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10d1406d push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d14072 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d14074 call 0x10d12190 */
  push32(0x10d14079u); f_10d12190();
  /* 10d14079 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1407c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1407f jne 0x10d14082 */
  if (!C.zf) goto L_10d14082;
  /* 10d14081 int3  */
  x86_unimpl("int3 @ 0x10d14081");
L_10d14082:;
  /* 10d14082 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d14084 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d14086 jne 0x10d1402f */
  if (!C.zf) goto L_10d1402f;
  /* 10d14088 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1408b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1408f jne 0x10d1409e */
  if (!C.zf) goto L_10d1409e;
  /* 10d14091 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14095 jne 0x10d1409e */
  if (!C.zf) goto L_10d1409e;
  /* 10d14097 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10d1409e:;
  /* 10d1409e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d140a1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d140a5 je 0x10d140d9 */
  if (C.zf) goto L_10d140d9;
L_10d140a7:;
  /* 10d140a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d140aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d140ad cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d140b0 je 0x10d140d3 */
  if (C.zf) goto L_10d140d3;
  /* 10d140b2 push 0x10d396a8 */
  push32((uint32_t)(0x10d396a8u));
  /* 10d140b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d140b9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10d140be push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d140c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d140c5 call 0x10d12190 */
  push32(0x10d140cau); f_10d12190();
  /* 10d140ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d140cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d140d0 jne 0x10d140d3 */
  if (!C.zf) goto L_10d140d3;
  /* 10d140d2 int3  */
  x86_unimpl("int3 @ 0x10d140d2");
L_10d140d3:;
  /* 10d140d3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d140d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d140d7 jne 0x10d140a7 */
  if (!C.zf) goto L_10d140a7;
L_10d140d9:;
  /* 10d140d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d140dc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d140df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d140e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d140e4 call 0x10d16b70 */
  push32(0x10d140e9u); f_10d16b70();
  /* 10d140e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d140ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d140ef pop edi */
  EDI = (pop32());
  /* 10d140f0 pop esi */
  ESI = (pop32());
  /* 10d140f1 pop ebx */
  EBX = (pop32());
  /* 10d140f2 mov esp, ebp */
  ESP = (EBP);
  /* 10d140f4 pop ebp */
  EBP = (pop32());
  /* 10d140f5 ret  */
  ESPCHK(0x10d13fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004100 @ 0x10d14100 (28 bytes, 11 insns) */
void f_10d14100(void) {
  FTRACE(0x10d14100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d14100 push ebp */
  push32((uint32_t)(EBP));
  /* 10d14101 mov ebp, esp */
  EBP = (ESP);
  /* 10d14103 push ecx */
  push32((uint32_t)(ECX));
  /* 10d14104 mov eax, dword ptr [0x10d3ca8c] */
  EAX = (r32((uint32_t)(0x10d3ca8c)));
  /* 10d14109 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1410c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1410f mov dword ptr [0x10d3ca8c], ecx */
  w32((uint32_t)(0x10d3ca8c), (ECX));
  /* 10d14115 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14118 mov esp, ebp */
  ESP = (EBP);
  /* 10d1411a pop ebp */
  EBP = (pop32());
  /* 10d1411b ret  */
  ESPCHK(0x10d14100u, _esp0);
  ESP += 4; return;
}

/* FUN_10004120 @ 0x10d14120 (157 bytes, 59 insns) */
void f_10d14120(void) {
  FTRACE(0x10d14120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d14120 push ebp */
  push32((uint32_t)(EBP));
  /* 10d14121 mov ebp, esp */
  EBP = (ESP);
  /* 10d14123 push ecx */
  push32((uint32_t)(ECX));
  /* 10d14124 push ebx */
  push32((uint32_t)(EBX));
  /* 10d14125 push esi */
  push32((uint32_t)(ESI));
  /* 10d14126 push edi */
  push32((uint32_t)(EDI));
  /* 10d14127 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d14129 call 0x10d16ad0 */
  push32(0x10d1412eu); f_10d16ad0();
  /* 10d1412e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14131 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14134 push eax */
  push32((uint32_t)(EAX));
  /* 10d14135 call 0x10d146d0 */
  push32(0x10d1413au); f_10d146d0();
  /* 10d1413a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1413d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1413f je 0x10d141ac */
  if (C.zf) goto L_10d141ac;
  /* 10d14141 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14144 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d14147 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d1414a:;
  /* 10d1414a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1414d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d14150 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d14155 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14158 je 0x10d1419d */
  if (C.zf) goto L_10d1419d;
  /* 10d1415a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1415d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14161 je 0x10d1419d */
  if (C.zf) goto L_10d1419d;
  /* 10d14163 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14166 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d14169 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1416e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14171 je 0x10d1419d */
  if (C.zf) goto L_10d1419d;
  /* 10d14173 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14176 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1417a je 0x10d1419d */
  if (C.zf) goto L_10d1419d;
  /* 10d1417c push 0x10d39760 */
  push32((uint32_t)(0x10d39760u));
  /* 10d14181 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14183 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10d14188 push 0x10d394b8 */
  push32((uint32_t)(0x10d394b8u));
  /* 10d1418d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1418f call 0x10d12190 */
  push32(0x10d14194u); f_10d12190();
  /* 10d14194 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14197 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1419a jne 0x10d1419d */
  if (!C.zf) goto L_10d1419d;
  /* 10d1419c int3  */
  x86_unimpl("int3 @ 0x10d1419c");
L_10d1419d:;
  /* 10d1419d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1419f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d141a1 jne 0x10d1414a */
  if (!C.zf) goto L_10d1414a;
  /* 10d141a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d141a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d141a9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10d141ac:;
  /* 10d141ac push 9 */
  push32((uint32_t)(0x9u));
  /* 10d141ae call 0x10d16b70 */
  push32(0x10d141b3u); f_10d16b70();
  /* 10d141b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d141b6 pop edi */
  EDI = (pop32());
  /* 10d141b7 pop esi */
  ESI = (pop32());
  /* 10d141b8 pop ebx */
  EBX = (pop32());
  /* 10d141b9 mov esp, ebp */
  ESP = (EBP);
  /* 10d141bb pop ebp */
  EBP = (pop32());
  /* 10d141bc ret  */
  ESPCHK(0x10d14120u, _esp0);
  ESP += 4; return;
}

/* FUN_100041c0 @ 0x10d141c0 (28 bytes, 11 insns) */
void f_10d141c0(void) {
  FTRACE(0x10d141c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d141c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d141c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d141c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d141c4 mov eax, dword ptr [0x10d3cc90] */
  EAX = (r32((uint32_t)(0x10d3cc90)));
  /* 10d141c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d141cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d141cf mov dword ptr [0x10d3cc90], ecx */
  w32((uint32_t)(0x10d3cc90), (ECX));
  /* 10d141d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d141d8 mov esp, ebp */
  ESP = (EBP);
  /* 10d141da pop ebp */
  EBP = (pop32());
  /* 10d141db ret  */
  ESPCHK(0x10d141c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041e0 @ 0x10d141e0 (136 bytes, 55 insns) */
void f_10d141e0(void) {
  FTRACE(0x10d141e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d141e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d141e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d141e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d141e4 push ebx */
  push32((uint32_t)(EBX));
  /* 10d141e5 push esi */
  push32((uint32_t)(ESI));
  /* 10d141e6 push edi */
  push32((uint32_t)(EDI));
  /* 10d141e7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10d141ee:;
  /* 10d141ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d141f1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d141f4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d141f7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10d141fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d141fc je 0x10d1425e */
  if (C.zf) goto L_10d1425e;
  /* 10d141fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14201 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d14203 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d14205 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d14208 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1420e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14211 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14214 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10d14217 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14219 je 0x10d1425c */
  if (C.zf) goto L_10d1425c;
L_10d1421b:;
  /* 10d1421b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1421e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d14223 push eax */
  push32((uint32_t)(EAX));
  /* 10d14224 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14227 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d14229 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10d1422c push edx */
  push32((uint32_t)(EDX));
  /* 10d1422d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14230 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d14233 push eax */
  push32((uint32_t)(EAX));
  /* 10d14234 push 0x10d397a4 */
  push32((uint32_t)(0x10d397a4u));
  /* 10d14239 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1423b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1423d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1423f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14241 call 0x10d12190 */
  push32(0x10d14246u); f_10d12190();
  /* 10d14246 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14249 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1424c jne 0x10d1424f */
  if (!C.zf) goto L_10d1424f;
  /* 10d1424e int3  */
  x86_unimpl("int3 @ 0x10d1424e");
L_10d1424f:;
  /* 10d1424f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d14251 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d14253 jne 0x10d1421b */
  if (!C.zf) goto L_10d1421b;
  /* 10d14255 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d1425c:;
  /* 10d1425c jmp 0x10d141ee */
  goto L_10d141ee;
L_10d1425e:;
  /* 10d1425e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14261 pop edi */
  EDI = (pop32());
  /* 10d14262 pop esi */
  ESI = (pop32());
  /* 10d14263 pop ebx */
  EBX = (pop32());
  /* 10d14264 mov esp, ebp */
  ESP = (EBP);
  /* 10d14266 pop ebp */
  EBP = (pop32());
  /* 10d14267 ret  */
  ESPCHK(0x10d141e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004270 @ 0x10d14270 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10d14270(void) {
  FTRACE(0x10d14270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d14270 push ebp */
  push32((uint32_t)(EBP));
  /* 10d14271 mov ebp, esp */
  EBP = (ESP);
  /* 10d14273 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d14276 push ebx */
  push32((uint32_t)(EBX));
  /* 10d14277 push esi */
  push32((uint32_t)(ESI));
  /* 10d14278 push edi */
  push32((uint32_t)(EDI));
  /* 10d14279 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d14280 mov eax, dword ptr [0x10d3ca84] */
  EAX = (r32((uint32_t)(0x10d3ca84)));
  /* 10d14285 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10d14288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1428a jne 0x10d14296 */
  if (!C.zf) goto L_10d14296;
  /* 10d1428c mov eax, 1 */
  EAX = (0x1u);
  /* 10d14291 jmp 0x10d145c8 */
  goto L_10d145c8;
L_10d14296:;
  /* 10d14296 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d14298 call 0x10d16ad0 */
  push32(0x10d1429du); f_10d16ad0();
  /* 10d1429d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d142a0 call 0x10d172b0 */
  push32(0x10d142a5u); f_10d172b0();
  /* 10d142a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d142a8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d142ac je 0x10d143b9 */
  if (C.zf) goto L_10d143b9;
  /* 10d142b2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d142b6 je 0x10d143b9 */
  if (C.zf) goto L_10d143b9;
  /* 10d142bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d142bf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d142c2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d142c5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d142c8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d142cb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d142cf ja 0x10d14382 */
  if ((!C.cf&&!C.zf)) goto L_10d14382;
  /* 10d142d5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d142d8 jmp dword ptr [eax*4 + 0x10d145cf] */
  switch (EAX) {
    case 0: goto L_10d1435a;
    case 1: goto L_10d14332;
    case 2: goto L_10d1430a;
    case 3: goto L_10d142df;
    default: x86_unimpl("switch@0x10d142d8 out of table"); return;
  }
L_10d142df:;
  /* 10d142df push 0x10d398f8 */
  push32((uint32_t)(0x10d398f8u));
  /* 10d142e4 push 0x10d39458 */
  push32((uint32_t)(0x10d39458u));
  /* 10d142e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d142eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d142ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10d142ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10d142f1 call 0x10d12190 */
  push32(0x10d142f6u); f_10d12190();
  /* 10d142f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d142f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d142fc jne 0x10d142ff */
  if (!C.zf) goto L_10d142ff;
  /* 10d142fe int3  */
  x86_unimpl("int3 @ 0x10d142fe");
L_10d142ff:;
  /* 10d142ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d14301 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d14303 jne 0x10d142df */
  if (!C.zf) goto L_10d142df;
  /* 10d14305 jmp 0x10d143a8 */
  goto L_10d143a8;
L_10d1430a:;
  /* 10d1430a push 0x10d398d4 */
  push32((uint32_t)(0x10d398d4u));
  /* 10d1430f push 0x10d39458 */
  push32((uint32_t)(0x10d39458u));
  /* 10d14314 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14316 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14318 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1431a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1431c call 0x10d12190 */
  push32(0x10d14321u); f_10d12190();
  /* 10d14321 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14324 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14327 jne 0x10d1432a */
  if (!C.zf) goto L_10d1432a;
  /* 10d14329 int3  */
  x86_unimpl("int3 @ 0x10d14329");
L_10d1432a:;
  /* 10d1432a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1432c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1432e jne 0x10d1430a */
  if (!C.zf) goto L_10d1430a;
  /* 10d14330 jmp 0x10d143a8 */
  goto L_10d143a8;
L_10d14332:;
  /* 10d14332 push 0x10d398b0 */
  push32((uint32_t)(0x10d398b0u));
  /* 10d14337 push 0x10d39458 */
  push32((uint32_t)(0x10d39458u));
  /* 10d1433c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1433e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14340 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14342 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14344 call 0x10d12190 */
  push32(0x10d14349u); f_10d12190();
  /* 10d14349 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1434c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1434f jne 0x10d14352 */
  if (!C.zf) goto L_10d14352;
  /* 10d14351 int3  */
  x86_unimpl("int3 @ 0x10d14351");
L_10d14352:;
  /* 10d14352 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d14354 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d14356 jne 0x10d14332 */
  if (!C.zf) goto L_10d14332;
  /* 10d14358 jmp 0x10d143a8 */
  goto L_10d143a8;
L_10d1435a:;
  /* 10d1435a push 0x10d3988c */
  push32((uint32_t)(0x10d3988cu));
  /* 10d1435f push 0x10d39458 */
  push32((uint32_t)(0x10d39458u));
  /* 10d14364 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14366 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14368 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1436a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1436c call 0x10d12190 */
  push32(0x10d14371u); f_10d12190();
  /* 10d14371 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14374 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14377 jne 0x10d1437a */
  if (!C.zf) goto L_10d1437a;
  /* 10d14379 int3  */
  x86_unimpl("int3 @ 0x10d14379");
L_10d1437a:;
  /* 10d1437a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1437c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1437e jne 0x10d1435a */
  if (!C.zf) goto L_10d1435a;
  /* 10d14380 jmp 0x10d143a8 */
  goto L_10d143a8;
L_10d14382:;
  /* 10d14382 push 0x10d39860 */
  push32((uint32_t)(0x10d39860u));
  /* 10d14387 push 0x10d39458 */
  push32((uint32_t)(0x10d39458u));
  /* 10d1438c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1438e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14390 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14392 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14394 call 0x10d12190 */
  push32(0x10d14399u); f_10d12190();
  /* 10d14399 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1439c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1439f jne 0x10d143a2 */
  if (!C.zf) goto L_10d143a2;
  /* 10d143a1 int3  */
  x86_unimpl("int3 @ 0x10d143a1");
L_10d143a2:;
  /* 10d143a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d143a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d143a6 jne 0x10d14382 */
  if (!C.zf) goto L_10d14382;
L_10d143a8:;
  /* 10d143a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d143aa call 0x10d16b70 */
  push32(0x10d143afu); f_10d16b70();
  /* 10d143af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d143b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d143b4 jmp 0x10d145c8 */
  goto L_10d145c8;
L_10d143b9:;
  /* 10d143b9 mov eax, dword ptr [0x10d3e46c] */
  EAX = (r32((uint32_t)(0x10d3e46c)));
  /* 10d143be mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d143c1 jmp 0x10d143cb */
  goto L_10d143cb;
L_10d143c3:;
  /* 10d143c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d143c6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d143c8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d143cb:;
  /* 10d143cb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d143cf je 0x10d145bb */
  if (C.zf) goto L_10d145bb;
  /* 10d143d5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10d143dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d143df mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d143e2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d143e8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d143eb je 0x10d14410 */
  if (C.zf) goto L_10d14410;
  /* 10d143ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d143f0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d143f4 je 0x10d14410 */
  if (C.zf) goto L_10d14410;
  /* 10d143f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d143f9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d143fc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d14402 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14405 je 0x10d14410 */
  if (C.zf) goto L_10d14410;
  /* 10d14407 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1440a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1440e jne 0x10d14428 */
  if (!C.zf) goto L_10d14428;
L_10d14410:;
  /* 10d14410 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d14413 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d14416 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1441c mov edx, dword ptr [ecx*4 + 0x10d3ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d3ca94)));
  /* 10d14423 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d14426 jmp 0x10d1442f */
  goto L_10d1442f;
L_10d14428:;
  /* 10d14428 mov dword ptr [ebp - 0x14], 0x10d39858 */
  w32((uint32_t)(EBP + -0x14), (0x10d39858u));
L_10d1442f:;
  /* 10d1442f push 4 */
  push32((uint32_t)(0x4u));
  /* 10d14431 mov al, byte ptr [0x10d3ca90] */
  AL = (r8((uint32_t)(0x10d3ca90)));
  /* 10d14436 push eax */
  push32((uint32_t)(EAX));
  /* 10d14437 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1443a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1443d push ecx */
  push32((uint32_t)(ECX));
  /* 10d1443e call 0x10d141e0 */
  push32(0x10d14443u); f_10d141e0();
  /* 10d14443 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14446 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d14448 jne 0x10d14484 */
  if (!C.zf) goto L_10d14484;
L_10d1444a:;
  /* 10d1444a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1444d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14450 push edx */
  push32((uint32_t)(EDX));
  /* 10d14451 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d14454 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10d14457 push ecx */
  push32((uint32_t)(ECX));
  /* 10d14458 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1445b push edx */
  push32((uint32_t)(EDX));
  /* 10d1445c push 0x10d39734 */
  push32((uint32_t)(0x10d39734u));
  /* 10d14461 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14463 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14465 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14467 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14469 call 0x10d12190 */
  push32(0x10d1446eu); f_10d12190();
  /* 10d1446e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14471 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14474 jne 0x10d14477 */
  if (!C.zf) goto L_10d14477;
  /* 10d14476 int3  */
  x86_unimpl("int3 @ 0x10d14476");
L_10d14477:;
  /* 10d14477 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d14479 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1447b jne 0x10d1444a */
  if (!C.zf) goto L_10d1444a;
  /* 10d1447d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10d14484:;
  /* 10d14484 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d14486 mov cl, byte ptr [0x10d3ca90] */
  CL = (r8((uint32_t)(0x10d3ca90)));
  /* 10d1448c push ecx */
  push32((uint32_t)(ECX));
  /* 10d1448d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d14490 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d14493 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d14496 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10d1449a push edx */
  push32((uint32_t)(EDX));
  /* 10d1449b call 0x10d141e0 */
  push32(0x10d144a0u); f_10d141e0();
  /* 10d144a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d144a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d144a5 jne 0x10d144e1 */
  if (!C.zf) goto L_10d144e1;
L_10d144a7:;
  /* 10d144a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d144aa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d144ad push eax */
  push32((uint32_t)(EAX));
  /* 10d144ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d144b1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d144b4 push edx */
  push32((uint32_t)(EDX));
  /* 10d144b5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d144b8 push eax */
  push32((uint32_t)(EAX));
  /* 10d144b9 push 0x10d39708 */
  push32((uint32_t)(0x10d39708u));
  /* 10d144be push 0 */
  push32((uint32_t)(0x0u));
  /* 10d144c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d144c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d144c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d144c6 call 0x10d12190 */
  push32(0x10d144cbu); f_10d12190();
  /* 10d144cb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d144ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d144d1 jne 0x10d144d4 */
  if (!C.zf) goto L_10d144d4;
  /* 10d144d3 int3  */
  x86_unimpl("int3 @ 0x10d144d3");
L_10d144d4:;
  /* 10d144d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d144d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d144d8 jne 0x10d144a7 */
  if (!C.zf) goto L_10d144a7;
  /* 10d144da mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10d144e1:;
  /* 10d144e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d144e4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d144e8 jne 0x10d1453a */
  if (!C.zf) goto L_10d1453a;
  /* 10d144ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d144ed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d144f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d144f1 mov dl, byte ptr [0x10d3ca91] */
  DL = (r8((uint32_t)(0x10d3ca91)));
  /* 10d144f7 push edx */
  push32((uint32_t)(EDX));
  /* 10d144f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d144fb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d144fe push eax */
  push32((uint32_t)(EAX));
  /* 10d144ff call 0x10d141e0 */
  push32(0x10d14504u); f_10d141e0();
  /* 10d14504 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14507 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d14509 jne 0x10d1453a */
  if (!C.zf) goto L_10d1453a;
L_10d1450b:;
  /* 10d1450b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1450e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14511 push ecx */
  push32((uint32_t)(ECX));
  /* 10d14512 push 0x10d3982c */
  push32((uint32_t)(0x10d3982cu));
  /* 10d14517 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14519 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1451b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1451d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1451f call 0x10d12190 */
  push32(0x10d14524u); f_10d12190();
  /* 10d14524 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14527 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1452a jne 0x10d1452d */
  if (!C.zf) goto L_10d1452d;
  /* 10d1452c int3  */
  x86_unimpl("int3 @ 0x10d1452c");
L_10d1452d:;
  /* 10d1452d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1452f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d14531 jne 0x10d1450b */
  if (!C.zf) goto L_10d1450b;
  /* 10d14533 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10d1453a:;
  /* 10d1453a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1453e jne 0x10d145b6 */
  if (!C.zf) goto L_10d145b6;
  /* 10d14540 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d14543 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14547 je 0x10d1457c */
  if (C.zf) goto L_10d1457c;
L_10d14549:;
  /* 10d14549 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1454c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d1454f push edx */
  push32((uint32_t)(EDX));
  /* 10d14550 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d14553 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d14556 push ecx */
  push32((uint32_t)(ECX));
  /* 10d14557 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1455a push edx */
  push32((uint32_t)(EDX));
  /* 10d1455b push 0x10d3980c */
  push32((uint32_t)(0x10d3980cu));
  /* 10d14560 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14562 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14564 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14566 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14568 call 0x10d12190 */
  push32(0x10d1456du); f_10d12190();
  /* 10d1456d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14570 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14573 jne 0x10d14576 */
  if (!C.zf) goto L_10d14576;
  /* 10d14575 int3  */
  x86_unimpl("int3 @ 0x10d14575");
L_10d14576:;
  /* 10d14576 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d14578 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1457a jne 0x10d14549 */
  if (!C.zf) goto L_10d14549;
L_10d1457c:;
  /* 10d1457c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1457f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d14582 push edx */
  push32((uint32_t)(EDX));
  /* 10d14583 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d14586 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14589 push eax */
  push32((uint32_t)(EAX));
  /* 10d1458a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1458d push ecx */
  push32((uint32_t)(ECX));
  /* 10d1458e push 0x10d397e0 */
  push32((uint32_t)(0x10d397e0u));
  /* 10d14593 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14595 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14597 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14599 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1459b call 0x10d12190 */
  push32(0x10d145a0u); f_10d12190();
  /* 10d145a0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d145a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d145a6 jne 0x10d145a9 */
  if (!C.zf) goto L_10d145a9;
  /* 10d145a8 int3  */
  x86_unimpl("int3 @ 0x10d145a8");
L_10d145a9:;
  /* 10d145a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d145ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d145ad jne 0x10d1457c */
  if (!C.zf) goto L_10d1457c;
  /* 10d145af mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d145b6:;
  /* 10d145b6 jmp 0x10d143c3 */
  goto L_10d143c3;
L_10d145bb:;
  /* 10d145bb push 9 */
  push32((uint32_t)(0x9u));
  /* 10d145bd call 0x10d16b70 */
  push32(0x10d145c2u); f_10d16b70();
  /* 10d145c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d145c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d145c8:;
  /* 10d145c8 pop edi */
  EDI = (pop32());
  /* 10d145c9 pop esi */
  ESI = (pop32());
  /* 10d145ca pop ebx */
  EBX = (pop32());
  /* 10d145cb mov esp, ebp */
  ESP = (EBP);
  /* 10d145cd pop ebp */
  EBP = (pop32());
  /* 10d145ce ret  */
  ESPCHK(0x10d14270u, _esp0);
  ESP += 4; return;
}

/* FUN_100045e0 @ 0x10d145e0 (34 bytes, 13 insns) */
void f_10d145e0(void) {
  FTRACE(0x10d145e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d145e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d145e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d145e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d145e4 mov eax, dword ptr [0x10d3ca84] */
  EAX = (r32((uint32_t)(0x10d3ca84)));
  /* 10d145e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d145ec cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d145f0 je 0x10d145fb */
  if (C.zf) goto L_10d145fb;
  /* 10d145f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d145f5 mov dword ptr [0x10d3ca84], ecx */
  w32((uint32_t)(0x10d3ca84), (ECX));
L_10d145fb:;
  /* 10d145fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d145fe mov esp, ebp */
  ESP = (EBP);
  /* 10d14600 pop ebp */
  EBP = (pop32());
  /* 10d14601 ret  */
  ESPCHK(0x10d145e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004610 @ 0x10d14610 (103 bytes, 38 insns) */
void f_10d14610(void) {
  FTRACE(0x10d14610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d14610 push ebp */
  push32((uint32_t)(EBP));
  /* 10d14611 mov ebp, esp */
  EBP = (ESP);
  /* 10d14613 push ecx */
  push32((uint32_t)(ECX));
  /* 10d14614 mov eax, dword ptr [0x10d3ca84] */
  EAX = (r32((uint32_t)(0x10d3ca84)));
  /* 10d14619 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1461c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1461e jne 0x10d14622 */
  if (!C.zf) goto L_10d14622;
  /* 10d14620 jmp 0x10d14673 */
  goto L_10d14673;
L_10d14622:;
  /* 10d14622 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d14624 call 0x10d16ad0 */
  push32(0x10d14629u); f_10d16ad0();
  /* 10d14629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1462c mov ecx, dword ptr [0x10d3e46c] */
  ECX = (r32((uint32_t)(0x10d3e46c)));
  /* 10d14632 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d14635 jmp 0x10d1463f */
  goto L_10d1463f;
L_10d14637:;
  /* 10d14637 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1463a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d1463c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d1463f:;
  /* 10d1463f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14643 je 0x10d14669 */
  if (C.zf) goto L_10d14669;
  /* 10d14645 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14648 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d1464b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d14651 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14654 jne 0x10d14667 */
  if (!C.zf) goto L_10d14667;
  /* 10d14656 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d14659 push eax */
  push32((uint32_t)(EAX));
  /* 10d1465a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1465d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14660 push ecx */
  push32((uint32_t)(ECX));
  /* 10d14661 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10d14664u);
  /* 10d14664 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d14667:;
  /* 10d14667 jmp 0x10d14637 */
  goto L_10d14637;
L_10d14669:;
  /* 10d14669 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d1466b call 0x10d16b70 */
  push32(0x10d14670u); f_10d16b70();
  /* 10d14670 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d14673:;
  /* 10d14673 mov esp, ebp */
  ESP = (EBP);
  /* 10d14675 pop ebp */
  EBP = (pop32());
  /* 10d14676 ret  */
  ESPCHK(0x10d14610u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10d14680 (75 bytes, 28 insns) */
void f_10d14680(void) {
  FTRACE(0x10d14680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d14680 push ebp */
  push32((uint32_t)(EBP));
  /* 10d14681 mov ebp, esp */
  EBP = (ESP);
  /* 10d14683 push ecx */
  push32((uint32_t)(ECX));
  /* 10d14684 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14688 je 0x10d146bd */
  if (C.zf) goto L_10d146bd;
  /* 10d1468a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1468d push eax */
  push32((uint32_t)(EAX));
  /* 10d1468e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14691 push ecx */
  push32((uint32_t)(ECX));
  /* 10d14692 call dword ptr [0x10d4023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4023c))), 0x10d14698u);
  /* 10d14698 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1469a jne 0x10d146bd */
  if (!C.zf) goto L_10d146bd;
  /* 10d1469c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d146a0 je 0x10d146b4 */
  if (C.zf) goto L_10d146b4;
  /* 10d146a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d146a5 push edx */
  push32((uint32_t)(EDX));
  /* 10d146a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d146a9 push eax */
  push32((uint32_t)(EAX));
  /* 10d146aa call dword ptr [0x10d402e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402e8))), 0x10d146b0u);
  /* 10d146b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d146b2 jne 0x10d146bd */
  if (!C.zf) goto L_10d146bd;
L_10d146b4:;
  /* 10d146b4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d146bb jmp 0x10d146c4 */
  goto L_10d146c4;
L_10d146bd:;
  /* 10d146bd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d146c4:;
  /* 10d146c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d146c7 mov esp, ebp */
  ESP = (EBP);
  /* 10d146c9 pop ebp */
  EBP = (pop32());
  /* 10d146ca ret  */
  ESPCHK(0x10d14680u, _esp0);
  ESP += 4; return;
}

/* FUN_100046d0 @ 0x10d146d0 (134 bytes, 50 insns) */
void f_10d146d0(void) {
  FTRACE(0x10d146d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d146d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d146d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d146d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d146d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d146d8 jne 0x10d146de */
  if (!C.zf) goto L_10d146de;
  /* 10d146da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d146dc jmp 0x10d14752 */
  goto L_10d14752;
L_10d146de:;
  /* 10d146de push 1 */
  push32((uint32_t)(0x1u));
  /* 10d146e0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10d146e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d146e5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d146e8 push eax */
  push32((uint32_t)(EAX));
  /* 10d146e9 call 0x10d14680 */
  push32(0x10d146eeu); f_10d14680();
  /* 10d146ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d146f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d146f3 jne 0x10d146f9 */
  if (!C.zf) goto L_10d146f9;
  /* 10d146f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d146f7 jmp 0x10d14752 */
  goto L_10d14752;
L_10d146f9:;
  /* 10d146f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d146fc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d146ff push ecx */
  push32((uint32_t)(ECX));
  /* 10d14700 call 0x10d173d0 */
  push32(0x10d14705u); f_10d173d0();
  /* 10d14705 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14708 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1470b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1470f je 0x10d14726 */
  if (C.zf) goto L_10d14726;
  /* 10d14711 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14714 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d14717 push edx */
  push32((uint32_t)(EDX));
  /* 10d14718 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1471b push eax */
  push32((uint32_t)(EAX));
  /* 10d1471c call 0x10d17430 */
  push32(0x10d14721u); f_10d17430();
  /* 10d14721 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14724 jmp 0x10d14752 */
  goto L_10d14752;
L_10d14726:;
  /* 10d14726 mov ecx, dword ptr [0x10d3e420] */
  ECX = (r32((uint32_t)(0x10d3e420)));
  /* 10d1472c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10d14732 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d14734 je 0x10d1473d */
  if (C.zf) goto L_10d1473d;
  /* 10d14736 mov eax, 1 */
  EAX = (0x1u);
  /* 10d1473b jmp 0x10d14752 */
  goto L_10d14752;
L_10d1473d:;
  /* 10d1473d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14740 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d14743 push edx */
  push32((uint32_t)(EDX));
  /* 10d14744 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14746 mov eax, dword ptr [0x10d3fdcc] */
  EAX = (r32((uint32_t)(0x10d3fdcc)));
  /* 10d1474b push eax */
  push32((uint32_t)(EAX));
  /* 10d1474c call dword ptr [0x10d40240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40240))), 0x10d14752u);
L_10d14752:;
  /* 10d14752 mov esp, ebp */
  ESP = (EBP);
  /* 10d14754 pop ebp */
  EBP = (pop32());
  /* 10d14755 ret  */
  ESPCHK(0x10d146d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004760 @ 0x10d14760 (227 bytes, 80 insns) */
void f_10d14760(void) {
  FTRACE(0x10d14760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d14760 push ebp */
  push32((uint32_t)(EBP));
  /* 10d14761 mov ebp, esp */
  EBP = (ESP);
  /* 10d14763 push ecx */
  push32((uint32_t)(ECX));
  /* 10d14764 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14767 push eax */
  push32((uint32_t)(EAX));
  /* 10d14768 call 0x10d146d0 */
  push32(0x10d1476du); f_10d146d0();
  /* 10d1476d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14770 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d14772 jne 0x10d1477b */
  if (!C.zf) goto L_10d1477b;
  /* 10d14774 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d14776 jmp 0x10d1483f */
  goto L_10d1483f;
L_10d1477b:;
  /* 10d1477b push 9 */
  push32((uint32_t)(0x9u));
  /* 10d1477d call 0x10d16ad0 */
  push32(0x10d14782u); f_10d16ad0();
  /* 10d14782 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14785 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14788 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1478b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d1478e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14791 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d14794 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d14799 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1479c je 0x10d147c0 */
  if (C.zf) goto L_10d147c0;
  /* 10d1479e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d147a1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d147a5 je 0x10d147c0 */
  if (C.zf) goto L_10d147c0;
  /* 10d147a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d147aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d147ad and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d147b2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d147b5 je 0x10d147c0 */
  if (C.zf) goto L_10d147c0;
  /* 10d147b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d147ba cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d147be jne 0x10d14833 */
  if (!C.zf) goto L_10d14833;
L_10d147c0:;
  /* 10d147c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d147c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d147c5 push edx */
  push32((uint32_t)(EDX));
  /* 10d147c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d147c9 push eax */
  push32((uint32_t)(EAX));
  /* 10d147ca call 0x10d14680 */
  push32(0x10d147cfu); f_10d14680();
  /* 10d147cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d147d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d147d4 je 0x10d14833 */
  if (C.zf) goto L_10d14833;
  /* 10d147d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d147d9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d147dc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d147df jne 0x10d14833 */
  if (!C.zf) goto L_10d14833;
  /* 10d147e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d147e4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10d147e7 cmp ecx, dword ptr [0x10d3ca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3ca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d147ed jg 0x10d14833 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d14833;
  /* 10d147ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d147f3 je 0x10d14800 */
  if (C.zf) goto L_10d14800;
  /* 10d147f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d147f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d147fb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10d147fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d14800:;
  /* 10d14800 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14804 je 0x10d14811 */
  if (C.zf) goto L_10d14811;
  /* 10d14806 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d14809 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1480c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d1480f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d14811:;
  /* 10d14811 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14815 je 0x10d14822 */
  if (C.zf) goto L_10d14822;
  /* 10d14817 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d1481a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1481d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d14820 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d14822:;
  /* 10d14822 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d14824 call 0x10d16b70 */
  push32(0x10d14829u); f_10d16b70();
  /* 10d14829 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1482c mov eax, 1 */
  EAX = (0x1u);
  /* 10d14831 jmp 0x10d1483f */
  goto L_10d1483f;
L_10d14833:;
  /* 10d14833 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d14835 call 0x10d16b70 */
  push32(0x10d1483au); f_10d16b70();
  /* 10d1483a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1483d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d1483f:;
  /* 10d1483f mov esp, ebp */
  ESP = (EBP);
  /* 10d14841 pop ebp */
  EBP = (pop32());
  /* 10d14842 ret  */
  ESPCHK(0x10d14760u, _esp0);
  ESP += 4; return;
}

/* FUN_10004850 @ 0x10d14850 (28 bytes, 11 insns) */
void f_10d14850(void) {
  FTRACE(0x10d14850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d14850 push ebp */
  push32((uint32_t)(EBP));
  /* 10d14851 mov ebp, esp */
  EBP = (ESP);
  /* 10d14853 push ecx */
  push32((uint32_t)(ECX));
  /* 10d14854 mov eax, dword ptr [0x10d3fdd8] */
  EAX = (r32((uint32_t)(0x10d3fdd8)));
  /* 10d14859 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1485c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1485f mov dword ptr [0x10d3fdd8], ecx */
  w32((uint32_t)(0x10d3fdd8), (ECX));
  /* 10d14865 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14868 mov esp, ebp */
  ESP = (EBP);
  /* 10d1486a pop ebp */
  EBP = (pop32());
  /* 10d1486b ret  */
  ESPCHK(0x10d14850u, _esp0);
  ESP += 4; return;
}

/* FUN_10004870 @ 0x10d14870 (362 bytes, 116 insns) */
void f_10d14870(void) {
  FTRACE(0x10d14870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d14870 push ebp */
  push32((uint32_t)(EBP));
  /* 10d14871 mov ebp, esp */
  EBP = (ESP);
  /* 10d14873 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d14876 push ebx */
  push32((uint32_t)(EBX));
  /* 10d14877 push esi */
  push32((uint32_t)(ESI));
  /* 10d14878 push edi */
  push32((uint32_t)(EDI));
  /* 10d14879 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1487d jne 0x10d148aa */
  if (!C.zf) goto L_10d148aa;
L_10d1487f:;
  /* 10d1487f push 0x10d39940 */
  push32((uint32_t)(0x10d39940u));
  /* 10d14884 push 0x10d39458 */
  push32((uint32_t)(0x10d39458u));
  /* 10d14889 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1488b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1488d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1488f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14891 call 0x10d12190 */
  push32(0x10d14896u); f_10d12190();
  /* 10d14896 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14899 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1489c jne 0x10d1489f */
  if (!C.zf) goto L_10d1489f;
  /* 10d1489e int3  */
  x86_unimpl("int3 @ 0x10d1489e");
L_10d1489f:;
  /* 10d1489f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d148a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d148a3 jne 0x10d1487f */
  if (!C.zf) goto L_10d1487f;
  /* 10d148a5 jmp 0x10d149d3 */
  goto L_10d149d3;
L_10d148aa:;
  /* 10d148aa push 9 */
  push32((uint32_t)(0x9u));
  /* 10d148ac call 0x10d16ad0 */
  push32(0x10d148b1u); f_10d16ad0();
  /* 10d148b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d148b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d148b7 mov edx, dword ptr [0x10d3e46c] */
  EDX = (r32((uint32_t)(0x10d3e46c)));
  /* 10d148bd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d148bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d148c6 jmp 0x10d148d1 */
  goto L_10d148d1;
L_10d148c8:;
  /* 10d148c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d148cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d148ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d148d1:;
  /* 10d148d1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d148d5 jge 0x10d148f5 */
  if ((C.sf==C.of)) goto L_10d148f5;
  /* 10d148d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d148da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d148dd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10d148e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d148e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d148eb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10d148f3 jmp 0x10d148c8 */
  goto L_10d148c8;
L_10d148f5:;
  /* 10d148f5 mov edx, dword ptr [0x10d3e46c] */
  EDX = (r32((uint32_t)(0x10d3e46c)));
  /* 10d148fb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d148fe jmp 0x10d14908 */
  goto L_10d14908;
L_10d14900:;
  /* 10d14900 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d14903 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d14905 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d14908:;
  /* 10d14908 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1490c je 0x10d149b1 */
  if (C.zf) goto L_10d149b1;
  /* 10d14912 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d14915 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d14918 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1491d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1491f jl 0x10d14987 */
  if ((C.sf!=C.of)) goto L_10d14987;
  /* 10d14921 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d14924 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d14927 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1492d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14930 jge 0x10d14987 */
  if ((C.sf==C.of)) goto L_10d14987;
  /* 10d14932 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d14935 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d14938 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1493e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14941 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10d14945 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14948 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1494b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d1494e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d14954 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14957 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10d1495b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1495e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d14961 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d14966 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14969 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10d1496d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d14970 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14973 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d14976 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d14979 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1497e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14981 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10d14985 jmp 0x10d149ac */
  goto L_10d149ac;
L_10d14987:;
  /* 10d14987 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1498a push edx */
  push32((uint32_t)(EDX));
  /* 10d1498b push 0x10d3991c */
  push32((uint32_t)(0x10d3991cu));
  /* 10d14990 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14992 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14994 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14996 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14998 call 0x10d12190 */
  push32(0x10d1499du); f_10d12190();
  /* 10d1499d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d149a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d149a3 jne 0x10d149a6 */
  if (!C.zf) goto L_10d149a6;
  /* 10d149a5 int3  */
  x86_unimpl("int3 @ 0x10d149a5");
L_10d149a6:;
  /* 10d149a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d149a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d149aa jne 0x10d14987 */
  if (!C.zf) goto L_10d14987;
L_10d149ac:;
  /* 10d149ac jmp 0x10d14900 */
  goto L_10d14900;
L_10d149b1:;
  /* 10d149b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d149b4 mov edx, dword ptr [0x10d3e474] */
  EDX = (r32((uint32_t)(0x10d3e474)));
  /* 10d149ba mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10d149bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d149c0 mov ecx, dword ptr [0x10d3e468] */
  ECX = (r32((uint32_t)(0x10d3e468)));
  /* 10d149c6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10d149c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d149cb call 0x10d16b70 */
  push32(0x10d149d0u); f_10d16b70();
  /* 10d149d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d149d3:;
  /* 10d149d3 pop edi */
  EDI = (pop32());
  /* 10d149d4 pop esi */
  ESI = (pop32());
  /* 10d149d5 pop ebx */
  EBX = (pop32());
  /* 10d149d6 mov esp, ebp */
  ESP = (EBP);
  /* 10d149d8 pop ebp */
  EBP = (pop32());
  /* 10d149d9 ret  */
  ESPCHK(0x10d14870u, _esp0);
  ESP += 4; return;
}

/* FUN_100049e0 @ 0x10d149e0 (291 bytes, 95 insns) */
void f_10d149e0(void) {
  FTRACE(0x10d149e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d149e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d149e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d149e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d149e6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d149e7 push esi */
  push32((uint32_t)(ESI));
  /* 10d149e8 push edi */
  push32((uint32_t)(EDI));
  /* 10d149e9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d149f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d149f4 je 0x10d14a02 */
  if (C.zf) goto L_10d14a02;
  /* 10d149f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d149fa je 0x10d14a02 */
  if (C.zf) goto L_10d14a02;
  /* 10d149fc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14a00 jne 0x10d14a30 */
  if (!C.zf) goto L_10d14a30;
L_10d14a02:;
  /* 10d14a02 push 0x10d39968 */
  push32((uint32_t)(0x10d39968u));
  /* 10d14a07 push 0x10d39458 */
  push32((uint32_t)(0x10d39458u));
  /* 10d14a0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14a0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14a14 call 0x10d12190 */
  push32(0x10d14a19u); f_10d12190();
  /* 10d14a19 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14a1c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14a1f jne 0x10d14a22 */
  if (!C.zf) goto L_10d14a22;
  /* 10d14a21 int3  */
  x86_unimpl("int3 @ 0x10d14a21");
L_10d14a22:;
  /* 10d14a22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d14a24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d14a26 jne 0x10d14a02 */
  if (!C.zf) goto L_10d14a02;
  /* 10d14a28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d14a2b jmp 0x10d14afc */
  goto L_10d14afc;
L_10d14a30:;
  /* 10d14a30 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d14a37 jmp 0x10d14a42 */
  goto L_10d14a42;
L_10d14a39:;
  /* 10d14a39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14a3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14a3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d14a42:;
  /* 10d14a42 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14a46 jge 0x10d14acc */
  if ((C.sf==C.of)) goto L_10d14acc;
  /* 10d14a4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14a4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d14a52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14a55 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d14a58 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10d14a5c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d14a60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14a63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14a66 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10d14a6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14a6d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d14a70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14a73 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d14a76 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10d14a7a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d14a7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14a81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14a84 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10d14a88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14a8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14a8e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14a93 jne 0x10d14aa2 */
  if (!C.zf) goto L_10d14aa2;
  /* 10d14a95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14a98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14a9b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14aa0 je 0x10d14ac7 */
  if (C.zf) goto L_10d14ac7;
L_10d14aa2:;
  /* 10d14aa2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14aa6 je 0x10d14ac7 */
  if (C.zf) goto L_10d14ac7;
  /* 10d14aa8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14aac jne 0x10d14ac0 */
  if (!C.zf) goto L_10d14ac0;
  /* 10d14aae cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14ab2 jne 0x10d14ac7 */
  if (!C.zf) goto L_10d14ac7;
  /* 10d14ab4 mov eax, dword ptr [0x10d3ca84] */
  EAX = (r32((uint32_t)(0x10d3ca84)));
  /* 10d14ab9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10d14abc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d14abe je 0x10d14ac7 */
  if (C.zf) goto L_10d14ac7;
L_10d14ac0:;
  /* 10d14ac0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10d14ac7:;
  /* 10d14ac7 jmp 0x10d14a39 */
  goto L_10d14a39;
L_10d14acc:;
  /* 10d14acc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d14acf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d14ad2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10d14ad5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d14ad8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14adb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10d14ade mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d14ae1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d14ae4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10d14ae7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d14aea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14aed mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10d14af0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14af3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d14af9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d14afc:;
  /* 10d14afc pop edi */
  EDI = (pop32());
  /* 10d14afd pop esi */
  ESI = (pop32());
  /* 10d14afe pop ebx */
  EBX = (pop32());
  /* 10d14aff mov esp, ebp */
  ESP = (EBP);
  /* 10d14b01 pop ebp */
  EBP = (pop32());
  /* 10d14b02 ret  */
  ESPCHK(0x10d149e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b10 @ 0x10d14b10 (697 bytes, 253 insns) */
void f_10d14b10(void) {
  FTRACE(0x10d14b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d14b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d14b11 mov ebp, esp */
  EBP = (ESP);
  /* 10d14b13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d14b16 push ebx */
  push32((uint32_t)(EBX));
  /* 10d14b17 push esi */
  push32((uint32_t)(ESI));
  /* 10d14b18 push edi */
  push32((uint32_t)(EDI));
  /* 10d14b19 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d14b20 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d14b22 call 0x10d16ad0 */
  push32(0x10d14b27u); f_10d16ad0();
  /* 10d14b27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d14b2a:;
  /* 10d14b2a push 0x10d39a60 */
  push32((uint32_t)(0x10d39a60u));
  /* 10d14b2f push 0x10d39458 */
  push32((uint32_t)(0x10d39458u));
  /* 10d14b34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14b36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14b38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14b3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14b3c call 0x10d12190 */
  push32(0x10d14b41u); f_10d12190();
  /* 10d14b41 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14b44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14b47 jne 0x10d14b4a */
  if (!C.zf) goto L_10d14b4a;
  /* 10d14b49 int3  */
  x86_unimpl("int3 @ 0x10d14b49");
L_10d14b4a:;
  /* 10d14b4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d14b4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d14b4e jne 0x10d14b2a */
  if (!C.zf) goto L_10d14b2a;
  /* 10d14b50 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14b54 je 0x10d14b5e */
  if (C.zf) goto L_10d14b5e;
  /* 10d14b56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14b59 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d14b5b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d14b5e:;
  /* 10d14b5e mov eax, dword ptr [0x10d3e46c] */
  EAX = (r32((uint32_t)(0x10d3e46c)));
  /* 10d14b63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d14b66 jmp 0x10d14b70 */
  goto L_10d14b70;
L_10d14b68:;
  /* 10d14b68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14b6b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d14b6d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d14b70:;
  /* 10d14b70 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14b74 je 0x10d14d92 */
  if (C.zf) goto L_10d14d92;
  /* 10d14b7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14b7d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14b80 je 0x10d14d92 */
  if (C.zf) goto L_10d14d92;
  /* 10d14b86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14b89 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d14b8c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d14b92 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14b95 je 0x10d14bc4 */
  if (C.zf) goto L_10d14bc4;
  /* 10d14b97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14b9a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d14b9d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d14ba3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d14ba5 je 0x10d14bc4 */
  if (C.zf) goto L_10d14bc4;
  /* 10d14ba7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14baa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d14bad and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d14bb2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14bb5 jne 0x10d14bc9 */
  if (!C.zf) goto L_10d14bc9;
  /* 10d14bb7 mov ecx, dword ptr [0x10d3ca84] */
  ECX = (r32((uint32_t)(0x10d3ca84)));
  /* 10d14bbd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10d14bc0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d14bc2 jne 0x10d14bc9 */
  if (!C.zf) goto L_10d14bc9;
L_10d14bc4:;
  /* 10d14bc4 jmp 0x10d14d8d */
  goto L_10d14d8d;
L_10d14bc9:;
  /* 10d14bc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14bcc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14bd0 je 0x10d14c42 */
  if (C.zf) goto L_10d14c42;
  /* 10d14bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14bd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d14bd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14bd9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d14bdc push ecx */
  push32((uint32_t)(ECX));
  /* 10d14bdd call 0x10d14680 */
  push32(0x10d14be2u); f_10d14680();
  /* 10d14be2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14be5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d14be7 jne 0x10d14c13 */
  if (!C.zf) goto L_10d14c13;
L_10d14be9:;
  /* 10d14be9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14bec mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d14bef push eax */
  push32((uint32_t)(EAX));
  /* 10d14bf0 push 0x10d39a4c */
  push32((uint32_t)(0x10d39a4cu));
  /* 10d14bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14bfb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14bfd call 0x10d12190 */
  push32(0x10d14c02u); f_10d12190();
  /* 10d14c02 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14c05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14c08 jne 0x10d14c0b */
  if (!C.zf) goto L_10d14c0b;
  /* 10d14c0a int3  */
  x86_unimpl("int3 @ 0x10d14c0a");
L_10d14c0b:;
  /* 10d14c0b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d14c0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d14c0f jne 0x10d14be9 */
  if (!C.zf) goto L_10d14be9;
  /* 10d14c11 jmp 0x10d14c42 */
  goto L_10d14c42;
L_10d14c13:;
  /* 10d14c13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14c16 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d14c19 push eax */
  push32((uint32_t)(EAX));
  /* 10d14c1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14c1d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d14c20 push edx */
  push32((uint32_t)(EDX));
  /* 10d14c21 push 0x10d39a40 */
  push32((uint32_t)(0x10d39a40u));
  /* 10d14c26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14c28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14c2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14c2e call 0x10d12190 */
  push32(0x10d14c33u); f_10d12190();
  /* 10d14c33 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14c36 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14c39 jne 0x10d14c3c */
  if (!C.zf) goto L_10d14c3c;
  /* 10d14c3b int3  */
  x86_unimpl("int3 @ 0x10d14c3b");
L_10d14c3c:;
  /* 10d14c3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d14c3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d14c40 jne 0x10d14c13 */
  if (!C.zf) goto L_10d14c13;
L_10d14c42:;
  /* 10d14c42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14c45 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d14c48 push edx */
  push32((uint32_t)(EDX));
  /* 10d14c49 push 0x10d39a38 */
  push32((uint32_t)(0x10d39a38u));
  /* 10d14c4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14c50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14c52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14c54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14c56 call 0x10d12190 */
  push32(0x10d14c5bu); f_10d12190();
  /* 10d14c5b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14c5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14c61 jne 0x10d14c64 */
  if (!C.zf) goto L_10d14c64;
  /* 10d14c63 int3  */
  x86_unimpl("int3 @ 0x10d14c63");
L_10d14c64:;
  /* 10d14c64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d14c66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d14c68 jne 0x10d14c42 */
  if (!C.zf) goto L_10d14c42;
  /* 10d14c6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14c6d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d14c70 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d14c76 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14c79 jne 0x10d14cec */
  if (!C.zf) goto L_10d14cec;
L_10d14c7b:;
  /* 10d14c7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14c7e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d14c81 push ecx */
  push32((uint32_t)(ECX));
  /* 10d14c82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14c85 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d14c88 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10d14c8b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d14c90 push eax */
  push32((uint32_t)(EAX));
  /* 10d14c91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14c94 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14c97 push ecx */
  push32((uint32_t)(ECX));
  /* 10d14c98 push 0x10d39a04 */
  push32((uint32_t)(0x10d39a04u));
  /* 10d14c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14ca1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14ca5 call 0x10d12190 */
  push32(0x10d14caau); f_10d12190();
  /* 10d14caa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14cad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14cb0 jne 0x10d14cb3 */
  if (!C.zf) goto L_10d14cb3;
  /* 10d14cb2 int3  */
  x86_unimpl("int3 @ 0x10d14cb2");
L_10d14cb3:;
  /* 10d14cb3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d14cb5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d14cb7 jne 0x10d14c7b */
  if (!C.zf) goto L_10d14c7b;
  /* 10d14cb9 cmp dword ptr [0x10d3fdd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3fdd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14cc0 je 0x10d14cdb */
  if (C.zf) goto L_10d14cdb;
  /* 10d14cc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14cc5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d14cc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d14cc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14ccc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14ccf push edx */
  push32((uint32_t)(EDX));
  /* 10d14cd0 call dword ptr [0x10d3fdd8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3fdd8))), 0x10d14cd6u);
  /* 10d14cd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14cd9 jmp 0x10d14ce7 */
  goto L_10d14ce7;
L_10d14cdb:;
  /* 10d14cdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14cde push eax */
  push32((uint32_t)(EAX));
  /* 10d14cdf call 0x10d14dd0 */
  push32(0x10d14ce4u); f_10d14dd0();
  /* 10d14ce4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d14ce7:;
  /* 10d14ce7 jmp 0x10d14d8d */
  goto L_10d14d8d;
L_10d14cec:;
  /* 10d14cec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14cef cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14cf3 jne 0x10d14d32 */
  if (!C.zf) goto L_10d14d32;
L_10d14cf5:;
  /* 10d14cf5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14cf8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d14cfb push eax */
  push32((uint32_t)(EAX));
  /* 10d14cfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14cff add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14d02 push ecx */
  push32((uint32_t)(ECX));
  /* 10d14d03 push 0x10d399dc */
  push32((uint32_t)(0x10d399dcu));
  /* 10d14d08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14d0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14d0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14d0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14d10 call 0x10d12190 */
  push32(0x10d14d15u); f_10d12190();
  /* 10d14d15 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14d18 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14d1b jne 0x10d14d1e */
  if (!C.zf) goto L_10d14d1e;
  /* 10d14d1d int3  */
  x86_unimpl("int3 @ 0x10d14d1d");
L_10d14d1e:;
  /* 10d14d1e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d14d20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d14d22 jne 0x10d14cf5 */
  if (!C.zf) goto L_10d14cf5;
  /* 10d14d24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14d27 push eax */
  push32((uint32_t)(EAX));
  /* 10d14d28 call 0x10d14dd0 */
  push32(0x10d14d2du); f_10d14dd0();
  /* 10d14d2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14d30 jmp 0x10d14d8d */
  goto L_10d14d8d;
L_10d14d32:;
  /* 10d14d32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14d35 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d14d38 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d14d3e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14d41 jne 0x10d14d8d */
  if (!C.zf) goto L_10d14d8d;
L_10d14d43:;
  /* 10d14d43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14d46 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d14d49 push ecx */
  push32((uint32_t)(ECX));
  /* 10d14d4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14d4d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d14d50 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10d14d53 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d14d58 push eax */
  push32((uint32_t)(EAX));
  /* 10d14d59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14d5c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14d5f push ecx */
  push32((uint32_t)(ECX));
  /* 10d14d60 push 0x10d399a8 */
  push32((uint32_t)(0x10d399a8u));
  /* 10d14d65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14d6d call 0x10d12190 */
  push32(0x10d14d72u); f_10d12190();
  /* 10d14d72 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14d75 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14d78 jne 0x10d14d7b */
  if (!C.zf) goto L_10d14d7b;
  /* 10d14d7a int3  */
  x86_unimpl("int3 @ 0x10d14d7a");
L_10d14d7b:;
  /* 10d14d7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d14d7d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d14d7f jne 0x10d14d43 */
  if (!C.zf) goto L_10d14d43;
  /* 10d14d81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14d84 push eax */
  push32((uint32_t)(EAX));
  /* 10d14d85 call 0x10d14dd0 */
  push32(0x10d14d8au); f_10d14dd0();
  /* 10d14d8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d14d8d:;
  /* 10d14d8d jmp 0x10d14b68 */
  goto L_10d14b68;
L_10d14d92:;
  /* 10d14d92 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d14d94 call 0x10d16b70 */
  push32(0x10d14d99u); f_10d16b70();
  /* 10d14d99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d14d9c:;
  /* 10d14d9c push 0x10d39990 */
  push32((uint32_t)(0x10d39990u));
  /* 10d14da1 push 0x10d39458 */
  push32((uint32_t)(0x10d39458u));
  /* 10d14da6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14da8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14daa push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14dac push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14dae call 0x10d12190 */
  push32(0x10d14db3u); f_10d12190();
  /* 10d14db3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14db6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14db9 jne 0x10d14dbc */
  if (!C.zf) goto L_10d14dbc;
  /* 10d14dbb int3  */
  x86_unimpl("int3 @ 0x10d14dbb");
L_10d14dbc:;
  /* 10d14dbc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d14dbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d14dc0 jne 0x10d14d9c */
  if (!C.zf) goto L_10d14d9c;
  /* 10d14dc2 pop edi */
  EDI = (pop32());
  /* 10d14dc3 pop esi */
  ESI = (pop32());
  /* 10d14dc4 pop ebx */
  EBX = (pop32());
  /* 10d14dc5 mov esp, ebp */
  ESP = (EBP);
  /* 10d14dc7 pop ebp */
  EBP = (pop32());
  /* 10d14dc8 ret  */
  ESPCHK(0x10d14b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004dd0 @ 0x10d14dd0 (276 bytes, 89 insns) */
void f_10d14dd0(void) {
  FTRACE(0x10d14dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d14dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d14dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10d14dd3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d14dd6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d14dd7 push esi */
  push32((uint32_t)(ESI));
  /* 10d14dd8 push edi */
  push32((uint32_t)(EDI));
  /* 10d14dd9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10d14de0 jmp 0x10d14deb */
  goto L_10d14deb;
L_10d14de2:;
  /* 10d14de2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d14de5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14de8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10d14deb:;
  /* 10d14deb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14dee cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14df2 jge 0x10d14dff */
  if ((C.sf==C.of)) goto L_10d14dff;
  /* 10d14df4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14df7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d14dfa mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10d14dfd jmp 0x10d14e06 */
  goto L_10d14e06;
L_10d14dff:;
  /* 10d14dff mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10d14e06:;
  /* 10d14e06 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d14e09 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14e0c jge 0x10d14eac */
  if ((C.sf==C.of)) goto L_10d14eac;
  /* 10d14e12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14e15 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14e18 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10d14e1b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10d14e1e cmp dword ptr [0x10d3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14e25 jle 0x10d14e43 */
  if ((C.zf||C.sf!=C.of)) goto L_10d14e43;
  /* 10d14e27 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10d14e2c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d14e2f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d14e35 push ecx */
  push32((uint32_t)(ECX));
  /* 10d14e36 call 0x10d190e0 */
  push32(0x10d14e3bu); f_10d190e0();
  /* 10d14e3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14e3e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10d14e41 jmp 0x10d14e60 */
  goto L_10d14e60;
L_10d14e43:;
  /* 10d14e43 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d14e46 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d14e4c mov eax, dword ptr [0x10d3cc98] */
  EAX = (r32((uint32_t)(0x10d3cc98)));
  /* 10d14e51 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d14e53 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10d14e57 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10d14e5d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10d14e60:;
  /* 10d14e60 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14e64 je 0x10d14e74 */
  if (C.zf) goto L_10d14e74;
  /* 10d14e66 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d14e69 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d14e6f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10d14e72 jmp 0x10d14e7b */
  goto L_10d14e7b;
L_10d14e74:;
  /* 10d14e74 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10d14e7b:;
  /* 10d14e7b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d14e7e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10d14e81 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10d14e85 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d14e88 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d14e8e push edx */
  push32((uint32_t)(EDX));
  /* 10d14e8f push 0x10d39a84 */
  push32((uint32_t)(0x10d39a84u));
  /* 10d14e94 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d14e97 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d14e9a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10d14e9e push ecx */
  push32((uint32_t)(ECX));
  /* 10d14e9f call 0x10d18fe0 */
  push32(0x10d14ea4u); f_10d18fe0();
  /* 10d14ea4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14ea7 jmp 0x10d14de2 */
  goto L_10d14de2;
L_10d14eac:;
  /* 10d14eac mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d14eaf mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10d14eb4:;
  /* 10d14eb4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10d14eb7 push eax */
  push32((uint32_t)(EAX));
  /* 10d14eb8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10d14ebb push ecx */
  push32((uint32_t)(ECX));
  /* 10d14ebc push 0x10d39a74 */
  push32((uint32_t)(0x10d39a74u));
  /* 10d14ec1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14ec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14ec9 call 0x10d12190 */
  push32(0x10d14eceu); f_10d12190();
  /* 10d14ece add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14ed1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14ed4 jne 0x10d14ed7 */
  if (!C.zf) goto L_10d14ed7;
  /* 10d14ed6 int3  */
  x86_unimpl("int3 @ 0x10d14ed6");
L_10d14ed7:;
  /* 10d14ed7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d14ed9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d14edb jne 0x10d14eb4 */
  if (!C.zf) goto L_10d14eb4;
  /* 10d14edd pop edi */
  EDI = (pop32());
  /* 10d14ede pop esi */
  ESI = (pop32());
  /* 10d14edf pop ebx */
  EBX = (pop32());
  /* 10d14ee0 mov esp, ebp */
  ESP = (EBP);
  /* 10d14ee2 pop ebp */
  EBP = (pop32());
  /* 10d14ee3 ret  */
  ESPCHK(0x10d14dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ef0 @ 0x10d14ef0 (116 bytes, 46 insns) */
void f_10d14ef0(void) {
  FTRACE(0x10d14ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d14ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d14ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10d14ef3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d14ef6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d14ef7 push esi */
  push32((uint32_t)(ESI));
  /* 10d14ef8 push edi */
  push32((uint32_t)(EDI));
  /* 10d14ef9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10d14efc push eax */
  push32((uint32_t)(EAX));
  /* 10d14efd call 0x10d14870 */
  push32(0x10d14f02u); f_10d14870();
  /* 10d14f02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14f05 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14f09 jne 0x10d14f24 */
  if (!C.zf) goto L_10d14f24;
  /* 10d14f0b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14f0f jne 0x10d14f24 */
  if (!C.zf) goto L_10d14f24;
  /* 10d14f11 mov ecx, dword ptr [0x10d3ca84] */
  ECX = (r32((uint32_t)(0x10d3ca84)));
  /* 10d14f17 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10d14f1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d14f1c je 0x10d14f5b */
  if (C.zf) goto L_10d14f5b;
  /* 10d14f1e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14f22 je 0x10d14f5b */
  if (C.zf) goto L_10d14f5b;
L_10d14f24:;
  /* 10d14f24 push 0x10d39a8c */
  push32((uint32_t)(0x10d39a8cu));
  /* 10d14f29 push 0x10d39458 */
  push32((uint32_t)(0x10d39458u));
  /* 10d14f2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14f30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14f36 call 0x10d12190 */
  push32(0x10d14f3bu); f_10d12190();
  /* 10d14f3b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14f3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14f41 jne 0x10d14f44 */
  if (!C.zf) goto L_10d14f44;
  /* 10d14f43 int3  */
  x86_unimpl("int3 @ 0x10d14f43");
L_10d14f44:;
  /* 10d14f44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d14f46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d14f48 jne 0x10d14f24 */
  if (!C.zf) goto L_10d14f24;
  /* 10d14f4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14f4c call 0x10d14b10 */
  push32(0x10d14f51u); f_10d14b10();
  /* 10d14f51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14f54 mov eax, 1 */
  EAX = (0x1u);
  /* 10d14f59 jmp 0x10d14f5d */
  goto L_10d14f5d;
L_10d14f5b:;
  /* 10d14f5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d14f5d:;
  /* 10d14f5d pop edi */
  EDI = (pop32());
  /* 10d14f5e pop esi */
  ESI = (pop32());
  /* 10d14f5f pop ebx */
  EBX = (pop32());
  /* 10d14f60 mov esp, ebp */
  ESP = (EBP);
  /* 10d14f62 pop ebp */
  EBP = (pop32());
  /* 10d14f63 ret  */
  ESPCHK(0x10d14ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f70 @ 0x10d14f70 (197 bytes, 79 insns) */
void f_10d14f70(void) {
  FTRACE(0x10d14f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d14f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10d14f71 mov ebp, esp */
  EBP = (ESP);
  /* 10d14f73 push ecx */
  push32((uint32_t)(ECX));
  /* 10d14f74 push ebx */
  push32((uint32_t)(EBX));
  /* 10d14f75 push esi */
  push32((uint32_t)(ESI));
  /* 10d14f76 push edi */
  push32((uint32_t)(EDI));
  /* 10d14f77 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14f7b jne 0x10d14f82 */
  if (!C.zf) goto L_10d14f82;
  /* 10d14f7d jmp 0x10d1502e */
  goto L_10d1502e;
L_10d14f82:;
  /* 10d14f82 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d14f89 jmp 0x10d14f94 */
  goto L_10d14f94;
L_10d14f8b:;
  /* 10d14f8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14f8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14f91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d14f94:;
  /* 10d14f94 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14f98 jge 0x10d14fde */
  if ((C.sf==C.of)) goto L_10d14fde;
L_10d14f9a:;
  /* 10d14f9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14f9d mov edx, dword ptr [ecx*4 + 0x10d3ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d3ca94)));
  /* 10d14fa4 push edx */
  push32((uint32_t)(EDX));
  /* 10d14fa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14fa8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14fab mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10d14faf push edx */
  push32((uint32_t)(EDX));
  /* 10d14fb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d14fb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14fb6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10d14fba push edx */
  push32((uint32_t)(EDX));
  /* 10d14fbb push 0x10d39ae8 */
  push32((uint32_t)(0x10d39ae8u));
  /* 10d14fc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14fc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14fc8 call 0x10d12190 */
  push32(0x10d14fcdu); f_10d12190();
  /* 10d14fcd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14fd0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14fd3 jne 0x10d14fd6 */
  if (!C.zf) goto L_10d14fd6;
  /* 10d14fd5 int3  */
  x86_unimpl("int3 @ 0x10d14fd5");
L_10d14fd6:;
  /* 10d14fd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d14fd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d14fda jne 0x10d14f9a */
  if (!C.zf) goto L_10d14f9a;
  /* 10d14fdc jmp 0x10d14f8b */
  goto L_10d14f8b;
L_10d14fde:;
  /* 10d14fde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d14fe1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10d14fe4 push edx */
  push32((uint32_t)(EDX));
  /* 10d14fe5 push 0x10d39ac4 */
  push32((uint32_t)(0x10d39ac4u));
  /* 10d14fea push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14fec push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14fee push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14ff0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d14ff2 call 0x10d12190 */
  push32(0x10d14ff7u); f_10d12190();
  /* 10d14ff7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d14ffa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d14ffd jne 0x10d15000 */
  if (!C.zf) goto L_10d15000;
  /* 10d14fff int3  */
  x86_unimpl("int3 @ 0x10d14fff");
L_10d15000:;
  /* 10d15000 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d15002 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d15004 jne 0x10d14fde */
  if (!C.zf) goto L_10d14fde;
L_10d15006:;
  /* 10d15006 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d15009 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10d1500c push edx */
  push32((uint32_t)(EDX));
  /* 10d1500d push 0x10d39aa4 */
  push32((uint32_t)(0x10d39aa4u));
  /* 10d15012 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15014 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15016 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15018 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1501a call 0x10d12190 */
  push32(0x10d1501fu); f_10d12190();
  /* 10d1501f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15022 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15025 jne 0x10d15028 */
  if (!C.zf) goto L_10d15028;
  /* 10d15027 int3  */
  x86_unimpl("int3 @ 0x10d15027");
L_10d15028:;
  /* 10d15028 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1502a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1502c jne 0x10d15006 */
  if (!C.zf) goto L_10d15006;
L_10d1502e:;
  /* 10d1502e pop edi */
  EDI = (pop32());
  /* 10d1502f pop esi */
  ESI = (pop32());
  /* 10d15030 pop ebx */
  EBX = (pop32());
  /* 10d15031 mov esp, ebp */
  ESP = (EBP);
  /* 10d15033 pop ebp */
  EBP = (pop32());
  /* 10d15034 ret  */
  ESPCHK(0x10d14f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005040 @ 0x10d15040 (329 bytes, 102 insns) */
void f_10d15040(void) {
  FTRACE(0x10d15040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d15040 push ebp */
  push32((uint32_t)(EBP));
  /* 10d15041 mov ebp, esp */
  EBP = (ESP);
  /* 10d15043 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d15046 cmp dword ptr [0x10d3ff50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3ff50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1504d jne 0x10d15054 */
  if (!C.zf) goto L_10d15054;
  /* 10d1504f call 0x10d19980 */
  push32(0x10d15054u); f_10d19980();
L_10d15054:;
  /* 10d15054 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d1505b mov eax, dword ptr [0x10d3e408] */
  EAX = (r32((uint32_t)(0x10d3e408)));
  /* 10d15060 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d15063:;
  /* 10d15063 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15066 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d15069 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1506b je 0x10d15099 */
  if (C.zf) goto L_10d15099;
  /* 10d1506d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15070 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d15073 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15076 je 0x10d15081 */
  if (C.zf) goto L_10d15081;
  /* 10d15078 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1507b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1507e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d15081:;
  /* 10d15081 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15084 push eax */
  push32((uint32_t)(EAX));
  /* 10d15085 call 0x10d15f00 */
  push32(0x10d1508au); f_10d15f00();
  /* 10d1508a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1508d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15090 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d15094 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d15097 jmp 0x10d15063 */
  goto L_10d15063;
L_10d15099:;
  /* 10d15099 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10d1509b push 0x10d39b08 */
  push32((uint32_t)(0x10d39b08u));
  /* 10d150a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d150a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d150a5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10d150ac push ecx */
  push32((uint32_t)(ECX));
  /* 10d150ad call 0x10d130d0 */
  push32(0x10d150b2u); f_10d130d0();
  /* 10d150b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d150b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d150b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d150bb mov dword ptr [0x10d3e43c], edx */
  w32((uint32_t)(0x10d3e43c), (EDX));
  /* 10d150c1 cmp dword ptr [0x10d3e43c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e43c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d150c8 jne 0x10d150d4 */
  if (!C.zf) goto L_10d150d4;
  /* 10d150ca push 9 */
  push32((uint32_t)(0x9u));
  /* 10d150cc call 0x10d12040 */
  push32(0x10d150d1u); f_10d12040();
  /* 10d150d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d150d4:;
  /* 10d150d4 mov eax, dword ptr [0x10d3e408] */
  EAX = (r32((uint32_t)(0x10d3e408)));
  /* 10d150d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d150dc jmp 0x10d150e7 */
  goto L_10d150e7;
L_10d150de:;
  /* 10d150de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d150e1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d150e4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d150e7:;
  /* 10d150e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d150ea movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d150ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d150ef je 0x10d15157 */
  if (C.zf) goto L_10d15157;
  /* 10d150f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d150f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d150f5 call 0x10d15f00 */
  push32(0x10d150fau); f_10d15f00();
  /* 10d150fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d150fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15100 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d15103 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15106 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d15109 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1510c je 0x10d15155 */
  if (C.zf) goto L_10d15155;
  /* 10d1510e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10d15110 push 0x10d39b08 */
  push32((uint32_t)(0x10d39b08u));
  /* 10d15115 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d15117 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1511a push ecx */
  push32((uint32_t)(ECX));
  /* 10d1511b call 0x10d130d0 */
  push32(0x10d15120u); f_10d130d0();
  /* 10d15120 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15123 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d15126 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d15128 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1512b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1512e jne 0x10d1513a */
  if (!C.zf) goto L_10d1513a;
  /* 10d15130 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d15132 call 0x10d12040 */
  push32(0x10d15137u); f_10d12040();
  /* 10d15137 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1513a:;
  /* 10d1513a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1513d push ecx */
  push32((uint32_t)(ECX));
  /* 10d1513e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d15141 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d15143 push eax */
  push32((uint32_t)(EAX));
  /* 10d15144 call 0x10d16080 */
  push32(0x10d15149u); f_10d16080();
  /* 10d15149 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1514c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1514f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15152 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10d15155:;
  /* 10d15155 jmp 0x10d150de */
  goto L_10d150de;
L_10d15157:;
  /* 10d15157 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d15159 mov edx, dword ptr [0x10d3e408] */
  EDX = (r32((uint32_t)(0x10d3e408)));
  /* 10d1515f push edx */
  push32((uint32_t)(EDX));
  /* 10d15160 call 0x10d13b60 */
  push32(0x10d15165u); f_10d13b60();
  /* 10d15165 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15168 mov dword ptr [0x10d3e408], 0 */
  w32((uint32_t)(0x10d3e408), (0x0u));
  /* 10d15172 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d15175 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d1517b mov dword ptr [0x10d3ff40], 1 */
  w32((uint32_t)(0x10d3ff40), (0x1u));
  /* 10d15185 mov esp, ebp */
  ESP = (EBP);
  /* 10d15187 pop ebp */
  EBP = (pop32());
  /* 10d15188 ret  */
  ESPCHK(0x10d15040u, _esp0);
  ESP += 4; return;
}

/* FUN_10005190 @ 0x10d15190 (216 bytes, 69 insns) */
void f_10d15190(void) {
  FTRACE(0x10d15190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d15190 push ebp */
  push32((uint32_t)(EBP));
  /* 10d15191 mov ebp, esp */
  EBP = (ESP);
  /* 10d15193 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d15196 cmp dword ptr [0x10d3ff50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3ff50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1519d jne 0x10d151a4 */
  if (!C.zf) goto L_10d151a4;
  /* 10d1519f call 0x10d19980 */
  push32(0x10d151a4u); f_10d19980();
L_10d151a4:;
  /* 10d151a4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10d151a9 push 0x10d3e478 */
  push32((uint32_t)(0x10d3e478u));
  /* 10d151ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10d151b0 call dword ptr [0x10d402a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402a8))), 0x10d151b6u);
  /* 10d151b6 mov dword ptr [0x10d3e44c], 0x10d3e478 */
  w32((uint32_t)(0x10d3e44c), (0x10d3e478u));
  /* 10d151c0 mov eax, dword ptr [0x10d3ff6c] */
  EAX = (r32((uint32_t)(0x10d3ff6c)));
  /* 10d151c5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d151c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d151ca jne 0x10d151d7 */
  if (!C.zf) goto L_10d151d7;
  /* 10d151cc mov edx, dword ptr [0x10d3e44c] */
  EDX = (r32((uint32_t)(0x10d3e44c)));
  /* 10d151d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d151d5 jmp 0x10d151df */
  goto L_10d151df;
L_10d151d7:;
  /* 10d151d7 mov eax, dword ptr [0x10d3ff6c] */
  EAX = (r32((uint32_t)(0x10d3ff6c)));
  /* 10d151dc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10d151df:;
  /* 10d151df mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d151e2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d151e5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10d151e8 push edx */
  push32((uint32_t)(EDX));
  /* 10d151e9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10d151ec push eax */
  push32((uint32_t)(EAX));
  /* 10d151ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10d151ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10d151f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d151f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d151f5 call 0x10d15270 */
  push32(0x10d151fau); f_10d15270();
  /* 10d151fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d151fd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10d15202 push 0x10d39b14 */
  push32((uint32_t)(0x10d39b14u));
  /* 10d15207 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d15209 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1520c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1520f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10d15212 push ecx */
  push32((uint32_t)(ECX));
  /* 10d15213 call 0x10d130d0 */
  push32(0x10d15218u); f_10d130d0();
  /* 10d15218 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1521b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1521e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15222 jne 0x10d1522e */
  if (!C.zf) goto L_10d1522e;
  /* 10d15224 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d15226 call 0x10d12040 */
  push32(0x10d1522bu); f_10d12040();
  /* 10d1522b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1522e:;
  /* 10d1522e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10d15231 push edx */
  push32((uint32_t)(EDX));
  /* 10d15232 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10d15235 push eax */
  push32((uint32_t)(EAX));
  /* 10d15236 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d15239 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1523c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10d1523f push eax */
  push32((uint32_t)(EAX));
  /* 10d15240 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15243 push ecx */
  push32((uint32_t)(ECX));
  /* 10d15244 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d15247 push edx */
  push32((uint32_t)(EDX));
  /* 10d15248 call 0x10d15270 */
  push32(0x10d1524du); f_10d15270();
  /* 10d1524d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15250 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d15253 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d15256 mov dword ptr [0x10d3e430], eax */
  w32((uint32_t)(0x10d3e430), (EAX));
  /* 10d1525b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1525e mov dword ptr [0x10d3e434], ecx */
  w32((uint32_t)(0x10d3e434), (ECX));
  /* 10d15264 mov esp, ebp */
  ESP = (EBP);
  /* 10d15266 pop ebp */
  EBP = (pop32());
  /* 10d15267 ret  */
  ESPCHK(0x10d15190u, _esp0);
  ESP += 4; return;
}

/* FUN_10005270 @ 0x10d15270 (1060 bytes, 360 insns) */
void f_10d15270(void) {
  FTRACE(0x10d15270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d15270 push ebp */
  push32((uint32_t)(EBP));
  /* 10d15271 mov ebp, esp */
  EBP = (ESP);
  /* 10d15273 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d15276 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d15279 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d1527f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d15282 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10d15288 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1528b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d1528e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15292 je 0x10d152a5 */
  if (C.zf) goto L_10d152a5;
  /* 10d15294 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d15297 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1529a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d1529c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1529f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d152a2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10d152a5:;
  /* 10d152a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d152a8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d152ab cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d152ae jne 0x10d1537d */
  if (!C.zf) goto L_10d1537d;
L_10d152b4:;
  /* 10d152b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d152b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d152ba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d152bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d152c0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d152c3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d152c6 je 0x10d15342 */
  if (C.zf) goto L_10d15342;
  /* 10d152c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d152cb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d152ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d152d0 je 0x10d15342 */
  if (C.zf) goto L_10d15342;
  /* 10d152d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d152d5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d152d7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d152d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d152db mov al, byte ptr [edx + 0x10d3fca1] */
  AL = (r8((uint32_t)(EDX + 0x10d3fca1)));
  /* 10d152e1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d152e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d152e6 je 0x10d15317 */
  if (C.zf) goto L_10d15317;
  /* 10d152e8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d152eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d152ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d152f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d152f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d152f5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d152f9 je 0x10d15317 */
  if (C.zf) goto L_10d15317;
  /* 10d152fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d152fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15301 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d15303 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d15305 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d15308 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1530b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10d1530e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15311 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15314 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d15317:;
  /* 10d15317 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d1531a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d1531c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1531f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d15322 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d15324 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15328 je 0x10d1533d */
  if (C.zf) goto L_10d1533d;
  /* 10d1532a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1532d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15330 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d15332 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d15334 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d15337 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1533a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10d1533d:;
  /* 10d1533d jmp 0x10d152b4 */
  goto L_10d152b4;
L_10d15342:;
  /* 10d15342 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d15345 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d15347 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1534a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d1534d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d1534f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15353 je 0x10d15364 */
  if (C.zf) goto L_10d15364;
  /* 10d15355 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d15358 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10d1535b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1535e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15361 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10d15364:;
  /* 10d15364 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15367 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1536a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1536d jne 0x10d15378 */
  if (!C.zf) goto L_10d15378;
  /* 10d1536f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15372 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15375 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d15378:;
  /* 10d15378 jmp 0x10d1544c */
  goto L_10d1544c;
L_10d1537d:;
  /* 10d1537d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d15380 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d15382 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15385 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d15388 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d1538a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1538e je 0x10d153a3 */
  if (C.zf) goto L_10d153a3;
  /* 10d15390 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d15393 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15396 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d15398 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d1539a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1539d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d153a0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10d153a3:;
  /* 10d153a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d153a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d153a8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10d153ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d153ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d153b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d153b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d153b7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d153bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d153bf mov dl, byte ptr [ecx + 0x10d3fca1] */
  DL = (r8((uint32_t)(ECX + 0x10d3fca1)));
  /* 10d153c5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d153c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d153ca je 0x10d153fb */
  if (C.zf) goto L_10d153fb;
  /* 10d153cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d153cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d153d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d153d4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d153d7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d153d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d153dd je 0x10d153f2 */
  if (C.zf) goto L_10d153f2;
  /* 10d153df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d153e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d153e5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d153e7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d153e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d153ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d153ef mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10d153f2:;
  /* 10d153f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d153f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d153f8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d153fb:;
  /* 10d153fb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d153fe and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d15404 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15407 je 0x10d15427 */
  if (C.zf) goto L_10d15427;
  /* 10d15409 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1540c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d15411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d15413 je 0x10d15427 */
  if (C.zf) goto L_10d15427;
  /* 10d15415 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d15418 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1541e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15421 jne 0x10d1537d */
  if (!C.zf) goto L_10d1537d;
L_10d15427:;
  /* 10d15427 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1542a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d15430 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d15432 jne 0x10d1543f */
  if (!C.zf) goto L_10d1543f;
  /* 10d15434 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15437 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1543a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1543d jmp 0x10d1544c */
  goto L_10d1544c;
L_10d1543f:;
  /* 10d1543f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15443 je 0x10d1544c */
  if (C.zf) goto L_10d1544c;
  /* 10d15445 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d15448 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10d1544c:;
  /* 10d1544c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10d15453:;
  /* 10d15453 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15456 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d15459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1545b je 0x10d1547e */
  if (C.zf) goto L_10d1547e;
L_10d1545d:;
  /* 10d1545d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15460 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d15463 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15466 je 0x10d15473 */
  if (C.zf) goto L_10d15473;
  /* 10d15468 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1546b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1546e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15471 jne 0x10d1547e */
  if (!C.zf) goto L_10d1547e;
L_10d15473:;
  /* 10d15473 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15476 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15479 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d1547c jmp 0x10d1545d */
  goto L_10d1545d;
L_10d1547e:;
  /* 10d1547e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15481 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d15484 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d15486 jne 0x10d1548d */
  if (!C.zf) goto L_10d1548d;
  /* 10d15488 jmp 0x10d1566b */
  goto L_10d1566b;
L_10d1548d:;
  /* 10d1548d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15491 je 0x10d154a4 */
  if (C.zf) goto L_10d154a4;
  /* 10d15493 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d15496 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d15499 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d1549b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1549e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d154a1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10d154a4:;
  /* 10d154a4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d154a7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d154a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d154ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d154af mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10d154b1:;
  /* 10d154b1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10d154b8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10d154bf:;
  /* 10d154bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d154c2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d154c5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d154c8 jne 0x10d154de */
  if (!C.zf) goto L_10d154de;
  /* 10d154ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d154cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d154d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d154d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d154d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d154d9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d154dc jmp 0x10d154bf */
  goto L_10d154bf;
L_10d154de:;
  /* 10d154de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d154e1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d154e4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d154e7 jne 0x10d1553a */
  if (!C.zf) goto L_10d1553a;
  /* 10d154e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d154ec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d154ee mov ecx, 2 */
  ECX = (0x2u);
  /* 10d154f3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d154f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d154f7 jne 0x10d15532 */
  if (!C.zf) goto L_10d15532;
  /* 10d154f9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d154fd je 0x10d1551f */
  if (C.zf) goto L_10d1551f;
  /* 10d154ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15502 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10d15506 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15509 jne 0x10d15516 */
  if (!C.zf) goto L_10d15516;
  /* 10d1550b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1550e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15511 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d15514 jmp 0x10d1551d */
  goto L_10d1551d;
L_10d15516:;
  /* 10d15516 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10d1551d:;
  /* 10d1551d jmp 0x10d15526 */
  goto L_10d15526;
L_10d1551f:;
  /* 10d1551f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10d15526:;
  /* 10d15526 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d15528 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1552c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10d1552f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10d15532:;
  /* 10d15532 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d15535 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d15537 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10d1553a:;
  /* 10d1553a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1553d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d15540 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d15543 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d15546 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d15548 je 0x10d1556e */
  if (C.zf) goto L_10d1556e;
  /* 10d1554a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1554e je 0x10d1555f */
  if (C.zf) goto L_10d1555f;
  /* 10d15550 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d15553 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10d15556 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d15559 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1555c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10d1555f:;
  /* 10d1555f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d15562 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d15564 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15567 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d1556a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d1556c jmp 0x10d1553a */
  goto L_10d1553a;
L_10d1556e:;
  /* 10d1556e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15571 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d15574 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d15576 je 0x10d15594 */
  if (C.zf) goto L_10d15594;
  /* 10d15578 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1557c jne 0x10d15599 */
  if (!C.zf) goto L_10d15599;
  /* 10d1557e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15581 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d15584 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15587 je 0x10d15594 */
  if (C.zf) goto L_10d15594;
  /* 10d15589 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1558c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1558f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15592 jne 0x10d15599 */
  if (!C.zf) goto L_10d15599;
L_10d15594:;
  /* 10d15594 jmp 0x10d15644 */
  goto L_10d15644;
L_10d15599:;
  /* 10d15599 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1559d je 0x10d15636 */
  if (C.zf) goto L_10d15636;
  /* 10d155a3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d155a7 je 0x10d155fd */
  if (C.zf) goto L_10d155fd;
  /* 10d155a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d155ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d155ae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d155b0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d155b2 mov cl, byte ptr [eax + 0x10d3fca1] */
  CL = (r8((uint32_t)(EAX + 0x10d3fca1)));
  /* 10d155b8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10d155bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d155bd je 0x10d155e8 */
  if (C.zf) goto L_10d155e8;
  /* 10d155bf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d155c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d155c5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d155c7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10d155c9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d155cc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d155cf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10d155d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d155d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d155d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d155db mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d155de mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d155e0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d155e3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d155e6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d155e8:;
  /* 10d155e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d155eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d155ee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d155f0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d155f2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d155f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d155f8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10d155fb jmp 0x10d15629 */
  goto L_10d15629;
L_10d155fd:;
  /* 10d155fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15600 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d15602 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d15604 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d15606 mov cl, byte ptr [eax + 0x10d3fca1] */
  CL = (r8((uint32_t)(EAX + 0x10d3fca1)));
  /* 10d1560c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1560f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d15611 je 0x10d15629 */
  if (C.zf) goto L_10d15629;
  /* 10d15613 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15616 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15619 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d1561c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d1561f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d15621 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15624 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d15627 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d15629:;
  /* 10d15629 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d1562c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d1562e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15631 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d15634 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d15636:;
  /* 10d15636 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15639 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1563c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1563f jmp 0x10d154b1 */
  goto L_10d154b1;
L_10d15644:;
  /* 10d15644 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15648 je 0x10d15659 */
  if (C.zf) goto L_10d15659;
  /* 10d1564a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1564d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10d15650 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d15653 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15656 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10d15659:;
  /* 10d15659 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d1565c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d1565e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15661 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d15664 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d15666 jmp 0x10d15453 */
  goto L_10d15453;
L_10d1566b:;
  /* 10d1566b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1566f je 0x10d15683 */
  if (C.zf) goto L_10d15683;
  /* 10d15671 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d15674 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d1567a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1567d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15680 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10d15683:;
  /* 10d15683 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d15686 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d15688 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1568b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1568e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d15690 mov esp, ebp */
  ESP = (EBP);
  /* 10d15692 pop ebp */
  EBP = (pop32());
  /* 10d15693 ret  */
  ESPCHK(0x10d15270u, _esp0);
  ESP += 4; return;
}

/* FUN_100056a0 @ 0x10d156a0 (537 bytes, 173 insns) */
void f_10d156a0(void) {
  FTRACE(0x10d156a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d156a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d156a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d156a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d156a6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10d156ad mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10d156b4 cmp dword ptr [0x10d3e57c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e57c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d156bb jne 0x10d156fa */
  if (!C.zf) goto L_10d156fa;
  /* 10d156bd call dword ptr [0x10d40304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40304))), 0x10d156c3u);
  /* 10d156c3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d156c6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d156ca je 0x10d156d8 */
  if (C.zf) goto L_10d156d8;
  /* 10d156cc mov dword ptr [0x10d3e57c], 1 */
  w32((uint32_t)(0x10d3e57c), (0x1u));
  /* 10d156d6 jmp 0x10d156fa */
  goto L_10d156fa;
L_10d156d8:;
  /* 10d156d8 call dword ptr [0x10d40300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40300))), 0x10d156deu);
  /* 10d156de mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d156e1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d156e5 je 0x10d156f3 */
  if (C.zf) goto L_10d156f3;
  /* 10d156e7 mov dword ptr [0x10d3e57c], 2 */
  w32((uint32_t)(0x10d3e57c), (0x2u));
  /* 10d156f1 jmp 0x10d156fa */
  goto L_10d156fa;
L_10d156f3:;
  /* 10d156f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d156f5 jmp 0x10d158b5 */
  goto L_10d158b5;
L_10d156fa:;
  /* 10d156fa cmp dword ptr [0x10d3e57c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e57c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15701 jne 0x10d157fe */
  if (!C.zf) goto L_10d157fe;
  /* 10d15707 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1570b jne 0x10d15723 */
  if (!C.zf) goto L_10d15723;
  /* 10d1570d call dword ptr [0x10d40304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40304))), 0x10d15713u);
  /* 10d15713 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d15716 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1571a jne 0x10d15723 */
  if (!C.zf) goto L_10d15723;
  /* 10d1571c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1571e jmp 0x10d158b5 */
  goto L_10d158b5;
L_10d15723:;
  /* 10d15723 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d15726 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d15729:;
  /* 10d15729 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1572c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1572e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10d15731 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d15733 je 0x10d15755 */
  if (C.zf) goto L_10d15755;
  /* 10d15735 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15738 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1573b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1573e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15741 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d15743 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10d15746 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d15748 jne 0x10d15753 */
  if (!C.zf) goto L_10d15753;
  /* 10d1574a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1574d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15750 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d15753:;
  /* 10d15753 jmp 0x10d15729 */
  goto L_10d15729;
L_10d15755:;
  /* 10d15755 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15758 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1575b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10d1575d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15760 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d15763 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15765 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15767 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15769 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1576b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1576e push edx */
  push32((uint32_t)(EDX));
  /* 10d1576f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d15772 push eax */
  push32((uint32_t)(EAX));
  /* 10d15773 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15775 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15777 call dword ptr [0x10d402fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402fc))), 0x10d1577du);
  /* 10d1577d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d15780 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15784 je 0x10d157a4 */
  if (C.zf) goto L_10d157a4;
  /* 10d15786 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10d15788 push 0x10d39b20 */
  push32((uint32_t)(0x10d39b20u));
  /* 10d1578d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1578f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d15792 push ecx */
  push32((uint32_t)(ECX));
  /* 10d15793 call 0x10d130d0 */
  push32(0x10d15798u); f_10d130d0();
  /* 10d15798 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1579b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d1579e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d157a2 jne 0x10d157b5 */
  if (!C.zf) goto L_10d157b5;
L_10d157a4:;
  /* 10d157a4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d157a7 push edx */
  push32((uint32_t)(EDX));
  /* 10d157a8 call dword ptr [0x10d402f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402f8))), 0x10d157aeu);
  /* 10d157ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d157b0 jmp 0x10d158b5 */
  goto L_10d158b5;
L_10d157b5:;
  /* 10d157b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d157b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d157b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d157bc push eax */
  push32((uint32_t)(EAX));
  /* 10d157bd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d157c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d157c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d157c4 push edx */
  push32((uint32_t)(EDX));
  /* 10d157c5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d157c8 push eax */
  push32((uint32_t)(EAX));
  /* 10d157c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d157cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d157cd call dword ptr [0x10d402fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402fc))), 0x10d157d3u);
  /* 10d157d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d157d5 jne 0x10d157ec */
  if (!C.zf) goto L_10d157ec;
  /* 10d157d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d157d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d157dc push ecx */
  push32((uint32_t)(ECX));
  /* 10d157dd call 0x10d13b60 */
  push32(0x10d157e2u); f_10d13b60();
  /* 10d157e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d157e5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10d157ec:;
  /* 10d157ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d157ef push edx */
  push32((uint32_t)(EDX));
  /* 10d157f0 call dword ptr [0x10d402f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402f8))), 0x10d157f6u);
  /* 10d157f6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d157f9 jmp 0x10d158b5 */
  goto L_10d158b5;
L_10d157fe:;
  /* 10d157fe cmp dword ptr [0x10d3e57c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e57c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15805 jne 0x10d158b3 */
  if (!C.zf) goto L_10d158b3;
  /* 10d1580b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1580f jne 0x10d15827 */
  if (!C.zf) goto L_10d15827;
  /* 10d15811 call dword ptr [0x10d40300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40300))), 0x10d15817u);
  /* 10d15817 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d1581a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1581e jne 0x10d15827 */
  if (!C.zf) goto L_10d15827;
  /* 10d15820 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d15822 jmp 0x10d158b5 */
  goto L_10d158b5;
L_10d15827:;
  /* 10d15827 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1582a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d1582d:;
  /* 10d1582d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d15830 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d15833 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d15835 je 0x10d15855 */
  if (C.zf) goto L_10d15855;
  /* 10d15837 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1583a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1583d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d15840 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d15843 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d15846 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d15848 jne 0x10d15853 */
  if (!C.zf) goto L_10d15853;
  /* 10d1584a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1584d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15850 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d15853:;
  /* 10d15853 jmp 0x10d1582d */
  goto L_10d1582d;
L_10d15855:;
  /* 10d15855 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d15858 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1585b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1585e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d15861 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10d15866 push 0x10d39b20 */
  push32((uint32_t)(0x10d39b20u));
  /* 10d1586b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1586d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d15870 push edx */
  push32((uint32_t)(EDX));
  /* 10d15871 call 0x10d130d0 */
  push32(0x10d15876u); f_10d130d0();
  /* 10d15876 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15879 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d1587c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15880 jne 0x10d15890 */
  if (!C.zf) goto L_10d15890;
  /* 10d15882 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d15885 push eax */
  push32((uint32_t)(EAX));
  /* 10d15886 call dword ptr [0x10d402f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402f4))), 0x10d1588cu);
  /* 10d1588c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1588e jmp 0x10d158b5 */
  goto L_10d158b5;
L_10d15890:;
  /* 10d15890 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d15893 push ecx */
  push32((uint32_t)(ECX));
  /* 10d15894 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d15897 push edx */
  push32((uint32_t)(EDX));
  /* 10d15898 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1589b push eax */
  push32((uint32_t)(EAX));
  /* 10d1589c call 0x10d199b0 */
  push32(0x10d158a1u); f_10d199b0();
  /* 10d158a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d158a4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d158a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d158a8 call dword ptr [0x10d402f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402f4))), 0x10d158aeu);
  /* 10d158ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d158b1 jmp 0x10d158b5 */
  goto L_10d158b5;
L_10d158b3:;
  /* 10d158b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d158b5:;
  /* 10d158b5 mov esp, ebp */
  ESP = (EBP);
  /* 10d158b7 pop ebp */
  EBP = (pop32());
  /* 10d158b8 ret  */
  ESPCHK(0x10d156a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100058c0 @ 0x10d158c0 (77 bytes, 25 insns) */
void f_10d158c0(void) {
  FTRACE(0x10d158c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d158c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d158c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d158c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d158c5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10d158ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d158cc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d158d0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10d158d3 push eax */
  push32((uint32_t)(EAX));
  /* 10d158d4 call dword ptr [0x10d4030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4030c))), 0x10d158dau);
  /* 10d158da mov dword ptr [0x10d3fdcc], eax */
  w32((uint32_t)(0x10d3fdcc), (EAX));
  /* 10d158df cmp dword ptr [0x10d3fdcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3fdcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d158e6 jne 0x10d158ec */
  if (!C.zf) goto L_10d158ec;
  /* 10d158e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d158ea jmp 0x10d1590b */
  goto L_10d1590b;
L_10d158ec:;
  /* 10d158ec call 0x10d17370 */
  push32(0x10d158f1u); f_10d17370();
  /* 10d158f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d158f3 jne 0x10d15906 */
  if (!C.zf) goto L_10d15906;
  /* 10d158f5 mov ecx, dword ptr [0x10d3fdcc] */
  ECX = (r32((uint32_t)(0x10d3fdcc)));
  /* 10d158fb push ecx */
  push32((uint32_t)(ECX));
  /* 10d158fc call dword ptr [0x10d40308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40308))), 0x10d15902u);
  /* 10d15902 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d15904 jmp 0x10d1590b */
  goto L_10d1590b;
L_10d15906:;
  /* 10d15906 mov eax, 1 */
  EAX = (0x1u);
L_10d1590b:;
  /* 10d1590b pop ebp */
  EBP = (pop32());
  /* 10d1590c ret  */
  ESPCHK(0x10d158c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005910 @ 0x10d15910 (156 bytes, 48 insns) */
void f_10d15910(void) {
  FTRACE(0x10d15910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d15910 push ebp */
  push32((uint32_t)(EBP));
  /* 10d15911 mov ebp, esp */
  EBP = (ESP);
  /* 10d15913 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d15916 mov eax, dword ptr [0x10d3fdc8] */
  EAX = (r32((uint32_t)(0x10d3fdc8)));
  /* 10d1591b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1591e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d15925 jmp 0x10d15930 */
  goto L_10d15930;
L_10d15927:;
  /* 10d15927 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1592a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1592d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d15930:;
  /* 10d15930 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15933 cmp edx, dword ptr [0x10d3fdc4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d3fdc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15939 jge 0x10d15986 */
  if ((C.sf==C.of)) goto L_10d15986;
  /* 10d1593b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10d15940 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10d15945 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15948 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d1594b push ecx */
  push32((uint32_t)(ECX));
  /* 10d1594c call dword ptr [0x10d40314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40314))), 0x10d15952u);
  /* 10d15952 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10d15957 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15959 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1595c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d1595f push eax */
  push32((uint32_t)(EAX));
  /* 10d15960 call dword ptr [0x10d40314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40314))), 0x10d15966u);
  /* 10d15966 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15969 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d1596c push edx */
  push32((uint32_t)(EDX));
  /* 10d1596d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1596f mov eax, dword ptr [0x10d3fdcc] */
  EAX = (r32((uint32_t)(0x10d3fdcc)));
  /* 10d15974 push eax */
  push32((uint32_t)(EAX));
  /* 10d15975 call dword ptr [0x10d40310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40310))), 0x10d1597bu);
  /* 10d1597b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1597e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15981 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d15984 jmp 0x10d15927 */
  goto L_10d15927;
L_10d15986:;
  /* 10d15986 mov edx, dword ptr [0x10d3fdc8] */
  EDX = (r32((uint32_t)(0x10d3fdc8)));
  /* 10d1598c push edx */
  push32((uint32_t)(EDX));
  /* 10d1598d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1598f mov eax, dword ptr [0x10d3fdcc] */
  EAX = (r32((uint32_t)(0x10d3fdcc)));
  /* 10d15994 push eax */
  push32((uint32_t)(EAX));
  /* 10d15995 call dword ptr [0x10d40310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40310))), 0x10d1599bu);
  /* 10d1599b mov ecx, dword ptr [0x10d3fdcc] */
  ECX = (r32((uint32_t)(0x10d3fdcc)));
  /* 10d159a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d159a2 call dword ptr [0x10d40308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40308))), 0x10d159a8u);
  /* 10d159a8 mov esp, ebp */
  ESP = (EBP);
  /* 10d159aa pop ebp */
  EBP = (pop32());
  /* 10d159ab ret  */
  ESPCHK(0x10d15910u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10d159b0 (73 bytes, 19 insns) */
void f_10d159b0(void) {
  FTRACE(0x10d159b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d159b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d159b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d159b3 cmp dword ptr [0x10d3e410], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e410))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d159ba je 0x10d159ce */
  if (C.zf) goto L_10d159ce;
  /* 10d159bc cmp dword ptr [0x10d3e410], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e410))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d159c3 jne 0x10d159f7 */
  if (!C.zf) goto L_10d159f7;
  /* 10d159c5 cmp dword ptr [0x10d3e414], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e414))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d159cc jne 0x10d159f7 */
  if (!C.zf) goto L_10d159f7;
L_10d159ce:;
  /* 10d159ce push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10d159d3 call 0x10d15a00 */
  push32(0x10d159d8u); f_10d15a00();
  /* 10d159d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d159db cmp dword ptr [0x10d3e580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d159e2 je 0x10d159ea */
  if (C.zf) goto L_10d159ea;
  /* 10d159e4 call dword ptr [0x10d3e580] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3e580))), 0x10d159eau);
L_10d159ea:;
  /* 10d159ea push 0xff */
  push32((uint32_t)(0xffu));
  /* 10d159ef call 0x10d15a00 */
  push32(0x10d159f4u); f_10d15a00();
  /* 10d159f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d159f7:;
  /* 10d159f7 pop ebp */
  EBP = (pop32());
  /* 10d159f8 ret  */
  ESPCHK(0x10d159b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a00 @ 0x10d15a00 (447 bytes, 131 insns) */
void f_10d15a00(void) {
  FTRACE(0x10d15a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d15a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d15a01 mov ebp, esp */
  EBP = (ESP);
  /* 10d15a03 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d15a09 push ebx */
  push32((uint32_t)(EBX));
  /* 10d15a0a push esi */
  push32((uint32_t)(ESI));
  /* 10d15a0b push edi */
  push32((uint32_t)(EDI));
  /* 10d15a0c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d15a13 jmp 0x10d15a1e */
  goto L_10d15a1e;
L_10d15a15:;
  /* 10d15a15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15a18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15a1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d15a1e:;
  /* 10d15a1e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15a22 jae 0x10d15a37 */
  if (!C.cf) goto L_10d15a37;
  /* 10d15a24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15a27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d15a2a cmp edx, dword ptr [ecx*8 + 0x10d3cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10d3cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15a31 jne 0x10d15a35 */
  if (!C.zf) goto L_10d15a35;
  /* 10d15a33 jmp 0x10d15a37 */
  goto L_10d15a37;
L_10d15a35:;
  /* 10d15a35 jmp 0x10d15a15 */
  goto L_10d15a15;
L_10d15a37:;
  /* 10d15a37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15a3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d15a3d cmp ecx, dword ptr [eax*8 + 0x10d3cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10d3cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15a44 jne 0x10d15bb8 */
  if (!C.zf) goto L_10d15bb8;
  /* 10d15a4a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15a51 je 0x10d15a74 */
  if (C.zf) goto L_10d15a74;
  /* 10d15a53 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15a56 mov eax, dword ptr [edx*8 + 0x10d3cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10d3cab4)));
  /* 10d15a5d push eax */
  push32((uint32_t)(EAX));
  /* 10d15a5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15a60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15a62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15a64 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d15a66 call 0x10d12190 */
  push32(0x10d15a6bu); f_10d12190();
  /* 10d15a6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15a6e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15a71 jne 0x10d15a74 */
  if (!C.zf) goto L_10d15a74;
  /* 10d15a73 int3  */
  x86_unimpl("int3 @ 0x10d15a73");
L_10d15a74:;
  /* 10d15a74 cmp dword ptr [0x10d3e410], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e410))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15a7b je 0x10d15a8f */
  if (C.zf) goto L_10d15a8f;
  /* 10d15a7d cmp dword ptr [0x10d3e410], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e410))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15a84 jne 0x10d15ac8 */
  if (!C.zf) goto L_10d15ac8;
  /* 10d15a86 cmp dword ptr [0x10d3e414], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e414))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15a8d jne 0x10d15ac8 */
  if (!C.zf) goto L_10d15ac8;
L_10d15a8f:;
  /* 10d15a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15a91 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10d15a94 push ecx */
  push32((uint32_t)(ECX));
  /* 10d15a95 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15a98 mov eax, dword ptr [edx*8 + 0x10d3cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10d3cab4)));
  /* 10d15a9f push eax */
  push32((uint32_t)(EAX));
  /* 10d15aa0 call 0x10d15f00 */
  push32(0x10d15aa5u); f_10d15f00();
  /* 10d15aa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15aa8 push eax */
  push32((uint32_t)(EAX));
  /* 10d15aa9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15aac mov edx, dword ptr [ecx*8 + 0x10d3cab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10d3cab4)));
  /* 10d15ab3 push edx */
  push32((uint32_t)(EDX));
  /* 10d15ab4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10d15ab6 call dword ptr [0x10d4028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4028c))), 0x10d15abcu);
  /* 10d15abc push eax */
  push32((uint32_t)(EAX));
  /* 10d15abd call dword ptr [0x10d40290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40290))), 0x10d15ac3u);
  /* 10d15ac3 jmp 0x10d15bb8 */
  goto L_10d15bb8;
L_10d15ac8:;
  /* 10d15ac8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15acf je 0x10d15bb8 */
  if (C.zf) goto L_10d15bb8;
  /* 10d15ad5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10d15ada lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10d15ae0 push eax */
  push32((uint32_t)(EAX));
  /* 10d15ae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15ae3 call dword ptr [0x10d402a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402a8))), 0x10d15ae9u);
  /* 10d15ae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d15aeb jne 0x10d15b01 */
  if (!C.zf) goto L_10d15b01;
  /* 10d15aed push 0x10d39388 */
  push32((uint32_t)(0x10d39388u));
  /* 10d15af2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10d15af8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d15af9 call 0x10d16080 */
  push32(0x10d15afeu); f_10d16080();
  /* 10d15afe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d15b01:;
  /* 10d15b01 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10d15b07 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d15b0a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d15b0d push eax */
  push32((uint32_t)(EAX));
  /* 10d15b0e call 0x10d15f00 */
  push32(0x10d15b13u); f_10d15f00();
  /* 10d15b13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15b16 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15b19 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15b1c jbe 0x10d15b4a */
  if ((C.cf||C.zf)) goto L_10d15b4a;
  /* 10d15b1e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10d15b24 push ecx */
  push32((uint32_t)(ECX));
  /* 10d15b25 call 0x10d15f00 */
  push32(0x10d15b2au); f_10d15f00();
  /* 10d15b2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15b2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d15b30 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10d15b34 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d15b37 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d15b39 push 0x10d39384 */
  push32((uint32_t)(0x10d39384u));
  /* 10d15b3e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d15b41 push ecx */
  push32((uint32_t)(ECX));
  /* 10d15b42 call 0x10d168f0 */
  push32(0x10d15b47u); f_10d168f0();
  /* 10d15b47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d15b4a:;
  /* 10d15b4a push 0x10d39ddc */
  push32((uint32_t)(0x10d39ddcu));
  /* 10d15b4f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10d15b55 push edx */
  push32((uint32_t)(EDX));
  /* 10d15b56 call 0x10d16080 */
  push32(0x10d15b5bu); f_10d16080();
  /* 10d15b5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15b5e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d15b61 push eax */
  push32((uint32_t)(EAX));
  /* 10d15b62 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10d15b68 push ecx */
  push32((uint32_t)(ECX));
  /* 10d15b69 call 0x10d16090 */
  push32(0x10d15b6eu); f_10d16090();
  /* 10d15b6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15b71 push 0x10d392fc */
  push32((uint32_t)(0x10d392fcu));
  /* 10d15b76 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10d15b7c push edx */
  push32((uint32_t)(EDX));
  /* 10d15b7d call 0x10d16090 */
  push32(0x10d15b82u); f_10d16090();
  /* 10d15b82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15b85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15b88 mov ecx, dword ptr [eax*8 + 0x10d3cab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10d3cab4)));
  /* 10d15b8f push ecx */
  push32((uint32_t)(ECX));
  /* 10d15b90 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10d15b96 push edx */
  push32((uint32_t)(EDX));
  /* 10d15b97 call 0x10d16090 */
  push32(0x10d15b9cu); f_10d16090();
  /* 10d15b9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15b9f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10d15ba4 push 0x10d39db4 */
  push32((uint32_t)(0x10d39db4u));
  /* 10d15ba9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10d15baf push eax */
  push32((uint32_t)(EAX));
  /* 10d15bb0 call 0x10d16830 */
  push32(0x10d15bb5u); f_10d16830();
  /* 10d15bb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d15bb8:;
  /* 10d15bb8 pop edi */
  EDI = (pop32());
  /* 10d15bb9 pop esi */
  ESI = (pop32());
  /* 10d15bba pop ebx */
  EBX = (pop32());
  /* 10d15bbb mov esp, ebp */
  ESP = (EBP);
  /* 10d15bbd pop ebp */
  EBP = (pop32());
  /* 10d15bbe ret  */
  ESPCHK(0x10d15a00u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10d15bc0 (80 bytes, 27 insns) */
void f_10d15bc0(void) {
  FTRACE(0x10d15bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d15bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d15bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10d15bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d15bc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d15bcb jmp 0x10d15bd6 */
  goto L_10d15bd6;
L_10d15bcd:;
  /* 10d15bcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15bd0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15bd3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d15bd6:;
  /* 10d15bd6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15bda jae 0x10d15bef */
  if (!C.cf) goto L_10d15bef;
  /* 10d15bdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15bdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d15be2 cmp edx, dword ptr [ecx*8 + 0x10d3cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10d3cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15be9 jne 0x10d15bed */
  if (!C.zf) goto L_10d15bed;
  /* 10d15beb jmp 0x10d15bef */
  goto L_10d15bef;
L_10d15bed:;
  /* 10d15bed jmp 0x10d15bcd */
  goto L_10d15bcd;
L_10d15bef:;
  /* 10d15bef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15bf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d15bf5 cmp ecx, dword ptr [eax*8 + 0x10d3cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10d3cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15bfc jne 0x10d15c0a */
  if (!C.zf) goto L_10d15c0a;
  /* 10d15bfe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15c01 mov eax, dword ptr [edx*8 + 0x10d3cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10d3cab4)));
  /* 10d15c08 jmp 0x10d15c0c */
  goto L_10d15c0c;
L_10d15c0a:;
  /* 10d15c0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d15c0c:;
  /* 10d15c0c mov esp, ebp */
  ESP = (EBP);
  /* 10d15c0e pop ebp */
  EBP = (pop32());
  /* 10d15c0f ret  */
  ESPCHK(0x10d15bc0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10d15c10 (66 bytes, 28 insns) */
void f_10d15c10(void) {
  FTRACE(0x10d15c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d15c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d15c11 mov ebp, esp */
  EBP = (ESP);
  /* 10d15c13 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15c17 jne 0x10d15c37 */
  if (!C.zf) goto L_10d15c37;
  /* 10d15c19 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15c1d jge 0x10d15c37 */
  if ((C.sf==C.of)) goto L_10d15c37;
  /* 10d15c1f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d15c21 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d15c24 push eax */
  push32((uint32_t)(EAX));
  /* 10d15c25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d15c28 push ecx */
  push32((uint32_t)(ECX));
  /* 10d15c29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d15c2c push edx */
  push32((uint32_t)(EDX));
  /* 10d15c2d call 0x10d15c60 */
  push32(0x10d15c32u); f_10d15c60();
  /* 10d15c32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15c35 jmp 0x10d15c4d */
  goto L_10d15c4d;
L_10d15c37:;
  /* 10d15c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15c39 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d15c3c push eax */
  push32((uint32_t)(EAX));
  /* 10d15c3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d15c40 push ecx */
  push32((uint32_t)(ECX));
  /* 10d15c41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d15c44 push edx */
  push32((uint32_t)(EDX));
  /* 10d15c45 call 0x10d15c60 */
  push32(0x10d15c4au); f_10d15c60();
  /* 10d15c4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d15c4d:;
  /* 10d15c4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d15c50 pop ebp */
  EBP = (pop32());
  /* 10d15c51 ret  */
  ESPCHK(0x10d15c10u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10d15c60 (194 bytes, 71 insns) */
void f_10d15c60(void) {
  FTRACE(0x10d15c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d15c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10d15c61 mov ebp, esp */
  EBP = (ESP);
  /* 10d15c63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d15c66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d15c69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d15c6c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15c70 je 0x10d15c89 */
  if (C.zf) goto L_10d15c89;
  /* 10d15c72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15c75 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10d15c78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15c7b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15c7e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d15c81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d15c84 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d15c86 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10d15c89:;
  /* 10d15c89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15c8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d15c8f:;
  /* 10d15c8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d15c92 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d15c94 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d15c97 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d15c9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d15c9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d15c9f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d15ca2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d15ca5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15ca9 jbe 0x10d15cc1 */
  if ((C.cf||C.zf)) goto L_10d15cc1;
  /* 10d15cab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d15cae add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15cb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15cb4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d15cb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15cb9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15cbc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d15cbf jmp 0x10d15cd5 */
  goto L_10d15cd5;
L_10d15cc1:;
  /* 10d15cc1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d15cc4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15cc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15cca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d15ccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15ccf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15cd2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d15cd5:;
  /* 10d15cd5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15cd9 ja 0x10d15c8f */
  if ((!C.cf&&!C.zf)) goto L_10d15c8f;
  /* 10d15cdb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15cde mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10d15ce1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15ce4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d15ce7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d15cea:;
  /* 10d15cea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15ced mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d15cef mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10d15cf2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15cf5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15cf8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d15cfa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d15cfc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15cff mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10d15d02 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10d15d04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15d07 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d15d0a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d15d0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15d10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15d13 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d15d16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15d19 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15d1c jb 0x10d15cea */
  if (C.cf) goto L_10d15cea;
  /* 10d15d1e mov esp, ebp */
  ESP = (EBP);
  /* 10d15d20 pop ebp */
  EBP = (pop32());
  /* 10d15d21 ret  */
  ESPCHK(0x10d15c60u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10d15d30 (63 bytes, 24 insns) */
void f_10d15d30(void) {
  FTRACE(0x10d15d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d15d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d15d31 mov ebp, esp */
  EBP = (ESP);
  /* 10d15d33 push ecx */
  push32((uint32_t)(ECX));
  /* 10d15d34 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15d38 jne 0x10d15d49 */
  if (!C.zf) goto L_10d15d49;
  /* 10d15d3a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15d3e jge 0x10d15d49 */
  if ((C.sf==C.of)) goto L_10d15d49;
  /* 10d15d40 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d15d47 jmp 0x10d15d50 */
  goto L_10d15d50;
L_10d15d49:;
  /* 10d15d49 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d15d50:;
  /* 10d15d50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15d53 push eax */
  push32((uint32_t)(EAX));
  /* 10d15d54 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d15d57 push ecx */
  push32((uint32_t)(ECX));
  /* 10d15d58 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d15d5b push edx */
  push32((uint32_t)(EDX));
  /* 10d15d5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d15d5f push eax */
  push32((uint32_t)(EAX));
  /* 10d15d60 call 0x10d15c60 */
  push32(0x10d15d65u); f_10d15c60();
  /* 10d15d65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15d68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d15d6b mov esp, ebp */
  ESP = (EBP);
  /* 10d15d6d pop ebp */
  EBP = (pop32());
  /* 10d15d6e ret  */
  ESPCHK(0x10d15d30u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10d15d70 (30 bytes, 14 insns) */
void f_10d15d70(void) {
  FTRACE(0x10d15d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d15d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10d15d71 mov ebp, esp */
  EBP = (ESP);
  /* 10d15d73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15d75 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d15d78 push eax */
  push32((uint32_t)(EAX));
  /* 10d15d79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d15d7c push ecx */
  push32((uint32_t)(ECX));
  /* 10d15d7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d15d80 push edx */
  push32((uint32_t)(EDX));
  /* 10d15d81 call 0x10d15c60 */
  push32(0x10d15d86u); f_10d15c60();
  /* 10d15d86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15d89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d15d8c pop ebp */
  EBP = (pop32());
  /* 10d15d8d ret  */
  ESPCHK(0x10d15d70u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10d15d90 (72 bytes, 28 insns) */
void f_10d15d90(void) {
  FTRACE(0x10d15d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d15d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10d15d91 mov ebp, esp */
  EBP = (ESP);
  /* 10d15d93 push ecx */
  push32((uint32_t)(ECX));
  /* 10d15d94 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15d98 jne 0x10d15db1 */
  if (!C.zf) goto L_10d15db1;
  /* 10d15d9a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15d9e jg 0x10d15db1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d15db1;
  /* 10d15da0 jl 0x10d15da8 */
  if ((C.sf!=C.of)) goto L_10d15da8;
  /* 10d15da2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15da6 jae 0x10d15db1 */
  if (!C.cf) goto L_10d15db1;
L_10d15da8:;
  /* 10d15da8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d15daf jmp 0x10d15db8 */
  goto L_10d15db8;
L_10d15db1:;
  /* 10d15db1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d15db8:;
  /* 10d15db8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15dbb push eax */
  push32((uint32_t)(EAX));
  /* 10d15dbc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d15dbf push ecx */
  push32((uint32_t)(ECX));
  /* 10d15dc0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d15dc3 push edx */
  push32((uint32_t)(EDX));
  /* 10d15dc4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d15dc7 push eax */
  push32((uint32_t)(EAX));
  /* 10d15dc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d15dcb push ecx */
  push32((uint32_t)(ECX));
  /* 10d15dcc call 0x10d15de0 */
  push32(0x10d15dd1u); f_10d15de0();
  /* 10d15dd1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d15dd4 mov esp, ebp */
  ESP = (EBP);
  /* 10d15dd6 pop ebp */
  EBP = (pop32());
  /* 10d15dd7 ret  */
  ESPCHK(0x10d15d90u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10d15de0 (242 bytes, 91 insns) */
void f_10d15de0(void) {
  FTRACE(0x10d15de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d15de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d15de1 mov ebp, esp */
  EBP = (ESP);
  /* 10d15de3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d15de6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d15de9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d15dec cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15df0 je 0x10d15e14 */
  if (C.zf) goto L_10d15e14;
  /* 10d15df2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15df5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10d15df8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15dfb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15dfe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d15e01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d15e04 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d15e06 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d15e09 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15e0c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d15e0e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d15e11 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10d15e14:;
  /* 10d15e14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15e17 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d15e1a:;
  /* 10d15e1a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d15e1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d15e1f push ecx */
  push32((uint32_t)(ECX));
  /* 10d15e20 push eax */
  push32((uint32_t)(EAX));
  /* 10d15e21 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d15e24 push edx */
  push32((uint32_t)(EDX));
  /* 10d15e25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d15e28 push eax */
  push32((uint32_t)(EAX));
  /* 10d15e29 call 0x10d19d60 */
  push32(0x10d15e2eu); f_10d19d60();
  /* 10d15e2e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d15e31 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d15e34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d15e36 push edx */
  push32((uint32_t)(EDX));
  /* 10d15e37 push ecx */
  push32((uint32_t)(ECX));
  /* 10d15e38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d15e3b push eax */
  push32((uint32_t)(EAX));
  /* 10d15e3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d15e3f push ecx */
  push32((uint32_t)(ECX));
  /* 10d15e40 call 0x10d19cf0 */
  push32(0x10d15e45u); f_10d19cf0();
  /* 10d15e45 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d15e48 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10d15e4b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15e4f jbe 0x10d15e67 */
  if ((C.cf||C.zf)) goto L_10d15e67;
  /* 10d15e51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d15e54 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15e57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15e5a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d15e5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15e5f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15e62 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d15e65 jmp 0x10d15e7b */
  goto L_10d15e7b;
L_10d15e67:;
  /* 10d15e67 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d15e6a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15e6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15e70 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d15e72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15e75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15e78 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d15e7b:;
  /* 10d15e7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15e7f ja 0x10d15e1a */
  if ((!C.cf&&!C.zf)) goto L_10d15e1a;
  /* 10d15e81 jb 0x10d15e89 */
  if (C.cf) goto L_10d15e89;
  /* 10d15e83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15e87 ja 0x10d15e1a */
  if ((!C.cf&&!C.zf)) goto L_10d15e1a;
L_10d15e89:;
  /* 10d15e89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15e8c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10d15e8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15e92 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d15e95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d15e98:;
  /* 10d15e98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15e9b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d15e9d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10d15ea0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15ea3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15ea6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d15ea8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d15eaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15ead mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10d15eb0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10d15eb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d15eb5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d15eb8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d15ebb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15ebe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15ec1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d15ec4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d15ec7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15eca jb 0x10d15e98 */
  if (C.cf) goto L_10d15e98;
  /* 10d15ecc mov esp, ebp */
  ESP = (EBP);
  /* 10d15ece pop ebp */
  EBP = (pop32());
  /* 10d15ecf ret 0x14 */
  ESPCHK(0x10d15de0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10d15ee0 (31 bytes, 15 insns) */
void f_10d15ee0(void) {
  FTRACE(0x10d15ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d15ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d15ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10d15ee3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15ee5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d15ee8 push eax */
  push32((uint32_t)(EAX));
  /* 10d15ee9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d15eec push ecx */
  push32((uint32_t)(ECX));
  /* 10d15eed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d15ef0 push edx */
  push32((uint32_t)(EDX));
  /* 10d15ef1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d15ef4 push eax */
  push32((uint32_t)(EAX));
  /* 10d15ef5 call 0x10d15de0 */
  push32(0x10d15efau); f_10d15de0();
  /* 10d15efa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d15efd pop ebp */
  EBP = (pop32());
  /* 10d15efe ret  */
  ESPCHK(0x10d15ee0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10d15f00 (123 bytes, 44 insns) */
void f_10d15f00(void) {
  FTRACE(0x10d15f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d15f00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d15f04 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10d15f0a je 0x10d15f20 */
  if (C.zf) goto L_10d15f20;
L_10d15f0c:;
  /* 10d15f0c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10d15f0e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10d15f0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d15f11 je 0x10d15f53 */
  if (C.zf) goto L_10d15f53;
  /* 10d15f13 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10d15f19 jne 0x10d15f0c */
  if (!C.zf) goto L_10d15f0c;
  /* 10d15f1b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10d15f20:;
  /* 10d15f20 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10d15f22 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10d15f27 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15f29 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d15f2c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d15f2e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15f31 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10d15f36 je 0x10d15f20 */
  if (C.zf) goto L_10d15f20;
  /* 10d15f38 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10d15f3b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d15f3d je 0x10d15f71 */
  if (C.zf) goto L_10d15f71;
  /* 10d15f3f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10d15f41 je 0x10d15f67 */
  if (C.zf) goto L_10d15f67;
  /* 10d15f43 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10d15f48 je 0x10d15f5d */
  if (C.zf) goto L_10d15f5d;
  /* 10d15f4a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10d15f4f je 0x10d15f53 */
  if (C.zf) goto L_10d15f53;
  /* 10d15f51 jmp 0x10d15f20 */
  goto L_10d15f20;
L_10d15f53:;
  /* 10d15f53 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10d15f56 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d15f5a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d15f5c ret  */
  ESPCHK(0x10d15f00u, _esp0);
  ESP += 4; return;
L_10d15f5d:;
  /* 10d15f5d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10d15f60 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d15f64 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d15f66 ret  */
  ESPCHK(0x10d15f00u, _esp0);
  ESP += 4; return;
L_10d15f67:;
  /* 10d15f67 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10d15f6a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d15f6e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d15f70 ret  */
  ESPCHK(0x10d15f00u, _esp0);
  ESP += 4; return;
L_10d15f71:;
  /* 10d15f71 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10d15f74 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d15f78 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d15f7a ret  */
  ESPCHK(0x10d15f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f80 @ 0x10d15f80 (249 bytes, 93 insns) */
void f_10d15f80(void) {
  FTRACE(0x10d15f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d15f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10d15f81 mov ebp, esp */
  EBP = (ESP);
  /* 10d15f83 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d15f86 push ebx */
  push32((uint32_t)(EBX));
  /* 10d15f87 push esi */
  push32((uint32_t)(ESI));
  /* 10d15f88 push edi */
  push32((uint32_t)(EDI));
  /* 10d15f89 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10d15f8c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d15f8f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10d15f92 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10d15f95:;
  /* 10d15f95 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15f99 jne 0x10d15fb9 */
  if (!C.zf) goto L_10d15fb9;
  /* 10d15f9b push 0x10d39e14 */
  push32((uint32_t)(0x10d39e14u));
  /* 10d15fa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15fa2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10d15fa4 push 0x10d39e08 */
  push32((uint32_t)(0x10d39e08u));
  /* 10d15fa9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d15fab call 0x10d12190 */
  push32(0x10d15fb0u); f_10d12190();
  /* 10d15fb0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15fb3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15fb6 jne 0x10d15fb9 */
  if (!C.zf) goto L_10d15fb9;
  /* 10d15fb8 int3  */
  x86_unimpl("int3 @ 0x10d15fb8");
L_10d15fb9:;
  /* 10d15fb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d15fbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d15fbd jne 0x10d15f95 */
  if (!C.zf) goto L_10d15f95;
L_10d15fbf:;
  /* 10d15fbf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15fc3 jne 0x10d15fe3 */
  if (!C.zf) goto L_10d15fe3;
  /* 10d15fc5 push 0x10d39df8 */
  push32((uint32_t)(0x10d39df8u));
  /* 10d15fca push 0 */
  push32((uint32_t)(0x0u));
  /* 10d15fcc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10d15fce push 0x10d39e08 */
  push32((uint32_t)(0x10d39e08u));
  /* 10d15fd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d15fd5 call 0x10d12190 */
  push32(0x10d15fdau); f_10d12190();
  /* 10d15fda add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d15fdd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d15fe0 jne 0x10d15fe3 */
  if (!C.zf) goto L_10d15fe3;
  /* 10d15fe2 int3  */
  x86_unimpl("int3 @ 0x10d15fe2");
L_10d15fe3:;
  /* 10d15fe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d15fe5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d15fe7 jne 0x10d15fbf */
  if (!C.zf) goto L_10d15fbf;
  /* 10d15fe9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d15fec mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10d15ff3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d15ff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d15ff9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d15ffc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d15fff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16002 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d16004 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d16007 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1600a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10d1600d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d16010 push edx */
  push32((uint32_t)(EDX));
  /* 10d16011 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d16014 push eax */
  push32((uint32_t)(EAX));
  /* 10d16015 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d16018 push ecx */
  push32((uint32_t)(ECX));
  /* 10d16019 call 0x10d1a060 */
  push32(0x10d1601eu); f_10d1a060();
  /* 10d1601e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16021 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d16024 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d16027 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d1602a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1602d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d16030 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10d16033 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d16036 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1603a jl 0x10d1605e */
  if ((C.sf!=C.of)) goto L_10d1605e;
  /* 10d1603c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1603f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d16041 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10d16044 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d16046 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1604c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10d1604f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d16052 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d16054 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16057 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1605a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d1605c jmp 0x10d1606f */
  goto L_10d1606f;
L_10d1605e:;
  /* 10d1605e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d16061 push eax */
  push32((uint32_t)(EAX));
  /* 10d16062 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d16064 call 0x10d19de0 */
  push32(0x10d16069u); f_10d19de0();
  /* 10d16069 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1606c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10d1606f:;
  /* 10d1606f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d16072 pop edi */
  EDI = (pop32());
  /* 10d16073 pop esi */
  ESI = (pop32());
  /* 10d16074 pop ebx */
  EBX = (pop32());
  /* 10d16075 mov esp, ebp */
  ESP = (EBP);
  /* 10d16077 pop ebp */
  EBP = (pop32());
  /* 10d16078 ret  */
  ESPCHK(0x10d15f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006080 @ 0x10d16080 (7 bytes, 3 insns) */
void f_10d16080(void) {
  FTRACE(0x10d16080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16080 push edi */
  push32((uint32_t)(EDI));
  /* 10d16081 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10d16085 jmp 0x10d160f1 */
  jmp_ind(0x10d160f1u); return;
}

/* FUN_10006090 @ 0x10d16090 (224 bytes, 84 insns) */
void f_10d16090(void) {
  FTRACE(0x10d16090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16090 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d16094 push edi */
  push32((uint32_t)(EDI));
  /* 10d16095 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10d1609b je 0x10d160ac */
  if (C.zf) goto L_10d160ac;
L_10d1609d:;
  /* 10d1609d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10d1609f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10d160a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d160a2 je 0x10d160df */
  if (C.zf) goto L_10d160df;
  /* 10d160a4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10d160aa jne 0x10d1609d */
  if (!C.zf) goto L_10d1609d;
L_10d160ac:;
  /* 10d160ac mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10d160ae mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10d160b3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d160b5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d160b8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d160ba add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d160bd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10d160c2 je 0x10d160ac */
  if (C.zf) goto L_10d160ac;
  /* 10d160c4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10d160c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d160c9 je 0x10d160ee */
  if (C.zf) goto L_10d160ee;
  /* 10d160cb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10d160cd je 0x10d160e9 */
  if (C.zf) goto L_10d160e9;
  /* 10d160cf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10d160d4 je 0x10d160e4 */
  if (C.zf) goto L_10d160e4;
  /* 10d160d6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10d160db je 0x10d160df */
  if (C.zf) goto L_10d160df;
  /* 10d160dd jmp 0x10d160ac */
  goto L_10d160ac;
L_10d160df:;
  /* 10d160df lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10d160e2 jmp 0x10d160f1 */
  goto L_10d160f1;
L_10d160e4:;
  /* 10d160e4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10d160e7 jmp 0x10d160f1 */
  goto L_10d160f1;
L_10d160e9:;
  /* 10d160e9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10d160ec jmp 0x10d160f1 */
  goto L_10d160f1;
L_10d160ee:;
  /* 10d160ee lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10d160f1:;
  /* 10d160f1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d160f5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10d160fb je 0x10d16116 */
  if (C.zf) goto L_10d16116;
L_10d160fd:;
  /* 10d160fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d160ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10d16100 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10d16102 je 0x10d16168 */
  if (C.zf) goto L_10d16168;
  /* 10d16104 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10d16106 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d16107 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10d1610d jne 0x10d160fd */
  if (!C.zf) goto L_10d160fd;
  /* 10d1610f jmp 0x10d16116 */
  goto L_10d16116;
L_10d16111:;
  /* 10d16111 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10d16113 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10d16116:;
  /* 10d16116 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10d1611b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10d1611d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1611f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d16122 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d16124 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d16126 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16129 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10d1612e je 0x10d16111 */
  if (C.zf) goto L_10d16111;
  /* 10d16130 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10d16132 je 0x10d16168 */
  if (C.zf) goto L_10d16168;
  /* 10d16134 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10d16136 je 0x10d1615f */
  if (C.zf) goto L_10d1615f;
  /* 10d16138 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10d1613e je 0x10d16152 */
  if (C.zf) goto L_10d16152;
  /* 10d16140 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10d16146 je 0x10d1614a */
  if (C.zf) goto L_10d1614a;
  /* 10d16148 jmp 0x10d16111 */
  goto L_10d16111;
L_10d1614a:;
  /* 10d1614a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10d1614c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d16150 pop edi */
  EDI = (pop32());
  /* 10d16151 ret  */
  ESPCHK(0x10d16090u, _esp0);
  ESP += 4; return;
L_10d16152:;
  /* 10d16152 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10d16155 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d16159 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10d1615d pop edi */
  EDI = (pop32());
  /* 10d1615e ret  */
  ESPCHK(0x10d16090u, _esp0);
  ESP += 4; return;
L_10d1615f:;
  /* 10d1615f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10d16162 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d16166 pop edi */
  EDI = (pop32());
  /* 10d16167 ret  */
  ESPCHK(0x10d16090u, _esp0);
  ESP += 4; return;
L_10d16168:;
  /* 10d16168 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10d1616a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d1616e pop edi */
  EDI = (pop32());
  /* 10d1616f ret  */
  ESPCHK(0x10d16090u, _esp0);
  ESP += 4; return;
}

/* FUN_10006170 @ 0x10d16170 (243 bytes, 91 insns) */
void f_10d16170(void) {
  FTRACE(0x10d16170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16170 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16171 mov ebp, esp */
  EBP = (ESP);
  /* 10d16173 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d16176 push ebx */
  push32((uint32_t)(EBX));
  /* 10d16177 push esi */
  push32((uint32_t)(ESI));
  /* 10d16178 push edi */
  push32((uint32_t)(EDI));
  /* 10d16179 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10d1617c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d1617f:;
  /* 10d1617f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16183 jne 0x10d161a3 */
  if (!C.zf) goto L_10d161a3;
  /* 10d16185 push 0x10d39e14 */
  push32((uint32_t)(0x10d39e14u));
  /* 10d1618a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1618c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10d1618e push 0x10d39e24 */
  push32((uint32_t)(0x10d39e24u));
  /* 10d16193 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d16195 call 0x10d12190 */
  push32(0x10d1619au); f_10d12190();
  /* 10d1619a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1619d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d161a0 jne 0x10d161a3 */
  if (!C.zf) goto L_10d161a3;
  /* 10d161a2 int3  */
  x86_unimpl("int3 @ 0x10d161a2");
L_10d161a3:;
  /* 10d161a3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d161a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d161a7 jne 0x10d1617f */
  if (!C.zf) goto L_10d1617f;
L_10d161a9:;
  /* 10d161a9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d161ad jne 0x10d161cd */
  if (!C.zf) goto L_10d161cd;
  /* 10d161af push 0x10d39df8 */
  push32((uint32_t)(0x10d39df8u));
  /* 10d161b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d161b6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10d161b8 push 0x10d39e24 */
  push32((uint32_t)(0x10d39e24u));
  /* 10d161bd push 2 */
  push32((uint32_t)(0x2u));
  /* 10d161bf call 0x10d12190 */
  push32(0x10d161c4u); f_10d12190();
  /* 10d161c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d161c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d161ca jne 0x10d161cd */
  if (!C.zf) goto L_10d161cd;
  /* 10d161cc int3  */
  x86_unimpl("int3 @ 0x10d161cc");
L_10d161cd:;
  /* 10d161cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d161cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d161d1 jne 0x10d161a9 */
  if (!C.zf) goto L_10d161a9;
  /* 10d161d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d161d6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10d161dd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d161e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d161e3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10d161e6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d161e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d161ec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d161ee mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d161f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d161f4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10d161f7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d161fa push ecx */
  push32((uint32_t)(ECX));
  /* 10d161fb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d161fe push edx */
  push32((uint32_t)(EDX));
  /* 10d161ff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d16202 push eax */
  push32((uint32_t)(EAX));
  /* 10d16203 call 0x10d1a060 */
  push32(0x10d16208u); f_10d1a060();
  /* 10d16208 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1620b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d1620e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d16211 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d16214 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d16217 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1621a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d1621d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d16220 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16224 jl 0x10d16248 */
  if ((C.sf!=C.of)) goto L_10d16248;
  /* 10d16226 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d16229 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d1622b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d1622e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d16230 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d16236 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10d16239 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1623c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d1623e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16241 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d16244 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d16246 jmp 0x10d16259 */
  goto L_10d16259;
L_10d16248:;
  /* 10d16248 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1624b push edx */
  push32((uint32_t)(EDX));
  /* 10d1624c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1624e call 0x10d19de0 */
  push32(0x10d16253u); f_10d19de0();
  /* 10d16253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16256 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10d16259:;
  /* 10d16259 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d1625c pop edi */
  EDI = (pop32());
  /* 10d1625d pop esi */
  ESI = (pop32());
  /* 10d1625e pop ebx */
  EBX = (pop32());
  /* 10d1625f mov esp, ebp */
  ESP = (EBP);
  /* 10d16261 pop ebp */
  EBP = (pop32());
  /* 10d16262 ret  */
  ESPCHK(0x10d16170u, _esp0);
  ESP += 4; return;
}

/* FUN_10006270 @ 0x10d16270 (47 bytes, 17 insns) */
void f_10d16270(void) {
  FTRACE(0x10d16270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16270 push ecx */
  push32((uint32_t)(ECX));
  /* 10d16271 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16276 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10d1627a jb 0x10d16290 */
  if (C.cf) goto L_10d16290;
L_10d1627c:;
  /* 10d1627c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d16282 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d16287 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10d16289 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1628e jae 0x10d1627c */
  if (!C.cf) goto L_10d1627c;
L_10d16290:;
  /* 10d16290 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d16292 mov eax, esp */
  EAX = (ESP);
  /* 10d16294 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10d16296 mov esp, ecx */
  ESP = (ECX);
  /* 10d16298 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d1629a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d1629d push eax */
  push32((uint32_t)(EAX));
  /* 10d1629e ret  */
  ESPCHK(0x10d16270u, _esp0);
  ESP += 4; return;
}

/* FUN_100062a0 @ 0x10d162a0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10d162a0(void) {
  FTRACE(0x10d162a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d162a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d162a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d162a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d162a6 push esi */
  push32((uint32_t)(ESI));
  /* 10d162a7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d162ab je 0x10d162b3 */
  if (C.zf) goto L_10d162b3;
  /* 10d162ad cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d162b1 jne 0x10d162b8 */
  if (!C.zf) goto L_10d162b8;
L_10d162b3:;
  /* 10d162b3 jmp 0x10d16488 */
  goto L_10d16488;
L_10d162b8:;
  /* 10d162b8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d162bc je 0x10d162d4 */
  if (C.zf) goto L_10d162d4;
  /* 10d162be cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d162c2 je 0x10d162d4 */
  if (C.zf) goto L_10d162d4;
  /* 10d162c4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d162c8 je 0x10d162d4 */
  if (C.zf) goto L_10d162d4;
  /* 10d162ca cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d162ce jne 0x10d163b1 */
  if (!C.zf) goto L_10d163b1;
L_10d162d4:;
  /* 10d162d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d162d6 call 0x10d16ad0 */
  push32(0x10d162dbu); f_10d16ad0();
  /* 10d162db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d162de cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d162e2 je 0x10d162ea */
  if (C.zf) goto L_10d162ea;
  /* 10d162e4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d162e8 jne 0x10d1632f */
  if (!C.zf) goto L_10d1632f;
L_10d162ea:;
  /* 10d162ea cmp dword ptr [0x10d3e594], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e594))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d162f1 jne 0x10d1632f */
  if (!C.zf) goto L_10d1632f;
  /* 10d162f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d162f5 push 0x10d164d0 */
  push32((uint32_t)(0x10d164d0u));
  /* 10d162fa call dword ptr [0x10d40318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40318))), 0x10d16300u);
  /* 10d16300 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16303 jne 0x10d16311 */
  if (!C.zf) goto L_10d16311;
  /* 10d16305 mov dword ptr [0x10d3e594], 1 */
  w32((uint32_t)(0x10d3e594), (0x1u));
  /* 10d1630f jmp 0x10d1632f */
  goto L_10d1632f;
L_10d16311:;
  /* 10d16311 call dword ptr [0x10d402d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402d0))), 0x10d16317u);
  /* 10d16317 mov esi, eax */
  ESI = (EAX);
  /* 10d16319 call 0x10d1afb0 */
  push32(0x10d1631eu); f_10d1afb0();
  /* 10d1631e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10d16320 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d16322 call 0x10d16b70 */
  push32(0x10d16327u); f_10d16b70();
  /* 10d16327 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1632a jmp 0x10d16488 */
  goto L_10d16488;
L_10d1632f:;
  /* 10d1632f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16332 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d16335 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d16338 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1633b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d1633e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16342 ja 0x10d163a2 */
  if ((!C.cf&&!C.zf)) goto L_10d163a2;
  /* 10d16344 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d16347 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d16349 mov dl, byte ptr [eax + 0x10d164af] */
  DL = (r8((uint32_t)(EAX + 0x10d164af)));
  /* 10d1634f jmp dword ptr [edx*4 + 0x10d1649b] */
  switch (EDX) {
    case 0: goto L_10d16356;
    case 1: goto L_10d16390;
    case 2: goto L_10d1636a;
    case 3: goto L_10d1637d;
    case 4: goto L_10d163a2;
    default: x86_unimpl("switch@0x10d1634f out of table"); return;
  }
L_10d16356:;
  /* 10d16356 mov ecx, dword ptr [0x10d3e584] */
  ECX = (r32((uint32_t)(0x10d3e584)));
  /* 10d1635c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1635f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d16362 mov dword ptr [0x10d3e584], edx */
  w32((uint32_t)(0x10d3e584), (EDX));
  /* 10d16368 jmp 0x10d163a2 */
  goto L_10d163a2;
L_10d1636a:;
  /* 10d1636a mov eax, dword ptr [0x10d3e588] */
  EAX = (r32((uint32_t)(0x10d3e588)));
  /* 10d1636f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d16372 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d16375 mov dword ptr [0x10d3e588], ecx */
  w32((uint32_t)(0x10d3e588), (ECX));
  /* 10d1637b jmp 0x10d163a2 */
  goto L_10d163a2;
L_10d1637d:;
  /* 10d1637d mov edx, dword ptr [0x10d3e58c] */
  EDX = (r32((uint32_t)(0x10d3e58c)));
  /* 10d16383 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d16386 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d16389 mov dword ptr [0x10d3e58c], eax */
  w32((uint32_t)(0x10d3e58c), (EAX));
  /* 10d1638e jmp 0x10d163a2 */
  goto L_10d163a2;
L_10d16390:;
  /* 10d16390 mov ecx, dword ptr [0x10d3e590] */
  ECX = (r32((uint32_t)(0x10d3e590)));
  /* 10d16396 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d16399 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1639c mov dword ptr [0x10d3e590], edx */
  w32((uint32_t)(0x10d3e590), (EDX));
L_10d163a2:;
  /* 10d163a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d163a4 call 0x10d16b70 */
  push32(0x10d163a9u); f_10d16b70();
  /* 10d163a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d163ac jmp 0x10d16483 */
  goto L_10d16483;
L_10d163b1:;
  /* 10d163b1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d163b5 je 0x10d163c8 */
  if (C.zf) goto L_10d163c8;
  /* 10d163b7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d163bb je 0x10d163c8 */
  if (C.zf) goto L_10d163c8;
  /* 10d163bd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d163c1 je 0x10d163c8 */
  if (C.zf) goto L_10d163c8;
  /* 10d163c3 jmp 0x10d16488 */
  goto L_10d16488;
L_10d163c8:;
  /* 10d163c8 call 0x10d12b10 */
  push32(0x10d163cdu); f_10d12b10();
  /* 10d163cd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d163d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d163d3 cmp dword ptr [eax + 0x50], 0x10d3cc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10d3cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d163da jne 0x10d16425 */
  if (!C.zf) goto L_10d16425;
  /* 10d163dc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10d163e1 push 0x10d39e30 */
  push32((uint32_t)(0x10d39e30u));
  /* 10d163e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d163e8 mov ecx, dword ptr [0x10d3cc80] */
  ECX = (r32((uint32_t)(0x10d3cc80)));
  /* 10d163ee push ecx */
  push32((uint32_t)(ECX));
  /* 10d163ef call 0x10d130d0 */
  push32(0x10d163f4u); f_10d130d0();
  /* 10d163f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d163f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d163fa mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10d163fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16400 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16404 je 0x10d16423 */
  if (C.zf) goto L_10d16423;
  /* 10d16406 mov ecx, dword ptr [0x10d3cc80] */
  ECX = (r32((uint32_t)(0x10d3cc80)));
  /* 10d1640c push ecx */
  push32((uint32_t)(ECX));
  /* 10d1640d push 0x10d3cc00 */
  push32((uint32_t)(0x10d3cc00u));
  /* 10d16412 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16415 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10d16418 push eax */
  push32((uint32_t)(EAX));
  /* 10d16419 call 0x10d199b0 */
  push32(0x10d1641eu); f_10d199b0();
  /* 10d1641e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16421 jmp 0x10d16425 */
  goto L_10d16425;
L_10d16423:;
  /* 10d16423 jmp 0x10d16488 */
  goto L_10d16488;
L_10d16425:;
  /* 10d16425 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16428 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10d1642b push edx */
  push32((uint32_t)(EDX));
  /* 10d1642c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1642f push eax */
  push32((uint32_t)(EAX));
  /* 10d16430 call 0x10d167b0 */
  push32(0x10d16435u); f_10d167b0();
  /* 10d16435 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16438 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1643b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1643f jne 0x10d16443 */
  if (!C.zf) goto L_10d16443;
  /* 10d16441 jmp 0x10d16488 */
  goto L_10d16488;
L_10d16443:;
  /* 10d16443 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16446 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d16449 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10d1644c:;
  /* 10d1644c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1644f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d16452 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16455 jne 0x10d16483 */
  if (!C.zf) goto L_10d16483;
  /* 10d16457 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1645a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1645d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d16460 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16463 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16466 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d16469 mov edx, dword ptr [0x10d3cc84] */
  EDX = (r32((uint32_t)(0x10d3cc84)));
  /* 10d1646f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d16472 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16475 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10d16478 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1647a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1647d jb 0x10d16481 */
  if (C.cf) goto L_10d16481;
  /* 10d1647f jmp 0x10d16483 */
  goto L_10d16483;
L_10d16481:;
  /* 10d16481 jmp 0x10d1644c */
  goto L_10d1644c;
L_10d16483:;
  /* 10d16483 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d16486 jmp 0x10d16496 */
  goto L_10d16496;
L_10d16488:;
  /* 10d16488 call 0x10d1afa0 */
  push32(0x10d1648du); f_10d1afa0();
  /* 10d1648d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10d16493 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d16496:;
  /* 10d16496 pop esi */
  ESI = (pop32());
  /* 10d16497 mov esp, ebp */
  ESP = (EBP);
  /* 10d16499 pop ebp */
  EBP = (pop32());
  /* 10d1649a ret  */
  ESPCHK(0x10d162a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064d0 @ 0x10d164d0 (146 bytes, 45 insns) */
void f_10d164d0(void) {
  FTRACE(0x10d164d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d164d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d164d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d164d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d164d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d164d8 call 0x10d16ad0 */
  push32(0x10d164ddu); f_10d16ad0();
  /* 10d164dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d164e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d164e4 jne 0x10d164fe */
  if (!C.zf) goto L_10d164fe;
  /* 10d164e6 mov dword ptr [ebp - 8], 0x10d3e584 */
  w32((uint32_t)(EBP + -0x8), (0x10d3e584u));
  /* 10d164ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d164f0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d164f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d164f5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10d164fc jmp 0x10d16514 */
  goto L_10d16514;
L_10d164fe:;
  /* 10d164fe mov dword ptr [ebp - 8], 0x10d3e588 */
  w32((uint32_t)(EBP + -0x8), (0x10d3e588u));
  /* 10d16505 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16508 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d1650a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d1650d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10d16514:;
  /* 10d16514 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16518 jne 0x10d16528 */
  if (!C.zf) goto L_10d16528;
  /* 10d1651a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1651c call 0x10d16b70 */
  push32(0x10d16521u); f_10d16b70();
  /* 10d16521 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16524 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d16526 jmp 0x10d1655c */
  goto L_10d1655c;
L_10d16528:;
  /* 10d16528 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1652c je 0x10d1654d */
  if (C.zf) goto L_10d1654d;
  /* 10d1652e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16531 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10d16537 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d16539 call 0x10d16b70 */
  push32(0x10d1653eu); f_10d16b70();
  /* 10d1653e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16541 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16544 push edx */
  push32((uint32_t)(EDX));
  /* 10d16545 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10d16548u);
  /* 10d16548 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1654b jmp 0x10d16557 */
  goto L_10d16557;
L_10d1654d:;
  /* 10d1654d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1654f call 0x10d16b70 */
  push32(0x10d16554u); f_10d16b70();
  /* 10d16554 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d16557:;
  /* 10d16557 mov eax, 1 */
  EAX = (0x1u);
L_10d1655c:;
  /* 10d1655c mov esp, ebp */
  ESP = (EBP);
  /* 10d1655e pop ebp */
  EBP = (pop32());
  /* 10d1655f ret 4 */
  ESPCHK(0x10d164d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006570 @ 0x10d16570 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10d16570(void) {
  FTRACE(0x10d16570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16570 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16571 mov ebp, esp */
  EBP = (ESP);
  /* 10d16573 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d16576 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d1657d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16580 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d16583 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d16586 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d16589 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d1658c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16590 ja 0x10d1663e */
  if ((!C.cf&&!C.zf)) goto L_10d1663e;
  /* 10d16596 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d16599 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1659b mov dl, byte ptr [eax + 0x10d16792] */
  DL = (r8((uint32_t)(EAX + 0x10d16792)));
  /* 10d165a1 jmp dword ptr [edx*4 + 0x10d1677a] */
  switch (EDX) {
    case 0: goto L_10d165a8;
    case 1: goto L_10d16613;
    case 2: goto L_10d165f9;
    case 3: goto L_10d165c5;
    case 4: goto L_10d165df;
    case 5: goto L_10d1663e;
    default: x86_unimpl("switch@0x10d165a1 out of table"); return;
  }
L_10d165a8:;
  /* 10d165a8 mov dword ptr [ebp - 0x18], 0x10d3e584 */
  w32((uint32_t)(EBP + -0x18), (0x10d3e584u));
  /* 10d165af mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d165b2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d165b4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d165b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d165ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d165bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d165c0 jmp 0x10d16646 */
  goto L_10d16646;
L_10d165c5:;
  /* 10d165c5 mov dword ptr [ebp - 0x18], 0x10d3e588 */
  w32((uint32_t)(EBP + -0x18), (0x10d3e588u));
  /* 10d165cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d165cf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d165d1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d165d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d165d7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d165da mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d165dd jmp 0x10d16646 */
  goto L_10d16646;
L_10d165df:;
  /* 10d165df mov dword ptr [ebp - 0x18], 0x10d3e58c */
  w32((uint32_t)(EBP + -0x18), (0x10d3e58cu));
  /* 10d165e6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d165e9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d165eb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d165ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d165f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d165f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d165f7 jmp 0x10d16646 */
  goto L_10d16646;
L_10d165f9:;
  /* 10d165f9 mov dword ptr [ebp - 0x18], 0x10d3e590 */
  w32((uint32_t)(EBP + -0x18), (0x10d3e590u));
  /* 10d16600 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d16603 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d16605 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d16608 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1660b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1660e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d16611 jmp 0x10d16646 */
  goto L_10d16646;
L_10d16613:;
  /* 10d16613 call 0x10d12b10 */
  push32(0x10d16618u); f_10d12b10();
  /* 10d16618 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1661b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1661e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10d16621 push edx */
  push32((uint32_t)(EDX));
  /* 10d16622 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16625 push eax */
  push32((uint32_t)(EAX));
  /* 10d16626 call 0x10d167b0 */
  push32(0x10d1662bu); f_10d167b0();
  /* 10d1662b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1662e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16631 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d16634 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d16637 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d16639 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d1663c jmp 0x10d16646 */
  goto L_10d16646;
L_10d1663e:;
  /* 10d1663e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d16641 jmp 0x10d16776 */
  goto L_10d16776;
L_10d16646:;
  /* 10d16646 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1664a je 0x10d16656 */
  if (C.zf) goto L_10d16656;
  /* 10d1664c push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1664e call 0x10d16ad0 */
  push32(0x10d16653u); f_10d16ad0();
  /* 10d16653 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d16656:;
  /* 10d16656 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1665a jne 0x10d16673 */
  if (!C.zf) goto L_10d16673;
  /* 10d1665c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16660 je 0x10d1666c */
  if (C.zf) goto L_10d1666c;
  /* 10d16662 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d16664 call 0x10d16b70 */
  push32(0x10d16669u); f_10d16b70();
  /* 10d16669 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1666c:;
  /* 10d1666c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1666e jmp 0x10d16776 */
  goto L_10d16776;
L_10d16673:;
  /* 10d16673 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16677 jne 0x10d16690 */
  if (!C.zf) goto L_10d16690;
  /* 10d16679 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1667d je 0x10d16689 */
  if (C.zf) goto L_10d16689;
  /* 10d1667f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d16681 call 0x10d16b70 */
  push32(0x10d16686u); f_10d16b70();
  /* 10d16686 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d16689:;
  /* 10d16689 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d1668b call 0x10d12890 */
  push32(0x10d16690u); f_10d12890();
L_10d16690:;
  /* 10d16690 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16694 je 0x10d166a2 */
  if (C.zf) goto L_10d166a2;
  /* 10d16696 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1669a je 0x10d166a2 */
  if (C.zf) goto L_10d166a2;
  /* 10d1669c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d166a0 jne 0x10d166ce */
  if (!C.zf) goto L_10d166ce;
L_10d166a2:;
  /* 10d166a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d166a5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10d166a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d166ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d166ae mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10d166b5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d166b9 jne 0x10d166ce */
  if (!C.zf) goto L_10d166ce;
  /* 10d166bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d166be mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10d166c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d166c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d166c7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10d166ce:;
  /* 10d166ce cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d166d2 jne 0x10d16710 */
  if (!C.zf) goto L_10d16710;
  /* 10d166d4 mov eax, dword ptr [0x10d3cc78] */
  EAX = (r32((uint32_t)(0x10d3cc78)));
  /* 10d166d9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d166dc jmp 0x10d166e7 */
  goto L_10d166e7;
L_10d166de:;
  /* 10d166de mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d166e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d166e4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10d166e7:;
  /* 10d166e7 mov edx, dword ptr [0x10d3cc78] */
  EDX = (r32((uint32_t)(0x10d3cc78)));
  /* 10d166ed add edx, dword ptr [0x10d3cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d3cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d166f3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d166f6 jge 0x10d1670e */
  if ((C.sf==C.of)) goto L_10d1670e;
  /* 10d166f8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d166fb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d166fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16701 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10d16704 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10d1670c jmp 0x10d166de */
  goto L_10d166de;
L_10d1670e:;
  /* 10d1670e jmp 0x10d16719 */
  goto L_10d16719;
L_10d16710:;
  /* 10d16710 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d16713 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10d16719:;
  /* 10d16719 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1671d je 0x10d16729 */
  if (C.zf) goto L_10d16729;
  /* 10d1671f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d16721 call 0x10d16b70 */
  push32(0x10d16726u); f_10d16b70();
  /* 10d16726 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d16729:;
  /* 10d16729 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1672d jne 0x10d16740 */
  if (!C.zf) goto L_10d16740;
  /* 10d1672f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16732 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10d16735 push edx */
  push32((uint32_t)(EDX));
  /* 10d16736 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d16738 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10d1673bu);
  /* 10d1673b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1673e jmp 0x10d1674a */
  goto L_10d1674a;
L_10d16740:;
  /* 10d16740 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16743 push eax */
  push32((uint32_t)(EAX));
  /* 10d16744 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10d16747u);
  /* 10d16747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1674a:;
  /* 10d1674a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1674e je 0x10d1675c */
  if (C.zf) goto L_10d1675c;
  /* 10d16750 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16754 je 0x10d1675c */
  if (C.zf) goto L_10d1675c;
  /* 10d16756 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1675a jne 0x10d16774 */
  if (!C.zf) goto L_10d16774;
L_10d1675c:;
  /* 10d1675c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1675f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d16762 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10d16765 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16769 jne 0x10d16774 */
  if (!C.zf) goto L_10d16774;
  /* 10d1676b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1676e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16771 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10d16774:;
  /* 10d16774 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d16776:;
  /* 10d16776 mov esp, ebp */
  ESP = (EBP);
  /* 10d16778 pop ebp */
  EBP = (pop32());
  /* 10d16779 ret  */
  ESPCHK(0x10d16570u, _esp0);
  ESP += 4; return;
}

/* FUN_100067b0 @ 0x10d167b0 (91 bytes, 35 insns) */
void f_10d167b0(void) {
  FTRACE(0x10d167b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d167b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d167b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d167b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d167b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d167b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d167ba:;
  /* 10d167ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d167bd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d167c0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d167c3 je 0x10d167e3 */
  if (C.zf) goto L_10d167e3;
  /* 10d167c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d167c8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d167cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d167ce mov ecx, dword ptr [0x10d3cc84] */
  ECX = (r32((uint32_t)(0x10d3cc84)));
  /* 10d167d4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d167d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d167da add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d167dc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d167df jae 0x10d167e3 */
  if (!C.cf) goto L_10d167e3;
  /* 10d167e1 jmp 0x10d167ba */
  goto L_10d167ba;
L_10d167e3:;
  /* 10d167e3 mov eax, dword ptr [0x10d3cc84] */
  EAX = (r32((uint32_t)(0x10d3cc84)));
  /* 10d167e8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d167eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d167ee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d167f0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d167f3 jae 0x10d16805 */
  if (!C.cf) goto L_10d16805;
  /* 10d167f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d167f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d167fb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d167fe jne 0x10d16805 */
  if (!C.zf) goto L_10d16805;
  /* 10d16800 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16803 jmp 0x10d16807 */
  goto L_10d16807;
L_10d16805:;
  /* 10d16805 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d16807:;
  /* 10d16807 mov esp, ebp */
  ESP = (EBP);
  /* 10d16809 pop ebp */
  EBP = (pop32());
  /* 10d1680a ret  */
  ESPCHK(0x10d167b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006810 @ 0x10d16810 (13 bytes, 6 insns) */
void f_10d16810(void) {
  FTRACE(0x10d16810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16810 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16811 mov ebp, esp */
  EBP = (ESP);
  /* 10d16813 call 0x10d12b10 */
  push32(0x10d16818u); f_10d12b10();
  /* 10d16818 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1681b pop ebp */
  EBP = (pop32());
  /* 10d1681c ret  */
  ESPCHK(0x10d16810u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x10d16820 (13 bytes, 6 insns) */
void f_10d16820(void) {
  FTRACE(0x10d16820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16820 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16821 mov ebp, esp */
  EBP = (ESP);
  /* 10d16823 call 0x10d12b10 */
  push32(0x10d16828u); f_10d12b10();
  /* 10d16828 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1682b pop ebp */
  EBP = (pop32());
  /* 10d1682c ret  */
  ESPCHK(0x10d16820u, _esp0);
  ESP += 4; return;
}

/* FUN_10006830 @ 0x10d16830 (187 bytes, 54 insns) */
void f_10d16830(void) {
  FTRACE(0x10d16830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16830 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16831 mov ebp, esp */
  EBP = (ESP);
  /* 10d16833 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d16836 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d1683d cmp dword ptr [0x10d3e598], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e598))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16844 jne 0x10d168a3 */
  if (!C.zf) goto L_10d168a3;
  /* 10d16846 push 0x10d3925c */
  push32((uint32_t)(0x10d3925cu));
  /* 10d1684b call dword ptr [0x10d402a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402a0))), 0x10d16851u);
  /* 10d16851 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d16854 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16858 je 0x10d16877 */
  if (C.zf) goto L_10d16877;
  /* 10d1685a push 0x10d39e60 */
  push32((uint32_t)(0x10d39e60u));
  /* 10d1685f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16862 push eax */
  push32((uint32_t)(EAX));
  /* 10d16863 call dword ptr [0x10d4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4029c))), 0x10d16869u);
  /* 10d16869 mov dword ptr [0x10d3e598], eax */
  w32((uint32_t)(0x10d3e598), (EAX));
  /* 10d1686e cmp dword ptr [0x10d3e598], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e598))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16875 jne 0x10d1687b */
  if (!C.zf) goto L_10d1687b;
L_10d16877:;
  /* 10d16877 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d16879 jmp 0x10d168e7 */
  goto L_10d168e7;
L_10d1687b:;
  /* 10d1687b push 0x10d39e50 */
  push32((uint32_t)(0x10d39e50u));
  /* 10d16880 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16883 push ecx */
  push32((uint32_t)(ECX));
  /* 10d16884 call dword ptr [0x10d4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4029c))), 0x10d1688au);
  /* 10d1688a mov dword ptr [0x10d3e59c], eax */
  w32((uint32_t)(0x10d3e59c), (EAX));
  /* 10d1688f push 0x10d39e3c */
  push32((uint32_t)(0x10d39e3cu));
  /* 10d16894 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16897 push edx */
  push32((uint32_t)(EDX));
  /* 10d16898 call dword ptr [0x10d4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4029c))), 0x10d1689eu);
  /* 10d1689e mov dword ptr [0x10d3e5a0], eax */
  w32((uint32_t)(0x10d3e5a0), (EAX));
L_10d168a3:;
  /* 10d168a3 cmp dword ptr [0x10d3e59c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e59c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d168aa je 0x10d168b5 */
  if (C.zf) goto L_10d168b5;
  /* 10d168ac call dword ptr [0x10d3e59c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3e59c))), 0x10d168b2u);
  /* 10d168b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d168b5:;
  /* 10d168b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d168b9 je 0x10d168d1 */
  if (C.zf) goto L_10d168d1;
  /* 10d168bb cmp dword ptr [0x10d3e5a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e5a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d168c2 je 0x10d168d1 */
  if (C.zf) goto L_10d168d1;
  /* 10d168c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d168c7 push eax */
  push32((uint32_t)(EAX));
  /* 10d168c8 call dword ptr [0x10d3e5a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3e5a0))), 0x10d168ceu);
  /* 10d168ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d168d1:;
  /* 10d168d1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d168d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d168d5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d168d8 push edx */
  push32((uint32_t)(EDX));
  /* 10d168d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d168dc push eax */
  push32((uint32_t)(EAX));
  /* 10d168dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d168e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d168e1 call dword ptr [0x10d3e598] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3e598))), 0x10d168e7u);
L_10d168e7:;
  /* 10d168e7 mov esp, ebp */
  ESP = (EBP);
  /* 10d168e9 pop ebp */
  EBP = (pop32());
  /* 10d168ea ret  */
  ESPCHK(0x10d16830u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10d168f0 (254 bytes, 109 insns) */
void f_10d168f0(void) {
  FTRACE(0x10d168f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d168f0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d168f4 push edi */
  push32((uint32_t)(EDI));
  /* 10d168f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d168f7 je 0x10d16973 */
  if (C.zf) goto L_10d16973;
  /* 10d168f9 push esi */
  push32((uint32_t)(ESI));
  /* 10d168fa push ebx */
  push32((uint32_t)(EBX));
  /* 10d168fb mov ebx, ecx */
  EBX = (ECX);
  /* 10d168fd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10d16901 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10d16907 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10d1690b jne 0x10d16914 */
  if (!C.zf) goto L_10d16914;
  /* 10d1690d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d16910 jne 0x10d16981 */
  if (!C.zf) goto L_10d16981;
  /* 10d16912 jmp 0x10d16935 */
  goto L_10d16935;
L_10d16914:;
  /* 10d16914 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d16916 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d16917 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d16919 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d1691a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d1691b je 0x10d16942 */
  if (C.zf) goto L_10d16942;
  /* 10d1691d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d1691f je 0x10d1694a */
  if (C.zf) goto L_10d1694a;
  /* 10d16921 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10d16927 jne 0x10d16914 */
  if (!C.zf) goto L_10d16914;
  /* 10d16929 mov ebx, ecx */
  EBX = (ECX);
  /* 10d1692b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d1692e jne 0x10d16981 */
  if (!C.zf) goto L_10d16981;
L_10d16930:;
  /* 10d16930 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10d16933 je 0x10d16942 */
  if (C.zf) goto L_10d16942;
L_10d16935:;
  /* 10d16935 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d16937 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d16938 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d1693a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d1693b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d1693d je 0x10d1696e */
  if (C.zf) goto L_10d1696e;
  /* 10d1693f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10d16940 jne 0x10d16935 */
  if (!C.zf) goto L_10d16935;
L_10d16942:;
  /* 10d16942 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d16946 pop ebx */
  EBX = (pop32());
  /* 10d16947 pop esi */
  ESI = (pop32());
  /* 10d16948 pop edi */
  EDI = (pop32());
  /* 10d16949 ret  */
  ESPCHK(0x10d168f0u, _esp0);
  ESP += 4; return;
L_10d1694a:;
  /* 10d1694a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10d16950 je 0x10d16964 */
  if (C.zf) goto L_10d16964;
L_10d16952:;
  /* 10d16952 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d16954 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d16955 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d16956 je 0x10d169e6 */
  if (C.zf) goto L_10d169e6;
  /* 10d1695c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10d16962 jne 0x10d16952 */
  if (!C.zf) goto L_10d16952;
L_10d16964:;
  /* 10d16964 mov ebx, ecx */
  EBX = (ECX);
  /* 10d16966 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d16969 jne 0x10d169d7 */
  if (!C.zf) goto L_10d169d7;
L_10d1696b:;
  /* 10d1696b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d1696d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10d1696e:;
  /* 10d1696e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10d1696f jne 0x10d1696b */
  if (!C.zf) goto L_10d1696b;
  /* 10d16971 pop ebx */
  EBX = (pop32());
  /* 10d16972 pop esi */
  ESI = (pop32());
L_10d16973:;
  /* 10d16973 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d16977 pop edi */
  EDI = (pop32());
  /* 10d16978 ret  */
  ESPCHK(0x10d168f0u, _esp0);
  ESP += 4; return;
L_10d16979:;
  /* 10d16979 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10d1697b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1697e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d1697f je 0x10d16930 */
  if (C.zf) goto L_10d16930;
L_10d16981:;
  /* 10d16981 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10d16986 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10d16988 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1698a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1698d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1698f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10d16991 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16994 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10d16999 je 0x10d16979 */
  if (C.zf) goto L_10d16979;
  /* 10d1699b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10d1699d je 0x10d169cb */
  if (C.zf) goto L_10d169cb;
  /* 10d1699f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10d169a1 je 0x10d169c1 */
  if (C.zf) goto L_10d169c1;
  /* 10d169a3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10d169a9 je 0x10d169b7 */
  if (C.zf) goto L_10d169b7;
  /* 10d169ab test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10d169b1 jne 0x10d16979 */
  if (!C.zf) goto L_10d16979;
  /* 10d169b3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10d169b5 jmp 0x10d169cf */
  goto L_10d169cf;
L_10d169b7:;
  /* 10d169b7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d169bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10d169bf jmp 0x10d169cf */
  goto L_10d169cf;
L_10d169c1:;
  /* 10d169c1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d169c7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10d169c9 jmp 0x10d169cf */
  goto L_10d169cf;
L_10d169cb:;
  /* 10d169cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d169cd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10d169cf:;
  /* 10d169cf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d169d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d169d4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d169d5 je 0x10d169e1 */
  if (C.zf) goto L_10d169e1;
L_10d169d7:;
  /* 10d169d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d169d9:;
  /* 10d169d9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10d169db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d169de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d169df jne 0x10d169d9 */
  if (!C.zf) goto L_10d169d9;
L_10d169e1:;
  /* 10d169e1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10d169e4 jne 0x10d1696b */
  if (!C.zf) goto L_10d1696b;
L_10d169e6:;
  /* 10d169e6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d169ea pop ebx */
  EBX = (pop32());
  /* 10d169eb pop esi */
  ESI = (pop32());
  /* 10d169ec pop edi */
  EDI = (pop32());
  /* 10d169ed ret  */
  ESPCHK(0x10d168f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100069f0 @ 0x10d169f0 (55 bytes, 16 insns) */
void f_10d169f0(void) {
  FTRACE(0x10d169f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d169f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d169f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d169f3 mov eax, dword ptr [0x10d3cb84] */
  EAX = (r32((uint32_t)(0x10d3cb84)));
  /* 10d169f8 push eax */
  push32((uint32_t)(EAX));
  /* 10d169f9 call dword ptr [0x10d4031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4031c))), 0x10d169ffu);
  /* 10d169ff mov ecx, dword ptr [0x10d3cb74] */
  ECX = (r32((uint32_t)(0x10d3cb74)));
  /* 10d16a05 push ecx */
  push32((uint32_t)(ECX));
  /* 10d16a06 call dword ptr [0x10d4031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4031c))), 0x10d16a0cu);
  /* 10d16a0c mov edx, dword ptr [0x10d3cb64] */
  EDX = (r32((uint32_t)(0x10d3cb64)));
  /* 10d16a12 push edx */
  push32((uint32_t)(EDX));
  /* 10d16a13 call dword ptr [0x10d4031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4031c))), 0x10d16a19u);
  /* 10d16a19 mov eax, dword ptr [0x10d3cb44] */
  EAX = (r32((uint32_t)(0x10d3cb44)));
  /* 10d16a1e push eax */
  push32((uint32_t)(EAX));
  /* 10d16a1f call dword ptr [0x10d4031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4031c))), 0x10d16a25u);
  /* 10d16a25 pop ebp */
  EBP = (pop32());
  /* 10d16a26 ret  */
  ESPCHK(0x10d169f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a30 @ 0x10d16a30 (159 bytes, 47 insns) */
void f_10d16a30(void) {
  FTRACE(0x10d16a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16a30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16a31 mov ebp, esp */
  EBP = (ESP);
  /* 10d16a33 push ecx */
  push32((uint32_t)(ECX));
  /* 10d16a34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d16a3b jmp 0x10d16a46 */
  goto L_10d16a46;
L_10d16a3d:;
  /* 10d16a3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16a40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16a43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d16a46:;
  /* 10d16a46 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16a4a jge 0x10d16a99 */
  if ((C.sf==C.of)) goto L_10d16a99;
  /* 10d16a4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16a4f cmp dword ptr [ecx*4 + 0x10d3cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10d3cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16a57 je 0x10d16a97 */
  if (C.zf) goto L_10d16a97;
  /* 10d16a59 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16a5d je 0x10d16a97 */
  if (C.zf) goto L_10d16a97;
  /* 10d16a5f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16a63 je 0x10d16a97 */
  if (C.zf) goto L_10d16a97;
  /* 10d16a65 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16a69 je 0x10d16a97 */
  if (C.zf) goto L_10d16a97;
  /* 10d16a6b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16a6f je 0x10d16a97 */
  if (C.zf) goto L_10d16a97;
  /* 10d16a71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16a74 mov eax, dword ptr [edx*4 + 0x10d3cb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d3cb40)));
  /* 10d16a7b push eax */
  push32((uint32_t)(EAX));
  /* 10d16a7c call dword ptr [0x10d402e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402e4))), 0x10d16a82u);
  /* 10d16a82 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d16a84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16a87 mov edx, dword ptr [ecx*4 + 0x10d3cb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d3cb40)));
  /* 10d16a8e push edx */
  push32((uint32_t)(EDX));
  /* 10d16a8f call 0x10d13b60 */
  push32(0x10d16a94u); f_10d13b60();
  /* 10d16a94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d16a97:;
  /* 10d16a97 jmp 0x10d16a3d */
  goto L_10d16a3d;
L_10d16a99:;
  /* 10d16a99 mov eax, dword ptr [0x10d3cb64] */
  EAX = (r32((uint32_t)(0x10d3cb64)));
  /* 10d16a9e push eax */
  push32((uint32_t)(EAX));
  /* 10d16a9f call dword ptr [0x10d402e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402e4))), 0x10d16aa5u);
  /* 10d16aa5 mov ecx, dword ptr [0x10d3cb74] */
  ECX = (r32((uint32_t)(0x10d3cb74)));
  /* 10d16aab push ecx */
  push32((uint32_t)(ECX));
  /* 10d16aac call dword ptr [0x10d402e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402e4))), 0x10d16ab2u);
  /* 10d16ab2 mov edx, dword ptr [0x10d3cb84] */
  EDX = (r32((uint32_t)(0x10d3cb84)));
  /* 10d16ab8 push edx */
  push32((uint32_t)(EDX));
  /* 10d16ab9 call dword ptr [0x10d402e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402e4))), 0x10d16abfu);
  /* 10d16abf mov eax, dword ptr [0x10d3cb44] */
  EAX = (r32((uint32_t)(0x10d3cb44)));
  /* 10d16ac4 push eax */
  push32((uint32_t)(EAX));
  /* 10d16ac5 call dword ptr [0x10d402e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402e4))), 0x10d16acbu);
  /* 10d16acb mov esp, ebp */
  ESP = (EBP);
  /* 10d16acd pop ebp */
  EBP = (pop32());
  /* 10d16ace ret  */
  ESPCHK(0x10d16a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ad0 @ 0x10d16ad0 (151 bytes, 46 insns) */
void f_10d16ad0(void) {
  FTRACE(0x10d16ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10d16ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d16ad4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16ad7 cmp dword ptr [eax*4 + 0x10d3cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10d3cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16adf jne 0x10d16b52 */
  if (!C.zf) goto L_10d16b52;
  /* 10d16ae1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10d16ae6 push 0x10d39e6c */
  push32((uint32_t)(0x10d39e6cu));
  /* 10d16aeb push 2 */
  push32((uint32_t)(0x2u));
  /* 10d16aed push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10d16aef call 0x10d130d0 */
  push32(0x10d16af4u); f_10d130d0();
  /* 10d16af4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16af7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d16afa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16afe jne 0x10d16b0a */
  if (!C.zf) goto L_10d16b0a;
  /* 10d16b00 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d16b02 call 0x10d12040 */
  push32(0x10d16b07u); f_10d12040();
  /* 10d16b07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d16b0a:;
  /* 10d16b0a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d16b0c call 0x10d16ad0 */
  push32(0x10d16b11u); f_10d16ad0();
  /* 10d16b11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16b14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16b17 cmp dword ptr [ecx*4 + 0x10d3cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10d3cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16b1f jne 0x10d16b3a */
  if (!C.zf) goto L_10d16b3a;
  /* 10d16b21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16b24 push edx */
  push32((uint32_t)(EDX));
  /* 10d16b25 call dword ptr [0x10d4031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4031c))), 0x10d16b2bu);
  /* 10d16b2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16b2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16b31 mov dword ptr [eax*4 + 0x10d3cb40], ecx */
  w32((uint32_t)(EAX*4 + 0x10d3cb40), (ECX));
  /* 10d16b38 jmp 0x10d16b48 */
  goto L_10d16b48;
L_10d16b3a:;
  /* 10d16b3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d16b3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16b3f push edx */
  push32((uint32_t)(EDX));
  /* 10d16b40 call 0x10d13b60 */
  push32(0x10d16b45u); f_10d13b60();
  /* 10d16b45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d16b48:;
  /* 10d16b48 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d16b4a call 0x10d16b70 */
  push32(0x10d16b4fu); f_10d16b70();
  /* 10d16b4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d16b52:;
  /* 10d16b52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16b55 mov ecx, dword ptr [eax*4 + 0x10d3cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10d3cb40)));
  /* 10d16b5c push ecx */
  push32((uint32_t)(ECX));
  /* 10d16b5d call dword ptr [0x10d40320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40320))), 0x10d16b63u);
  /* 10d16b63 mov esp, ebp */
  ESP = (EBP);
  /* 10d16b65 pop ebp */
  EBP = (pop32());
  /* 10d16b66 ret  */
  ESPCHK(0x10d16ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b70 @ 0x10d16b70 (22 bytes, 8 insns) */
void f_10d16b70(void) {
  FTRACE(0x10d16b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16b70 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16b71 mov ebp, esp */
  EBP = (ESP);
  /* 10d16b73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16b76 mov ecx, dword ptr [eax*4 + 0x10d3cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10d3cb40)));
  /* 10d16b7d push ecx */
  push32((uint32_t)(ECX));
  /* 10d16b7e call dword ptr [0x10d40324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40324))), 0x10d16b84u);
  /* 10d16b84 pop ebp */
  EBP = (pop32());
  /* 10d16b85 ret  */
  ESPCHK(0x10d16b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b90 @ 0x10d16b90 (26 bytes, 10 insns) */
void f_10d16b90(void) {
  FTRACE(0x10d16b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16b90 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16b91 mov ebp, esp */
  EBP = (ESP);
  /* 10d16b93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16b96 push eax */
  push32((uint32_t)(EAX));
  /* 10d16b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d16b99 call dword ptr [0x10d40328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40328))), 0x10d16b9fu);
  /* 10d16b9f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10d16ba4 call dword ptr [0x10d402ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402ac))), 0x10d16baau);
  /* 10d16baa pop ebp */
  EBP = (pop32());
  /* 10d16bab ret  */
  ESPCHK(0x10d16b90u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10d16bb0 (446 bytes, 130 insns) */
void f_10d16bb0(void) {
  FTRACE(0x10d16bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10d16bb3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d16bb6 call 0x10d12b10 */
  push32(0x10d16bbbu); f_10d12b10();
  /* 10d16bbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d16bbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16bc1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10d16bc4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d16bc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16bc8 push edx */
  push32((uint32_t)(EDX));
  /* 10d16bc9 call 0x10d16d70 */
  push32(0x10d16bceu); f_10d16d70();
  /* 10d16bce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16bd1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d16bd4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16bd8 je 0x10d16be3 */
  if (C.zf) goto L_10d16be3;
  /* 10d16bda mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d16bdd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16be1 jne 0x10d16bf2 */
  if (!C.zf) goto L_10d16bf2;
L_10d16be3:;
  /* 10d16be3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d16be6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d16be7 call dword ptr [0x10d4032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4032c))), 0x10d16bedu);
  /* 10d16bed jmp 0x10d16d6a */
  goto L_10d16d6a;
L_10d16bf2:;
  /* 10d16bf2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d16bf5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16bf9 jne 0x10d16c0f */
  if (!C.zf) goto L_10d16c0f;
  /* 10d16bfb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d16bfe mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10d16c05 mov eax, 1 */
  EAX = (0x1u);
  /* 10d16c0a jmp 0x10d16d6a */
  goto L_10d16d6a;
L_10d16c0f:;
  /* 10d16c0f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d16c12 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16c16 jne 0x10d16c20 */
  if (!C.zf) goto L_10d16c20;
  /* 10d16c18 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d16c1b jmp 0x10d16d6a */
  goto L_10d16d6a;
L_10d16c20:;
  /* 10d16c20 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d16c23 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d16c26 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d16c29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16c2c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10d16c2f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d16c32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16c35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d16c38 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10d16c3b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d16c3e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16c42 jne 0x10d16d47 */
  if (!C.zf) goto L_10d16d47;
  /* 10d16c48 mov eax, dword ptr [0x10d3cc78] */
  EAX = (r32((uint32_t)(0x10d3cc78)));
  /* 10d16c4d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d16c50 jmp 0x10d16c5b */
  goto L_10d16c5b;
L_10d16c52:;
  /* 10d16c52 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d16c55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16c58 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10d16c5b:;
  /* 10d16c5b mov edx, dword ptr [0x10d3cc78] */
  EDX = (r32((uint32_t)(0x10d3cc78)));
  /* 10d16c61 add edx, dword ptr [0x10d3cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d3cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16c67 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16c6a jge 0x10d16c82 */
  if ((C.sf==C.of)) goto L_10d16c82;
  /* 10d16c6c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d16c6f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d16c72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16c75 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10d16c78 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10d16c80 jmp 0x10d16c52 */
  goto L_10d16c52;
L_10d16c82:;
  /* 10d16c82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16c85 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10d16c88 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d16c8b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d16c8e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16c94 jne 0x10d16ca5 */
  if (!C.zf) goto L_10d16ca5;
  /* 10d16c96 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16c99 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10d16ca0 jmp 0x10d16d2d */
  goto L_10d16d2d;
L_10d16ca5:;
  /* 10d16ca5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d16ca8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16cae jne 0x10d16cbc */
  if (!C.zf) goto L_10d16cbc;
  /* 10d16cb0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16cb3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10d16cba jmp 0x10d16d2d */
  goto L_10d16d2d;
L_10d16cbc:;
  /* 10d16cbc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d16cbf cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16cc5 jne 0x10d16cd3 */
  if (!C.zf) goto L_10d16cd3;
  /* 10d16cc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16cca mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10d16cd1 jmp 0x10d16d2d */
  goto L_10d16d2d;
L_10d16cd3:;
  /* 10d16cd3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d16cd6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16cdc jne 0x10d16cea */
  if (!C.zf) goto L_10d16cea;
  /* 10d16cde mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16ce1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10d16ce8 jmp 0x10d16d2d */
  goto L_10d16d2d;
L_10d16cea:;
  /* 10d16cea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d16ced cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16cf3 jne 0x10d16d01 */
  if (!C.zf) goto L_10d16d01;
  /* 10d16cf5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16cf8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10d16cff jmp 0x10d16d2d */
  goto L_10d16d2d;
L_10d16d01:;
  /* 10d16d01 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d16d04 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16d0a jne 0x10d16d18 */
  if (!C.zf) goto L_10d16d18;
  /* 10d16d0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16d0f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10d16d16 jmp 0x10d16d2d */
  goto L_10d16d2d;
L_10d16d18:;
  /* 10d16d18 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d16d1b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16d21 jne 0x10d16d2d */
  if (!C.zf) goto L_10d16d2d;
  /* 10d16d23 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16d26 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10d16d2d:;
  /* 10d16d2d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16d30 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10d16d33 push edx */
  push32((uint32_t)(EDX));
  /* 10d16d34 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d16d36 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10d16d39u);
  /* 10d16d39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16d3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16d3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d16d42 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10d16d45 jmp 0x10d16d5e */
  goto L_10d16d5e;
L_10d16d47:;
  /* 10d16d47 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d16d4a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10d16d51 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d16d54 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d16d57 push ecx */
  push32((uint32_t)(ECX));
  /* 10d16d58 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10d16d5bu);
  /* 10d16d5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d16d5e:;
  /* 10d16d5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16d61 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d16d64 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10d16d67 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d16d6a:;
  /* 10d16d6a mov esp, ebp */
  ESP = (EBP);
  /* 10d16d6c pop ebp */
  EBP = (pop32());
  /* 10d16d6d ret  */
  ESPCHK(0x10d16bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d70 @ 0x10d16d70 (89 bytes, 35 insns) */
void f_10d16d70(void) {
  FTRACE(0x10d16d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16d71 mov ebp, esp */
  EBP = (ESP);
  /* 10d16d73 push ecx */
  push32((uint32_t)(ECX));
  /* 10d16d74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d16d77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d16d7a:;
  /* 10d16d7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16d7d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d16d7f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16d82 je 0x10d16da2 */
  if (C.zf) goto L_10d16da2;
  /* 10d16d84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16d87 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16d8a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d16d8d mov ecx, dword ptr [0x10d3cc84] */
  ECX = (r32((uint32_t)(0x10d3cc84)));
  /* 10d16d93 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d16d96 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d16d99 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16d9b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16d9e jae 0x10d16da2 */
  if (!C.cf) goto L_10d16da2;
  /* 10d16da0 jmp 0x10d16d7a */
  goto L_10d16d7a;
L_10d16da2:;
  /* 10d16da2 mov eax, dword ptr [0x10d3cc84] */
  EAX = (r32((uint32_t)(0x10d3cc84)));
  /* 10d16da7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d16daa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d16dad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16daf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16db2 jae 0x10d16dbe */
  if (!C.cf) goto L_10d16dbe;
  /* 10d16db4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16db7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d16db9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16dbc je 0x10d16dc2 */
  if (C.zf) goto L_10d16dc2;
L_10d16dbe:;
  /* 10d16dbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d16dc0 jmp 0x10d16dc5 */
  goto L_10d16dc5;
L_10d16dc2:;
  /* 10d16dc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d16dc5:;
  /* 10d16dc5 mov esp, ebp */
  ESP = (EBP);
  /* 10d16dc7 pop ebp */
  EBP = (pop32());
  /* 10d16dc8 ret  */
  ESPCHK(0x10d16d70u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10d16dd0 (48 bytes, 17 insns) */
void f_10d16dd0(void) {
  FTRACE(0x10d16dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10d16dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d16dd4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d16dd6 call 0x10d16ad0 */
  push32(0x10d16ddbu); f_10d16ad0();
  /* 10d16ddb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16dde mov eax, dword ptr [0x10d3e60c] */
  EAX = (r32((uint32_t)(0x10d3e60c)));
  /* 10d16de3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d16de6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16de9 mov dword ptr [0x10d3e60c], ecx */
  w32((uint32_t)(0x10d3e60c), (ECX));
  /* 10d16def push 9 */
  push32((uint32_t)(0x9u));
  /* 10d16df1 call 0x10d16b70 */
  push32(0x10d16df6u); f_10d16b70();
  /* 10d16df6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16df9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16dfc mov esp, ebp */
  ESP = (EBP);
  /* 10d16dfe pop ebp */
  EBP = (pop32());
  /* 10d16dff ret  */
  ESPCHK(0x10d16dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e00 @ 0x10d16e00 (10 bytes, 5 insns) */
void f_10d16e00(void) {
  FTRACE(0x10d16e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16e01 mov ebp, esp */
  EBP = (ESP);
  /* 10d16e03 mov eax, dword ptr [0x10d3e60c] */
  EAX = (r32((uint32_t)(0x10d3e60c)));
  /* 10d16e08 pop ebp */
  EBP = (pop32());
  /* 10d16e09 ret  */
  ESPCHK(0x10d16e00u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10d16e10 (45 bytes, 19 insns) */
void f_10d16e10(void) {
  FTRACE(0x10d16e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16e11 mov ebp, esp */
  EBP = (ESP);
  /* 10d16e13 push ecx */
  push32((uint32_t)(ECX));
  /* 10d16e14 mov eax, dword ptr [0x10d3e60c] */
  EAX = (r32((uint32_t)(0x10d3e60c)));
  /* 10d16e19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d16e1c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16e20 je 0x10d16e30 */
  if (C.zf) goto L_10d16e30;
  /* 10d16e22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16e25 push ecx */
  push32((uint32_t)(ECX));
  /* 10d16e26 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10d16e29u);
  /* 10d16e29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16e2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d16e2e jne 0x10d16e34 */
  if (!C.zf) goto L_10d16e34;
L_10d16e30:;
  /* 10d16e30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d16e32 jmp 0x10d16e39 */
  goto L_10d16e39;
L_10d16e34:;
  /* 10d16e34 mov eax, 1 */
  EAX = (0x1u);
L_10d16e39:;
  /* 10d16e39 mov esp, ebp */
  ESP = (EBP);
  /* 10d16e3b pop ebp */
  EBP = (pop32());
  /* 10d16e3c ret  */
  ESPCHK(0x10d16e10u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10d16e40 (88 bytes, 40 insns) */
void f_10d16e40(void) {
  FTRACE(0x10d16e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16e40 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d16e44 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d16e48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d16e4a je 0x10d16e93 */
  if (C.zf) goto L_10d16e93;
  /* 10d16e4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d16e4e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10d16e52 push edi */
  push32((uint32_t)(EDI));
  /* 10d16e53 mov edi, ecx */
  EDI = (ECX);
  /* 10d16e55 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16e58 jb 0x10d16e87 */
  if (C.cf) goto L_10d16e87;
  /* 10d16e5a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d16e5c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10d16e5f je 0x10d16e69 */
  if (C.zf) goto L_10d16e69;
  /* 10d16e61 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10d16e63:;
  /* 10d16e63 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d16e65 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d16e66 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d16e67 jne 0x10d16e63 */
  if (!C.zf) goto L_10d16e63;
L_10d16e69:;
  /* 10d16e69 mov ecx, eax */
  ECX = (EAX);
  /* 10d16e6b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10d16e6e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16e70 mov ecx, eax */
  ECX = (EAX);
  /* 10d16e72 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10d16e75 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16e77 mov ecx, edx */
  ECX = (EDX);
  /* 10d16e79 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d16e7c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d16e7f je 0x10d16e87 */
  if (C.zf) goto L_10d16e87;
  /* 10d16e81 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d16e83 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d16e85 je 0x10d16e8d */
  if (C.zf) goto L_10d16e8d;
L_10d16e87:;
  /* 10d16e87 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d16e89 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d16e8a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10d16e8b jne 0x10d16e87 */
  if (!C.zf) goto L_10d16e87;
L_10d16e8d:;
  /* 10d16e8d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d16e91 pop edi */
  EDI = (pop32());
  /* 10d16e92 ret  */
  ESPCHK(0x10d16e40u, _esp0);
  ESP += 4; return;
L_10d16e93:;
  /* 10d16e93 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d16e97 ret  */
  ESPCHK(0x10d16e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ea0 @ 0x10d16ea0 (23 bytes, 10 insns) */
void f_10d16ea0(void) {
  FTRACE(0x10d16ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10d16ea3 mov eax, dword ptr [0x10d3e608] */
  EAX = (r32((uint32_t)(0x10d3e608)));
  /* 10d16ea8 push eax */
  push32((uint32_t)(EAX));
  /* 10d16ea9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16eac push ecx */
  push32((uint32_t)(ECX));
  /* 10d16ead call 0x10d16ec0 */
  push32(0x10d16eb2u); f_10d16ec0();
  /* 10d16eb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16eb5 pop ebp */
  EBP = (pop32());
  /* 10d16eb6 ret  */
  ESPCHK(0x10d16ea0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10d16ec0 (87 bytes, 34 insns) */
void f_10d16ec0(void) {
  FTRACE(0x10d16ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10d16ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d16ec4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16ec8 jbe 0x10d16ece */
  if ((C.cf||C.zf)) goto L_10d16ece;
  /* 10d16eca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d16ecc jmp 0x10d16f13 */
  goto L_10d16f13;
L_10d16ece:;
  /* 10d16ece cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16ed2 ja 0x10d16ee5 */
  if ((!C.cf&&!C.zf)) goto L_10d16ee5;
  /* 10d16ed4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16ed7 push eax */
  push32((uint32_t)(EAX));
  /* 10d16ed8 call 0x10d16f20 */
  push32(0x10d16eddu); f_10d16f20();
  /* 10d16edd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16ee0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d16ee3 jmp 0x10d16eec */
  goto L_10d16eec;
L_10d16ee5:;
  /* 10d16ee5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d16eec:;
  /* 10d16eec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16ef0 jne 0x10d16ef8 */
  if (!C.zf) goto L_10d16ef8;
  /* 10d16ef2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16ef6 jne 0x10d16efd */
  if (!C.zf) goto L_10d16efd;
L_10d16ef8:;
  /* 10d16ef8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16efb jmp 0x10d16f13 */
  goto L_10d16f13;
L_10d16efd:;
  /* 10d16efd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16f00 push ecx */
  push32((uint32_t)(ECX));
  /* 10d16f01 call 0x10d16e10 */
  push32(0x10d16f06u); f_10d16e10();
  /* 10d16f06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16f09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d16f0b jne 0x10d16f11 */
  if (!C.zf) goto L_10d16f11;
  /* 10d16f0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d16f0f jmp 0x10d16f13 */
  goto L_10d16f13;
L_10d16f11:;
  /* 10d16f11 jmp 0x10d16ece */
  goto L_10d16ece;
L_10d16f13:;
  /* 10d16f13 mov esp, ebp */
  ESP = (EBP);
  /* 10d16f15 pop ebp */
  EBP = (pop32());
  /* 10d16f16 ret  */
  ESPCHK(0x10d16ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f20 @ 0x10d16f20 (109 bytes, 37 insns) */
void f_10d16f20(void) {
  FTRACE(0x10d16f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16f21 mov ebp, esp */
  EBP = (ESP);
  /* 10d16f23 push ecx */
  push32((uint32_t)(ECX));
  /* 10d16f24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16f27 cmp eax, dword ptr [0x10d3cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16f2d ja 0x10d16f5d */
  if ((!C.cf&&!C.zf)) goto L_10d16f5d;
  /* 10d16f2f push 9 */
  push32((uint32_t)(0x9u));
  /* 10d16f31 call 0x10d16ad0 */
  push32(0x10d16f36u); f_10d16ad0();
  /* 10d16f36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16f39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16f3c push ecx */
  push32((uint32_t)(ECX));
  /* 10d16f3d call 0x10d17a60 */
  push32(0x10d16f42u); f_10d17a60();
  /* 10d16f42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16f45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d16f48 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d16f4a call 0x10d16b70 */
  push32(0x10d16f4fu); f_10d16b70();
  /* 10d16f4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16f52 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16f56 je 0x10d16f5d */
  if (C.zf) goto L_10d16f5d;
  /* 10d16f58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d16f5b jmp 0x10d16f89 */
  goto L_10d16f89;
L_10d16f5d:;
  /* 10d16f5d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16f61 jne 0x10d16f6a */
  if (!C.zf) goto L_10d16f6a;
  /* 10d16f63 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10d16f6a:;
  /* 10d16f6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16f6d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16f70 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10d16f73 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10d16f76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16f79 push eax */
  push32((uint32_t)(EAX));
  /* 10d16f7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d16f7c mov ecx, dword ptr [0x10d3fdcc] */
  ECX = (r32((uint32_t)(0x10d3fdcc)));
  /* 10d16f82 push ecx */
  push32((uint32_t)(ECX));
  /* 10d16f83 call dword ptr [0x10d40330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40330))), 0x10d16f89u);
L_10d16f89:;
  /* 10d16f89 mov esp, ebp */
  ESP = (EBP);
  /* 10d16f8b pop ebp */
  EBP = (pop32());
  /* 10d16f8c ret  */
  ESPCHK(0x10d16f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f90 @ 0x10d16f90 (10 bytes, 5 insns) */
void f_10d16f90(void) {
  FTRACE(0x10d16f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16f91 mov ebp, esp */
  EBP = (ESP);
  /* 10d16f93 mov eax, 1 */
  EAX = (0x1u);
  /* 10d16f98 pop ebp */
  EBP = (pop32());
  /* 10d16f99 ret  */
  ESPCHK(0x10d16f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fa0 @ 0x10d16fa0 (173 bytes, 59 insns) */
void f_10d16fa0(void) {
  FTRACE(0x10d16fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d16fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d16fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10d16fa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d16fa6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16faa jbe 0x10d16fb3 */
  if ((C.cf||C.zf)) goto L_10d16fb3;
  /* 10d16fac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d16fae jmp 0x10d17049 */
  goto L_10d17049;
L_10d16fb3:;
  /* 10d16fb3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d16fb5 call 0x10d16ad0 */
  push32(0x10d16fbau); f_10d16ad0();
  /* 10d16fba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16fbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16fc0 push eax */
  push32((uint32_t)(EAX));
  /* 10d16fc1 call 0x10d173d0 */
  push32(0x10d16fc6u); f_10d173d0();
  /* 10d16fc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16fc9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d16fcc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16fd0 je 0x10d17011 */
  if (C.zf) goto L_10d17011;
  /* 10d16fd2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d16fd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d16fdc cmp ecx, dword ptr [0x10d3cc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d16fe2 ja 0x10d17002 */
  if ((!C.cf&&!C.zf)) goto L_10d17002;
  /* 10d16fe4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d16fe7 push edx */
  push32((uint32_t)(EDX));
  /* 10d16fe8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16feb push eax */
  push32((uint32_t)(EAX));
  /* 10d16fec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d16fef push ecx */
  push32((uint32_t)(ECX));
  /* 10d16ff0 call 0x10d182a0 */
  push32(0x10d16ff5u); f_10d182a0();
  /* 10d16ff5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d16ff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d16ffa je 0x10d17002 */
  if (C.zf) goto L_10d17002;
  /* 10d16ffc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d16fff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d17002:;
  /* 10d17002 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d17004 call 0x10d16b70 */
  push32(0x10d17009u); f_10d16b70();
  /* 10d17009 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1700c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1700f jmp 0x10d17049 */
  goto L_10d17049;
L_10d17011:;
  /* 10d17011 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d17013 call 0x10d16b70 */
  push32(0x10d17018u); f_10d16b70();
  /* 10d17018 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1701b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1701f jne 0x10d17028 */
  if (!C.zf) goto L_10d17028;
  /* 10d17021 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10d17028:;
  /* 10d17028 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1702b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1702e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10d17030 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10d17033 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d17036 push ecx */
  push32((uint32_t)(ECX));
  /* 10d17037 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1703a push edx */
  push32((uint32_t)(EDX));
  /* 10d1703b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10d1703d mov eax, dword ptr [0x10d3fdcc] */
  EAX = (r32((uint32_t)(0x10d3fdcc)));
  /* 10d17042 push eax */
  push32((uint32_t)(EAX));
  /* 10d17043 call dword ptr [0x10d40334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40334))), 0x10d17049u);
L_10d17049:;
  /* 10d17049 mov esp, ebp */
  ESP = (EBP);
  /* 10d1704b pop ebp */
  EBP = (pop32());
  /* 10d1704c ret  */
  ESPCHK(0x10d16fa0u, _esp0);
  ESP += 4; return;
}

