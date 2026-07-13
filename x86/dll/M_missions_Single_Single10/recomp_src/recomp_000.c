#include "recomp.h"

/* OnInit @ 0x10e11005 (5 bytes, 1 insns) */
void f_10e11005(void) {
  FTRACE(0x10e11005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e11005 jmp 0x10e11090 */
  f_10e11090(); return;
}

/* thunk_FUN_10001750 @ 0x10e1100a (5 bytes, 1 insns) */
void f_10e1100a(void) {
  FTRACE(0x10e1100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1100a jmp 0x10e11750 */
  f_10e11750(); return;
}

/* thunk_FUN_10001030 @ 0x10e1100f (5 bytes, 1 insns) */
void f_10e1100f(void) {
  FTRACE(0x10e1100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e1100f jmp 0x10e11030 */
  f_10e11030(); return;
}

/* ProcessScenary @ 0x10e11014 (5 bytes, 1 insns) */
void f_10e11014(void) {
  FTRACE(0x10e11014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e11014 jmp 0x10e11160 */
  f_10e11160(); return;
}

/* FUN_10001030 @ 0x10e11030 (67 bytes, 26 insns) */
void f_10e11030(void) {
  FTRACE(0x10e11030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e11030 push ebp */
  push32((uint32_t)(EBP));
  /* 10e11031 mov ebp, esp */
  EBP = (ESP);
  /* 10e11033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e11036 push ebx */
  push32((uint32_t)(EBX));
  /* 10e11037 push esi */
  push32((uint32_t)(ESI));
  /* 10e11038 push edi */
  push32((uint32_t)(EDI));
  /* 10e11039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10e1103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10e11041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e11046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e11048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11052 je 0x10e11056 */
  if (C.zf) goto L_10e11056;
  /* 10e11054 jmp 0x10e1105b */
  goto L_10e1105b;
L_10e11056:;
  /* 10e11056 call 0x10e11005 */
  push32(0x10e1105bu); f_10e11005();
L_10e1105b:;
  /* 10e1105b mov eax, 1 */
  EAX = (0x1u);
  /* 10e11060 pop edi */
  EDI = (pop32());
  /* 10e11061 pop esi */
  ESI = (pop32());
  /* 10e11062 pop ebx */
  EBX = (pop32());
  /* 10e11063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11068 call 0x10e117f0 */
  push32(0x10e1106du); f_10e117f0();
  /* 10e1106d mov esp, ebp */
  ESP = (EBP);
  /* 10e1106f pop ebp */
  EBP = (pop32());
  /* 10e11070 ret 0xc */
  ESPCHK(0x10e11030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10e11090 (159 bytes, 51 insns) */
void f_10e11090(void) {
  FTRACE(0x10e11090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e11090 push ebp */
  push32((uint32_t)(EBP));
  /* 10e11091 mov ebp, esp */
  EBP = (ESP);
  /* 10e11093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e11096 push ebx */
  push32((uint32_t)(EBX));
  /* 10e11097 push esi */
  push32((uint32_t)(ESI));
  /* 10e11098 push edi */
  push32((uint32_t)(EDI));
  /* 10e11099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10e1109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10e110a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e110a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e110a8 mov esi, esp */
  ESI = (ESP);
  /* 10e110aa push 0x10e39030 */
  push32((uint32_t)(0x10e39030u));
  /* 10e110af push 0x10e3e3e0 */
  push32((uint32_t)(0x10e3e3e0u));
  /* 10e110b4 call dword ptr [0x10e403c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403c8))), 0x10e110bau);
  /* 10e110ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e110bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e110bf call 0x10e117f0 */
  push32(0x10e110c4u); f_10e117f0();
  /* 10e110c4 mov esi, esp */
  ESI = (ESP);
  /* 10e110c6 call dword ptr [0x10e403cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403cc))), 0x10e110ccu);
  /* 10e110cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e110ce call 0x10e117f0 */
  push32(0x10e110d3u); f_10e117f0();
  /* 10e110d3 mov esi, esp */
  ESI = (ESP);
  /* 10e110d5 push 0x10e39028 */
  push32((uint32_t)(0x10e39028u));
  /* 10e110da push 1 */
  push32((uint32_t)(0x1u));
  /* 10e110dc call dword ptr [0x10e403c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403c4))), 0x10e110e2u);
  /* 10e110e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e110e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e110e7 call 0x10e117f0 */
  push32(0x10e110ecu); f_10e117f0();
  /* 10e110ec mov esi, esp */
  ESI = (ESP);
  /* 10e110ee push 0x10e3901c */
  push32((uint32_t)(0x10e3901cu));
  /* 10e110f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e110f5 call dword ptr [0x10e403c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403c4))), 0x10e110fbu);
  /* 10e110fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e110fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11100 call 0x10e117f0 */
  push32(0x10e11105u); f_10e117f0();
  /* 10e11105 mov esi, esp */
  ESI = (ESP);
  /* 10e11107 push 0x10e3901c */
  push32((uint32_t)(0x10e3901cu));
  /* 10e1110c push 5 */
  push32((uint32_t)(0x5u));
  /* 10e1110e call dword ptr [0x10e403c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403c4))), 0x10e11114u);
  /* 10e11114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11117 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11119 call 0x10e117f0 */
  push32(0x10e1111eu); f_10e117f0();
  /* 10e1111e pop edi */
  EDI = (pop32());
  /* 10e1111f pop esi */
  ESI = (pop32());
  /* 10e11120 pop ebx */
  EBX = (pop32());
  /* 10e11121 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11124 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11126 call 0x10e117f0 */
  push32(0x10e1112bu); f_10e117f0();
  /* 10e1112b mov esp, ebp */
  ESP = (EBP);
  /* 10e1112d pop ebp */
  EBP = (pop32());
  /* 10e1112e ret  */
  ESPCHK(0x10e11090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001160 @ 0x10e11160 (1216 bytes, 370 insns) */
void f_10e11160(void) {
  FTRACE(0x10e11160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e11160 push ebp */
  push32((uint32_t)(EBP));
  /* 10e11161 mov ebp, esp */
  EBP = (ESP);
  /* 10e11163 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e11166 push ebx */
  push32((uint32_t)(EBX));
  /* 10e11167 push esi */
  push32((uint32_t)(ESI));
  /* 10e11168 push edi */
  push32((uint32_t)(EDI));
  /* 10e11169 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10e1116c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10e11171 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e11176 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e11178 mov esi, esp */
  ESI = (ESP);
  /* 10e1117a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10e1117c call dword ptr [0x10e403a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403a4))), 0x10e11182u);
  /* 10e11182 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11185 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11187 call 0x10e117f0 */
  push32(0x10e1118cu); f_10e117f0();
  /* 10e1118c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e11191 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e11193 je 0x10e114b1 */
  if (C.zf) goto L_10e114b1;
  /* 10e11199 mov esi, esp */
  ESI = (ESP);
  /* 10e1119b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1119d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10e1119f call dword ptr [0x10e403b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b0))), 0x10e111a5u);
  /* 10e111a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e111a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e111aa call 0x10e117f0 */
  push32(0x10e111afu); f_10e117f0();
  /* 10e111af mov esi, esp */
  ESI = (ESP);
  /* 10e111b1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10e111b6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e111b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e111ba call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e111c0u);
  /* 10e111c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e111c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e111c5 call 0x10e117f0 */
  push32(0x10e111cau); f_10e117f0();
  /* 10e111ca mov esi, esp */
  ESI = (ESP);
  /* 10e111cc push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10e111d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e111d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e111d5 call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e111dbu);
  /* 10e111db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e111de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e111e0 call 0x10e117f0 */
  push32(0x10e111e5u); f_10e117f0();
  /* 10e111e5 mov esi, esp */
  ESI = (ESP);
  /* 10e111e7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10e111ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10e111ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10e111f0 call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e111f6u);
  /* 10e111f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e111f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e111fb call 0x10e117f0 */
  push32(0x10e11200u); f_10e117f0();
  /* 10e11200 mov esi, esp */
  ESI = (ESP);
  /* 10e11202 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10e11207 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e11209 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1120b call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e11211u);
  /* 10e11211 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11214 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11216 call 0x10e117f0 */
  push32(0x10e1121bu); f_10e117f0();
  /* 10e1121b mov esi, esp */
  ESI = (ESP);
  /* 10e1121d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10e11222 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e11224 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e11226 call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e1122cu);
  /* 10e1122c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1122f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11231 call 0x10e117f0 */
  push32(0x10e11236u); f_10e117f0();
  /* 10e11236 mov esi, esp */
  ESI = (ESP);
  /* 10e11238 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10e1123d push 4 */
  push32((uint32_t)(0x4u));
  /* 10e1123f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e11241 call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e11247u);
  /* 10e11247 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1124a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1124c call 0x10e117f0 */
  push32(0x10e11251u); f_10e117f0();
  /* 10e11251 mov esi, esp */
  ESI = (ESP);
  /* 10e11253 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10e11258 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e1125a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1125c call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e11262u);
  /* 10e11262 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11265 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11267 call 0x10e117f0 */
  push32(0x10e1126cu); f_10e117f0();
  /* 10e1126c mov esi, esp */
  ESI = (ESP);
  /* 10e1126e push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 10e11273 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e11275 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e11277 call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e1127du);
  /* 10e1127d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11280 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11282 call 0x10e117f0 */
  push32(0x10e11287u); f_10e117f0();
  /* 10e11287 mov esi, esp */
  ESI = (ESP);
  /* 10e11289 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10e1128e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e11290 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e11292 call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e11298u);
  /* 10e11298 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1129b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1129d call 0x10e117f0 */
  push32(0x10e112a2u); f_10e117f0();
  /* 10e112a2 mov esi, esp */
  ESI = (ESP);
  /* 10e112a4 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10e112a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e112ab push 1 */
  push32((uint32_t)(0x1u));
  /* 10e112ad call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e112b3u);
  /* 10e112b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e112b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e112b8 call 0x10e117f0 */
  push32(0x10e112bdu); f_10e117f0();
  /* 10e112bd mov esi, esp */
  ESI = (ESP);
  /* 10e112bf push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10e112c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e112c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e112c8 call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e112ceu);
  /* 10e112ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e112d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e112d3 call 0x10e117f0 */
  push32(0x10e112d8u); f_10e117f0();
  /* 10e112d8 mov esi, esp */
  ESI = (ESP);
  /* 10e112da push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10e112df push 4 */
  push32((uint32_t)(0x4u));
  /* 10e112e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e112e3 call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e112e9u);
  /* 10e112e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e112ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e112ee call 0x10e117f0 */
  push32(0x10e112f3u); f_10e117f0();
  /* 10e112f3 mov esi, esp */
  ESI = (ESP);
  /* 10e112f5 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10e112fa push 3 */
  push32((uint32_t)(0x3u));
  /* 10e112fc push 4 */
  push32((uint32_t)(0x4u));
  /* 10e112fe call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e11304u);
  /* 10e11304 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11307 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11309 call 0x10e117f0 */
  push32(0x10e1130eu); f_10e117f0();
  /* 10e1130e mov esi, esp */
  ESI = (ESP);
  /* 10e11310 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10e11315 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e11317 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e11319 call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e1131fu);
  /* 10e1131f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11322 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11324 call 0x10e117f0 */
  push32(0x10e11329u); f_10e117f0();
  /* 10e11329 mov esi, esp */
  ESI = (ESP);
  /* 10e1132b push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10e11330 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e11332 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e11334 call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e1133au);
  /* 10e1133a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1133d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1133f call 0x10e117f0 */
  push32(0x10e11344u); f_10e117f0();
  /* 10e11344 mov esi, esp */
  ESI = (ESP);
  /* 10e11346 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10e1134b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1134d push 4 */
  push32((uint32_t)(0x4u));
  /* 10e1134f call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e11355u);
  /* 10e11355 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11358 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1135a call 0x10e117f0 */
  push32(0x10e1135fu); f_10e117f0();
  /* 10e1135f mov esi, esp */
  ESI = (ESP);
  /* 10e11361 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10e11366 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e11368 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e1136a call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e11370u);
  /* 10e11370 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11373 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11375 call 0x10e117f0 */
  push32(0x10e1137au); f_10e117f0();
  /* 10e1137a mov esi, esp */
  ESI = (ESP);
  /* 10e1137c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10e11381 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e11383 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e11385 call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e1138bu);
  /* 10e1138b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1138e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11390 call 0x10e117f0 */
  push32(0x10e11395u); f_10e117f0();
  /* 10e11395 mov esi, esp */
  ESI = (ESP);
  /* 10e11397 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10e1139c push 3 */
  push32((uint32_t)(0x3u));
  /* 10e1139e push 5 */
  push32((uint32_t)(0x5u));
  /* 10e113a0 call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e113a6u);
  /* 10e113a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e113a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e113ab call 0x10e117f0 */
  push32(0x10e113b0u); f_10e117f0();
  /* 10e113b0 mov esi, esp */
  ESI = (ESP);
  /* 10e113b2 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10e113b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e113b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e113bb call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e113c1u);
  /* 10e113c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e113c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e113c6 call 0x10e117f0 */
  push32(0x10e113cbu); f_10e117f0();
  /* 10e113cb mov esi, esp */
  ESI = (ESP);
  /* 10e113cd push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10e113d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e113d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e113d6 call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e113dcu);
  /* 10e113dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e113df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e113e1 call 0x10e117f0 */
  push32(0x10e113e6u); f_10e117f0();
  /* 10e113e6 mov esi, esp */
  ESI = (ESP);
  /* 10e113e8 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10e113ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10e113ef push 5 */
  push32((uint32_t)(0x5u));
  /* 10e113f1 call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e113f7u);
  /* 10e113f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e113fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e113fc call 0x10e117f0 */
  push32(0x10e11401u); f_10e117f0();
  /* 10e11401 mov esi, esp */
  ESI = (ESP);
  /* 10e11403 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10e11408 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e1140a push 5 */
  push32((uint32_t)(0x5u));
  /* 10e1140c call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e11412u);
  /* 10e11412 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11417 call 0x10e117f0 */
  push32(0x10e1141cu); f_10e117f0();
  /* 10e1141c mov esi, esp */
  ESI = (ESP);
  /* 10e1141e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10e11423 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e11425 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e11427 call dword ptr [0x10e403b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b4))), 0x10e1142du);
  /* 10e1142d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11430 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11432 call 0x10e117f0 */
  push32(0x10e11437u); f_10e117f0();
  /* 10e11437 mov esi, esp */
  ESI = (ESP);
  /* 10e11439 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e1143b push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1143d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1143f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e11441 push 0x10e3906c */
  push32((uint32_t)(0x10e3906cu));
  /* 10e11446 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e11448 call dword ptr [0x10e403ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403ac))), 0x10e1144eu);
  /* 10e1144e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11451 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11453 call 0x10e117f0 */
  push32(0x10e11458u); f_10e117f0();
  /* 10e11458 mov esi, esp */
  ESI = (ESP);
  /* 10e1145a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1145c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1145e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e11460 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e11462 push 0x10e39060 */
  push32((uint32_t)(0x10e39060u));
  /* 10e11467 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e11469 call dword ptr [0x10e403ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403ac))), 0x10e1146fu);
  /* 10e1146f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11472 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11474 call 0x10e117f0 */
  push32(0x10e11479u); f_10e117f0();
  /* 10e11479 mov esi, esp */
  ESI = (ESP);
  /* 10e1147b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1147d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1147f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e11481 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e11483 push 0x10e39060 */
  push32((uint32_t)(0x10e39060u));
  /* 10e11488 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e1148a call dword ptr [0x10e403ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403ac))), 0x10e11490u);
  /* 10e11490 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11493 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11495 call 0x10e117f0 */
  push32(0x10e1149au); f_10e117f0();
  /* 10e1149a mov esi, esp */
  ESI = (ESP);
  /* 10e1149c push 0x10e39058 */
  push32((uint32_t)(0x10e39058u));
  /* 10e114a1 call dword ptr [0x10e403bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403bc))), 0x10e114a7u);
  /* 10e114a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e114aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e114ac call 0x10e117f0 */
  push32(0x10e114b1u); f_10e117f0();
L_10e114b1:;
  /* 10e114b1 mov esi, esp */
  ESI = (ESP);
  /* 10e114b3 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10e114b5 call dword ptr [0x10e403a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403a4))), 0x10e114bbu);
  /* 10e114bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e114be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e114c0 call 0x10e117f0 */
  push32(0x10e114c5u); f_10e117f0();
  /* 10e114c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e114ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e114cc je 0x10e11560 */
  if (C.zf) goto L_10e11560;
  /* 10e114d2 mov esi, esp */
  ESI = (ESP);
  /* 10e114d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e114d6 call dword ptr [0x10e403c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403c0))), 0x10e114dcu);
  /* 10e114dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e114df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e114e1 call 0x10e117f0 */
  push32(0x10e114e6u); f_10e117f0();
  /* 10e114e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e114e8 jne 0x10e11560 */
  if (!C.zf) goto L_10e11560;
  /* 10e114ea push 4 */
  push32((uint32_t)(0x4u));
  /* 10e114ec push 0x10e3e3e0 */
  push32((uint32_t)(0x10e3e3e0u));
  /* 10e114f1 call 0x10e1100a */
  push32(0x10e114f6u); f_10e1100a();
  /* 10e114f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e114f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e114fb jne 0x10e11560 */
  if (!C.zf) goto L_10e11560;
  /* 10e114fd mov esi, esp */
  ESI = (ESP);
  /* 10e114ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10e11501 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10e11503 call dword ptr [0x10e403b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b0))), 0x10e11509u);
  /* 10e11509 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1150c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1150e call 0x10e117f0 */
  push32(0x10e11513u); f_10e117f0();
  /* 10e11513 mov esi, esp */
  ESI = (ESP);
  /* 10e11515 push 0x10e39050 */
  push32((uint32_t)(0x10e39050u));
  /* 10e1151a call dword ptr [0x10e403bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403bc))), 0x10e11520u);
  /* 10e11520 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11523 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11525 call 0x10e117f0 */
  push32(0x10e1152au); f_10e117f0();
  /* 10e1152a mov esi, esp */
  ESI = (ESP);
  /* 10e1152c push 0x88b8 */
  push32((uint32_t)(0x88b8u));
  /* 10e11531 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e11533 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e11535 call dword ptr [0x10e403b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b8))), 0x10e1153bu);
  /* 10e1153b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1153e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11540 call 0x10e117f0 */
  push32(0x10e11545u); f_10e117f0();
  /* 10e11545 mov esi, esp */
  ESI = (ESP);
  /* 10e11547 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10e1154c push 5 */
  push32((uint32_t)(0x5u));
  /* 10e1154e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e11550 call dword ptr [0x10e403b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b8))), 0x10e11556u);
  /* 10e11556 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11559 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1155b call 0x10e117f0 */
  push32(0x10e11560u); f_10e117f0();
L_10e11560:;
  /* 10e11560 mov esi, esp */
  ESI = (ESP);
  /* 10e11562 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10e11564 call dword ptr [0x10e403a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403a4))), 0x10e1156au);
  /* 10e1156a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1156d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1156f call 0x10e117f0 */
  push32(0x10e11574u); f_10e117f0();
  /* 10e11574 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e11579 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1157b je 0x10e1160f */
  if (C.zf) goto L_10e1160f;
  /* 10e11581 mov esi, esp */
  ESI = (ESP);
  /* 10e11583 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e11585 call dword ptr [0x10e403c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403c0))), 0x10e1158bu);
  /* 10e1158b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1158e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11590 call 0x10e117f0 */
  push32(0x10e11595u); f_10e117f0();
  /* 10e11595 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e11597 jne 0x10e1160f */
  if (!C.zf) goto L_10e1160f;
  /* 10e11599 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e1159b push 0x10e3e3e0 */
  push32((uint32_t)(0x10e3e3e0u));
  /* 10e115a0 call 0x10e1100a */
  push32(0x10e115a5u); f_10e1100a();
  /* 10e115a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e115a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e115aa jne 0x10e1160f */
  if (!C.zf) goto L_10e1160f;
  /* 10e115ac mov esi, esp */
  ESI = (ESP);
  /* 10e115ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10e115b0 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10e115b2 call dword ptr [0x10e403b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b0))), 0x10e115b8u);
  /* 10e115b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e115bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e115bd call 0x10e117f0 */
  push32(0x10e115c2u); f_10e117f0();
  /* 10e115c2 mov esi, esp */
  ESI = (ESP);
  /* 10e115c4 push 0x10e39048 */
  push32((uint32_t)(0x10e39048u));
  /* 10e115c9 call dword ptr [0x10e403bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403bc))), 0x10e115cfu);
  /* 10e115cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e115d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e115d4 call 0x10e117f0 */
  push32(0x10e115d9u); f_10e117f0();
  /* 10e115d9 mov esi, esp */
  ESI = (ESP);
  /* 10e115db push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10e115e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e115e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e115e4 call dword ptr [0x10e403b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b8))), 0x10e115eau);
  /* 10e115ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e115ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e115ef call 0x10e117f0 */
  push32(0x10e115f4u); f_10e117f0();
  /* 10e115f4 mov esi, esp */
  ESI = (ESP);
  /* 10e115f6 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10e115fb push 4 */
  push32((uint32_t)(0x4u));
  /* 10e115fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e115ff call dword ptr [0x10e403b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403b8))), 0x10e11605u);
  /* 10e11605 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11608 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1160a call 0x10e117f0 */
  push32(0x10e1160fu); f_10e117f0();
L_10e1160f:;
  /* 10e1160f pop edi */
  EDI = (pop32());
  /* 10e11610 pop esi */
  ESI = (pop32());
  /* 10e11611 pop ebx */
  EBX = (pop32());
  /* 10e11612 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11615 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11617 call 0x10e117f0 */
  push32(0x10e1161cu); f_10e117f0();
  /* 10e1161c mov esp, ebp */
  ESP = (EBP);
  /* 10e1161e pop ebp */
  EBP = (pop32());
  /* 10e1161f ret  */
  ESPCHK(0x10e11160u, _esp0);
  ESP += 4; return;
}

/* FUN_10001750 @ 0x10e11750 (67 bytes, 28 insns) */
void f_10e11750(void) {
  FTRACE(0x10e11750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e11750 push ebp */
  push32((uint32_t)(EBP));
  /* 10e11751 mov ebp, esp */
  EBP = (ESP);
  /* 10e11753 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e11756 push ebx */
  push32((uint32_t)(EBX));
  /* 10e11757 push esi */
  push32((uint32_t)(ESI));
  /* 10e11758 push edi */
  push32((uint32_t)(EDI));
  /* 10e11759 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10e1175c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10e11761 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e11766 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e11768 mov esi, esp */
  ESI = (ESP);
  /* 10e1176a mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 10e1176d push eax */
  push32((uint32_t)(EAX));
  /* 10e1176e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11771 push ecx */
  push32((uint32_t)(ECX));
  /* 10e11772 call dword ptr [0x10e403a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e403a8))), 0x10e11778u);
  /* 10e11778 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1177b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1177d call 0x10e117f0 */
  push32(0x10e11782u); f_10e117f0();
  /* 10e11782 pop edi */
  EDI = (pop32());
  /* 10e11783 pop esi */
  ESI = (pop32());
  /* 10e11784 pop ebx */
  EBX = (pop32());
  /* 10e11785 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11788 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1178a call 0x10e117f0 */
  push32(0x10e1178fu); f_10e117f0();
  /* 10e1178f mov esp, ebp */
  ESP = (EBP);
  /* 10e11791 pop ebp */
  EBP = (pop32());
  /* 10e11792 ret  */
  ESPCHK(0x10e11750u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10e117f0 (56 bytes, 28 insns) */
void f_10e117f0(void) {
  FTRACE(0x10e117f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e117f0 jne 0x10e117f3 */
  if (!C.zf) goto L_10e117f3;
  /* 10e117f2 ret  */
  ESPCHK(0x10e117f0u, _esp0);
  ESP += 4; return;
L_10e117f3:;
  /* 10e117f3 push ebp */
  push32((uint32_t)(EBP));
  /* 10e117f4 mov ebp, esp */
  EBP = (ESP);
  /* 10e117f6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e117f9 push eax */
  push32((uint32_t)(EAX));
  /* 10e117fa push edx */
  push32((uint32_t)(EDX));
  /* 10e117fb push ebx */
  push32((uint32_t)(EBX));
  /* 10e117fc push esi */
  push32((uint32_t)(ESI));
  /* 10e117fd push edi */
  push32((uint32_t)(EDI));
  /* 10e117fe push 0x10e3908c */
  push32((uint32_t)(0x10e3908cu));
  /* 10e11803 push 0x10e39088 */
  push32((uint32_t)(0x10e39088u));
  /* 10e11808 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10e1180a push 0x10e39078 */
  push32((uint32_t)(0x10e39078u));
  /* 10e1180f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e11811 call 0x10e11bc0 */
  push32(0x10e11816u); f_10e11bc0();
  /* 10e11816 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11819 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1181c jne 0x10e1181f */
  if (!C.zf) goto L_10e1181f;
  /* 10e1181e int3  */
  x86_unimpl("int3 @ 0x10e1181e");
L_10e1181f:;
  /* 10e1181f pop edi */
  EDI = (pop32());
  /* 10e11820 pop esi */
  ESI = (pop32());
  /* 10e11821 pop ebx */
  EBX = (pop32());
  /* 10e11822 pop edx */
  EDX = (pop32());
  /* 10e11823 pop eax */
  EAX = (pop32());
  /* 10e11824 mov esp, ebp */
  ESP = (EBP);
  /* 10e11826 pop ebp */
  EBP = (pop32());
  /* 10e11827 ret  */
  ESPCHK(0x10e117f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001830 @ 0x10e11830 (313 bytes, 78 insns) */
void f_10e11830(void) {
  FTRACE(0x10e11830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e11830 push ebp */
  push32((uint32_t)(EBP));
  /* 10e11831 mov ebp, esp */
  EBP = (ESP);
  /* 10e11833 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11837 jne 0x10e118f7 */
  if (!C.zf) goto L_10e118f7;
  /* 10e1183d call dword ptr [0x10e40250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40250))), 0x10e11843u);
  /* 10e11843 mov dword ptr [0x10e3e40c], eax */
  w32((uint32_t)(0x10e3e40c), (EAX));
  /* 10e11848 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1184a call 0x10e152f0 */
  push32(0x10e1184fu); f_10e152f0();
  /* 10e1184f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e11854 jne 0x10e1185d */
  if (!C.zf) goto L_10e1185d;
  /* 10e11856 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e11858 jmp 0x10e11965 */
  goto L_10e11965;
L_10e1185d:;
  /* 10e1185d mov eax, dword ptr [0x10e3e40c] */
  EAX = (r32((uint32_t)(0x10e3e40c)));
  /* 10e11862 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10e11865 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1186a mov dword ptr [0x10e3e418], eax */
  w32((uint32_t)(0x10e3e418), (EAX));
  /* 10e1186f mov ecx, dword ptr [0x10e3e40c] */
  ECX = (r32((uint32_t)(0x10e3e40c)));
  /* 10e11875 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1187b mov dword ptr [0x10e3e414], ecx */
  w32((uint32_t)(0x10e3e414), (ECX));
  /* 10e11881 mov edx, dword ptr [0x10e3e414] */
  EDX = (r32((uint32_t)(0x10e3e414)));
  /* 10e11887 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10e1188a add edx, dword ptr [0x10e3e418] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e3e418))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11890 mov dword ptr [0x10e3e410], edx */
  w32((uint32_t)(0x10e3e410), (EDX));
  /* 10e11896 mov eax, dword ptr [0x10e3e40c] */
  EAX = (r32((uint32_t)(0x10e3e40c)));
  /* 10e1189b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10e1189e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e118a3 mov dword ptr [0x10e3e40c], eax */
  w32((uint32_t)(0x10e3e40c), (EAX));
  /* 10e118a8 call 0x10e12460 */
  push32(0x10e118adu); f_10e12460();
  /* 10e118ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e118af jne 0x10e118bd */
  if (!C.zf) goto L_10e118bd;
  /* 10e118b1 call 0x10e15340 */
  push32(0x10e118b6u); f_10e15340();
  /* 10e118b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e118b8 jmp 0x10e11965 */
  goto L_10e11965;
L_10e118bd:;
  /* 10e118bd call dword ptr [0x10e4024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4024c))), 0x10e118c3u);
  /* 10e118c3 mov dword ptr [0x10e3ff4c], eax */
  w32((uint32_t)(0x10e3ff4c), (EAX));
  /* 10e118c8 call 0x10e150d0 */
  push32(0x10e118cdu); f_10e150d0();
  /* 10e118cd mov dword ptr [0x10e3e3f4], eax */
  w32((uint32_t)(0x10e3e3f4), (EAX));
  /* 10e118d2 call 0x10e12710 */
  push32(0x10e118d7u); f_10e12710();
  /* 10e118d7 call 0x10e14bc0 */
  push32(0x10e118dcu); f_10e14bc0();
  /* 10e118dc call 0x10e14a70 */
  push32(0x10e118e1u); f_10e14a70();
  /* 10e118e1 call 0x10e12260 */
  push32(0x10e118e6u); f_10e12260();
  /* 10e118e6 mov ecx, dword ptr [0x10e3e3f0] */
  ECX = (r32((uint32_t)(0x10e3e3f0)));
  /* 10e118ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e118ef mov dword ptr [0x10e3e3f0], ecx */
  w32((uint32_t)(0x10e3e3f0), (ECX));
  /* 10e118f5 jmp 0x10e11960 */
  goto L_10e11960;
L_10e118f7:;
  /* 10e118f7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e118fb jne 0x10e11950 */
  if (!C.zf) goto L_10e11950;
  /* 10e118fd cmp dword ptr [0x10e3e3f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e3f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11904 jle 0x10e1194a */
  if ((C.zf||C.sf!=C.of)) goto L_10e1194a;
  /* 10e11906 mov edx, dword ptr [0x10e3e3f0] */
  EDX = (r32((uint32_t)(0x10e3e3f0)));
  /* 10e1190c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1190f mov dword ptr [0x10e3e3f0], edx */
  w32((uint32_t)(0x10e3e3f0), (EDX));
  /* 10e11915 cmp dword ptr [0x10e3e444], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e444))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1191c jne 0x10e11923 */
  if (!C.zf) goto L_10e11923;
  /* 10e1191e call 0x10e122e0 */
  push32(0x10e11923u); f_10e122e0();
L_10e11923:;
  /* 10e11923 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e11925 call 0x10e14010 */
  push32(0x10e1192au); f_10e14010();
  /* 10e1192a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1192d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10e11930 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e11932 je 0x10e11939 */
  if (C.zf) goto L_10e11939;
  /* 10e11934 call 0x10e14920 */
  push32(0x10e11939u); f_10e14920();
L_10e11939:;
  /* 10e11939 call 0x10e12a40 */
  push32(0x10e1193eu); f_10e12a40();
  /* 10e1193e call 0x10e124f0 */
  push32(0x10e11943u); f_10e124f0();
  /* 10e11943 call 0x10e15340 */
  push32(0x10e11948u); f_10e15340();
  /* 10e11948 jmp 0x10e1194e */
  goto L_10e1194e;
L_10e1194a:;
  /* 10e1194a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1194c jmp 0x10e11965 */
  goto L_10e11965;
L_10e1194e:;
  /* 10e1194e jmp 0x10e11960 */
  goto L_10e11960;
L_10e11950:;
  /* 10e11950 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11954 jne 0x10e11960 */
  if (!C.zf) goto L_10e11960;
  /* 10e11956 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e11958 call 0x10e125e0 */
  push32(0x10e1195du); f_10e125e0();
  /* 10e1195d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e11960:;
  /* 10e11960 mov eax, 1 */
  EAX = (0x1u);
L_10e11965:;
  /* 10e11965 pop ebp */
  EBP = (pop32());
  /* 10e11966 ret 0xc */
  ESPCHK(0x10e11830u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10e11970 (243 bytes, 86 insns) */
void f_10e11970(void) {
  FTRACE(0x10e11970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e11970 push ebp */
  push32((uint32_t)(EBP));
  /* 10e11971 mov ebp, esp */
  EBP = (ESP);
  /* 10e11973 push ecx */
  push32((uint32_t)(ECX));
  /* 10e11974 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e1197b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1197f jne 0x10e11991 */
  if (!C.zf) goto L_10e11991;
  /* 10e11981 cmp dword ptr [0x10e3e3f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e3f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11988 jne 0x10e11991 */
  if (!C.zf) goto L_10e11991;
  /* 10e1198a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1198c jmp 0x10e11a5d */
  goto L_10e11a5d;
L_10e11991:;
  /* 10e11991 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11995 je 0x10e1199d */
  if (C.zf) goto L_10e1199d;
  /* 10e11997 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1199b jne 0x10e119df */
  if (!C.zf) goto L_10e119df;
L_10e1199d:;
  /* 10e1199d cmp dword ptr [0x10e3ff5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3ff5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e119a4 je 0x10e119bb */
  if (C.zf) goto L_10e119bb;
  /* 10e119a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e119a9 push eax */
  push32((uint32_t)(EAX));
  /* 10e119aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e119ad push ecx */
  push32((uint32_t)(ECX));
  /* 10e119ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e119b1 push edx */
  push32((uint32_t)(EDX));
  /* 10e119b2 call dword ptr [0x10e3ff5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3ff5c))), 0x10e119b8u);
  /* 10e119b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e119bb:;
  /* 10e119bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e119bf je 0x10e119d5 */
  if (C.zf) goto L_10e119d5;
  /* 10e119c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e119c4 push eax */
  push32((uint32_t)(EAX));
  /* 10e119c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e119c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e119c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e119cc push edx */
  push32((uint32_t)(EDX));
  /* 10e119cd call 0x10e11830 */
  push32(0x10e119d2u); f_10e11830();
  /* 10e119d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e119d5:;
  /* 10e119d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e119d9 jne 0x10e119df */
  if (!C.zf) goto L_10e119df;
  /* 10e119db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e119dd jmp 0x10e11a5d */
  goto L_10e11a5d;
L_10e119df:;
  /* 10e119df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e119e2 push eax */
  push32((uint32_t)(EAX));
  /* 10e119e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e119e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e119e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e119ea push edx */
  push32((uint32_t)(EDX));
  /* 10e119eb call 0x10e1100f */
  push32(0x10e119f0u); f_10e1100f();
  /* 10e119f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e119f3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e119f7 jne 0x10e11a0e */
  if (!C.zf) goto L_10e11a0e;
  /* 10e119f9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e119fd jne 0x10e11a0e */
  if (!C.zf) goto L_10e11a0e;
  /* 10e119ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e11a02 push eax */
  push32((uint32_t)(EAX));
  /* 10e11a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e11a05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11a08 push ecx */
  push32((uint32_t)(ECX));
  /* 10e11a09 call 0x10e11830 */
  push32(0x10e11a0eu); f_10e11830();
L_10e11a0e:;
  /* 10e11a0e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11a12 je 0x10e11a1a */
  if (C.zf) goto L_10e11a1a;
  /* 10e11a14 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11a18 jne 0x10e11a5a */
  if (!C.zf) goto L_10e11a5a;
L_10e11a1a:;
  /* 10e11a1a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e11a1d push edx */
  push32((uint32_t)(EDX));
  /* 10e11a1e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e11a21 push eax */
  push32((uint32_t)(EAX));
  /* 10e11a22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11a25 push ecx */
  push32((uint32_t)(ECX));
  /* 10e11a26 call 0x10e11830 */
  push32(0x10e11a2bu); f_10e11830();
  /* 10e11a2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e11a2d jne 0x10e11a36 */
  if (!C.zf) goto L_10e11a36;
  /* 10e11a2f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e11a36:;
  /* 10e11a36 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11a3a je 0x10e11a5a */
  if (C.zf) goto L_10e11a5a;
  /* 10e11a3c cmp dword ptr [0x10e3ff5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3ff5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11a43 je 0x10e11a5a */
  if (C.zf) goto L_10e11a5a;
  /* 10e11a45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e11a48 push edx */
  push32((uint32_t)(EDX));
  /* 10e11a49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e11a4c push eax */
  push32((uint32_t)(EAX));
  /* 10e11a4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11a50 push ecx */
  push32((uint32_t)(ECX));
  /* 10e11a51 call dword ptr [0x10e3ff5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3ff5c))), 0x10e11a57u);
  /* 10e11a57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e11a5a:;
  /* 10e11a5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e11a5d:;
  /* 10e11a5d mov esp, ebp */
  ESP = (EBP);
  /* 10e11a5f pop ebp */
  EBP = (pop32());
  /* 10e11a60 ret 0xc */
  ESPCHK(0x10e11970u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10e11a70 (58 bytes, 18 insns) */
void f_10e11a70(void) {
  FTRACE(0x10e11a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e11a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e11a71 mov ebp, esp */
  EBP = (ESP);
  /* 10e11a73 cmp dword ptr [0x10e3e3fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e3fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11a7a je 0x10e11a8e */
  if (C.zf) goto L_10e11a8e;
  /* 10e11a7c cmp dword ptr [0x10e3e3fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e3fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11a83 jne 0x10e11a93 */
  if (!C.zf) goto L_10e11a93;
  /* 10e11a85 cmp dword ptr [0x10e3e400], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e400))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11a8c jne 0x10e11a93 */
  if (!C.zf) goto L_10e11a93;
L_10e11a8e:;
  /* 10e11a8e call 0x10e153e0 */
  push32(0x10e11a93u); f_10e153e0();
L_10e11a93:;
  /* 10e11a93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11a96 push eax */
  push32((uint32_t)(EAX));
  /* 10e11a97 call 0x10e15430 */
  push32(0x10e11a9cu); f_10e15430();
  /* 10e11a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11a9f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10e11aa4 call dword ptr [0x10e3ca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3ca30))), 0x10e11aaau);
  /* 10e11aaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11aad pop ebp */
  EBP = (pop32());
  /* 10e11aae ret  */
  ESPCHK(0x10e11a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ab0 @ 0x10e11ab0 (11 bytes, 5 insns) */
void f_10e11ab0(void) {
  FTRACE(0x10e11ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e11ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e11ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10e11ab3 call dword ptr [0x10e40254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40254))), 0x10e11ab9u);
  /* 10e11ab9 pop ebp */
  EBP = (pop32());
  /* 10e11aba ret  */
  ESPCHK(0x10e11ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ac0 @ 0x10e11ac0 (87 bytes, 30 insns) */
void f_10e11ac0(void) {
  FTRACE(0x10e11ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e11ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e11ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10e11ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e11ac4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11ac8 jl 0x10e11ad0 */
  if ((C.sf!=C.of)) goto L_10e11ad0;
  /* 10e11aca cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11ace jl 0x10e11ad5 */
  if ((C.sf!=C.of)) goto L_10e11ad5;
L_10e11ad0:;
  /* 10e11ad0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e11ad3 jmp 0x10e11b13 */
  goto L_10e11b13;
L_10e11ad5:;
  /* 10e11ad5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11ad9 jne 0x10e11ae7 */
  if (!C.zf) goto L_10e11ae7;
  /* 10e11adb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11ade mov eax, dword ptr [eax*4 + 0x10e3ca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10e3ca38)));
  /* 10e11ae5 jmp 0x10e11b13 */
  goto L_10e11b13;
L_10e11ae7:;
  /* 10e11ae7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e11aea and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10e11aed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e11aef je 0x10e11af6 */
  if (C.zf) goto L_10e11af6;
  /* 10e11af1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e11af4 jmp 0x10e11b13 */
  goto L_10e11b13;
L_10e11af6:;
  /* 10e11af6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11af9 mov eax, dword ptr [edx*4 + 0x10e3ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e3ca38)));
  /* 10e11b00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e11b03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11b06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e11b09 mov dword ptr [ecx*4 + 0x10e3ca38], edx */
  w32((uint32_t)(ECX*4 + 0x10e3ca38), (EDX));
  /* 10e11b10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e11b13:;
  /* 10e11b13 mov esp, ebp */
  ESP = (EBP);
  /* 10e11b15 pop ebp */
  EBP = (pop32());
  /* 10e11b16 ret  */
  ESPCHK(0x10e11ac0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10e11b20 (126 bytes, 38 insns) */
void f_10e11b20(void) {
  FTRACE(0x10e11b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e11b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10e11b21 mov ebp, esp */
  EBP = (ESP);
  /* 10e11b23 push ecx */
  push32((uint32_t)(ECX));
  /* 10e11b24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11b28 jl 0x10e11b30 */
  if ((C.sf!=C.of)) goto L_10e11b30;
  /* 10e11b2a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11b2e jl 0x10e11b37 */
  if ((C.sf!=C.of)) goto L_10e11b37;
L_10e11b30:;
  /* 10e11b30 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10e11b35 jmp 0x10e11b9a */
  goto L_10e11b9a;
L_10e11b37:;
  /* 10e11b37 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11b3b jne 0x10e11b49 */
  if (!C.zf) goto L_10e11b49;
  /* 10e11b3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11b40 mov eax, dword ptr [eax*4 + 0x10e3ca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10e3ca44)));
  /* 10e11b47 jmp 0x10e11b9a */
  goto L_10e11b9a;
L_10e11b49:;
  /* 10e11b49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11b4c mov edx, dword ptr [ecx*4 + 0x10e3ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e3ca44)));
  /* 10e11b53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e11b56 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11b5a jne 0x10e11b70 */
  if (!C.zf) goto L_10e11b70;
  /* 10e11b5c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10e11b5e call dword ptr [0x10e40258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40258))), 0x10e11b64u);
  /* 10e11b64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11b67 mov dword ptr [ecx*4 + 0x10e3ca44], eax */
  w32((uint32_t)(ECX*4 + 0x10e3ca44), (EAX));
  /* 10e11b6e jmp 0x10e11b97 */
  goto L_10e11b97;
L_10e11b70:;
  /* 10e11b70 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11b74 jne 0x10e11b8a */
  if (!C.zf) goto L_10e11b8a;
  /* 10e11b76 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10e11b78 call dword ptr [0x10e40258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40258))), 0x10e11b7eu);
  /* 10e11b7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11b81 mov dword ptr [edx*4 + 0x10e3ca44], eax */
  w32((uint32_t)(EDX*4 + 0x10e3ca44), (EAX));
  /* 10e11b88 jmp 0x10e11b97 */
  goto L_10e11b97;
L_10e11b8a:;
  /* 10e11b8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11b8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e11b90 mov dword ptr [eax*4 + 0x10e3ca44], ecx */
  w32((uint32_t)(EAX*4 + 0x10e3ca44), (ECX));
L_10e11b97:;
  /* 10e11b97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e11b9a:;
  /* 10e11b9a mov esp, ebp */
  ESP = (EBP);
  /* 10e11b9c pop ebp */
  EBP = (pop32());
  /* 10e11b9d ret  */
  ESPCHK(0x10e11b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ba0 @ 0x10e11ba0 (28 bytes, 11 insns) */
void f_10e11ba0(void) {
  FTRACE(0x10e11ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e11ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e11ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10e11ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e11ba4 mov eax, dword ptr [0x10e3ff40] */
  EAX = (r32((uint32_t)(0x10e3ff40)));
  /* 10e11ba9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e11bac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11baf mov dword ptr [0x10e3ff40], ecx */
  w32((uint32_t)(0x10e3ff40), (ECX));
  /* 10e11bb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e11bb8 mov esp, ebp */
  ESP = (EBP);
  /* 10e11bba pop ebp */
  EBP = (pop32());
  /* 10e11bbb ret  */
  ESPCHK(0x10e11ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001bc0 @ 0x10e11bc0 (912 bytes, 248 insns) */
void f_10e11bc0(void) {
  FTRACE(0x10e11bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e11bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e11bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10e11bc3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10e11bc8 call 0x10e15ca0 */
  push32(0x10e11bcdu); f_10e15ca0();
  /* 10e11bcd push edi */
  push32((uint32_t)(EDI));
  /* 10e11bce mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10e11bd5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10e11bda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e11bdc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10e11be2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e11be4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10e11be6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10e11be7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10e11bee mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10e11bf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e11bf5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10e11bfb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e11bfd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10e11bff stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10e11c00 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10e11c07 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10e11c0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e11c0e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10e11c14 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e11c16 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10e11c18 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10e11c19 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10e11c1c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10e11c22 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11c26 jl 0x10e11c2e */
  if ((C.sf!=C.of)) goto L_10e11c2e;
  /* 10e11c28 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11c2c jl 0x10e11c36 */
  if ((C.sf!=C.of)) goto L_10e11c36;
L_10e11c2e:;
  /* 10e11c2e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e11c31 jmp 0x10e11f4b */
  goto L_10e11f4b;
L_10e11c36:;
  /* 10e11c36 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11c3a jne 0x10e11ce0 */
  if (!C.zf) goto L_10e11ce0;
  /* 10e11c40 push 0x10e3ca34 */
  push32((uint32_t)(0x10e3ca34u));
  /* 10e11c45 call dword ptr [0x10e40270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40270))), 0x10e11c4bu);
  /* 10e11c4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e11c4d jle 0x10e11ce0 */
  if ((C.zf||C.sf!=C.of)) goto L_10e11ce0;
  /* 10e11c53 cmp dword ptr [0x10e3e404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11c5a jne 0x10e11c9e */
  if (!C.zf) goto L_10e11c9e;
  /* 10e11c5c push 0x10e39234 */
  push32((uint32_t)(0x10e39234u));
  /* 10e11c61 call dword ptr [0x10e4026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4026c))), 0x10e11c67u);
  /* 10e11c67 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10e11c6d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11c74 je 0x10e11c96 */
  if (C.zf) goto L_10e11c96;
  /* 10e11c76 push 0x10e39228 */
  push32((uint32_t)(0x10e39228u));
  /* 10e11c7b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10e11c81 push ecx */
  push32((uint32_t)(ECX));
  /* 10e11c82 call dword ptr [0x10e40268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40268))), 0x10e11c88u);
  /* 10e11c88 mov dword ptr [0x10e3e404], eax */
  w32((uint32_t)(0x10e3e404), (EAX));
  /* 10e11c8d cmp dword ptr [0x10e3e404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11c94 jne 0x10e11c9e */
  if (!C.zf) goto L_10e11c9e;
L_10e11c96:;
  /* 10e11c96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e11c99 jmp 0x10e11f4b */
  goto L_10e11f4b;
L_10e11c9e:;
  /* 10e11c9e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e11ca1 push edx */
  push32((uint32_t)(EDX));
  /* 10e11ca2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e11ca5 push eax */
  push32((uint32_t)(EAX));
  /* 10e11ca6 push 0x10e391f4 */
  push32((uint32_t)(0x10e391f4u));
  /* 10e11cab lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10e11cb1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e11cb2 call dword ptr [0x10e3e404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3e404))), 0x10e11cb8u);
  /* 10e11cb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11cbb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10e11cc1 push edx */
  push32((uint32_t)(EDX));
  /* 10e11cc2 call dword ptr [0x10e40264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40264))), 0x10e11cc8u);
  /* 10e11cc8 push 0x10e3ca34 */
  push32((uint32_t)(0x10e3ca34u));
  /* 10e11ccd call dword ptr [0x10e40260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40260))), 0x10e11cd3u);
  /* 10e11cd3 call 0x10e11ab0 */
  push32(0x10e11cd8u); f_10e11ab0();
  /* 10e11cd8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e11cdb jmp 0x10e11f4b */
  goto L_10e11f4b;
L_10e11ce0:;
  /* 10e11ce0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11ce4 je 0x10e11d1d */
  if (C.zf) goto L_10e11d1d;
  /* 10e11ce6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10e11cec push eax */
  push32((uint32_t)(EAX));
  /* 10e11ced mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e11cf0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e11cf1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10e11cf6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10e11cfc push edx */
  push32((uint32_t)(EDX));
  /* 10e11cfd call 0x10e15ba0 */
  push32(0x10e11d02u); f_10e15ba0();
  /* 10e11d02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11d05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e11d07 jge 0x10e11d1d */
  if ((C.sf==C.of)) goto L_10e11d1d;
  /* 10e11d09 push 0x10e391c8 */
  push32((uint32_t)(0x10e391c8u));
  /* 10e11d0e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10e11d14 push eax */
  push32((uint32_t)(EAX));
  /* 10e11d15 call 0x10e15ab0 */
  push32(0x10e11d1au); f_10e15ab0();
  /* 10e11d1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e11d1d:;
  /* 10e11d1d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11d21 jne 0x10e11d55 */
  if (!C.zf) goto L_10e11d55;
  /* 10e11d23 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11d27 je 0x10e11d35 */
  if (C.zf) goto L_10e11d35;
  /* 10e11d29 mov dword ptr [ebp - 0x3028], 0x10e391b4 */
  w32((uint32_t)(EBP + -0x3028), (0x10e391b4u));
  /* 10e11d33 jmp 0x10e11d3f */
  goto L_10e11d3f;
L_10e11d35:;
  /* 10e11d35 mov dword ptr [ebp - 0x3028], 0x10e391a0 */
  w32((uint32_t)(EBP + -0x3028), (0x10e391a0u));
L_10e11d3f:;
  /* 10e11d3f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10e11d45 push ecx */
  push32((uint32_t)(ECX));
  /* 10e11d46 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10e11d4c push edx */
  push32((uint32_t)(EDX));
  /* 10e11d4d call 0x10e15ab0 */
  push32(0x10e11d52u); f_10e15ab0();
  /* 10e11d52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e11d55:;
  /* 10e11d55 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10e11d5b push eax */
  push32((uint32_t)(EAX));
  /* 10e11d5c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10e11d62 push ecx */
  push32((uint32_t)(ECX));
  /* 10e11d63 call 0x10e15ac0 */
  push32(0x10e11d68u); f_10e15ac0();
  /* 10e11d68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11d6b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11d6f jne 0x10e11daa */
  if (!C.zf) goto L_10e11daa;
  /* 10e11d71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11d74 mov eax, dword ptr [edx*4 + 0x10e3ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e3ca38)));
  /* 10e11d7b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10e11d7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e11d80 je 0x10e11d96 */
  if (C.zf) goto L_10e11d96;
  /* 10e11d82 push 0x10e3919c */
  push32((uint32_t)(0x10e3919cu));
  /* 10e11d87 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10e11d8d push ecx */
  push32((uint32_t)(ECX));
  /* 10e11d8e call 0x10e15ac0 */
  push32(0x10e11d93u); f_10e15ac0();
  /* 10e11d93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e11d96:;
  /* 10e11d96 push 0x10e39198 */
  push32((uint32_t)(0x10e39198u));
  /* 10e11d9b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10e11da1 push edx */
  push32((uint32_t)(EDX));
  /* 10e11da2 call 0x10e15ac0 */
  push32(0x10e11da7u); f_10e15ac0();
  /* 10e11da7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e11daa:;
  /* 10e11daa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11dae je 0x10e11df2 */
  if (C.zf) goto L_10e11df2;
  /* 10e11db0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10e11db6 push eax */
  push32((uint32_t)(EAX));
  /* 10e11db7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e11dba push ecx */
  push32((uint32_t)(ECX));
  /* 10e11dbb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e11dbe push edx */
  push32((uint32_t)(EDX));
  /* 10e11dbf push 0x10e3918c */
  push32((uint32_t)(0x10e3918cu));
  /* 10e11dc4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10e11dc9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10e11dcf push eax */
  push32((uint32_t)(EAX));
  /* 10e11dd0 call 0x10e159b0 */
  push32(0x10e11dd5u); f_10e159b0();
  /* 10e11dd5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11dd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e11dda jge 0x10e11df0 */
  if ((C.sf==C.of)) goto L_10e11df0;
  /* 10e11ddc push 0x10e391c8 */
  push32((uint32_t)(0x10e391c8u));
  /* 10e11de1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10e11de7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e11de8 call 0x10e15ab0 */
  push32(0x10e11dedu); f_10e15ab0();
  /* 10e11ded add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e11df0:;
  /* 10e11df0 jmp 0x10e11e08 */
  goto L_10e11e08;
L_10e11df2:;
  /* 10e11df2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10e11df8 push edx */
  push32((uint32_t)(EDX));
  /* 10e11df9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10e11dff push eax */
  push32((uint32_t)(EAX));
  /* 10e11e00 call 0x10e15ab0 */
  push32(0x10e11e05u); f_10e15ab0();
  /* 10e11e05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e11e08:;
  /* 10e11e08 cmp dword ptr [0x10e3ff40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3ff40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11e0f je 0x10e11e4c */
  if (C.zf) goto L_10e11e4c;
  /* 10e11e11 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10e11e17 push ecx */
  push32((uint32_t)(ECX));
  /* 10e11e18 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10e11e1e push edx */
  push32((uint32_t)(EDX));
  /* 10e11e1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11e22 push eax */
  push32((uint32_t)(EAX));
  /* 10e11e23 call dword ptr [0x10e3ff40] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3ff40))), 0x10e11e29u);
  /* 10e11e29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11e2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e11e2e je 0x10e11e4c */
  if (C.zf) goto L_10e11e4c;
  /* 10e11e30 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11e34 jne 0x10e11e41 */
  if (!C.zf) goto L_10e11e41;
  /* 10e11e36 push 0x10e3ca34 */
  push32((uint32_t)(0x10e3ca34u));
  /* 10e11e3b call dword ptr [0x10e40260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40260))), 0x10e11e41u);
L_10e11e41:;
  /* 10e11e41 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10e11e47 jmp 0x10e11f4b */
  goto L_10e11f4b;
L_10e11e4c:;
  /* 10e11e4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11e4f mov edx, dword ptr [ecx*4 + 0x10e3ca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e3ca38)));
  /* 10e11e56 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e11e59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e11e5b je 0x10e11e9b */
  if (C.zf) goto L_10e11e9b;
  /* 10e11e5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11e60 cmp dword ptr [eax*4 + 0x10e3ca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10e3ca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11e68 je 0x10e11e9b */
  if (C.zf) goto L_10e11e9b;
  /* 10e11e6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e11e6c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10e11e72 push ecx */
  push32((uint32_t)(ECX));
  /* 10e11e73 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10e11e79 push edx */
  push32((uint32_t)(EDX));
  /* 10e11e7a call 0x10e15930 */
  push32(0x10e11e7fu); f_10e15930();
  /* 10e11e7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11e82 push eax */
  push32((uint32_t)(EAX));
  /* 10e11e83 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10e11e89 push eax */
  push32((uint32_t)(EAX));
  /* 10e11e8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11e8d mov edx, dword ptr [ecx*4 + 0x10e3ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e3ca44)));
  /* 10e11e94 push edx */
  push32((uint32_t)(EDX));
  /* 10e11e95 call dword ptr [0x10e4025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4025c))), 0x10e11e9bu);
L_10e11e9b:;
  /* 10e11e9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11e9e mov ecx, dword ptr [eax*4 + 0x10e3ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10e3ca38)));
  /* 10e11ea5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10e11ea8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e11eaa je 0x10e11eb9 */
  if (C.zf) goto L_10e11eb9;
  /* 10e11eac lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10e11eb2 push edx */
  push32((uint32_t)(EDX));
  /* 10e11eb3 call dword ptr [0x10e40264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40264))), 0x10e11eb9u);
L_10e11eb9:;
  /* 10e11eb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11ebc mov ecx, dword ptr [eax*4 + 0x10e3ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10e3ca38)));
  /* 10e11ec3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10e11ec6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e11ec8 je 0x10e11f38 */
  if (C.zf) goto L_10e11f38;
  /* 10e11eca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11ece je 0x10e11eed */
  if (C.zf) goto L_10e11eed;
  /* 10e11ed0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10e11ed2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10e11ed8 push edx */
  push32((uint32_t)(EDX));
  /* 10e11ed9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e11edc push eax */
  push32((uint32_t)(EAX));
  /* 10e11edd call 0x10e15640 */
  push32(0x10e11ee2u); f_10e15640();
  /* 10e11ee2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11ee5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10e11eeb jmp 0x10e11ef7 */
  goto L_10e11ef7;
L_10e11eed:;
  /* 10e11eed mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10e11ef7:;
  /* 10e11ef7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10e11efd push ecx */
  push32((uint32_t)(ECX));
  /* 10e11efe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e11f01 push edx */
  push32((uint32_t)(EDX));
  /* 10e11f02 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10e11f08 push eax */
  push32((uint32_t)(EAX));
  /* 10e11f09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e11f0c push ecx */
  push32((uint32_t)(ECX));
  /* 10e11f0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e11f10 push edx */
  push32((uint32_t)(EDX));
  /* 10e11f11 call 0x10e11f50 */
  push32(0x10e11f16u); f_10e11f50();
  /* 10e11f16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11f19 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10e11f1f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11f23 jne 0x10e11f30 */
  if (!C.zf) goto L_10e11f30;
  /* 10e11f25 push 0x10e3ca34 */
  push32((uint32_t)(0x10e3ca34u));
  /* 10e11f2a call dword ptr [0x10e40260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40260))), 0x10e11f30u);
L_10e11f30:;
  /* 10e11f30 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10e11f36 jmp 0x10e11f4b */
  goto L_10e11f4b;
L_10e11f38:;
  /* 10e11f38 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11f3c jne 0x10e11f49 */
  if (!C.zf) goto L_10e11f49;
  /* 10e11f3e push 0x10e3ca34 */
  push32((uint32_t)(0x10e3ca34u));
  /* 10e11f43 call dword ptr [0x10e40260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40260))), 0x10e11f49u);
L_10e11f49:;
  /* 10e11f49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e11f4b:;
  /* 10e11f4b pop edi */
  EDI = (pop32());
  /* 10e11f4c mov esp, ebp */
  ESP = (EBP);
  /* 10e11f4e pop ebp */
  EBP = (pop32());
  /* 10e11f4f ret  */
  ESPCHK(0x10e11bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f50 @ 0x10e11f50 (780 bytes, 197 insns) */
void f_10e11f50(void) {
  FTRACE(0x10e11f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e11f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10e11f51 mov ebp, esp */
  EBP = (ESP);
  /* 10e11f53 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10e11f58 call 0x10e15ca0 */
  push32(0x10e11f5du); f_10e15ca0();
L_10e11f5d:;
  /* 10e11f5d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11f61 jne 0x10e11f88 */
  if (!C.zf) goto L_10e11f88;
  /* 10e11f63 push 0x10e39384 */
  push32((uint32_t)(0x10e39384u));
  /* 10e11f68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e11f6a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10e11f6f push 0x10e39378 */
  push32((uint32_t)(0x10e39378u));
  /* 10e11f74 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e11f76 call 0x10e11bc0 */
  push32(0x10e11f7bu); f_10e11bc0();
  /* 10e11f7b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11f7e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11f81 jne 0x10e11f88 */
  if (!C.zf) goto L_10e11f88;
  /* 10e11f83 call 0x10e11ab0 */
  push32(0x10e11f88u); f_10e11ab0();
L_10e11f88:;
  /* 10e11f88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e11f8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e11f8c jne 0x10e11f5d */
  if (!C.zf) goto L_10e11f5d;
  /* 10e11f8e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10e11f93 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10e11f99 push ecx */
  push32((uint32_t)(ECX));
  /* 10e11f9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e11f9c call dword ptr [0x10e40274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40274))), 0x10e11fa2u);
  /* 10e11fa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e11fa4 jne 0x10e11fba */
  if (!C.zf) goto L_10e11fba;
  /* 10e11fa6 push 0x10e39360 */
  push32((uint32_t)(0x10e39360u));
  /* 10e11fab lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10e11fb1 push edx */
  push32((uint32_t)(EDX));
  /* 10e11fb2 call 0x10e15ab0 */
  push32(0x10e11fb7u); f_10e15ab0();
  /* 10e11fb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e11fba:;
  /* 10e11fba lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10e11fc0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e11fc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e11fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e11fc7 call 0x10e15930 */
  push32(0x10e11fccu); f_10e15930();
  /* 10e11fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11fcf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e11fd2 jbe 0x10e11ffd */
  if ((C.cf||C.zf)) goto L_10e11ffd;
  /* 10e11fd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e11fd7 push edx */
  push32((uint32_t)(EDX));
  /* 10e11fd8 call 0x10e15930 */
  push32(0x10e11fddu); f_10e15930();
  /* 10e11fdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e11fe0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e11fe3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10e11fe7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e11fea push 3 */
  push32((uint32_t)(0x3u));
  /* 10e11fec push 0x10e3935c */
  push32((uint32_t)(0x10e3935cu));
  /* 10e11ff1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e11ff4 push eax */
  push32((uint32_t)(EAX));
  /* 10e11ff5 call 0x10e16320 */
  push32(0x10e11ffau); f_10e16320();
  /* 10e11ffa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e11ffd:;
  /* 10e11ffd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e12000 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10e12006 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1200d je 0x10e12058 */
  if (C.zf) goto L_10e12058;
  /* 10e1200f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10e12015 push edx */
  push32((uint32_t)(EDX));
  /* 10e12016 call 0x10e15930 */
  push32(0x10e1201bu); f_10e15930();
  /* 10e1201b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1201e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12021 jbe 0x10e12058 */
  if ((C.cf||C.zf)) goto L_10e12058;
  /* 10e12023 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10e12029 push eax */
  push32((uint32_t)(EAX));
  /* 10e1202a call 0x10e15930 */
  push32(0x10e1202fu); f_10e15930();
  /* 10e1202f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12032 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10e12038 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10e1203c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10e12042 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e12044 push 0x10e3935c */
  push32((uint32_t)(0x10e3935cu));
  /* 10e12049 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10e1204f push eax */
  push32((uint32_t)(EAX));
  /* 10e12050 call 0x10e16320 */
  push32(0x10e12055u); f_10e16320();
  /* 10e12055 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e12058:;
  /* 10e12058 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1205c jne 0x10e1206a */
  if (!C.zf) goto L_10e1206a;
  /* 10e1205e mov dword ptr [ebp - 0x1114], 0x10e392e8 */
  w32((uint32_t)(EBP + -0x1114), (0x10e392e8u));
  /* 10e12068 jmp 0x10e12074 */
  goto L_10e12074;
L_10e1206a:;
  /* 10e1206a mov dword ptr [ebp - 0x1114], 0x10e39088 */
  w32((uint32_t)(EBP + -0x1114), (0x10e39088u));
L_10e12074:;
  /* 10e12074 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e12077 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e1207a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1207c je 0x10e12089 */
  if (C.zf) goto L_10e12089;
  /* 10e1207e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e12081 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10e12087 jmp 0x10e12093 */
  goto L_10e12093;
L_10e12089:;
  /* 10e12089 mov dword ptr [ebp - 0x1118], 0x10e39088 */
  w32((uint32_t)(EBP + -0x1118), (0x10e39088u));
L_10e12093:;
  /* 10e12093 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e12096 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e12099 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1209b je 0x10e120af */
  if (C.zf) goto L_10e120af;
  /* 10e1209d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e120a1 jne 0x10e120af */
  if (!C.zf) goto L_10e120af;
  /* 10e120a3 mov dword ptr [ebp - 0x111c], 0x10e392d8 */
  w32((uint32_t)(EBP + -0x111c), (0x10e392d8u));
  /* 10e120ad jmp 0x10e120b9 */
  goto L_10e120b9;
L_10e120af:;
  /* 10e120af mov dword ptr [ebp - 0x111c], 0x10e39088 */
  w32((uint32_t)(EBP + -0x111c), (0x10e39088u));
L_10e120b9:;
  /* 10e120b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e120bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e120bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e120c1 je 0x10e120cf */
  if (C.zf) goto L_10e120cf;
  /* 10e120c3 mov dword ptr [ebp - 0x1120], 0x10e392d4 */
  w32((uint32_t)(EBP + -0x1120), (0x10e392d4u));
  /* 10e120cd jmp 0x10e120d9 */
  goto L_10e120d9;
L_10e120cf:;
  /* 10e120cf mov dword ptr [ebp - 0x1120], 0x10e39088 */
  w32((uint32_t)(EBP + -0x1120), (0x10e39088u));
L_10e120d9:;
  /* 10e120d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e120dd je 0x10e120ea */
  if (C.zf) goto L_10e120ea;
  /* 10e120df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e120e2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10e120e8 jmp 0x10e120f4 */
  goto L_10e120f4;
L_10e120ea:;
  /* 10e120ea mov dword ptr [ebp - 0x1124], 0x10e39088 */
  w32((uint32_t)(EBP + -0x1124), (0x10e39088u));
L_10e120f4:;
  /* 10e120f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e120f8 je 0x10e12106 */
  if (C.zf) goto L_10e12106;
  /* 10e120fa mov dword ptr [ebp - 0x1128], 0x10e392cc */
  w32((uint32_t)(EBP + -0x1128), (0x10e392ccu));
  /* 10e12104 jmp 0x10e12110 */
  goto L_10e12110;
L_10e12106:;
  /* 10e12106 mov dword ptr [ebp - 0x1128], 0x10e39088 */
  w32((uint32_t)(EBP + -0x1128), (0x10e39088u));
L_10e12110:;
  /* 10e12110 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12114 je 0x10e12121 */
  if (C.zf) goto L_10e12121;
  /* 10e12116 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e12119 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10e1211f jmp 0x10e1212b */
  goto L_10e1212b;
L_10e12121:;
  /* 10e12121 mov dword ptr [ebp - 0x112c], 0x10e39088 */
  w32((uint32_t)(EBP + -0x112c), (0x10e39088u));
L_10e1212b:;
  /* 10e1212b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1212f je 0x10e1213d */
  if (C.zf) goto L_10e1213d;
  /* 10e12131 mov dword ptr [ebp - 0x1130], 0x10e392c4 */
  w32((uint32_t)(EBP + -0x1130), (0x10e392c4u));
  /* 10e1213b jmp 0x10e12147 */
  goto L_10e12147;
L_10e1213d:;
  /* 10e1213d mov dword ptr [ebp - 0x1130], 0x10e39088 */
  w32((uint32_t)(EBP + -0x1130), (0x10e39088u));
L_10e12147:;
  /* 10e12147 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1214e je 0x10e1215e */
  if (C.zf) goto L_10e1215e;
  /* 10e12150 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10e12156 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10e1215c jmp 0x10e12168 */
  goto L_10e12168;
L_10e1215e:;
  /* 10e1215e mov dword ptr [ebp - 0x1134], 0x10e39088 */
  w32((uint32_t)(EBP + -0x1134), (0x10e39088u));
L_10e12168:;
  /* 10e12168 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1216f je 0x10e1217d */
  if (C.zf) goto L_10e1217d;
  /* 10e12171 mov dword ptr [ebp - 0x1138], 0x10e392b8 */
  w32((uint32_t)(EBP + -0x1138), (0x10e392b8u));
  /* 10e1217b jmp 0x10e12187 */
  goto L_10e12187;
L_10e1217d:;
  /* 10e1217d mov dword ptr [ebp - 0x1138], 0x10e39088 */
  w32((uint32_t)(EBP + -0x1138), (0x10e39088u));
L_10e12187:;
  /* 10e12187 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10e1218d push edx */
  push32((uint32_t)(EDX));
  /* 10e1218e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10e12194 push eax */
  push32((uint32_t)(EAX));
  /* 10e12195 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10e1219b push ecx */
  push32((uint32_t)(ECX));
  /* 10e1219c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10e121a2 push edx */
  push32((uint32_t)(EDX));
  /* 10e121a3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10e121a9 push eax */
  push32((uint32_t)(EAX));
  /* 10e121aa mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10e121b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e121b1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10e121b7 push edx */
  push32((uint32_t)(EDX));
  /* 10e121b8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10e121be push eax */
  push32((uint32_t)(EAX));
  /* 10e121bf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10e121c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e121c6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10e121cc push edx */
  push32((uint32_t)(EDX));
  /* 10e121cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e121d0 push eax */
  push32((uint32_t)(EAX));
  /* 10e121d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e121d4 mov edx, dword ptr [ecx*4 + 0x10e3ca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e3ca50)));
  /* 10e121db push edx */
  push32((uint32_t)(EDX));
  /* 10e121dc push 0x10e39264 */
  push32((uint32_t)(0x10e39264u));
  /* 10e121e1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10e121e6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10e121ec push eax */
  push32((uint32_t)(EAX));
  /* 10e121ed call 0x10e159b0 */
  push32(0x10e121f2u); f_10e159b0();
  /* 10e121f2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e121f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e121f7 jge 0x10e1220d */
  if ((C.sf==C.of)) goto L_10e1220d;
  /* 10e121f9 push 0x10e391c8 */
  push32((uint32_t)(0x10e391c8u));
  /* 10e121fe lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10e12204 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12205 call 0x10e15ab0 */
  push32(0x10e1220au); f_10e15ab0();
  /* 10e1220a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1220d:;
  /* 10e1220d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10e12212 push 0x10e39240 */
  push32((uint32_t)(0x10e39240u));
  /* 10e12217 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10e1221d push edx */
  push32((uint32_t)(EDX));
  /* 10e1221e call 0x10e16260 */
  push32(0x10e12223u); f_10e16260();
  /* 10e12223 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12226 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10e1222c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12233 jne 0x10e12246 */
  if (!C.zf) goto L_10e12246;
  /* 10e12235 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10e12237 call 0x10e15fa0 */
  push32(0x10e1223cu); f_10e15fa0();
  /* 10e1223c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1223f push 3 */
  push32((uint32_t)(0x3u));
  /* 10e12241 call 0x10e122c0 */
  push32(0x10e12246u); f_10e122c0();
L_10e12246:;
  /* 10e12246 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1224d jne 0x10e12256 */
  if (!C.zf) goto L_10e12256;
  /* 10e1224f mov eax, 1 */
  EAX = (0x1u);
  /* 10e12254 jmp 0x10e12258 */
  goto L_10e12258;
L_10e12256:;
  /* 10e12256 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e12258:;
  /* 10e12258 mov esp, ebp */
  ESP = (EBP);
  /* 10e1225a pop ebp */
  EBP = (pop32());
  /* 10e1225b ret  */
  ESPCHK(0x10e11f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002260 @ 0x10e12260 (56 bytes, 15 insns) */
void f_10e12260(void) {
  FTRACE(0x10e12260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12260 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12261 mov ebp, esp */
  EBP = (ESP);
  /* 10e12263 cmp dword ptr [0x10e3ff3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3ff3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1226a je 0x10e12272 */
  if (C.zf) goto L_10e12272;
  /* 10e1226c call dword ptr [0x10e3ff3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3ff3c))), 0x10e12272u);
L_10e12272:;
  /* 10e12272 push 0x10e3c418 */
  push32((uint32_t)(0x10e3c418u));
  /* 10e12277 push 0x10e3c208 */
  push32((uint32_t)(0x10e3c208u));
  /* 10e1227c call 0x10e12430 */
  push32(0x10e12281u); f_10e12430();
  /* 10e12281 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12284 push 0x10e3c104 */
  push32((uint32_t)(0x10e3c104u));
  /* 10e12289 push 0x10e3c000 */
  push32((uint32_t)(0x10e3c000u));
  /* 10e1228e call 0x10e12430 */
  push32(0x10e12293u); f_10e12430();
  /* 10e12293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12296 pop ebp */
  EBP = (pop32());
  /* 10e12297 ret  */
  ESPCHK(0x10e12260u, _esp0);
  ESP += 4; return;
}

/* FUN_100022a0 @ 0x10e122a0 (21 bytes, 10 insns) */
void f_10e122a0(void) {
  FTRACE(0x10e122a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e122a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e122a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e122a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e122a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e122a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e122aa push eax */
  push32((uint32_t)(EAX));
  /* 10e122ab call 0x10e12320 */
  push32(0x10e122b0u); f_10e12320();
  /* 10e122b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e122b3 pop ebp */
  EBP = (pop32());
  /* 10e122b4 ret  */
  ESPCHK(0x10e122a0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10e122c0 (21 bytes, 10 insns) */
void f_10e122c0(void) {
  FTRACE(0x10e122c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e122c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e122c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e122c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e122c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e122c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e122ca push eax */
  push32((uint32_t)(EAX));
  /* 10e122cb call 0x10e12320 */
  push32(0x10e122d0u); f_10e12320();
  /* 10e122d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e122d3 pop ebp */
  EBP = (pop32());
  /* 10e122d4 ret  */
  ESPCHK(0x10e122c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100022e0 @ 0x10e122e0 (19 bytes, 9 insns) */
void f_10e122e0(void) {
  FTRACE(0x10e122e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e122e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e122e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e122e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e122e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e122e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e122e9 call 0x10e12320 */
  push32(0x10e122eeu); f_10e12320();
  /* 10e122ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e122f1 pop ebp */
  EBP = (pop32());
  /* 10e122f2 ret  */
  ESPCHK(0x10e122e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002300 @ 0x10e12300 (19 bytes, 9 insns) */
void f_10e12300(void) {
  FTRACE(0x10e12300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12300 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12301 mov ebp, esp */
  EBP = (ESP);
  /* 10e12303 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e12305 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e12307 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12309 call 0x10e12320 */
  push32(0x10e1230eu); f_10e12320();
  /* 10e1230e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12311 pop ebp */
  EBP = (pop32());
  /* 10e12312 ret  */
  ESPCHK(0x10e12300u, _esp0);
  ESP += 4; return;
}

/* FUN_10002320 @ 0x10e12320 (227 bytes, 61 insns) */
void f_10e12320(void) {
  FTRACE(0x10e12320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12320 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12321 mov ebp, esp */
  EBP = (ESP);
  /* 10e12323 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12324 call 0x10e12410 */
  push32(0x10e12329u); f_10e12410();
  /* 10e12329 cmp dword ptr [0x10e3e448], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e448))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12330 jne 0x10e12343 */
  if (!C.zf) goto L_10e12343;
  /* 10e12332 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12335 push eax */
  push32((uint32_t)(EAX));
  /* 10e12336 call dword ptr [0x10e40280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40280))), 0x10e1233cu);
  /* 10e1233c push eax */
  push32((uint32_t)(EAX));
  /* 10e1233d call dword ptr [0x10e4027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4027c))), 0x10e12343u);
L_10e12343:;
  /* 10e12343 mov dword ptr [0x10e3e444], 1 */
  w32((uint32_t)(0x10e3e444), (0x1u));
  /* 10e1234d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10e12350 mov byte ptr [0x10e3e440], cl */
  w8((uint32_t)(0x10e3e440), (CL));
  /* 10e12356 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1235a jne 0x10e123a3 */
  if (!C.zf) goto L_10e123a3;
  /* 10e1235c cmp dword ptr [0x10e3ff38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3ff38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12363 je 0x10e12391 */
  if (C.zf) goto L_10e12391;
  /* 10e12365 mov edx, dword ptr [0x10e3ff34] */
  EDX = (r32((uint32_t)(0x10e3ff34)));
  /* 10e1236b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e1236e:;
  /* 10e1236e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12371 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e12374 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e12377 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1237a cmp ecx, dword ptr [0x10e3ff38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3ff38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12380 jb 0x10e12391 */
  if (C.cf) goto L_10e12391;
  /* 10e12382 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12385 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12388 je 0x10e1238f */
  if (C.zf) goto L_10e1238f;
  /* 10e1238a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1238d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10e1238fu);
L_10e1238f:;
  /* 10e1238f jmp 0x10e1236e */
  goto L_10e1236e;
L_10e12391:;
  /* 10e12391 push 0x10e3c724 */
  push32((uint32_t)(0x10e3c724u));
  /* 10e12396 push 0x10e3c51c */
  push32((uint32_t)(0x10e3c51cu));
  /* 10e1239b call 0x10e12430 */
  push32(0x10e123a0u); f_10e12430();
  /* 10e123a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e123a3:;
  /* 10e123a3 push 0x10e3c92c */
  push32((uint32_t)(0x10e3c92cu));
  /* 10e123a8 push 0x10e3c828 */
  push32((uint32_t)(0x10e3c828u));
  /* 10e123ad call 0x10e12430 */
  push32(0x10e123b2u); f_10e12430();
  /* 10e123b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e123b5 cmp dword ptr [0x10e3e44c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e44c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e123bc jne 0x10e123de */
  if (!C.zf) goto L_10e123de;
  /* 10e123be push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e123c0 call 0x10e14010 */
  push32(0x10e123c5u); f_10e14010();
  /* 10e123c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e123c8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10e123cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e123cd je 0x10e123de */
  if (C.zf) goto L_10e123de;
  /* 10e123cf mov dword ptr [0x10e3e44c], 1 */
  w32((uint32_t)(0x10e3e44c), (0x1u));
  /* 10e123d9 call 0x10e14920 */
  push32(0x10e123deu); f_10e14920();
L_10e123de:;
  /* 10e123de cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e123e2 je 0x10e123eb */
  if (C.zf) goto L_10e123eb;
  /* 10e123e4 call 0x10e12420 */
  push32(0x10e123e9u); f_10e12420();
  /* 10e123e9 jmp 0x10e123ff */
  goto L_10e123ff;
L_10e123eb:;
  /* 10e123eb mov dword ptr [0x10e3e448], 1 */
  w32((uint32_t)(0x10e3e448), (0x1u));
  /* 10e123f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e123f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e123f9 call dword ptr [0x10e40278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40278))), 0x10e123ffu);
L_10e123ff:;
  /* 10e123ff mov esp, ebp */
  ESP = (EBP);
  /* 10e12401 pop ebp */
  EBP = (pop32());
  /* 10e12402 ret  */
  ESPCHK(0x10e12320u, _esp0);
  ESP += 4; return;
}

/* FUN_10002410 @ 0x10e12410 (15 bytes, 7 insns) */
void f_10e12410(void) {
  FTRACE(0x10e12410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12410 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12411 mov ebp, esp */
  EBP = (ESP);
  /* 10e12413 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10e12415 call 0x10e16500 */
  push32(0x10e1241au); f_10e16500();
  /* 10e1241a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1241d pop ebp */
  EBP = (pop32());
  /* 10e1241e ret  */
  ESPCHK(0x10e12410u, _esp0);
  ESP += 4; return;
}

/* FUN_10002420 @ 0x10e12420 (15 bytes, 7 insns) */
void f_10e12420(void) {
  FTRACE(0x10e12420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12420 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12421 mov ebp, esp */
  EBP = (ESP);
  /* 10e12423 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10e12425 call 0x10e165a0 */
  push32(0x10e1242au); f_10e165a0();
  /* 10e1242a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1242d pop ebp */
  EBP = (pop32());
  /* 10e1242e ret  */
  ESPCHK(0x10e12420u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10e12430 (37 bytes, 16 insns) */
void f_10e12430(void) {
  FTRACE(0x10e12430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12430 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12431 mov ebp, esp */
  EBP = (ESP);
L_10e12433:;
  /* 10e12433 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12436 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12439 jae 0x10e12453 */
  if (!C.cf) goto L_10e12453;
  /* 10e1243b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1243e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12441 je 0x10e12448 */
  if (C.zf) goto L_10e12448;
  /* 10e12443 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12446 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10e12448u);
L_10e12448:;
  /* 10e12448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1244b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1244e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e12451 jmp 0x10e12433 */
  goto L_10e12433;
L_10e12453:;
  /* 10e12453 pop ebp */
  EBP = (pop32());
  /* 10e12454 ret  */
  ESPCHK(0x10e12430u, _esp0);
  ESP += 4; return;
}

/* FUN_10002460 @ 0x10e12460 (130 bytes, 42 insns) */
void f_10e12460(void) {
  FTRACE(0x10e12460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12460 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12461 mov ebp, esp */
  EBP = (ESP);
  /* 10e12463 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12464 call 0x10e16420 */
  push32(0x10e12469u); f_10e16420();
  /* 10e12469 call dword ptr [0x10e4028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4028c))), 0x10e1246fu);
  /* 10e1246f mov dword ptr [0x10e3ca5c], eax */
  w32((uint32_t)(0x10e3ca5c), (EAX));
  /* 10e12474 cmp dword ptr [0x10e3ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1247b jne 0x10e12481 */
  if (!C.zf) goto L_10e12481;
  /* 10e1247d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1247f jmp 0x10e124de */
  goto L_10e124de;
L_10e12481:;
  /* 10e12481 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10e12483 push 0x10e3939c */
  push32((uint32_t)(0x10e3939cu));
  /* 10e12488 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1248a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10e1248c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1248e call 0x10e12f10 */
  push32(0x10e12493u); f_10e12f10();
  /* 10e12493 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12496 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e12499 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1249d je 0x10e124b4 */
  if (C.zf) goto L_10e124b4;
  /* 10e1249f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e124a2 push eax */
  push32((uint32_t)(EAX));
  /* 10e124a3 mov ecx, dword ptr [0x10e3ca5c] */
  ECX = (r32((uint32_t)(0x10e3ca5c)));
  /* 10e124a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e124aa call dword ptr [0x10e40288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40288))), 0x10e124b0u);
  /* 10e124b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e124b2 jne 0x10e124b8 */
  if (!C.zf) goto L_10e124b8;
L_10e124b4:;
  /* 10e124b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e124b6 jmp 0x10e124de */
  goto L_10e124de;
L_10e124b8:;
  /* 10e124b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e124bb push edx */
  push32((uint32_t)(EDX));
  /* 10e124bc call 0x10e12520 */
  push32(0x10e124c1u); f_10e12520();
  /* 10e124c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e124c4 call dword ptr [0x10e40284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40284))), 0x10e124cau);
  /* 10e124ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e124cd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e124cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e124d2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10e124d9 mov eax, 1 */
  EAX = (0x1u);
L_10e124de:;
  /* 10e124de mov esp, ebp */
  ESP = (EBP);
  /* 10e124e0 pop ebp */
  EBP = (pop32());
  /* 10e124e1 ret  */
  ESPCHK(0x10e12460u, _esp0);
  ESP += 4; return;
}

/* FUN_100024f0 @ 0x10e124f0 (41 bytes, 11 insns) */
void f_10e124f0(void) {
  FTRACE(0x10e124f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e124f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e124f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e124f3 call 0x10e16460 */
  push32(0x10e124f8u); f_10e16460();
  /* 10e124f8 cmp dword ptr [0x10e3ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e124ff je 0x10e12517 */
  if (C.zf) goto L_10e12517;
  /* 10e12501 mov eax, dword ptr [0x10e3ca5c] */
  EAX = (r32((uint32_t)(0x10e3ca5c)));
  /* 10e12506 push eax */
  push32((uint32_t)(EAX));
  /* 10e12507 call dword ptr [0x10e40290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40290))), 0x10e1250du);
  /* 10e1250d mov dword ptr [0x10e3ca5c], 0xffffffff */
  w32((uint32_t)(0x10e3ca5c), (0xffffffffu));
L_10e12517:;
  /* 10e12517 pop ebp */
  EBP = (pop32());
  /* 10e12518 ret  */
  ESPCHK(0x10e124f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002520 @ 0x10e12520 (25 bytes, 8 insns) */
void f_10e12520(void) {
  FTRACE(0x10e12520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12520 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12521 mov ebp, esp */
  EBP = (ESP);
  /* 10e12523 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12526 mov dword ptr [eax + 0x50], 0x10e3cc00 */
  w32((uint32_t)(EAX + 0x50), (0x10e3cc00u));
  /* 10e1252d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12530 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10e12537 pop ebp */
  EBP = (pop32());
  /* 10e12538 ret  */
  ESPCHK(0x10e12520u, _esp0);
  ESP += 4; return;
}

/* FUN_10002540 @ 0x10e12540 (152 bytes, 48 insns) */
void f_10e12540(void) {
  FTRACE(0x10e12540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12540 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12541 mov ebp, esp */
  EBP = (ESP);
  /* 10e12543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e12546 call dword ptr [0x10e4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4029c))), 0x10e1254cu);
  /* 10e1254c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e1254f mov eax, dword ptr [0x10e3ca5c] */
  EAX = (r32((uint32_t)(0x10e3ca5c)));
  /* 10e12554 push eax */
  push32((uint32_t)(EAX));
  /* 10e12555 call dword ptr [0x10e40298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40298))), 0x10e1255bu);
  /* 10e1255b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1255e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12562 jne 0x10e125c7 */
  if (!C.zf) goto L_10e125c7;
  /* 10e12564 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10e12569 push 0x10e3939c */
  push32((uint32_t)(0x10e3939cu));
  /* 10e1256e push 2 */
  push32((uint32_t)(0x2u));
  /* 10e12570 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10e12572 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e12574 call 0x10e12f10 */
  push32(0x10e12579u); f_10e12f10();
  /* 10e12579 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1257c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1257f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12583 je 0x10e125bd */
  if (C.zf) goto L_10e125bd;
  /* 10e12585 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12588 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12589 mov edx, dword ptr [0x10e3ca5c] */
  EDX = (r32((uint32_t)(0x10e3ca5c)));
  /* 10e1258f push edx */
  push32((uint32_t)(EDX));
  /* 10e12590 call dword ptr [0x10e40288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40288))), 0x10e12596u);
  /* 10e12596 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e12598 je 0x10e125bd */
  if (C.zf) goto L_10e125bd;
  /* 10e1259a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1259d push eax */
  push32((uint32_t)(EAX));
  /* 10e1259e call 0x10e12520 */
  push32(0x10e125a3u); f_10e12520();
  /* 10e125a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e125a6 call dword ptr [0x10e40284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40284))), 0x10e125acu);
  /* 10e125ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e125af mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e125b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e125b4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10e125bb jmp 0x10e125c7 */
  goto L_10e125c7;
L_10e125bd:;
  /* 10e125bd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10e125bf call 0x10e11a70 */
  push32(0x10e125c4u); f_10e11a70();
  /* 10e125c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e125c7:;
  /* 10e125c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e125ca push eax */
  push32((uint32_t)(EAX));
  /* 10e125cb call dword ptr [0x10e40294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40294))), 0x10e125d1u);
  /* 10e125d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e125d4 mov esp, ebp */
  ESP = (EBP);
  /* 10e125d6 pop ebp */
  EBP = (pop32());
  /* 10e125d7 ret  */
  ESPCHK(0x10e12540u, _esp0);
  ESP += 4; return;
}

/* FUN_100025e0 @ 0x10e125e0 (263 bytes, 86 insns) */
void f_10e125e0(void) {
  FTRACE(0x10e125e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e125e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e125e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e125e3 cmp dword ptr [0x10e3ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e125ea je 0x10e126e5 */
  if (C.zf) goto L_10e126e5;
  /* 10e125f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e125f4 jne 0x10e12605 */
  if (!C.zf) goto L_10e12605;
  /* 10e125f6 mov eax, dword ptr [0x10e3ca5c] */
  EAX = (r32((uint32_t)(0x10e3ca5c)));
  /* 10e125fb push eax */
  push32((uint32_t)(EAX));
  /* 10e125fc call dword ptr [0x10e40298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40298))), 0x10e12602u);
  /* 10e12602 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10e12605:;
  /* 10e12605 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12609 je 0x10e126d6 */
  if (C.zf) goto L_10e126d6;
  /* 10e1260f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12612 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12616 je 0x10e12629 */
  if (C.zf) goto L_10e12629;
  /* 10e12618 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1261a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1261d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10e12620 push eax */
  push32((uint32_t)(EAX));
  /* 10e12621 call 0x10e13590 */
  push32(0x10e12626u); f_10e13590();
  /* 10e12626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e12629:;
  /* 10e12629 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1262c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12630 je 0x10e12643 */
  if (C.zf) goto L_10e12643;
  /* 10e12632 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e12634 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12637 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10e1263a push eax */
  push32((uint32_t)(EAX));
  /* 10e1263b call 0x10e13590 */
  push32(0x10e12640u); f_10e13590();
  /* 10e12640 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e12643:;
  /* 10e12643 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12646 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1264a je 0x10e1265d */
  if (C.zf) goto L_10e1265d;
  /* 10e1264c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1264e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12651 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10e12654 push eax */
  push32((uint32_t)(EAX));
  /* 10e12655 call 0x10e13590 */
  push32(0x10e1265au); f_10e13590();
  /* 10e1265a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1265d:;
  /* 10e1265d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12660 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12664 je 0x10e12677 */
  if (C.zf) goto L_10e12677;
  /* 10e12666 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e12668 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1266b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10e1266e push eax */
  push32((uint32_t)(EAX));
  /* 10e1266f call 0x10e13590 */
  push32(0x10e12674u); f_10e13590();
  /* 10e12674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e12677:;
  /* 10e12677 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1267a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1267e je 0x10e12691 */
  if (C.zf) goto L_10e12691;
  /* 10e12680 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e12682 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12685 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10e12688 push eax */
  push32((uint32_t)(EAX));
  /* 10e12689 call 0x10e13590 */
  push32(0x10e1268eu); f_10e13590();
  /* 10e1268e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e12691:;
  /* 10e12691 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12694 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12698 je 0x10e126ab */
  if (C.zf) goto L_10e126ab;
  /* 10e1269a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1269c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1269f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10e126a2 push eax */
  push32((uint32_t)(EAX));
  /* 10e126a3 call 0x10e13590 */
  push32(0x10e126a8u); f_10e13590();
  /* 10e126a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e126ab:;
  /* 10e126ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e126ae cmp dword ptr [ecx + 0x50], 0x10e3cc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10e3cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e126b5 je 0x10e126c8 */
  if (C.zf) goto L_10e126c8;
  /* 10e126b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e126b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e126bc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10e126bf push eax */
  push32((uint32_t)(EAX));
  /* 10e126c0 call 0x10e13590 */
  push32(0x10e126c5u); f_10e13590();
  /* 10e126c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e126c8:;
  /* 10e126c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e126ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e126cd push ecx */
  push32((uint32_t)(ECX));
  /* 10e126ce call 0x10e13590 */
  push32(0x10e126d3u); f_10e13590();
  /* 10e126d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e126d6:;
  /* 10e126d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e126d8 mov edx, dword ptr [0x10e3ca5c] */
  EDX = (r32((uint32_t)(0x10e3ca5c)));
  /* 10e126de push edx */
  push32((uint32_t)(EDX));
  /* 10e126df call dword ptr [0x10e40288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40288))), 0x10e126e5u);
L_10e126e5:;
  /* 10e126e5 pop ebp */
  EBP = (pop32());
  /* 10e126e6 ret  */
  ESPCHK(0x10e125e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026f0 @ 0x10e126f0 (11 bytes, 5 insns) */
void f_10e126f0(void) {
  FTRACE(0x10e126f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e126f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e126f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e126f3 call dword ptr [0x10e40284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40284))), 0x10e126f9u);
  /* 10e126f9 pop ebp */
  EBP = (pop32());
  /* 10e126fa ret  */
  ESPCHK(0x10e126f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x10e12700 (11 bytes, 5 insns) */
void f_10e12700(void) {
  FTRACE(0x10e12700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12700 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12701 mov ebp, esp */
  EBP = (ESP);
  /* 10e12703 call dword ptr [0x10e402a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402a0))), 0x10e12709u);
  /* 10e12709 pop ebp */
  EBP = (pop32());
  /* 10e1270a ret  */
  ESPCHK(0x10e12700u, _esp0);
  ESP += 4; return;
}

/* FUN_10002710 @ 0x10e12710 (804 bytes, 236 insns) */
void f_10e12710(void) {
  FTRACE(0x10e12710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12710 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12711 mov ebp, esp */
  EBP = (ESP);
  /* 10e12713 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e12716 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10e1271b push 0x10e393a8 */
  push32((uint32_t)(0x10e393a8u));
  /* 10e12720 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e12722 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10e12727 call 0x10e12b00 */
  push32(0x10e1272cu); f_10e12b00();
  /* 10e1272c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1272f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10e12732 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12736 jne 0x10e12742 */
  if (!C.zf) goto L_10e12742;
  /* 10e12738 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10e1273a call 0x10e11a70 */
  push32(0x10e1273fu); f_10e11a70();
  /* 10e1273f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e12742:;
  /* 10e12742 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e12745 mov dword ptr [0x10e3fde0], eax */
  w32((uint32_t)(0x10e3fde0), (EAX));
  /* 10e1274a mov dword ptr [0x10e3ff1c], 0x20 */
  w32((uint32_t)(0x10e3ff1c), (0x20u));
  /* 10e12754 jmp 0x10e1275f */
  goto L_10e1275f;
L_10e12756:;
  /* 10e12756 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e12759 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1275c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10e1275f:;
  /* 10e1275f mov edx, dword ptr [0x10e3fde0] */
  EDX = (r32((uint32_t)(0x10e3fde0)));
  /* 10e12765 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1276b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1276e jae 0x10e12793 */
  if (!C.cf) goto L_10e12793;
  /* 10e12770 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e12773 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10e12777 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e1277a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10e12780 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e12783 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10e12787 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e1278a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10e12791 jmp 0x10e12756 */
  goto L_10e12756;
L_10e12793:;
  /* 10e12793 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10e12796 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12797 call dword ptr [0x10e402ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402ac))), 0x10e1279du);
  /* 10e1279d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10e127a0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e127a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e127a8 je 0x10e12935 */
  if (C.zf) goto L_10e12935;
  /* 10e127ae cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e127b2 je 0x10e12935 */
  if (C.zf) goto L_10e12935;
  /* 10e127b8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e127bb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e127bd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10e127c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e127c3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e127c6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e127c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e127cc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e127cf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10e127d2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e127d9 jge 0x10e127e3 */
  if ((C.sf==C.of)) goto L_10e127e3;
  /* 10e127db mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10e127de mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10e127e1 jmp 0x10e127ea */
  goto L_10e127ea;
L_10e127e3:;
  /* 10e127e3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10e127ea:;
  /* 10e127ea mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10e127ed mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10e127f0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10e127f7 jmp 0x10e12802 */
  goto L_10e12802;
L_10e127f9:;
  /* 10e127f9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10e127fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e127ff mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10e12802:;
  /* 10e12802 mov ecx, dword ptr [0x10e3ff1c] */
  ECX = (r32((uint32_t)(0x10e3ff1c)));
  /* 10e12808 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1280b jge 0x10e128a2 */
  if ((C.sf==C.of)) goto L_10e128a2;
  /* 10e12811 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10e12816 push 0x10e393a8 */
  push32((uint32_t)(0x10e393a8u));
  /* 10e1281b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1281d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10e12822 call 0x10e12b00 */
  push32(0x10e12827u); f_10e12b00();
  /* 10e12827 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1282a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10e1282d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12831 jne 0x10e1283e */
  if (!C.zf) goto L_10e1283e;
  /* 10e12833 mov edx, dword ptr [0x10e3ff1c] */
  EDX = (r32((uint32_t)(0x10e3ff1c)));
  /* 10e12839 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10e1283c jmp 0x10e128a2 */
  goto L_10e128a2;
L_10e1283e:;
  /* 10e1283e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10e12841 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e12844 mov dword ptr [eax*4 + 0x10e3fde0], ecx */
  w32((uint32_t)(EAX*4 + 0x10e3fde0), (ECX));
  /* 10e1284b mov edx, dword ptr [0x10e3ff1c] */
  EDX = (r32((uint32_t)(0x10e3ff1c)));
  /* 10e12851 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12854 mov dword ptr [0x10e3ff1c], edx */
  w32((uint32_t)(0x10e3ff1c), (EDX));
  /* 10e1285a jmp 0x10e12865 */
  goto L_10e12865;
L_10e1285c:;
  /* 10e1285c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e1285f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12862 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10e12865:;
  /* 10e12865 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10e12868 mov edx, dword ptr [ecx*4 + 0x10e3fde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e3fde0)));
  /* 10e1286f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12875 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12878 jae 0x10e1289d */
  if (!C.cf) goto L_10e1289d;
  /* 10e1287a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e1287d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10e12881 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e12884 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10e1288a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e1288d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10e12891 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e12894 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10e1289b jmp 0x10e1285c */
  goto L_10e1285c;
L_10e1289d:;
  /* 10e1289d jmp 0x10e127f9 */
  goto L_10e127f9;
L_10e128a2:;
  /* 10e128a2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10e128a9 jmp 0x10e128c6 */
  goto L_10e128c6;
L_10e128ab:;
  /* 10e128ab mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e128ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e128b1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10e128b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e128b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e128ba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e128bd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10e128c0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e128c3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10e128c6:;
  /* 10e128c6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e128c9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e128cc jge 0x10e12935 */
  if ((C.sf==C.of)) goto L_10e12935;
  /* 10e128ce mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10e128d1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e128d4 je 0x10e12930 */
  if (C.zf) goto L_10e12930;
  /* 10e128d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e128d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e128dc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e128df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e128e1 je 0x10e12930 */
  if (C.zf) goto L_10e12930;
  /* 10e128e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e128e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e128e9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10e128ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e128ee jne 0x10e12900 */
  if (!C.zf) goto L_10e12900;
  /* 10e128f0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10e128f3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e128f5 push edx */
  push32((uint32_t)(EDX));
  /* 10e128f6 call dword ptr [0x10e402a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402a8))), 0x10e128fcu);
  /* 10e128fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e128fe je 0x10e12930 */
  if (C.zf) goto L_10e12930;
L_10e12900:;
  /* 10e12900 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e12903 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e12906 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e12909 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1290c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1290f mov edx, dword ptr [eax*4 + 0x10e3fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e3fde0)));
  /* 10e12916 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12918 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10e1291b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e1291e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10e12921 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e12923 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e12925 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e12928 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1292b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e1292d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10e12930:;
  /* 10e12930 jmp 0x10e128ab */
  goto L_10e128ab;
L_10e12935:;
  /* 10e12935 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10e1293c jmp 0x10e12947 */
  goto L_10e12947;
L_10e1293e:;
  /* 10e1293e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e12941 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12944 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10e12947:;
  /* 10e12947 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1294b jge 0x10e12a24 */
  if ((C.sf==C.of)) goto L_10e12a24;
  /* 10e12951 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e12954 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e12957 mov edx, dword ptr [0x10e3fde0] */
  EDX = (r32((uint32_t)(0x10e3fde0)));
  /* 10e1295d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1295f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10e12962 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e12965 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12968 jne 0x10e12a10 */
  if (!C.zf) goto L_10e12a10;
  /* 10e1296e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e12971 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10e12975 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12979 jne 0x10e12984 */
  if (!C.zf) goto L_10e12984;
  /* 10e1297b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10e12982 jmp 0x10e12994 */
  goto L_10e12994;
L_10e12984:;
  /* 10e12984 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e12987 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1298a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e1298c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1298e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12991 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10e12994:;
  /* 10e12994 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10e12997 push eax */
  push32((uint32_t)(EAX));
  /* 10e12998 call dword ptr [0x10e40258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40258))), 0x10e1299eu);
  /* 10e1299e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10e129a1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e129a5 je 0x10e129ff */
  if (C.zf) goto L_10e129ff;
  /* 10e129a7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e129aa push ecx */
  push32((uint32_t)(ECX));
  /* 10e129ab call dword ptr [0x10e402a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402a8))), 0x10e129b1u);
  /* 10e129b1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10e129b4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e129b8 je 0x10e129ff */
  if (C.zf) goto L_10e129ff;
  /* 10e129ba mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e129bd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e129c0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e129c2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10e129c5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e129cb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e129ce jne 0x10e129e0 */
  if (!C.zf) goto L_10e129e0;
  /* 10e129d0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e129d3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10e129d6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10e129d8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e129db mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10e129de jmp 0x10e129fd */
  goto L_10e129fd;
L_10e129e0:;
  /* 10e129e0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10e129e3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e129e9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e129ec jne 0x10e129fd */
  if (!C.zf) goto L_10e129fd;
  /* 10e129ee mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e129f1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e129f4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10e129f7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e129fa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10e129fd:;
  /* 10e129fd jmp 0x10e12a0e */
  goto L_10e12a0e;
L_10e129ff:;
  /* 10e129ff mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e12a02 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e12a05 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10e12a08 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e12a0b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10e12a0e:;
  /* 10e12a0e jmp 0x10e12a1f */
  goto L_10e12a1f;
L_10e12a10:;
  /* 10e12a10 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e12a13 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e12a16 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10e12a19 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e12a1c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10e12a1f:;
  /* 10e12a1f jmp 0x10e1293e */
  goto L_10e1293e;
L_10e12a24:;
  /* 10e12a24 mov eax, dword ptr [0x10e3ff1c] */
  EAX = (r32((uint32_t)(0x10e3ff1c)));
  /* 10e12a29 push eax */
  push32((uint32_t)(EAX));
  /* 10e12a2a call dword ptr [0x10e402a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402a4))), 0x10e12a30u);
  /* 10e12a30 mov esp, ebp */
  ESP = (EBP);
  /* 10e12a32 pop ebp */
  EBP = (pop32());
  /* 10e12a33 ret  */
  ESPCHK(0x10e12710u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10e12a40 (155 bytes, 45 insns) */
void f_10e12a40(void) {
  FTRACE(0x10e12a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12a41 mov ebp, esp */
  EBP = (ESP);
  /* 10e12a43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e12a46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e12a4d jmp 0x10e12a58 */
  goto L_10e12a58;
L_10e12a4f:;
  /* 10e12a4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e12a52 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12a55 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e12a58:;
  /* 10e12a58 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12a5c jge 0x10e12ad7 */
  if ((C.sf==C.of)) goto L_10e12ad7;
  /* 10e12a5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e12a61 cmp dword ptr [ecx*4 + 0x10e3fde0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10e3fde0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12a69 je 0x10e12ad2 */
  if (C.zf) goto L_10e12ad2;
  /* 10e12a6b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e12a6e mov eax, dword ptr [edx*4 + 0x10e3fde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e3fde0)));
  /* 10e12a75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e12a78 jmp 0x10e12a83 */
  goto L_10e12a83;
L_10e12a7a:;
  /* 10e12a7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12a7d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12a80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e12a83:;
  /* 10e12a83 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e12a86 mov eax, dword ptr [edx*4 + 0x10e3fde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e3fde0)));
  /* 10e12a8d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12a92 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12a95 jae 0x10e12aaf */
  if (!C.cf) goto L_10e12aaf;
  /* 10e12a97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12a9a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12a9e je 0x10e12aad */
  if (C.zf) goto L_10e12aad;
  /* 10e12aa0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12aa3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12aa6 push edx */
  push32((uint32_t)(EDX));
  /* 10e12aa7 call dword ptr [0x10e402b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402b0))), 0x10e12aadu);
L_10e12aad:;
  /* 10e12aad jmp 0x10e12a7a */
  goto L_10e12a7a;
L_10e12aaf:;
  /* 10e12aaf push 2 */
  push32((uint32_t)(0x2u));
  /* 10e12ab1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e12ab4 mov ecx, dword ptr [eax*4 + 0x10e3fde0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10e3fde0)));
  /* 10e12abb push ecx */
  push32((uint32_t)(ECX));
  /* 10e12abc call 0x10e13590 */
  push32(0x10e12ac1u); f_10e13590();
  /* 10e12ac1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12ac4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e12ac7 mov dword ptr [edx*4 + 0x10e3fde0], 0 */
  w32((uint32_t)(EDX*4 + 0x10e3fde0), (0x0u));
L_10e12ad2:;
  /* 10e12ad2 jmp 0x10e12a4f */
  goto L_10e12a4f;
L_10e12ad7:;
  /* 10e12ad7 mov esp, ebp */
  ESP = (EBP);
  /* 10e12ad9 pop ebp */
  EBP = (pop32());
  /* 10e12ada ret  */
  ESPCHK(0x10e12a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ae0 @ 0x10e12ae0 (29 bytes, 13 insns) */
void f_10e12ae0(void) {
  FTRACE(0x10e12ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10e12ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12ae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12ae7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e12ae9 mov eax, dword ptr [0x10e3e5f0] */
  EAX = (r32((uint32_t)(0x10e3e5f0)));
  /* 10e12aee push eax */
  push32((uint32_t)(EAX));
  /* 10e12aef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12af2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12af3 call 0x10e12b50 */
  push32(0x10e12af8u); f_10e12b50();
  /* 10e12af8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12afb pop ebp */
  EBP = (pop32());
  /* 10e12afc ret  */
  ESPCHK(0x10e12ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b00 @ 0x10e12b00 (35 bytes, 16 insns) */
void f_10e12b00(void) {
  FTRACE(0x10e12b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12b01 mov ebp, esp */
  EBP = (ESP);
  /* 10e12b03 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e12b06 push eax */
  push32((uint32_t)(EAX));
  /* 10e12b07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e12b0a push ecx */
  push32((uint32_t)(ECX));
  /* 10e12b0b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e12b0e push edx */
  push32((uint32_t)(EDX));
  /* 10e12b0f mov eax, dword ptr [0x10e3e5f0] */
  EAX = (r32((uint32_t)(0x10e3e5f0)));
  /* 10e12b14 push eax */
  push32((uint32_t)(EAX));
  /* 10e12b15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12b18 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12b19 call 0x10e12b50 */
  push32(0x10e12b1eu); f_10e12b50();
  /* 10e12b1e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12b21 pop ebp */
  EBP = (pop32());
  /* 10e12b22 ret  */
  ESPCHK(0x10e12b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b30 @ 0x10e12b30 (27 bytes, 13 insns) */
void f_10e12b30(void) {
  FTRACE(0x10e12b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12b31 mov ebp, esp */
  EBP = (ESP);
  /* 10e12b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12b37 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e12b39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e12b3c push eax */
  push32((uint32_t)(EAX));
  /* 10e12b3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12b40 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12b41 call 0x10e12b50 */
  push32(0x10e12b46u); f_10e12b50();
  /* 10e12b46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12b49 pop ebp */
  EBP = (pop32());
  /* 10e12b4a ret  */
  ESPCHK(0x10e12b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b50 @ 0x10e12b50 (94 bytes, 38 insns) */
void f_10e12b50(void) {
  FTRACE(0x10e12b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12b51 mov ebp, esp */
  EBP = (ESP);
  /* 10e12b53 push ecx */
  push32((uint32_t)(ECX));
L_10e12b54:;
  /* 10e12b54 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e12b56 call 0x10e16500 */
  push32(0x10e12b5bu); f_10e16500();
  /* 10e12b5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12b5e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e12b61 push eax */
  push32((uint32_t)(EAX));
  /* 10e12b62 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e12b65 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12b66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e12b69 push edx */
  push32((uint32_t)(EDX));
  /* 10e12b6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12b6d push eax */
  push32((uint32_t)(EAX));
  /* 10e12b6e call 0x10e12bd0 */
  push32(0x10e12b73u); f_10e12bd0();
  /* 10e12b73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12b76 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e12b79 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e12b7b call 0x10e165a0 */
  push32(0x10e12b80u); f_10e165a0();
  /* 10e12b80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12b83 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12b87 jne 0x10e12b8f */
  if (!C.zf) goto L_10e12b8f;
  /* 10e12b89 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12b8d jne 0x10e12b94 */
  if (!C.zf) goto L_10e12b94;
L_10e12b8f:;
  /* 10e12b8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12b92 jmp 0x10e12baa */
  goto L_10e12baa;
L_10e12b94:;
  /* 10e12b94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12b97 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12b98 call 0x10e16840 */
  push32(0x10e12b9du); f_10e16840();
  /* 10e12b9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12ba0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e12ba2 jne 0x10e12ba8 */
  if (!C.zf) goto L_10e12ba8;
  /* 10e12ba4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e12ba6 jmp 0x10e12baa */
  goto L_10e12baa;
L_10e12ba8:;
  /* 10e12ba8 jmp 0x10e12b54 */
  goto L_10e12b54;
L_10e12baa:;
  /* 10e12baa mov esp, ebp */
  ESP = (EBP);
  /* 10e12bac pop ebp */
  EBP = (pop32());
  /* 10e12bad ret  */
  ESPCHK(0x10e12b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bb0 @ 0x10e12bb0 (23 bytes, 11 insns) */
void f_10e12bb0(void) {
  FTRACE(0x10e12bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10e12bb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12bb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12bb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e12bb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12bbc push eax */
  push32((uint32_t)(EAX));
  /* 10e12bbd call 0x10e12bd0 */
  push32(0x10e12bc2u); f_10e12bd0();
  /* 10e12bc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12bc5 pop ebp */
  EBP = (pop32());
  /* 10e12bc6 ret  */
  ESPCHK(0x10e12bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bd0 @ 0x10e12bd0 (787 bytes, 254 insns) */
void f_10e12bd0(void) {
  FTRACE(0x10e12bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10e12bd3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e12bd6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e12bd7 push esi */
  push32((uint32_t)(ESI));
  /* 10e12bd8 push edi */
  push32((uint32_t)(EDI));
  /* 10e12bd9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e12be0 mov eax, dword ptr [0x10e3ca84] */
  EAX = (r32((uint32_t)(0x10e3ca84)));
  /* 10e12be5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e12be8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e12bea je 0x10e12c1c */
  if (C.zf) goto L_10e12c1c;
L_10e12bec:;
  /* 10e12bec call 0x10e13ca0 */
  push32(0x10e12bf1u); f_10e13ca0();
  /* 10e12bf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e12bf3 jne 0x10e12c16 */
  if (!C.zf) goto L_10e12c16;
  /* 10e12bf5 push 0x10e3949c */
  push32((uint32_t)(0x10e3949cu));
  /* 10e12bfa push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12bfc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10e12c01 push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e12c06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e12c08 call 0x10e11bc0 */
  push32(0x10e12c0du); f_10e11bc0();
  /* 10e12c0d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12c10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12c13 jne 0x10e12c16 */
  if (!C.zf) goto L_10e12c16;
  /* 10e12c15 int3  */
  x86_unimpl("int3 @ 0x10e12c15");
L_10e12c16:;
  /* 10e12c16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e12c18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e12c1a jne 0x10e12bec */
  if (!C.zf) goto L_10e12bec;
L_10e12c1c:;
  /* 10e12c1c mov edx, dword ptr [0x10e3ca88] */
  EDX = (r32((uint32_t)(0x10e3ca88)));
  /* 10e12c22 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e12c25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e12c28 cmp eax, dword ptr [0x10e3ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12c2e jne 0x10e12c31 */
  if (!C.zf) goto L_10e12c31;
  /* 10e12c30 int3  */
  x86_unimpl("int3 @ 0x10e12c30");
L_10e12c31:;
  /* 10e12c31 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e12c34 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12c35 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e12c38 push edx */
  push32((uint32_t)(EDX));
  /* 10e12c39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e12c3c push eax */
  push32((uint32_t)(EAX));
  /* 10e12c3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e12c40 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12c41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12c44 push edx */
  push32((uint32_t)(EDX));
  /* 10e12c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12c47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e12c49 call dword ptr [0x10e3cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3cc90))), 0x10e12c4fu);
  /* 10e12c4f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12c52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e12c54 jne 0x10e12cb4 */
  if (!C.zf) goto L_10e12cb4;
  /* 10e12c56 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12c5a je 0x10e12c87 */
  if (C.zf) goto L_10e12c87;
L_10e12c5c:;
  /* 10e12c5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e12c5f push eax */
  push32((uint32_t)(EAX));
  /* 10e12c60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e12c63 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12c64 push 0x10e39458 */
  push32((uint32_t)(0x10e39458u));
  /* 10e12c69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12c71 call 0x10e11bc0 */
  push32(0x10e12c76u); f_10e11bc0();
  /* 10e12c76 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12c79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12c7c jne 0x10e12c7f */
  if (!C.zf) goto L_10e12c7f;
  /* 10e12c7e int3  */
  x86_unimpl("int3 @ 0x10e12c7e");
L_10e12c7f:;
  /* 10e12c7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e12c81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e12c83 jne 0x10e12c5c */
  if (!C.zf) goto L_10e12c5c;
  /* 10e12c85 jmp 0x10e12cad */
  goto L_10e12cad;
L_10e12c87:;
  /* 10e12c87 push 0x10e39434 */
  push32((uint32_t)(0x10e39434u));
  /* 10e12c8c push 0x10e39430 */
  push32((uint32_t)(0x10e39430u));
  /* 10e12c91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12c99 call 0x10e11bc0 */
  push32(0x10e12c9eu); f_10e11bc0();
  /* 10e12c9e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12ca1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12ca4 jne 0x10e12ca7 */
  if (!C.zf) goto L_10e12ca7;
  /* 10e12ca6 int3  */
  x86_unimpl("int3 @ 0x10e12ca6");
L_10e12ca7:;
  /* 10e12ca7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e12ca9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e12cab jne 0x10e12c87 */
  if (!C.zf) goto L_10e12c87;
L_10e12cad:;
  /* 10e12cad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e12caf jmp 0x10e12edc */
  goto L_10e12edc;
L_10e12cb4:;
  /* 10e12cb4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e12cb7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e12cbd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12cc0 je 0x10e12cd6 */
  if (C.zf) goto L_10e12cd6;
  /* 10e12cc2 mov edx, dword ptr [0x10e3ca84] */
  EDX = (r32((uint32_t)(0x10e3ca84)));
  /* 10e12cc8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e12ccb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e12ccd jne 0x10e12cd6 */
  if (!C.zf) goto L_10e12cd6;
  /* 10e12ccf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10e12cd6:;
  /* 10e12cd6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12cda ja 0x10e12ce7 */
  if ((!C.cf&&!C.zf)) goto L_10e12ce7;
  /* 10e12cdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12cdf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12ce2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12ce5 jbe 0x10e12d13 */
  if ((C.cf||C.zf)) goto L_10e12d13;
L_10e12ce7:;
  /* 10e12ce7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12cea push ecx */
  push32((uint32_t)(ECX));
  /* 10e12ceb push 0x10e3940c */
  push32((uint32_t)(0x10e3940cu));
  /* 10e12cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12cf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12cf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12cf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e12cf8 call 0x10e11bc0 */
  push32(0x10e12cfdu); f_10e11bc0();
  /* 10e12cfd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12d00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12d03 jne 0x10e12d06 */
  if (!C.zf) goto L_10e12d06;
  /* 10e12d05 int3  */
  x86_unimpl("int3 @ 0x10e12d05");
L_10e12d06:;
  /* 10e12d06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e12d08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e12d0a jne 0x10e12ce7 */
  if (!C.zf) goto L_10e12ce7;
  /* 10e12d0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e12d0e jmp 0x10e12edc */
  goto L_10e12edc;
L_10e12d13:;
  /* 10e12d13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e12d16 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e12d1b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12d1e je 0x10e12d60 */
  if (C.zf) goto L_10e12d60;
  /* 10e12d20 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12d24 je 0x10e12d60 */
  if (C.zf) goto L_10e12d60;
  /* 10e12d26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e12d29 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e12d2f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12d32 je 0x10e12d60 */
  if (C.zf) goto L_10e12d60;
  /* 10e12d34 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12d38 je 0x10e12d60 */
  if (C.zf) goto L_10e12d60;
L_10e12d3a:;
  /* 10e12d3a push 0x10e393d8 */
  push32((uint32_t)(0x10e393d8u));
  /* 10e12d3f push 0x10e39430 */
  push32((uint32_t)(0x10e39430u));
  /* 10e12d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12d48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12d4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e12d4c call 0x10e11bc0 */
  push32(0x10e12d51u); f_10e11bc0();
  /* 10e12d51 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12d54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12d57 jne 0x10e12d5a */
  if (!C.zf) goto L_10e12d5a;
  /* 10e12d59 int3  */
  x86_unimpl("int3 @ 0x10e12d59");
L_10e12d5a:;
  /* 10e12d5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e12d5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e12d5e jne 0x10e12d3a */
  if (!C.zf) goto L_10e12d3a;
L_10e12d60:;
  /* 10e12d60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12d63 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12d66 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e12d69 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e12d6c push ecx */
  push32((uint32_t)(ECX));
  /* 10e12d6d call 0x10e16950 */
  push32(0x10e12d72u); f_10e16950();
  /* 10e12d72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12d75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e12d78 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12d7c jne 0x10e12d85 */
  if (!C.zf) goto L_10e12d85;
  /* 10e12d7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e12d80 jmp 0x10e12edc */
  goto L_10e12edc;
L_10e12d85:;
  /* 10e12d85 mov edx, dword ptr [0x10e3ca88] */
  EDX = (r32((uint32_t)(0x10e3ca88)));
  /* 10e12d8b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12d8e mov dword ptr [0x10e3ca88], edx */
  w32((uint32_t)(0x10e3ca88), (EDX));
  /* 10e12d94 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12d98 je 0x10e12de3 */
  if (C.zf) goto L_10e12de3;
  /* 10e12d9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12d9d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e12da3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12da6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10e12dad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12db0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10e12db7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12dba mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10e12dc1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12dc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12dc7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10e12dca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12dcd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10e12dd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12dd7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10e12dde jmp 0x10e12e83 */
  goto L_10e12e83;
L_10e12de3:;
  /* 10e12de3 mov edx, dword ptr [0x10e3e454] */
  EDX = (r32((uint32_t)(0x10e3e454)));
  /* 10e12de9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12dec mov dword ptr [0x10e3e454], edx */
  w32((uint32_t)(0x10e3e454), (EDX));
  /* 10e12df2 mov eax, dword ptr [0x10e3e45c] */
  EAX = (r32((uint32_t)(0x10e3e45c)));
  /* 10e12df7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12dfa mov dword ptr [0x10e3e45c], eax */
  w32((uint32_t)(0x10e3e45c), (EAX));
  /* 10e12dff mov ecx, dword ptr [0x10e3e45c] */
  ECX = (r32((uint32_t)(0x10e3e45c)));
  /* 10e12e05 cmp ecx, dword ptr [0x10e3e460] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3e460))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12e0b jbe 0x10e12e19 */
  if ((C.cf||C.zf)) goto L_10e12e19;
  /* 10e12e0d mov edx, dword ptr [0x10e3e45c] */
  EDX = (r32((uint32_t)(0x10e3e45c)));
  /* 10e12e13 mov dword ptr [0x10e3e460], edx */
  w32((uint32_t)(0x10e3e460), (EDX));
L_10e12e19:;
  /* 10e12e19 cmp dword ptr [0x10e3e458], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e458))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12e20 je 0x10e12e2f */
  if (C.zf) goto L_10e12e2f;
  /* 10e12e22 mov eax, dword ptr [0x10e3e458] */
  EAX = (r32((uint32_t)(0x10e3e458)));
  /* 10e12e27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12e2a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10e12e2d jmp 0x10e12e38 */
  goto L_10e12e38;
L_10e12e2f:;
  /* 10e12e2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12e32 mov dword ptr [0x10e3e450], edx */
  w32((uint32_t)(0x10e3e450), (EDX));
L_10e12e38:;
  /* 10e12e38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12e3b mov ecx, dword ptr [0x10e3e458] */
  ECX = (r32((uint32_t)(0x10e3e458)));
  /* 10e12e41 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e12e43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12e46 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10e12e4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12e50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e12e53 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10e12e56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12e59 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e12e5c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10e12e5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12e62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12e65 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10e12e68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12e6b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e12e6e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10e12e71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12e74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e12e77 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10e12e7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12e7d mov dword ptr [0x10e3e458], ecx */
  w32((uint32_t)(0x10e3e458), (ECX));
L_10e12e83:;
  /* 10e12e83 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e12e85 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e12e87 mov dl, byte ptr [0x10e3ca90] */
  DL = (r8((uint32_t)(0x10e3ca90)));
  /* 10e12e8d push edx */
  push32((uint32_t)(EDX));
  /* 10e12e8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12e91 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12e94 push eax */
  push32((uint32_t)(EAX));
  /* 10e12e95 call 0x10e16870 */
  push32(0x10e12e9au); f_10e16870();
  /* 10e12e9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12e9d push 4 */
  push32((uint32_t)(0x4u));
  /* 10e12e9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e12ea1 mov cl, byte ptr [0x10e3ca90] */
  CL = (r8((uint32_t)(0x10e3ca90)));
  /* 10e12ea7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12ea8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12eab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12eae lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10e12eb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12eb3 call 0x10e16870 */
  push32(0x10e12eb8u); f_10e16870();
  /* 10e12eb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12ebb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12ebe push edx */
  push32((uint32_t)(EDX));
  /* 10e12ebf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e12ec1 mov al, byte ptr [0x10e3ca92] */
  AL = (r8((uint32_t)(0x10e3ca92)));
  /* 10e12ec6 push eax */
  push32((uint32_t)(EAX));
  /* 10e12ec7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12eca add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12ecd push ecx */
  push32((uint32_t)(ECX));
  /* 10e12ece call 0x10e16870 */
  push32(0x10e12ed3u); f_10e16870();
  /* 10e12ed3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12ed6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12ed9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10e12edc:;
  /* 10e12edc pop edi */
  EDI = (pop32());
  /* 10e12edd pop esi */
  ESI = (pop32());
  /* 10e12ede pop ebx */
  EBX = (pop32());
  /* 10e12edf mov esp, ebp */
  ESP = (EBP);
  /* 10e12ee1 pop ebp */
  EBP = (pop32());
  /* 10e12ee2 ret  */
  ESPCHK(0x10e12bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ef0 @ 0x10e12ef0 (27 bytes, 13 insns) */
void f_10e12ef0(void) {
  FTRACE(0x10e12ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10e12ef3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12ef5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12ef7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e12ef9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e12efc push eax */
  push32((uint32_t)(EAX));
  /* 10e12efd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12f00 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12f01 call 0x10e12f10 */
  push32(0x10e12f06u); f_10e12f10();
  /* 10e12f06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12f09 pop ebp */
  EBP = (pop32());
  /* 10e12f0a ret  */
  ESPCHK(0x10e12ef0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10e12f10 (96 bytes, 37 insns) */
void f_10e12f10(void) {
  FTRACE(0x10e12f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12f11 mov ebp, esp */
  EBP = (ESP);
  /* 10e12f13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e12f16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e12f19 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e12f1d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10e12f20 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e12f23 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12f24 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e12f27 push edx */
  push32((uint32_t)(EDX));
  /* 10e12f28 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e12f2b push eax */
  push32((uint32_t)(EAX));
  /* 10e12f2c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e12f2f push ecx */
  push32((uint32_t)(ECX));
  /* 10e12f30 call 0x10e12b00 */
  push32(0x10e12f35u); f_10e12b00();
  /* 10e12f35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12f38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e12f3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12f3f je 0x10e12f69 */
  if (C.zf) goto L_10e12f69;
  /* 10e12f41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e12f44 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e12f47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e12f4a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12f4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e12f50:;
  /* 10e12f50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e12f53 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12f56 jae 0x10e12f69 */
  if (!C.cf) goto L_10e12f69;
  /* 10e12f58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e12f5b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10e12f5e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e12f61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12f64 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e12f67 jmp 0x10e12f50 */
  goto L_10e12f50;
L_10e12f69:;
  /* 10e12f69 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e12f6c mov esp, ebp */
  ESP = (EBP);
  /* 10e12f6e pop ebp */
  EBP = (pop32());
  /* 10e12f6f ret  */
  ESPCHK(0x10e12f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f70 @ 0x10e12f70 (27 bytes, 13 insns) */
void f_10e12f70(void) {
  FTRACE(0x10e12f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12f71 mov ebp, esp */
  EBP = (ESP);
  /* 10e12f73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12f75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e12f77 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e12f79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e12f7c push eax */
  push32((uint32_t)(EAX));
  /* 10e12f7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12f80 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12f81 call 0x10e12f90 */
  push32(0x10e12f86u); f_10e12f90();
  /* 10e12f86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12f89 pop ebp */
  EBP = (pop32());
  /* 10e12f8a ret  */
  ESPCHK(0x10e12f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f90 @ 0x10e12f90 (64 bytes, 27 insns) */
void f_10e12f90(void) {
  FTRACE(0x10e12f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12f91 mov ebp, esp */
  EBP = (ESP);
  /* 10e12f93 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12f94 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e12f96 call 0x10e16500 */
  push32(0x10e12f9bu); f_10e16500();
  /* 10e12f9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12f9e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e12fa0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e12fa3 push eax */
  push32((uint32_t)(EAX));
  /* 10e12fa4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e12fa7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12fa8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e12fab push edx */
  push32((uint32_t)(EDX));
  /* 10e12fac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e12faf push eax */
  push32((uint32_t)(EAX));
  /* 10e12fb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e12fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e12fb4 call 0x10e12fd0 */
  push32(0x10e12fb9u); f_10e12fd0();
  /* 10e12fb9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12fbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e12fbf push 9 */
  push32((uint32_t)(0x9u));
  /* 10e12fc1 call 0x10e165a0 */
  push32(0x10e12fc6u); f_10e165a0();
  /* 10e12fc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12fc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e12fcc mov esp, ebp */
  ESP = (EBP);
  /* 10e12fce pop ebp */
  EBP = (pop32());
  /* 10e12fcf ret  */
  ESPCHK(0x10e12f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fd0 @ 0x10e12fd0 (1297 bytes, 431 insns) */
void f_10e12fd0(void) {
  FTRACE(0x10e12fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e12fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e12fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10e12fd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e12fd6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e12fd7 push esi */
  push32((uint32_t)(ESI));
  /* 10e12fd8 push edi */
  push32((uint32_t)(EDI));
  /* 10e12fd9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10e12fe0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e12fe4 jne 0x10e13003 */
  if (!C.zf) goto L_10e13003;
  /* 10e12fe6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e12fe9 push eax */
  push32((uint32_t)(EAX));
  /* 10e12fea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e12fed push ecx */
  push32((uint32_t)(ECX));
  /* 10e12fee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e12ff1 push edx */
  push32((uint32_t)(EDX));
  /* 10e12ff2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e12ff5 push eax */
  push32((uint32_t)(EAX));
  /* 10e12ff6 call 0x10e12b00 */
  push32(0x10e12ffbu); f_10e12b00();
  /* 10e12ffb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e12ffe jmp 0x10e134da */
  goto L_10e134da;
L_10e13003:;
  /* 10e13003 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13007 je 0x10e13026 */
  if (C.zf) goto L_10e13026;
  /* 10e13009 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1300d jne 0x10e13026 */
  if (!C.zf) goto L_10e13026;
  /* 10e1300f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e13012 push ecx */
  push32((uint32_t)(ECX));
  /* 10e13013 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e13016 push edx */
  push32((uint32_t)(EDX));
  /* 10e13017 call 0x10e13590 */
  push32(0x10e1301cu); f_10e13590();
  /* 10e1301c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1301f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e13021 jmp 0x10e134da */
  goto L_10e134da;
L_10e13026:;
  /* 10e13026 mov eax, dword ptr [0x10e3ca84] */
  EAX = (r32((uint32_t)(0x10e3ca84)));
  /* 10e1302b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1302e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e13030 je 0x10e13062 */
  if (C.zf) goto L_10e13062;
L_10e13032:;
  /* 10e13032 call 0x10e13ca0 */
  push32(0x10e13037u); f_10e13ca0();
  /* 10e13037 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e13039 jne 0x10e1305c */
  if (!C.zf) goto L_10e1305c;
  /* 10e1303b push 0x10e3949c */
  push32((uint32_t)(0x10e3949cu));
  /* 10e13040 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13042 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10e13047 push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e1304c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1304e call 0x10e11bc0 */
  push32(0x10e13053u); f_10e11bc0();
  /* 10e13053 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13056 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13059 jne 0x10e1305c */
  if (!C.zf) goto L_10e1305c;
  /* 10e1305b int3  */
  x86_unimpl("int3 @ 0x10e1305b");
L_10e1305c:;
  /* 10e1305c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1305e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e13060 jne 0x10e13032 */
  if (!C.zf) goto L_10e13032;
L_10e13062:;
  /* 10e13062 mov edx, dword ptr [0x10e3ca88] */
  EDX = (r32((uint32_t)(0x10e3ca88)));
  /* 10e13068 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e1306b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1306e cmp eax, dword ptr [0x10e3ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13074 jne 0x10e13077 */
  if (!C.zf) goto L_10e13077;
  /* 10e13076 int3  */
  x86_unimpl("int3 @ 0x10e13076");
L_10e13077:;
  /* 10e13077 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e1307a push ecx */
  push32((uint32_t)(ECX));
  /* 10e1307b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e1307e push edx */
  push32((uint32_t)(EDX));
  /* 10e1307f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e13082 push eax */
  push32((uint32_t)(EAX));
  /* 10e13083 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e13086 push ecx */
  push32((uint32_t)(ECX));
  /* 10e13087 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1308a push edx */
  push32((uint32_t)(EDX));
  /* 10e1308b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1308e push eax */
  push32((uint32_t)(EAX));
  /* 10e1308f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e13091 call dword ptr [0x10e3cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3cc90))), 0x10e13097u);
  /* 10e13097 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1309a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1309c jne 0x10e130fc */
  if (!C.zf) goto L_10e130fc;
  /* 10e1309e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e130a2 je 0x10e130cf */
  if (C.zf) goto L_10e130cf;
L_10e130a4:;
  /* 10e130a4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e130a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e130a8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e130ab push edx */
  push32((uint32_t)(EDX));
  /* 10e130ac push 0x10e39618 */
  push32((uint32_t)(0x10e39618u));
  /* 10e130b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e130b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e130b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e130b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e130b9 call 0x10e11bc0 */
  push32(0x10e130beu); f_10e11bc0();
  /* 10e130be add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e130c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e130c4 jne 0x10e130c7 */
  if (!C.zf) goto L_10e130c7;
  /* 10e130c6 int3  */
  x86_unimpl("int3 @ 0x10e130c6");
L_10e130c7:;
  /* 10e130c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e130c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e130cb jne 0x10e130a4 */
  if (!C.zf) goto L_10e130a4;
  /* 10e130cd jmp 0x10e130f5 */
  goto L_10e130f5;
L_10e130cf:;
  /* 10e130cf push 0x10e395f4 */
  push32((uint32_t)(0x10e395f4u));
  /* 10e130d4 push 0x10e39430 */
  push32((uint32_t)(0x10e39430u));
  /* 10e130d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e130db push 0 */
  push32((uint32_t)(0x0u));
  /* 10e130dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e130df push 0 */
  push32((uint32_t)(0x0u));
  /* 10e130e1 call 0x10e11bc0 */
  push32(0x10e130e6u); f_10e11bc0();
  /* 10e130e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e130e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e130ec jne 0x10e130ef */
  if (!C.zf) goto L_10e130ef;
  /* 10e130ee int3  */
  x86_unimpl("int3 @ 0x10e130ee");
L_10e130ef:;
  /* 10e130ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e130f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e130f3 jne 0x10e130cf */
  if (!C.zf) goto L_10e130cf;
L_10e130f5:;
  /* 10e130f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e130f7 jmp 0x10e134da */
  goto L_10e134da;
L_10e130fc:;
  /* 10e130fc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13100 jbe 0x10e1312e */
  if ((C.cf||C.zf)) goto L_10e1312e;
L_10e13102:;
  /* 10e13102 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e13105 push edx */
  push32((uint32_t)(EDX));
  /* 10e13106 push 0x10e395c4 */
  push32((uint32_t)(0x10e395c4u));
  /* 10e1310b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1310d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1310f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13111 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e13113 call 0x10e11bc0 */
  push32(0x10e13118u); f_10e11bc0();
  /* 10e13118 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1311b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1311e jne 0x10e13121 */
  if (!C.zf) goto L_10e13121;
  /* 10e13120 int3  */
  x86_unimpl("int3 @ 0x10e13120");
L_10e13121:;
  /* 10e13121 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e13123 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e13125 jne 0x10e13102 */
  if (!C.zf) goto L_10e13102;
  /* 10e13127 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e13129 jmp 0x10e134da */
  goto L_10e134da;
L_10e1312e:;
  /* 10e1312e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13132 je 0x10e13176 */
  if (C.zf) goto L_10e13176;
  /* 10e13134 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e13137 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1313d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13140 je 0x10e13176 */
  if (C.zf) goto L_10e13176;
  /* 10e13142 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e13145 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1314b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1314e je 0x10e13176 */
  if (C.zf) goto L_10e13176;
L_10e13150:;
  /* 10e13150 push 0x10e393d8 */
  push32((uint32_t)(0x10e393d8u));
  /* 10e13155 push 0x10e39430 */
  push32((uint32_t)(0x10e39430u));
  /* 10e1315a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1315c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1315e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13160 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e13162 call 0x10e11bc0 */
  push32(0x10e13167u); f_10e11bc0();
  /* 10e13167 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1316a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1316d jne 0x10e13170 */
  if (!C.zf) goto L_10e13170;
  /* 10e1316f int3  */
  x86_unimpl("int3 @ 0x10e1316f");
L_10e13170:;
  /* 10e13170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e13172 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e13174 jne 0x10e13150 */
  if (!C.zf) goto L_10e13150;
L_10e13176:;
  /* 10e13176 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e13179 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1317a call 0x10e14100 */
  push32(0x10e1317fu); f_10e14100();
  /* 10e1317f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e13184 jne 0x10e131a7 */
  if (!C.zf) goto L_10e131a7;
  /* 10e13186 push 0x10e395a0 */
  push32((uint32_t)(0x10e395a0u));
  /* 10e1318b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1318d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10e13192 push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e13197 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e13199 call 0x10e11bc0 */
  push32(0x10e1319eu); f_10e11bc0();
  /* 10e1319e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e131a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e131a4 jne 0x10e131a7 */
  if (!C.zf) goto L_10e131a7;
  /* 10e131a6 int3  */
  x86_unimpl("int3 @ 0x10e131a6");
L_10e131a7:;
  /* 10e131a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e131a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e131ab jne 0x10e13176 */
  if (!C.zf) goto L_10e13176;
  /* 10e131ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e131b0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e131b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e131b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e131b9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e131bd jne 0x10e131c6 */
  if (!C.zf) goto L_10e131c6;
  /* 10e131bf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10e131c6:;
  /* 10e131c6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e131ca je 0x10e1320a */
  if (C.zf) goto L_10e1320a;
L_10e131cc:;
  /* 10e131cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e131cf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e131d6 jne 0x10e131e1 */
  if (!C.zf) goto L_10e131e1;
  /* 10e131d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e131db cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e131df je 0x10e13202 */
  if (C.zf) goto L_10e13202;
L_10e131e1:;
  /* 10e131e1 push 0x10e39558 */
  push32((uint32_t)(0x10e39558u));
  /* 10e131e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e131e8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10e131ed push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e131f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e131f4 call 0x10e11bc0 */
  push32(0x10e131f9u); f_10e11bc0();
  /* 10e131f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e131fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e131ff jne 0x10e13202 */
  if (!C.zf) goto L_10e13202;
  /* 10e13201 int3  */
  x86_unimpl("int3 @ 0x10e13201");
L_10e13202:;
  /* 10e13202 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e13204 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e13206 jne 0x10e131cc */
  if (!C.zf) goto L_10e131cc;
  /* 10e13208 jmp 0x10e1326e */
  goto L_10e1326e;
L_10e1320a:;
  /* 10e1320a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1320d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e13210 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e13215 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13218 jne 0x10e1322f */
  if (!C.zf) goto L_10e1322f;
  /* 10e1321a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1321d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e13223 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13226 jne 0x10e1322f */
  if (!C.zf) goto L_10e1322f;
  /* 10e13228 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10e1322f:;
  /* 10e1322f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13232 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e13235 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1323a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1323d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e13243 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13245 je 0x10e13268 */
  if (C.zf) goto L_10e13268;
  /* 10e13247 push 0x10e3951c */
  push32((uint32_t)(0x10e3951cu));
  /* 10e1324c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1324e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10e13253 push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e13258 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1325a call 0x10e11bc0 */
  push32(0x10e1325fu); f_10e11bc0();
  /* 10e1325f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13262 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13265 jne 0x10e13268 */
  if (!C.zf) goto L_10e13268;
  /* 10e13267 int3  */
  x86_unimpl("int3 @ 0x10e13267");
L_10e13268:;
  /* 10e13268 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e1326a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1326c jne 0x10e1322f */
  if (!C.zf) goto L_10e1322f;
L_10e1326e:;
  /* 10e1326e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13272 je 0x10e13299 */
  if (C.zf) goto L_10e13299;
  /* 10e13274 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e13277 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1327a push eax */
  push32((uint32_t)(EAX));
  /* 10e1327b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1327e push ecx */
  push32((uint32_t)(ECX));
  /* 10e1327f call 0x10e16a80 */
  push32(0x10e13284u); f_10e16a80();
  /* 10e13284 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13287 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e1328a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1328e jne 0x10e13297 */
  if (!C.zf) goto L_10e13297;
  /* 10e13290 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e13292 jmp 0x10e134da */
  goto L_10e134da;
L_10e13297:;
  /* 10e13297 jmp 0x10e132bc */
  goto L_10e132bc;
L_10e13299:;
  /* 10e13299 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1329c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1329f push edx */
  push32((uint32_t)(EDX));
  /* 10e132a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e132a3 push eax */
  push32((uint32_t)(EAX));
  /* 10e132a4 call 0x10e169d0 */
  push32(0x10e132a9u); f_10e169d0();
  /* 10e132a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e132ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e132af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e132b3 jne 0x10e132bc */
  if (!C.zf) goto L_10e132bc;
  /* 10e132b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e132b7 jmp 0x10e134da */
  goto L_10e134da;
L_10e132bc:;
  /* 10e132bc mov ecx, dword ptr [0x10e3ca88] */
  ECX = (r32((uint32_t)(0x10e3ca88)));
  /* 10e132c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e132c5 mov dword ptr [0x10e3ca88], ecx */
  w32((uint32_t)(0x10e3ca88), (ECX));
  /* 10e132cb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e132cf jne 0x10e13327 */
  if (!C.zf) goto L_10e13327;
  /* 10e132d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e132d4 mov eax, dword ptr [0x10e3e454] */
  EAX = (r32((uint32_t)(0x10e3e454)));
  /* 10e132d9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e132dc mov dword ptr [0x10e3e454], eax */
  w32((uint32_t)(0x10e3e454), (EAX));
  /* 10e132e1 mov ecx, dword ptr [0x10e3e454] */
  ECX = (r32((uint32_t)(0x10e3e454)));
  /* 10e132e7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e132ea mov dword ptr [0x10e3e454], ecx */
  w32((uint32_t)(0x10e3e454), (ECX));
  /* 10e132f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e132f3 mov eax, dword ptr [0x10e3e45c] */
  EAX = (r32((uint32_t)(0x10e3e45c)));
  /* 10e132f8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e132fb mov dword ptr [0x10e3e45c], eax */
  w32((uint32_t)(0x10e3e45c), (EAX));
  /* 10e13300 mov ecx, dword ptr [0x10e3e45c] */
  ECX = (r32((uint32_t)(0x10e3e45c)));
  /* 10e13306 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13309 mov dword ptr [0x10e3e45c], ecx */
  w32((uint32_t)(0x10e3e45c), (ECX));
  /* 10e1330f mov edx, dword ptr [0x10e3e45c] */
  EDX = (r32((uint32_t)(0x10e3e45c)));
  /* 10e13315 cmp edx, dword ptr [0x10e3e460] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e3e460))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1331b jbe 0x10e13327 */
  if ((C.cf||C.zf)) goto L_10e13327;
  /* 10e1331d mov eax, dword ptr [0x10e3e45c] */
  EAX = (r32((uint32_t)(0x10e3e45c)));
  /* 10e13322 mov dword ptr [0x10e3e460], eax */
  w32((uint32_t)(0x10e3e460), (EAX));
L_10e13327:;
  /* 10e13327 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1332a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1332d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e13330 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e13333 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e13336 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13339 jbe 0x10e1335f */
  if ((C.cf||C.zf)) goto L_10e1335f;
  /* 10e1333b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1333e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e13341 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e13344 push edx */
  push32((uint32_t)(EDX));
  /* 10e13345 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e13347 mov al, byte ptr [0x10e3ca92] */
  AL = (r8((uint32_t)(0x10e3ca92)));
  /* 10e1334c push eax */
  push32((uint32_t)(EAX));
  /* 10e1334d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e13350 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13353 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13356 push edx */
  push32((uint32_t)(EDX));
  /* 10e13357 call 0x10e16870 */
  push32(0x10e1335cu); f_10e16870();
  /* 10e1335c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1335f:;
  /* 10e1335f push 4 */
  push32((uint32_t)(0x4u));
  /* 10e13361 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e13363 mov al, byte ptr [0x10e3ca90] */
  AL = (r8((uint32_t)(0x10e3ca90)));
  /* 10e13368 push eax */
  push32((uint32_t)(EAX));
  /* 10e13369 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1336c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1336f push ecx */
  push32((uint32_t)(ECX));
  /* 10e13370 call 0x10e16870 */
  push32(0x10e13375u); f_10e16870();
  /* 10e13375 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13378 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1337c jne 0x10e13399 */
  if (!C.zf) goto L_10e13399;
  /* 10e1337e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e13381 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e13384 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e13387 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1338a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e1338d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10e13390 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e13393 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e13396 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10e13399:;
  /* 10e13399 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1339c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1339f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10e133a2:;
  /* 10e133a2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e133a6 jne 0x10e133d7 */
  if (!C.zf) goto L_10e133d7;
  /* 10e133a8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e133ac jne 0x10e133b6 */
  if (!C.zf) goto L_10e133b6;
  /* 10e133ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e133b1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e133b4 je 0x10e133d7 */
  if (C.zf) goto L_10e133d7;
L_10e133b6:;
  /* 10e133b6 push 0x10e394e8 */
  push32((uint32_t)(0x10e394e8u));
  /* 10e133bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e133bd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10e133c2 push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e133c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e133c9 call 0x10e11bc0 */
  push32(0x10e133ceu); f_10e11bc0();
  /* 10e133ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e133d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e133d4 jne 0x10e133d7 */
  if (!C.zf) goto L_10e133d7;
  /* 10e133d6 int3  */
  x86_unimpl("int3 @ 0x10e133d6");
L_10e133d7:;
  /* 10e133d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e133d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e133db jne 0x10e133a2 */
  if (!C.zf) goto L_10e133a2;
  /* 10e133dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e133e0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e133e3 je 0x10e133eb */
  if (C.zf) goto L_10e133eb;
  /* 10e133e5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e133e9 je 0x10e133f3 */
  if (C.zf) goto L_10e133f3;
L_10e133eb:;
  /* 10e133eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e133ee jmp 0x10e134da */
  goto L_10e134da;
L_10e133f3:;
  /* 10e133f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e133f6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e133f9 je 0x10e1340b */
  if (C.zf) goto L_10e1340b;
  /* 10e133fb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e133fe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e13400 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e13403 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e13406 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e13409 jmp 0x10e13447 */
  goto L_10e13447;
L_10e1340b:;
  /* 10e1340b mov eax, dword ptr [0x10e3e450] */
  EAX = (r32((uint32_t)(0x10e3e450)));
  /* 10e13410 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13413 je 0x10e13436 */
  if (C.zf) goto L_10e13436;
  /* 10e13415 push 0x10e394cc */
  push32((uint32_t)(0x10e394ccu));
  /* 10e1341a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1341c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10e13421 push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e13426 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e13428 call 0x10e11bc0 */
  push32(0x10e1342du); f_10e11bc0();
  /* 10e1342d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13430 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13433 jne 0x10e13436 */
  if (!C.zf) goto L_10e13436;
  /* 10e13435 int3  */
  x86_unimpl("int3 @ 0x10e13435");
L_10e13436:;
  /* 10e13436 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e13438 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1343a jne 0x10e1340b */
  if (!C.zf) goto L_10e1340b;
  /* 10e1343c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1343f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e13442 mov dword ptr [0x10e3e450], eax */
  w32((uint32_t)(0x10e3e450), (EAX));
L_10e13447:;
  /* 10e13447 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1344a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1344e je 0x10e1345f */
  if (C.zf) goto L_10e1345f;
  /* 10e13450 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e13453 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e13456 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e13459 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e1345b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e1345d jmp 0x10e1349a */
  goto L_10e1349a;
L_10e1345f:;
  /* 10e1345f mov eax, dword ptr [0x10e3e458] */
  EAX = (r32((uint32_t)(0x10e3e458)));
  /* 10e13464 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13467 je 0x10e1348a */
  if (C.zf) goto L_10e1348a;
  /* 10e13469 push 0x10e394b0 */
  push32((uint32_t)(0x10e394b0u));
  /* 10e1346e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13470 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10e13475 push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e1347a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1347c call 0x10e11bc0 */
  push32(0x10e13481u); f_10e11bc0();
  /* 10e13481 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13484 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13487 jne 0x10e1348a */
  if (!C.zf) goto L_10e1348a;
  /* 10e13489 int3  */
  x86_unimpl("int3 @ 0x10e13489");
L_10e1348a:;
  /* 10e1348a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1348c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1348e jne 0x10e1345f */
  if (!C.zf) goto L_10e1345f;
  /* 10e13490 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e13493 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e13495 mov dword ptr [0x10e3e458], eax */
  w32((uint32_t)(0x10e3e458), (EAX));
L_10e1349a:;
  /* 10e1349a cmp dword ptr [0x10e3e458], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e458))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e134a1 je 0x10e134b1 */
  if (C.zf) goto L_10e134b1;
  /* 10e134a3 mov ecx, dword ptr [0x10e3e458] */
  ECX = (r32((uint32_t)(0x10e3e458)));
  /* 10e134a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e134ac mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10e134af jmp 0x10e134b9 */
  goto L_10e134b9;
L_10e134b1:;
  /* 10e134b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e134b4 mov dword ptr [0x10e3e450], eax */
  w32((uint32_t)(0x10e3e450), (EAX));
L_10e134b9:;
  /* 10e134b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e134bc mov edx, dword ptr [0x10e3e458] */
  EDX = (r32((uint32_t)(0x10e3e458)));
  /* 10e134c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e134c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e134c7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10e134ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e134d1 mov dword ptr [0x10e3e458], ecx */
  w32((uint32_t)(0x10e3e458), (ECX));
  /* 10e134d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e134da:;
  /* 10e134da pop edi */
  EDI = (pop32());
  /* 10e134db pop esi */
  ESI = (pop32());
  /* 10e134dc pop ebx */
  EBX = (pop32());
  /* 10e134dd mov esp, ebp */
  ESP = (EBP);
  /* 10e134df pop ebp */
  EBP = (pop32());
  /* 10e134e0 ret  */
  ESPCHK(0x10e12fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034f0 @ 0x10e134f0 (27 bytes, 13 insns) */
void f_10e134f0(void) {
  FTRACE(0x10e134f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e134f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e134f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e134f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e134f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e134f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e134f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e134fc push eax */
  push32((uint32_t)(EAX));
  /* 10e134fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e13500 push ecx */
  push32((uint32_t)(ECX));
  /* 10e13501 call 0x10e13510 */
  push32(0x10e13506u); f_10e13510();
  /* 10e13506 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13509 pop ebp */
  EBP = (pop32());
  /* 10e1350a ret  */
  ESPCHK(0x10e134f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003510 @ 0x10e13510 (64 bytes, 27 insns) */
void f_10e13510(void) {
  FTRACE(0x10e13510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e13510 push ebp */
  push32((uint32_t)(EBP));
  /* 10e13511 mov ebp, esp */
  EBP = (ESP);
  /* 10e13513 push ecx */
  push32((uint32_t)(ECX));
  /* 10e13514 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e13516 call 0x10e16500 */
  push32(0x10e1351bu); f_10e16500();
  /* 10e1351b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1351e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13520 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e13523 push eax */
  push32((uint32_t)(EAX));
  /* 10e13524 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e13527 push ecx */
  push32((uint32_t)(ECX));
  /* 10e13528 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1352b push edx */
  push32((uint32_t)(EDX));
  /* 10e1352c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1352f push eax */
  push32((uint32_t)(EAX));
  /* 10e13530 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e13533 push ecx */
  push32((uint32_t)(ECX));
  /* 10e13534 call 0x10e12fd0 */
  push32(0x10e13539u); f_10e12fd0();
  /* 10e13539 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1353c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1353f push 9 */
  push32((uint32_t)(0x9u));
  /* 10e13541 call 0x10e165a0 */
  push32(0x10e13546u); f_10e165a0();
  /* 10e13546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13549 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1354c mov esp, ebp */
  ESP = (EBP);
  /* 10e1354e pop ebp */
  EBP = (pop32());
  /* 10e1354f ret  */
  ESPCHK(0x10e13510u, _esp0);
  ESP += 4; return;
}

/* FUN_10003550 @ 0x10e13550 (19 bytes, 9 insns) */
void f_10e13550(void) {
  FTRACE(0x10e13550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e13550 push ebp */
  push32((uint32_t)(EBP));
  /* 10e13551 mov ebp, esp */
  EBP = (ESP);
  /* 10e13553 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e13555 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e13558 push eax */
  push32((uint32_t)(EAX));
  /* 10e13559 call 0x10e13590 */
  push32(0x10e1355eu); f_10e13590();
  /* 10e1355e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13561 pop ebp */
  EBP = (pop32());
  /* 10e13562 ret  */
  ESPCHK(0x10e13550u, _esp0);
  ESP += 4; return;
}

/* FUN_10003570 @ 0x10e13570 (19 bytes, 9 insns) */
void f_10e13570(void) {
  FTRACE(0x10e13570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e13570 push ebp */
  push32((uint32_t)(EBP));
  /* 10e13571 mov ebp, esp */
  EBP = (ESP);
  /* 10e13573 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e13575 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e13578 push eax */
  push32((uint32_t)(EAX));
  /* 10e13579 call 0x10e135c0 */
  push32(0x10e1357eu); f_10e135c0();
  /* 10e1357e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13581 pop ebp */
  EBP = (pop32());
  /* 10e13582 ret  */
  ESPCHK(0x10e13570u, _esp0);
  ESP += 4; return;
}

/* FUN_10003590 @ 0x10e13590 (41 bytes, 16 insns) */
void f_10e13590(void) {
  FTRACE(0x10e13590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e13590 push ebp */
  push32((uint32_t)(EBP));
  /* 10e13591 mov ebp, esp */
  EBP = (ESP);
  /* 10e13593 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e13595 call 0x10e16500 */
  push32(0x10e1359au); f_10e16500();
  /* 10e1359a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1359d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e135a0 push eax */
  push32((uint32_t)(EAX));
  /* 10e135a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e135a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e135a5 call 0x10e135c0 */
  push32(0x10e135aau); f_10e135c0();
  /* 10e135aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e135ad push 9 */
  push32((uint32_t)(0x9u));
  /* 10e135af call 0x10e165a0 */
  push32(0x10e135b4u); f_10e165a0();
  /* 10e135b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e135b7 pop ebp */
  EBP = (pop32());
  /* 10e135b8 ret  */
  ESPCHK(0x10e13590u, _esp0);
  ESP += 4; return;
}

/* FUN_100035c0 @ 0x10e135c0 (1004 bytes, 342 insns) */
void f_10e135c0(void) {
  FTRACE(0x10e135c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e135c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e135c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e135c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e135c4 push ebx */
  push32((uint32_t)(EBX));
  /* 10e135c5 push esi */
  push32((uint32_t)(ESI));
  /* 10e135c6 push edi */
  push32((uint32_t)(EDI));
  /* 10e135c7 mov eax, dword ptr [0x10e3ca84] */
  EAX = (r32((uint32_t)(0x10e3ca84)));
  /* 10e135cc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e135cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e135d1 je 0x10e13603 */
  if (C.zf) goto L_10e13603;
L_10e135d3:;
  /* 10e135d3 call 0x10e13ca0 */
  push32(0x10e135d8u); f_10e13ca0();
  /* 10e135d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e135da jne 0x10e135fd */
  if (!C.zf) goto L_10e135fd;
  /* 10e135dc push 0x10e3949c */
  push32((uint32_t)(0x10e3949cu));
  /* 10e135e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e135e3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10e135e8 push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e135ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10e135ef call 0x10e11bc0 */
  push32(0x10e135f4u); f_10e11bc0();
  /* 10e135f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e135f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e135fa jne 0x10e135fd */
  if (!C.zf) goto L_10e135fd;
  /* 10e135fc int3  */
  x86_unimpl("int3 @ 0x10e135fc");
L_10e135fd:;
  /* 10e135fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e135ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e13601 jne 0x10e135d3 */
  if (!C.zf) goto L_10e135d3;
L_10e13603:;
  /* 10e13603 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13607 jne 0x10e1360e */
  if (!C.zf) goto L_10e1360e;
  /* 10e13609 jmp 0x10e139a5 */
  goto L_10e139a5;
L_10e1360e:;
  /* 10e1360e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13610 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13612 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13614 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e13617 push edx */
  push32((uint32_t)(EDX));
  /* 10e13618 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1361a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1361d push eax */
  push32((uint32_t)(EAX));
  /* 10e1361e push 3 */
  push32((uint32_t)(0x3u));
  /* 10e13620 call dword ptr [0x10e3cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3cc90))), 0x10e13626u);
  /* 10e13626 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1362b jne 0x10e13658 */
  if (!C.zf) goto L_10e13658;
L_10e1362d:;
  /* 10e1362d push 0x10e39760 */
  push32((uint32_t)(0x10e39760u));
  /* 10e13632 push 0x10e39430 */
  push32((uint32_t)(0x10e39430u));
  /* 10e13637 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13639 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1363b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1363d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1363f call 0x10e11bc0 */
  push32(0x10e13644u); f_10e11bc0();
  /* 10e13644 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13647 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1364a jne 0x10e1364d */
  if (!C.zf) goto L_10e1364d;
  /* 10e1364c int3  */
  x86_unimpl("int3 @ 0x10e1364c");
L_10e1364d:;
  /* 10e1364d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1364f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e13651 jne 0x10e1362d */
  if (!C.zf) goto L_10e1362d;
  /* 10e13653 jmp 0x10e139a5 */
  goto L_10e139a5;
L_10e13658:;
  /* 10e13658 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1365b push edx */
  push32((uint32_t)(EDX));
  /* 10e1365c call 0x10e14100 */
  push32(0x10e13661u); f_10e14100();
  /* 10e13661 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13664 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e13666 jne 0x10e13689 */
  if (!C.zf) goto L_10e13689;
  /* 10e13668 push 0x10e395a0 */
  push32((uint32_t)(0x10e395a0u));
  /* 10e1366d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1366f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10e13674 push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e13679 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1367b call 0x10e11bc0 */
  push32(0x10e13680u); f_10e11bc0();
  /* 10e13680 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13683 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13686 jne 0x10e13689 */
  if (!C.zf) goto L_10e13689;
  /* 10e13688 int3  */
  x86_unimpl("int3 @ 0x10e13688");
L_10e13689:;
  /* 10e13689 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1368b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1368d jne 0x10e13658 */
  if (!C.zf) goto L_10e13658;
  /* 10e1368f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e13692 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e13695 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e13698:;
  /* 10e13698 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1369b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e1369e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e136a3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e136a6 je 0x10e136eb */
  if (C.zf) goto L_10e136eb;
  /* 10e136a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e136ab cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e136af je 0x10e136eb */
  if (C.zf) goto L_10e136eb;
  /* 10e136b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e136b4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e136b7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e136bc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e136bf je 0x10e136eb */
  if (C.zf) goto L_10e136eb;
  /* 10e136c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e136c4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e136c8 je 0x10e136eb */
  if (C.zf) goto L_10e136eb;
  /* 10e136ca push 0x10e39738 */
  push32((uint32_t)(0x10e39738u));
  /* 10e136cf push 0 */
  push32((uint32_t)(0x0u));
  /* 10e136d1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10e136d6 push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e136db push 2 */
  push32((uint32_t)(0x2u));
  /* 10e136dd call 0x10e11bc0 */
  push32(0x10e136e2u); f_10e11bc0();
  /* 10e136e2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e136e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e136e8 jne 0x10e136eb */
  if (!C.zf) goto L_10e136eb;
  /* 10e136ea int3  */
  x86_unimpl("int3 @ 0x10e136ea");
L_10e136eb:;
  /* 10e136eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e136ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e136ef jne 0x10e13698 */
  if (!C.zf) goto L_10e13698;
  /* 10e136f1 mov eax, dword ptr [0x10e3ca84] */
  EAX = (r32((uint32_t)(0x10e3ca84)));
  /* 10e136f6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e136f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e136fb jne 0x10e137c6 */
  if (!C.zf) goto L_10e137c6;
  /* 10e13701 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e13703 mov cl, byte ptr [0x10e3ca90] */
  CL = (r8((uint32_t)(0x10e3ca90)));
  /* 10e13709 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1370a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1370d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13710 push edx */
  push32((uint32_t)(EDX));
  /* 10e13711 call 0x10e13c10 */
  push32(0x10e13716u); f_10e13c10();
  /* 10e13716 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1371b jne 0x10e13760 */
  if (!C.zf) goto L_10e13760;
L_10e1371d:;
  /* 10e1371d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13720 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13723 push eax */
  push32((uint32_t)(EAX));
  /* 10e13724 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13727 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e1372a push edx */
  push32((uint32_t)(EDX));
  /* 10e1372b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1372e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e13731 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e13737 mov edx, dword ptr [ecx*4 + 0x10e3ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e3ca94)));
  /* 10e1373e push edx */
  push32((uint32_t)(EDX));
  /* 10e1373f push 0x10e3970c */
  push32((uint32_t)(0x10e3970cu));
  /* 10e13744 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13746 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13748 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1374a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1374c call 0x10e11bc0 */
  push32(0x10e13751u); f_10e11bc0();
  /* 10e13751 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13754 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13757 jne 0x10e1375a */
  if (!C.zf) goto L_10e1375a;
  /* 10e13759 int3  */
  x86_unimpl("int3 @ 0x10e13759");
L_10e1375a:;
  /* 10e1375a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1375c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1375e jne 0x10e1371d */
  if (!C.zf) goto L_10e1371d;
L_10e13760:;
  /* 10e13760 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e13762 mov cl, byte ptr [0x10e3ca90] */
  CL = (r8((uint32_t)(0x10e3ca90)));
  /* 10e13768 push ecx */
  push32((uint32_t)(ECX));
  /* 10e13769 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1376c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e1376f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13772 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10e13776 push edx */
  push32((uint32_t)(EDX));
  /* 10e13777 call 0x10e13c10 */
  push32(0x10e1377cu); f_10e13c10();
  /* 10e1377c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1377f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e13781 jne 0x10e137c6 */
  if (!C.zf) goto L_10e137c6;
L_10e13783:;
  /* 10e13783 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13786 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13789 push eax */
  push32((uint32_t)(EAX));
  /* 10e1378a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1378d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e13790 push edx */
  push32((uint32_t)(EDX));
  /* 10e13791 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13794 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e13797 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1379d mov edx, dword ptr [ecx*4 + 0x10e3ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e3ca94)));
  /* 10e137a4 push edx */
  push32((uint32_t)(EDX));
  /* 10e137a5 push 0x10e396e0 */
  push32((uint32_t)(0x10e396e0u));
  /* 10e137aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10e137ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10e137ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10e137b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e137b2 call 0x10e11bc0 */
  push32(0x10e137b7u); f_10e11bc0();
  /* 10e137b7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e137ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e137bd jne 0x10e137c0 */
  if (!C.zf) goto L_10e137c0;
  /* 10e137bf int3  */
  x86_unimpl("int3 @ 0x10e137bf");
L_10e137c0:;
  /* 10e137c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e137c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e137c4 jne 0x10e13783 */
  if (!C.zf) goto L_10e13783;
L_10e137c6:;
  /* 10e137c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e137c9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e137cd jne 0x10e1383b */
  if (!C.zf) goto L_10e1383b;
L_10e137cf:;
  /* 10e137cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e137d2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e137d9 jne 0x10e137e4 */
  if (!C.zf) goto L_10e137e4;
  /* 10e137db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e137de cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e137e2 je 0x10e13805 */
  if (C.zf) goto L_10e13805;
L_10e137e4:;
  /* 10e137e4 push 0x10e396a0 */
  push32((uint32_t)(0x10e396a0u));
  /* 10e137e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e137eb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10e137f0 push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e137f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e137f7 call 0x10e11bc0 */
  push32(0x10e137fcu); f_10e11bc0();
  /* 10e137fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e137ff cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13802 jne 0x10e13805 */
  if (!C.zf) goto L_10e13805;
  /* 10e13804 int3  */
  x86_unimpl("int3 @ 0x10e13804");
L_10e13805:;
  /* 10e13805 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e13807 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e13809 jne 0x10e137cf */
  if (!C.zf) goto L_10e137cf;
  /* 10e1380b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1380e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e13811 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13814 push eax */
  push32((uint32_t)(EAX));
  /* 10e13815 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e13817 mov cl, byte ptr [0x10e3ca91] */
  CL = (r8((uint32_t)(0x10e3ca91)));
  /* 10e1381d push ecx */
  push32((uint32_t)(ECX));
  /* 10e1381e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13821 push edx */
  push32((uint32_t)(EDX));
  /* 10e13822 call 0x10e16870 */
  push32(0x10e13827u); f_10e16870();
  /* 10e13827 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1382a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1382d push eax */
  push32((uint32_t)(EAX));
  /* 10e1382e call 0x10e16c70 */
  push32(0x10e13833u); f_10e16c70();
  /* 10e13833 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13836 jmp 0x10e139a5 */
  goto L_10e139a5;
L_10e1383b:;
  /* 10e1383b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1383e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13842 jne 0x10e13851 */
  if (!C.zf) goto L_10e13851;
  /* 10e13844 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13848 jne 0x10e13851 */
  if (!C.zf) goto L_10e13851;
  /* 10e1384a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10e13851:;
  /* 10e13851 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13854 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e13857 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1385a je 0x10e1387d */
  if (C.zf) goto L_10e1387d;
  /* 10e1385c push 0x10e39680 */
  push32((uint32_t)(0x10e39680u));
  /* 10e13861 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13863 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10e13868 push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e1386d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1386f call 0x10e11bc0 */
  push32(0x10e13874u); f_10e11bc0();
  /* 10e13874 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13877 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1387a jne 0x10e1387d */
  if (!C.zf) goto L_10e1387d;
  /* 10e1387c int3  */
  x86_unimpl("int3 @ 0x10e1387c");
L_10e1387d:;
  /* 10e1387d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1387f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e13881 jne 0x10e13851 */
  if (!C.zf) goto L_10e13851;
  /* 10e13883 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13886 mov eax, dword ptr [0x10e3e45c] */
  EAX = (r32((uint32_t)(0x10e3e45c)));
  /* 10e1388b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1388e mov dword ptr [0x10e3e45c], eax */
  w32((uint32_t)(0x10e3e45c), (EAX));
  /* 10e13893 mov ecx, dword ptr [0x10e3ca84] */
  ECX = (r32((uint32_t)(0x10e3ca84)));
  /* 10e13899 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1389c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1389e jne 0x10e1397c */
  if (!C.zf) goto L_10e1397c;
  /* 10e138a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e138a7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e138aa je 0x10e138bc */
  if (C.zf) goto L_10e138bc;
  /* 10e138ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e138af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e138b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e138b4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e138b7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10e138ba jmp 0x10e138fa */
  goto L_10e138fa;
L_10e138bc:;
  /* 10e138bc mov ecx, dword ptr [0x10e3e450] */
  ECX = (r32((uint32_t)(0x10e3e450)));
  /* 10e138c2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e138c5 je 0x10e138e8 */
  if (C.zf) goto L_10e138e8;
  /* 10e138c7 push 0x10e39668 */
  push32((uint32_t)(0x10e39668u));
  /* 10e138cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10e138ce push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10e138d3 push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e138d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e138da call 0x10e11bc0 */
  push32(0x10e138dfu); f_10e11bc0();
  /* 10e138df add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e138e2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e138e5 jne 0x10e138e8 */
  if (!C.zf) goto L_10e138e8;
  /* 10e138e7 int3  */
  x86_unimpl("int3 @ 0x10e138e7");
L_10e138e8:;
  /* 10e138e8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e138ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e138ec jne 0x10e138bc */
  if (!C.zf) goto L_10e138bc;
  /* 10e138ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e138f1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e138f4 mov dword ptr [0x10e3e450], ecx */
  w32((uint32_t)(0x10e3e450), (ECX));
L_10e138fa:;
  /* 10e138fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e138fd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13901 je 0x10e13912 */
  if (C.zf) goto L_10e13912;
  /* 10e13903 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13906 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e13909 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1390c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e1390e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e13910 jmp 0x10e1394f */
  goto L_10e1394f;
L_10e13912:;
  /* 10e13912 mov ecx, dword ptr [0x10e3e458] */
  ECX = (r32((uint32_t)(0x10e3e458)));
  /* 10e13918 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1391b je 0x10e1393e */
  if (C.zf) goto L_10e1393e;
  /* 10e1391d push 0x10e39650 */
  push32((uint32_t)(0x10e39650u));
  /* 10e13922 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13924 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10e13929 push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e1392e push 2 */
  push32((uint32_t)(0x2u));
  /* 10e13930 call 0x10e11bc0 */
  push32(0x10e13935u); f_10e11bc0();
  /* 10e13935 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13938 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1393b jne 0x10e1393e */
  if (!C.zf) goto L_10e1393e;
  /* 10e1393d int3  */
  x86_unimpl("int3 @ 0x10e1393d");
L_10e1393e:;
  /* 10e1393e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e13940 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e13942 jne 0x10e13912 */
  if (!C.zf) goto L_10e13912;
  /* 10e13944 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13947 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e13949 mov dword ptr [0x10e3e458], ecx */
  w32((uint32_t)(0x10e3e458), (ECX));
L_10e1394f:;
  /* 10e1394f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13952 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e13955 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13958 push eax */
  push32((uint32_t)(EAX));
  /* 10e13959 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1395b mov cl, byte ptr [0x10e3ca91] */
  CL = (r8((uint32_t)(0x10e3ca91)));
  /* 10e13961 push ecx */
  push32((uint32_t)(ECX));
  /* 10e13962 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13965 push edx */
  push32((uint32_t)(EDX));
  /* 10e13966 call 0x10e16870 */
  push32(0x10e1396bu); f_10e16870();
  /* 10e1396b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1396e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13971 push eax */
  push32((uint32_t)(EAX));
  /* 10e13972 call 0x10e16c70 */
  push32(0x10e13977u); f_10e16c70();
  /* 10e13977 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1397a jmp 0x10e139a5 */
  goto L_10e139a5;
L_10e1397c:;
  /* 10e1397c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1397f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10e13986 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13989 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e1398c push eax */
  push32((uint32_t)(EAX));
  /* 10e1398d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1398f mov cl, byte ptr [0x10e3ca91] */
  CL = (r8((uint32_t)(0x10e3ca91)));
  /* 10e13995 push ecx */
  push32((uint32_t)(ECX));
  /* 10e13996 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13999 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1399c push edx */
  push32((uint32_t)(EDX));
  /* 10e1399d call 0x10e16870 */
  push32(0x10e139a2u); f_10e16870();
  /* 10e139a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e139a5:;
  /* 10e139a5 pop edi */
  EDI = (pop32());
  /* 10e139a6 pop esi */
  ESI = (pop32());
  /* 10e139a7 pop ebx */
  EBX = (pop32());
  /* 10e139a8 mov esp, ebp */
  ESP = (EBP);
  /* 10e139aa pop ebp */
  EBP = (pop32());
  /* 10e139ab ret  */
  ESPCHK(0x10e135c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100039b0 @ 0x10e139b0 (19 bytes, 9 insns) */
void f_10e139b0(void) {
  FTRACE(0x10e139b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e139b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e139b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e139b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e139b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e139b8 push eax */
  push32((uint32_t)(EAX));
  /* 10e139b9 call 0x10e139d0 */
  push32(0x10e139beu); f_10e139d0();
  /* 10e139be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e139c1 pop ebp */
  EBP = (pop32());
  /* 10e139c2 ret  */
  ESPCHK(0x10e139b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100039d0 @ 0x10e139d0 (342 bytes, 119 insns) */
void f_10e139d0(void) {
  FTRACE(0x10e139d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e139d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e139d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e139d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e139d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e139d7 push esi */
  push32((uint32_t)(ESI));
  /* 10e139d8 push edi */
  push32((uint32_t)(EDI));
  /* 10e139d9 mov eax, dword ptr [0x10e3ca84] */
  EAX = (r32((uint32_t)(0x10e3ca84)));
  /* 10e139de and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e139e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e139e3 je 0x10e13a15 */
  if (C.zf) goto L_10e13a15;
L_10e139e5:;
  /* 10e139e5 call 0x10e13ca0 */
  push32(0x10e139eau); f_10e13ca0();
  /* 10e139ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e139ec jne 0x10e13a0f */
  if (!C.zf) goto L_10e13a0f;
  /* 10e139ee push 0x10e3949c */
  push32((uint32_t)(0x10e3949cu));
  /* 10e139f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e139f5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10e139fa push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e139ff push 2 */
  push32((uint32_t)(0x2u));
  /* 10e13a01 call 0x10e11bc0 */
  push32(0x10e13a06u); f_10e11bc0();
  /* 10e13a06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13a09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13a0c jne 0x10e13a0f */
  if (!C.zf) goto L_10e13a0f;
  /* 10e13a0e int3  */
  x86_unimpl("int3 @ 0x10e13a0e");
L_10e13a0f:;
  /* 10e13a0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e13a11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e13a13 jne 0x10e139e5 */
  if (!C.zf) goto L_10e139e5;
L_10e13a15:;
  /* 10e13a15 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e13a17 call 0x10e16500 */
  push32(0x10e13a1cu); f_10e16500();
  /* 10e13a1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e13a1f:;
  /* 10e13a1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e13a22 push edx */
  push32((uint32_t)(EDX));
  /* 10e13a23 call 0x10e14100 */
  push32(0x10e13a28u); f_10e14100();
  /* 10e13a28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13a2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e13a2d jne 0x10e13a50 */
  if (!C.zf) goto L_10e13a50;
  /* 10e13a2f push 0x10e395a0 */
  push32((uint32_t)(0x10e395a0u));
  /* 10e13a34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13a36 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10e13a3b push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e13a40 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e13a42 call 0x10e11bc0 */
  push32(0x10e13a47u); f_10e11bc0();
  /* 10e13a47 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13a4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13a4d jne 0x10e13a50 */
  if (!C.zf) goto L_10e13a50;
  /* 10e13a4f int3  */
  x86_unimpl("int3 @ 0x10e13a4f");
L_10e13a50:;
  /* 10e13a50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e13a52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e13a54 jne 0x10e13a1f */
  if (!C.zf) goto L_10e13a1f;
  /* 10e13a56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e13a59 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e13a5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e13a5f:;
  /* 10e13a5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13a62 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e13a65 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e13a6a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13a6d je 0x10e13ab2 */
  if (C.zf) goto L_10e13ab2;
  /* 10e13a6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13a72 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13a76 je 0x10e13ab2 */
  if (C.zf) goto L_10e13ab2;
  /* 10e13a78 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13a7b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e13a7e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e13a83 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13a86 je 0x10e13ab2 */
  if (C.zf) goto L_10e13ab2;
  /* 10e13a88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13a8b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13a8f je 0x10e13ab2 */
  if (C.zf) goto L_10e13ab2;
  /* 10e13a91 push 0x10e39738 */
  push32((uint32_t)(0x10e39738u));
  /* 10e13a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13a98 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10e13a9d push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e13aa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e13aa4 call 0x10e11bc0 */
  push32(0x10e13aa9u); f_10e11bc0();
  /* 10e13aa9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13aac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13aaf jne 0x10e13ab2 */
  if (!C.zf) goto L_10e13ab2;
  /* 10e13ab1 int3  */
  x86_unimpl("int3 @ 0x10e13ab1");
L_10e13ab2:;
  /* 10e13ab2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e13ab4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e13ab6 jne 0x10e13a5f */
  if (!C.zf) goto L_10e13a5f;
  /* 10e13ab8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13abb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13abf jne 0x10e13ace */
  if (!C.zf) goto L_10e13ace;
  /* 10e13ac1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13ac5 jne 0x10e13ace */
  if (!C.zf) goto L_10e13ace;
  /* 10e13ac7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10e13ace:;
  /* 10e13ace mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13ad1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13ad5 je 0x10e13b09 */
  if (C.zf) goto L_10e13b09;
L_10e13ad7:;
  /* 10e13ad7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13ada mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e13add cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13ae0 je 0x10e13b03 */
  if (C.zf) goto L_10e13b03;
  /* 10e13ae2 push 0x10e39680 */
  push32((uint32_t)(0x10e39680u));
  /* 10e13ae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13ae9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10e13aee push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e13af3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e13af5 call 0x10e11bc0 */
  push32(0x10e13afau); f_10e11bc0();
  /* 10e13afa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13afd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13b00 jne 0x10e13b03 */
  if (!C.zf) goto L_10e13b03;
  /* 10e13b02 int3  */
  x86_unimpl("int3 @ 0x10e13b02");
L_10e13b03:;
  /* 10e13b03 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e13b05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e13b07 jne 0x10e13ad7 */
  if (!C.zf) goto L_10e13ad7;
L_10e13b09:;
  /* 10e13b09 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13b0c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e13b0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e13b12 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e13b14 call 0x10e165a0 */
  push32(0x10e13b19u); f_10e165a0();
  /* 10e13b19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13b1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13b1f pop edi */
  EDI = (pop32());
  /* 10e13b20 pop esi */
  ESI = (pop32());
  /* 10e13b21 pop ebx */
  EBX = (pop32());
  /* 10e13b22 mov esp, ebp */
  ESP = (EBP);
  /* 10e13b24 pop ebp */
  EBP = (pop32());
  /* 10e13b25 ret  */
  ESPCHK(0x10e139d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b30 @ 0x10e13b30 (28 bytes, 11 insns) */
void f_10e13b30(void) {
  FTRACE(0x10e13b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e13b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10e13b31 mov ebp, esp */
  EBP = (ESP);
  /* 10e13b33 push ecx */
  push32((uint32_t)(ECX));
  /* 10e13b34 mov eax, dword ptr [0x10e3ca8c] */
  EAX = (r32((uint32_t)(0x10e3ca8c)));
  /* 10e13b39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e13b3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e13b3f mov dword ptr [0x10e3ca8c], ecx */
  w32((uint32_t)(0x10e3ca8c), (ECX));
  /* 10e13b45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13b48 mov esp, ebp */
  ESP = (EBP);
  /* 10e13b4a pop ebp */
  EBP = (pop32());
  /* 10e13b4b ret  */
  ESPCHK(0x10e13b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b50 @ 0x10e13b50 (157 bytes, 59 insns) */
void f_10e13b50(void) {
  FTRACE(0x10e13b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e13b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10e13b51 mov ebp, esp */
  EBP = (ESP);
  /* 10e13b53 push ecx */
  push32((uint32_t)(ECX));
  /* 10e13b54 push ebx */
  push32((uint32_t)(EBX));
  /* 10e13b55 push esi */
  push32((uint32_t)(ESI));
  /* 10e13b56 push edi */
  push32((uint32_t)(EDI));
  /* 10e13b57 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e13b59 call 0x10e16500 */
  push32(0x10e13b5eu); f_10e16500();
  /* 10e13b5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13b61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e13b64 push eax */
  push32((uint32_t)(EAX));
  /* 10e13b65 call 0x10e14100 */
  push32(0x10e13b6au); f_10e14100();
  /* 10e13b6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13b6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e13b6f je 0x10e13bdc */
  if (C.zf) goto L_10e13bdc;
  /* 10e13b71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e13b74 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e13b77 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e13b7a:;
  /* 10e13b7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13b7d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e13b80 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e13b85 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13b88 je 0x10e13bcd */
  if (C.zf) goto L_10e13bcd;
  /* 10e13b8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13b8d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13b91 je 0x10e13bcd */
  if (C.zf) goto L_10e13bcd;
  /* 10e13b93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13b96 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e13b99 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e13b9e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13ba1 je 0x10e13bcd */
  if (C.zf) goto L_10e13bcd;
  /* 10e13ba3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13ba6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13baa je 0x10e13bcd */
  if (C.zf) goto L_10e13bcd;
  /* 10e13bac push 0x10e39738 */
  push32((uint32_t)(0x10e39738u));
  /* 10e13bb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13bb3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10e13bb8 push 0x10e39490 */
  push32((uint32_t)(0x10e39490u));
  /* 10e13bbd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e13bbf call 0x10e11bc0 */
  push32(0x10e13bc4u); f_10e11bc0();
  /* 10e13bc4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13bc7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13bca jne 0x10e13bcd */
  if (!C.zf) goto L_10e13bcd;
  /* 10e13bcc int3  */
  x86_unimpl("int3 @ 0x10e13bcc");
L_10e13bcd:;
  /* 10e13bcd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e13bcf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e13bd1 jne 0x10e13b7a */
  if (!C.zf) goto L_10e13b7a;
  /* 10e13bd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13bd6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e13bd9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10e13bdc:;
  /* 10e13bdc push 9 */
  push32((uint32_t)(0x9u));
  /* 10e13bde call 0x10e165a0 */
  push32(0x10e13be3u); f_10e165a0();
  /* 10e13be3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13be6 pop edi */
  EDI = (pop32());
  /* 10e13be7 pop esi */
  ESI = (pop32());
  /* 10e13be8 pop ebx */
  EBX = (pop32());
  /* 10e13be9 mov esp, ebp */
  ESP = (EBP);
  /* 10e13beb pop ebp */
  EBP = (pop32());
  /* 10e13bec ret  */
  ESPCHK(0x10e13b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bf0 @ 0x10e13bf0 (28 bytes, 11 insns) */
void f_10e13bf0(void) {
  FTRACE(0x10e13bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e13bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e13bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10e13bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e13bf4 mov eax, dword ptr [0x10e3cc90] */
  EAX = (r32((uint32_t)(0x10e3cc90)));
  /* 10e13bf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e13bfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e13bff mov dword ptr [0x10e3cc90], ecx */
  w32((uint32_t)(0x10e3cc90), (ECX));
  /* 10e13c05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13c08 mov esp, ebp */
  ESP = (EBP);
  /* 10e13c0a pop ebp */
  EBP = (pop32());
  /* 10e13c0b ret  */
  ESPCHK(0x10e13bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c10 @ 0x10e13c10 (136 bytes, 55 insns) */
void f_10e13c10(void) {
  FTRACE(0x10e13c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e13c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10e13c11 mov ebp, esp */
  EBP = (ESP);
  /* 10e13c13 push ecx */
  push32((uint32_t)(ECX));
  /* 10e13c14 push ebx */
  push32((uint32_t)(EBX));
  /* 10e13c15 push esi */
  push32((uint32_t)(ESI));
  /* 10e13c16 push edi */
  push32((uint32_t)(EDI));
  /* 10e13c17 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10e13c1e:;
  /* 10e13c1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e13c21 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e13c24 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e13c27 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10e13c2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e13c2c je 0x10e13c8e */
  if (C.zf) goto L_10e13c8e;
  /* 10e13c2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e13c31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e13c33 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e13c35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e13c38 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e13c3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e13c41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13c44 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10e13c47 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13c49 je 0x10e13c8c */
  if (C.zf) goto L_10e13c8c;
L_10e13c4b:;
  /* 10e13c4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e13c4e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e13c53 push eax */
  push32((uint32_t)(EAX));
  /* 10e13c54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e13c57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e13c59 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10e13c5c push edx */
  push32((uint32_t)(EDX));
  /* 10e13c5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e13c60 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e13c63 push eax */
  push32((uint32_t)(EAX));
  /* 10e13c64 push 0x10e3977c */
  push32((uint32_t)(0x10e3977cu));
  /* 10e13c69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13c71 call 0x10e11bc0 */
  push32(0x10e13c76u); f_10e11bc0();
  /* 10e13c76 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13c79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13c7c jne 0x10e13c7f */
  if (!C.zf) goto L_10e13c7f;
  /* 10e13c7e int3  */
  x86_unimpl("int3 @ 0x10e13c7e");
L_10e13c7f:;
  /* 10e13c7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e13c81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e13c83 jne 0x10e13c4b */
  if (!C.zf) goto L_10e13c4b;
  /* 10e13c85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e13c8c:;
  /* 10e13c8c jmp 0x10e13c1e */
  goto L_10e13c1e;
L_10e13c8e:;
  /* 10e13c8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e13c91 pop edi */
  EDI = (pop32());
  /* 10e13c92 pop esi */
  ESI = (pop32());
  /* 10e13c93 pop ebx */
  EBX = (pop32());
  /* 10e13c94 mov esp, ebp */
  ESP = (EBP);
  /* 10e13c96 pop ebp */
  EBP = (pop32());
  /* 10e13c97 ret  */
  ESPCHK(0x10e13c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ca0 @ 0x10e13ca0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10e13ca0(void) {
  FTRACE(0x10e13ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e13ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e13ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10e13ca3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e13ca6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e13ca7 push esi */
  push32((uint32_t)(ESI));
  /* 10e13ca8 push edi */
  push32((uint32_t)(EDI));
  /* 10e13ca9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e13cb0 mov eax, dword ptr [0x10e3ca84] */
  EAX = (r32((uint32_t)(0x10e3ca84)));
  /* 10e13cb5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10e13cb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e13cba jne 0x10e13cc6 */
  if (!C.zf) goto L_10e13cc6;
  /* 10e13cbc mov eax, 1 */
  EAX = (0x1u);
  /* 10e13cc1 jmp 0x10e13ff8 */
  goto L_10e13ff8;
L_10e13cc6:;
  /* 10e13cc6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e13cc8 call 0x10e16500 */
  push32(0x10e13ccdu); f_10e16500();
  /* 10e13ccd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13cd0 call 0x10e16ce0 */
  push32(0x10e13cd5u); f_10e16ce0();
  /* 10e13cd5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e13cd8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13cdc je 0x10e13de9 */
  if (C.zf) goto L_10e13de9;
  /* 10e13ce2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13ce6 je 0x10e13de9 */
  if (C.zf) goto L_10e13de9;
  /* 10e13cec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e13cef mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e13cf2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e13cf5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13cf8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e13cfb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13cff ja 0x10e13db2 */
  if ((!C.cf&&!C.zf)) goto L_10e13db2;
  /* 10e13d05 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e13d08 jmp dword ptr [eax*4 + 0x10e13fff] */
  switch (EAX) {
    case 0: goto L_10e13d8a;
    case 1: goto L_10e13d62;
    case 2: goto L_10e13d3a;
    case 3: goto L_10e13d0f;
    default: x86_unimpl("switch@0x10e13d08 out of table"); return;
  }
L_10e13d0f:;
  /* 10e13d0f push 0x10e398d0 */
  push32((uint32_t)(0x10e398d0u));
  /* 10e13d14 push 0x10e39430 */
  push32((uint32_t)(0x10e39430u));
  /* 10e13d19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13d1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13d1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13d1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13d21 call 0x10e11bc0 */
  push32(0x10e13d26u); f_10e11bc0();
  /* 10e13d26 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13d29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13d2c jne 0x10e13d2f */
  if (!C.zf) goto L_10e13d2f;
  /* 10e13d2e int3  */
  x86_unimpl("int3 @ 0x10e13d2e");
L_10e13d2f:;
  /* 10e13d2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e13d31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e13d33 jne 0x10e13d0f */
  if (!C.zf) goto L_10e13d0f;
  /* 10e13d35 jmp 0x10e13dd8 */
  goto L_10e13dd8;
L_10e13d3a:;
  /* 10e13d3a push 0x10e398ac */
  push32((uint32_t)(0x10e398acu));
  /* 10e13d3f push 0x10e39430 */
  push32((uint32_t)(0x10e39430u));
  /* 10e13d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13d48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13d4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13d4c call 0x10e11bc0 */
  push32(0x10e13d51u); f_10e11bc0();
  /* 10e13d51 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13d54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13d57 jne 0x10e13d5a */
  if (!C.zf) goto L_10e13d5a;
  /* 10e13d59 int3  */
  x86_unimpl("int3 @ 0x10e13d59");
L_10e13d5a:;
  /* 10e13d5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e13d5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e13d5e jne 0x10e13d3a */
  if (!C.zf) goto L_10e13d3a;
  /* 10e13d60 jmp 0x10e13dd8 */
  goto L_10e13dd8;
L_10e13d62:;
  /* 10e13d62 push 0x10e39888 */
  push32((uint32_t)(0x10e39888u));
  /* 10e13d67 push 0x10e39430 */
  push32((uint32_t)(0x10e39430u));
  /* 10e13d6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13d6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13d70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13d74 call 0x10e11bc0 */
  push32(0x10e13d79u); f_10e11bc0();
  /* 10e13d79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13d7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13d7f jne 0x10e13d82 */
  if (!C.zf) goto L_10e13d82;
  /* 10e13d81 int3  */
  x86_unimpl("int3 @ 0x10e13d81");
L_10e13d82:;
  /* 10e13d82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e13d84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e13d86 jne 0x10e13d62 */
  if (!C.zf) goto L_10e13d62;
  /* 10e13d88 jmp 0x10e13dd8 */
  goto L_10e13dd8;
L_10e13d8a:;
  /* 10e13d8a push 0x10e39864 */
  push32((uint32_t)(0x10e39864u));
  /* 10e13d8f push 0x10e39430 */
  push32((uint32_t)(0x10e39430u));
  /* 10e13d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13d98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13d9c call 0x10e11bc0 */
  push32(0x10e13da1u); f_10e11bc0();
  /* 10e13da1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13da4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13da7 jne 0x10e13daa */
  if (!C.zf) goto L_10e13daa;
  /* 10e13da9 int3  */
  x86_unimpl("int3 @ 0x10e13da9");
L_10e13daa:;
  /* 10e13daa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e13dac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e13dae jne 0x10e13d8a */
  if (!C.zf) goto L_10e13d8a;
  /* 10e13db0 jmp 0x10e13dd8 */
  goto L_10e13dd8;
L_10e13db2:;
  /* 10e13db2 push 0x10e39838 */
  push32((uint32_t)(0x10e39838u));
  /* 10e13db7 push 0x10e39430 */
  push32((uint32_t)(0x10e39430u));
  /* 10e13dbc push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13dc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13dc4 call 0x10e11bc0 */
  push32(0x10e13dc9u); f_10e11bc0();
  /* 10e13dc9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13dcc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13dcf jne 0x10e13dd2 */
  if (!C.zf) goto L_10e13dd2;
  /* 10e13dd1 int3  */
  x86_unimpl("int3 @ 0x10e13dd1");
L_10e13dd2:;
  /* 10e13dd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e13dd4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e13dd6 jne 0x10e13db2 */
  if (!C.zf) goto L_10e13db2;
L_10e13dd8:;
  /* 10e13dd8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e13dda call 0x10e165a0 */
  push32(0x10e13ddfu); f_10e165a0();
  /* 10e13ddf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13de2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e13de4 jmp 0x10e13ff8 */
  goto L_10e13ff8;
L_10e13de9:;
  /* 10e13de9 mov eax, dword ptr [0x10e3e458] */
  EAX = (r32((uint32_t)(0x10e3e458)));
  /* 10e13dee mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e13df1 jmp 0x10e13dfb */
  goto L_10e13dfb;
L_10e13df3:;
  /* 10e13df3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13df6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e13df8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e13dfb:;
  /* 10e13dfb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13dff je 0x10e13feb */
  if (C.zf) goto L_10e13feb;
  /* 10e13e05 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10e13e0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13e0f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e13e12 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e13e18 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13e1b je 0x10e13e40 */
  if (C.zf) goto L_10e13e40;
  /* 10e13e1d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13e20 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13e24 je 0x10e13e40 */
  if (C.zf) goto L_10e13e40;
  /* 10e13e26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13e29 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e13e2c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e13e32 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13e35 je 0x10e13e40 */
  if (C.zf) goto L_10e13e40;
  /* 10e13e37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13e3a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13e3e jne 0x10e13e58 */
  if (!C.zf) goto L_10e13e58;
L_10e13e40:;
  /* 10e13e40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13e43 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e13e46 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e13e4c mov edx, dword ptr [ecx*4 + 0x10e3ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e3ca94)));
  /* 10e13e53 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e13e56 jmp 0x10e13e5f */
  goto L_10e13e5f;
L_10e13e58:;
  /* 10e13e58 mov dword ptr [ebp - 0x14], 0x10e39830 */
  w32((uint32_t)(EBP + -0x14), (0x10e39830u));
L_10e13e5f:;
  /* 10e13e5f push 4 */
  push32((uint32_t)(0x4u));
  /* 10e13e61 mov al, byte ptr [0x10e3ca90] */
  AL = (r8((uint32_t)(0x10e3ca90)));
  /* 10e13e66 push eax */
  push32((uint32_t)(EAX));
  /* 10e13e67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13e6a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13e6d push ecx */
  push32((uint32_t)(ECX));
  /* 10e13e6e call 0x10e13c10 */
  push32(0x10e13e73u); f_10e13c10();
  /* 10e13e73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13e76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e13e78 jne 0x10e13eb4 */
  if (!C.zf) goto L_10e13eb4;
L_10e13e7a:;
  /* 10e13e7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13e7d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13e80 push edx */
  push32((uint32_t)(EDX));
  /* 10e13e81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13e84 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10e13e87 push ecx */
  push32((uint32_t)(ECX));
  /* 10e13e88 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e13e8b push edx */
  push32((uint32_t)(EDX));
  /* 10e13e8c push 0x10e3970c */
  push32((uint32_t)(0x10e3970cu));
  /* 10e13e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13e95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13e97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13e99 call 0x10e11bc0 */
  push32(0x10e13e9eu); f_10e11bc0();
  /* 10e13e9e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13ea1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13ea4 jne 0x10e13ea7 */
  if (!C.zf) goto L_10e13ea7;
  /* 10e13ea6 int3  */
  x86_unimpl("int3 @ 0x10e13ea6");
L_10e13ea7:;
  /* 10e13ea7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e13ea9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e13eab jne 0x10e13e7a */
  if (!C.zf) goto L_10e13e7a;
  /* 10e13ead mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10e13eb4:;
  /* 10e13eb4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e13eb6 mov cl, byte ptr [0x10e3ca90] */
  CL = (r8((uint32_t)(0x10e3ca90)));
  /* 10e13ebc push ecx */
  push32((uint32_t)(ECX));
  /* 10e13ebd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13ec0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e13ec3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13ec6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10e13eca push edx */
  push32((uint32_t)(EDX));
  /* 10e13ecb call 0x10e13c10 */
  push32(0x10e13ed0u); f_10e13c10();
  /* 10e13ed0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e13ed5 jne 0x10e13f11 */
  if (!C.zf) goto L_10e13f11;
L_10e13ed7:;
  /* 10e13ed7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13eda add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13edd push eax */
  push32((uint32_t)(EAX));
  /* 10e13ede mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13ee1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e13ee4 push edx */
  push32((uint32_t)(EDX));
  /* 10e13ee5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e13ee8 push eax */
  push32((uint32_t)(EAX));
  /* 10e13ee9 push 0x10e396e0 */
  push32((uint32_t)(0x10e396e0u));
  /* 10e13eee push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13ef0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13ef6 call 0x10e11bc0 */
  push32(0x10e13efbu); f_10e11bc0();
  /* 10e13efb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13efe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13f01 jne 0x10e13f04 */
  if (!C.zf) goto L_10e13f04;
  /* 10e13f03 int3  */
  x86_unimpl("int3 @ 0x10e13f03");
L_10e13f04:;
  /* 10e13f04 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e13f06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e13f08 jne 0x10e13ed7 */
  if (!C.zf) goto L_10e13ed7;
  /* 10e13f0a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10e13f11:;
  /* 10e13f11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13f14 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13f18 jne 0x10e13f6a */
  if (!C.zf) goto L_10e13f6a;
  /* 10e13f1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13f1d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e13f20 push ecx */
  push32((uint32_t)(ECX));
  /* 10e13f21 mov dl, byte ptr [0x10e3ca91] */
  DL = (r8((uint32_t)(0x10e3ca91)));
  /* 10e13f27 push edx */
  push32((uint32_t)(EDX));
  /* 10e13f28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13f2b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13f2e push eax */
  push32((uint32_t)(EAX));
  /* 10e13f2f call 0x10e13c10 */
  push32(0x10e13f34u); f_10e13c10();
  /* 10e13f34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13f37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e13f39 jne 0x10e13f6a */
  if (!C.zf) goto L_10e13f6a;
L_10e13f3b:;
  /* 10e13f3b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13f3e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13f41 push ecx */
  push32((uint32_t)(ECX));
  /* 10e13f42 push 0x10e39804 */
  push32((uint32_t)(0x10e39804u));
  /* 10e13f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13f4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13f4f call 0x10e11bc0 */
  push32(0x10e13f54u); f_10e11bc0();
  /* 10e13f54 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13f57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13f5a jne 0x10e13f5d */
  if (!C.zf) goto L_10e13f5d;
  /* 10e13f5c int3  */
  x86_unimpl("int3 @ 0x10e13f5c");
L_10e13f5d:;
  /* 10e13f5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e13f5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e13f61 jne 0x10e13f3b */
  if (!C.zf) goto L_10e13f3b;
  /* 10e13f63 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10e13f6a:;
  /* 10e13f6a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13f6e jne 0x10e13fe6 */
  if (!C.zf) goto L_10e13fe6;
  /* 10e13f70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13f73 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13f77 je 0x10e13fac */
  if (C.zf) goto L_10e13fac;
L_10e13f79:;
  /* 10e13f79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13f7c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e13f7f push edx */
  push32((uint32_t)(EDX));
  /* 10e13f80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13f83 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e13f86 push ecx */
  push32((uint32_t)(ECX));
  /* 10e13f87 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e13f8a push edx */
  push32((uint32_t)(EDX));
  /* 10e13f8b push 0x10e397e4 */
  push32((uint32_t)(0x10e397e4u));
  /* 10e13f90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13f92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13f94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13f96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13f98 call 0x10e11bc0 */
  push32(0x10e13f9du); f_10e11bc0();
  /* 10e13f9d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13fa0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13fa3 jne 0x10e13fa6 */
  if (!C.zf) goto L_10e13fa6;
  /* 10e13fa5 int3  */
  x86_unimpl("int3 @ 0x10e13fa5");
L_10e13fa6:;
  /* 10e13fa6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e13fa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e13faa jne 0x10e13f79 */
  if (!C.zf) goto L_10e13f79;
L_10e13fac:;
  /* 10e13fac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13faf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e13fb2 push edx */
  push32((uint32_t)(EDX));
  /* 10e13fb3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e13fb6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13fb9 push eax */
  push32((uint32_t)(EAX));
  /* 10e13fba mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e13fbd push ecx */
  push32((uint32_t)(ECX));
  /* 10e13fbe push 0x10e397b8 */
  push32((uint32_t)(0x10e397b8u));
  /* 10e13fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e13fcb call 0x10e11bc0 */
  push32(0x10e13fd0u); f_10e11bc0();
  /* 10e13fd0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13fd3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e13fd6 jne 0x10e13fd9 */
  if (!C.zf) goto L_10e13fd9;
  /* 10e13fd8 int3  */
  x86_unimpl("int3 @ 0x10e13fd8");
L_10e13fd9:;
  /* 10e13fd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e13fdb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e13fdd jne 0x10e13fac */
  if (!C.zf) goto L_10e13fac;
  /* 10e13fdf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e13fe6:;
  /* 10e13fe6 jmp 0x10e13df3 */
  goto L_10e13df3;
L_10e13feb:;
  /* 10e13feb push 9 */
  push32((uint32_t)(0x9u));
  /* 10e13fed call 0x10e165a0 */
  push32(0x10e13ff2u); f_10e165a0();
  /* 10e13ff2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e13ff5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e13ff8:;
  /* 10e13ff8 pop edi */
  EDI = (pop32());
  /* 10e13ff9 pop esi */
  ESI = (pop32());
  /* 10e13ffa pop ebx */
  EBX = (pop32());
  /* 10e13ffb mov esp, ebp */
  ESP = (EBP);
  /* 10e13ffd pop ebp */
  EBP = (pop32());
  /* 10e13ffe ret  */
  ESPCHK(0x10e13ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004010 @ 0x10e14010 (34 bytes, 13 insns) */
void f_10e14010(void) {
  FTRACE(0x10e14010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e14010 push ebp */
  push32((uint32_t)(EBP));
  /* 10e14011 mov ebp, esp */
  EBP = (ESP);
  /* 10e14013 push ecx */
  push32((uint32_t)(ECX));
  /* 10e14014 mov eax, dword ptr [0x10e3ca84] */
  EAX = (r32((uint32_t)(0x10e3ca84)));
  /* 10e14019 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1401c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14020 je 0x10e1402b */
  if (C.zf) goto L_10e1402b;
  /* 10e14022 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e14025 mov dword ptr [0x10e3ca84], ecx */
  w32((uint32_t)(0x10e3ca84), (ECX));
L_10e1402b:;
  /* 10e1402b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1402e mov esp, ebp */
  ESP = (EBP);
  /* 10e14030 pop ebp */
  EBP = (pop32());
  /* 10e14031 ret  */
  ESPCHK(0x10e14010u, _esp0);
  ESP += 4; return;
}

/* FUN_10004040 @ 0x10e14040 (103 bytes, 38 insns) */
void f_10e14040(void) {
  FTRACE(0x10e14040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e14040 push ebp */
  push32((uint32_t)(EBP));
  /* 10e14041 mov ebp, esp */
  EBP = (ESP);
  /* 10e14043 push ecx */
  push32((uint32_t)(ECX));
  /* 10e14044 mov eax, dword ptr [0x10e3ca84] */
  EAX = (r32((uint32_t)(0x10e3ca84)));
  /* 10e14049 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10e1404c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1404e jne 0x10e14052 */
  if (!C.zf) goto L_10e14052;
  /* 10e14050 jmp 0x10e140a3 */
  goto L_10e140a3;
L_10e14052:;
  /* 10e14052 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e14054 call 0x10e16500 */
  push32(0x10e14059u); f_10e16500();
  /* 10e14059 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1405c mov ecx, dword ptr [0x10e3e458] */
  ECX = (r32((uint32_t)(0x10e3e458)));
  /* 10e14062 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e14065 jmp 0x10e1406f */
  goto L_10e1406f;
L_10e14067:;
  /* 10e14067 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1406a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e1406c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e1406f:;
  /* 10e1406f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14073 je 0x10e14099 */
  if (C.zf) goto L_10e14099;
  /* 10e14075 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14078 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e1407b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e14081 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14084 jne 0x10e14097 */
  if (!C.zf) goto L_10e14097;
  /* 10e14086 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e14089 push eax */
  push32((uint32_t)(EAX));
  /* 10e1408a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1408d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14090 push ecx */
  push32((uint32_t)(ECX));
  /* 10e14091 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10e14094u);
  /* 10e14094 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e14097:;
  /* 10e14097 jmp 0x10e14067 */
  goto L_10e14067;
L_10e14099:;
  /* 10e14099 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e1409b call 0x10e165a0 */
  push32(0x10e140a0u); f_10e165a0();
  /* 10e140a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e140a3:;
  /* 10e140a3 mov esp, ebp */
  ESP = (EBP);
  /* 10e140a5 pop ebp */
  EBP = (pop32());
  /* 10e140a6 ret  */
  ESPCHK(0x10e14040u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10e140b0 (75 bytes, 28 insns) */
void f_10e140b0(void) {
  FTRACE(0x10e140b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e140b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e140b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e140b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e140b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e140b8 je 0x10e140ed */
  if (C.zf) goto L_10e140ed;
  /* 10e140ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e140bd push eax */
  push32((uint32_t)(EAX));
  /* 10e140be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e140c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e140c2 call dword ptr [0x10e402b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402b8))), 0x10e140c8u);
  /* 10e140c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e140ca jne 0x10e140ed */
  if (!C.zf) goto L_10e140ed;
  /* 10e140cc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e140d0 je 0x10e140e4 */
  if (C.zf) goto L_10e140e4;
  /* 10e140d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e140d5 push edx */
  push32((uint32_t)(EDX));
  /* 10e140d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e140d9 push eax */
  push32((uint32_t)(EAX));
  /* 10e140da call dword ptr [0x10e402b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402b4))), 0x10e140e0u);
  /* 10e140e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e140e2 jne 0x10e140ed */
  if (!C.zf) goto L_10e140ed;
L_10e140e4:;
  /* 10e140e4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e140eb jmp 0x10e140f4 */
  goto L_10e140f4;
L_10e140ed:;
  /* 10e140ed mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e140f4:;
  /* 10e140f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e140f7 mov esp, ebp */
  ESP = (EBP);
  /* 10e140f9 pop ebp */
  EBP = (pop32());
  /* 10e140fa ret  */
  ESPCHK(0x10e140b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004100 @ 0x10e14100 (134 bytes, 50 insns) */
void f_10e14100(void) {
  FTRACE(0x10e14100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e14100 push ebp */
  push32((uint32_t)(EBP));
  /* 10e14101 mov ebp, esp */
  EBP = (ESP);
  /* 10e14103 push ecx */
  push32((uint32_t)(ECX));
  /* 10e14104 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14108 jne 0x10e1410e */
  if (!C.zf) goto L_10e1410e;
  /* 10e1410a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1410c jmp 0x10e14182 */
  goto L_10e14182;
L_10e1410e:;
  /* 10e1410e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e14110 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10e14112 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e14115 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e14118 push eax */
  push32((uint32_t)(EAX));
  /* 10e14119 call 0x10e140b0 */
  push32(0x10e1411eu); f_10e140b0();
  /* 10e1411e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14121 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e14123 jne 0x10e14129 */
  if (!C.zf) goto L_10e14129;
  /* 10e14125 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e14127 jmp 0x10e14182 */
  goto L_10e14182;
L_10e14129:;
  /* 10e14129 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1412c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1412f push ecx */
  push32((uint32_t)(ECX));
  /* 10e14130 call 0x10e16e00 */
  push32(0x10e14135u); f_10e16e00();
  /* 10e14135 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14138 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1413b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1413f je 0x10e14156 */
  if (C.zf) goto L_10e14156;
  /* 10e14141 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e14144 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e14147 push edx */
  push32((uint32_t)(EDX));
  /* 10e14148 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1414b push eax */
  push32((uint32_t)(EAX));
  /* 10e1414c call 0x10e16e60 */
  push32(0x10e14151u); f_10e16e60();
  /* 10e14151 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14154 jmp 0x10e14182 */
  goto L_10e14182;
L_10e14156:;
  /* 10e14156 mov ecx, dword ptr [0x10e3e40c] */
  ECX = (r32((uint32_t)(0x10e3e40c)));
  /* 10e1415c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10e14162 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e14164 je 0x10e1416d */
  if (C.zf) goto L_10e1416d;
  /* 10e14166 mov eax, 1 */
  EAX = (0x1u);
  /* 10e1416b jmp 0x10e14182 */
  goto L_10e14182;
L_10e1416d:;
  /* 10e1416d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e14170 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e14173 push edx */
  push32((uint32_t)(EDX));
  /* 10e14174 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14176 mov eax, dword ptr [0x10e3fdac] */
  EAX = (r32((uint32_t)(0x10e3fdac)));
  /* 10e1417b push eax */
  push32((uint32_t)(EAX));
  /* 10e1417c call dword ptr [0x10e402bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402bc))), 0x10e14182u);
L_10e14182:;
  /* 10e14182 mov esp, ebp */
  ESP = (EBP);
  /* 10e14184 pop ebp */
  EBP = (pop32());
  /* 10e14185 ret  */
  ESPCHK(0x10e14100u, _esp0);
  ESP += 4; return;
}

/* FUN_10004190 @ 0x10e14190 (227 bytes, 80 insns) */
void f_10e14190(void) {
  FTRACE(0x10e14190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e14190 push ebp */
  push32((uint32_t)(EBP));
  /* 10e14191 mov ebp, esp */
  EBP = (ESP);
  /* 10e14193 push ecx */
  push32((uint32_t)(ECX));
  /* 10e14194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e14197 push eax */
  push32((uint32_t)(EAX));
  /* 10e14198 call 0x10e14100 */
  push32(0x10e1419du); f_10e14100();
  /* 10e1419d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e141a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e141a2 jne 0x10e141ab */
  if (!C.zf) goto L_10e141ab;
  /* 10e141a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e141a6 jmp 0x10e1426f */
  goto L_10e1426f;
L_10e141ab:;
  /* 10e141ab push 9 */
  push32((uint32_t)(0x9u));
  /* 10e141ad call 0x10e16500 */
  push32(0x10e141b2u); f_10e16500();
  /* 10e141b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e141b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e141b8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e141bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e141be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e141c1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e141c4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e141c9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e141cc je 0x10e141f0 */
  if (C.zf) goto L_10e141f0;
  /* 10e141ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e141d1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e141d5 je 0x10e141f0 */
  if (C.zf) goto L_10e141f0;
  /* 10e141d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e141da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e141dd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e141e2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e141e5 je 0x10e141f0 */
  if (C.zf) goto L_10e141f0;
  /* 10e141e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e141ea cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e141ee jne 0x10e14263 */
  if (!C.zf) goto L_10e14263;
L_10e141f0:;
  /* 10e141f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e141f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e141f5 push edx */
  push32((uint32_t)(EDX));
  /* 10e141f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e141f9 push eax */
  push32((uint32_t)(EAX));
  /* 10e141fa call 0x10e140b0 */
  push32(0x10e141ffu); f_10e140b0();
  /* 10e141ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e14204 je 0x10e14263 */
  if (C.zf) goto L_10e14263;
  /* 10e14206 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14209 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e1420c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1420f jne 0x10e14263 */
  if (!C.zf) goto L_10e14263;
  /* 10e14211 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14214 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10e14217 cmp ecx, dword ptr [0x10e3ca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3ca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1421d jg 0x10e14263 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e14263;
  /* 10e1421f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14223 je 0x10e14230 */
  if (C.zf) goto L_10e14230;
  /* 10e14225 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14228 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1422b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10e1422e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e14230:;
  /* 10e14230 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14234 je 0x10e14241 */
  if (C.zf) goto L_10e14241;
  /* 10e14236 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e14239 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1423c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e1423f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e14241:;
  /* 10e14241 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14245 je 0x10e14252 */
  if (C.zf) goto L_10e14252;
  /* 10e14247 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e1424a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1424d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e14250 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e14252:;
  /* 10e14252 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e14254 call 0x10e165a0 */
  push32(0x10e14259u); f_10e165a0();
  /* 10e14259 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1425c mov eax, 1 */
  EAX = (0x1u);
  /* 10e14261 jmp 0x10e1426f */
  goto L_10e1426f;
L_10e14263:;
  /* 10e14263 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e14265 call 0x10e165a0 */
  push32(0x10e1426au); f_10e165a0();
  /* 10e1426a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1426d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e1426f:;
  /* 10e1426f mov esp, ebp */
  ESP = (EBP);
  /* 10e14271 pop ebp */
  EBP = (pop32());
  /* 10e14272 ret  */
  ESPCHK(0x10e14190u, _esp0);
  ESP += 4; return;
}

/* FUN_10004280 @ 0x10e14280 (28 bytes, 11 insns) */
void f_10e14280(void) {
  FTRACE(0x10e14280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e14280 push ebp */
  push32((uint32_t)(EBP));
  /* 10e14281 mov ebp, esp */
  EBP = (ESP);
  /* 10e14283 push ecx */
  push32((uint32_t)(ECX));
  /* 10e14284 mov eax, dword ptr [0x10e3fdb8] */
  EAX = (r32((uint32_t)(0x10e3fdb8)));
  /* 10e14289 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1428c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1428f mov dword ptr [0x10e3fdb8], ecx */
  w32((uint32_t)(0x10e3fdb8), (ECX));
  /* 10e14295 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14298 mov esp, ebp */
  ESP = (EBP);
  /* 10e1429a pop ebp */
  EBP = (pop32());
  /* 10e1429b ret  */
  ESPCHK(0x10e14280u, _esp0);
  ESP += 4; return;
}

/* FUN_100042a0 @ 0x10e142a0 (362 bytes, 116 insns) */
void f_10e142a0(void) {
  FTRACE(0x10e142a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e142a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e142a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e142a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e142a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e142a7 push esi */
  push32((uint32_t)(ESI));
  /* 10e142a8 push edi */
  push32((uint32_t)(EDI));
  /* 10e142a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e142ad jne 0x10e142da */
  if (!C.zf) goto L_10e142da;
L_10e142af:;
  /* 10e142af push 0x10e39918 */
  push32((uint32_t)(0x10e39918u));
  /* 10e142b4 push 0x10e39430 */
  push32((uint32_t)(0x10e39430u));
  /* 10e142b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e142bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e142bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e142bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10e142c1 call 0x10e11bc0 */
  push32(0x10e142c6u); f_10e11bc0();
  /* 10e142c6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e142c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e142cc jne 0x10e142cf */
  if (!C.zf) goto L_10e142cf;
  /* 10e142ce int3  */
  x86_unimpl("int3 @ 0x10e142ce");
L_10e142cf:;
  /* 10e142cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e142d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e142d3 jne 0x10e142af */
  if (!C.zf) goto L_10e142af;
  /* 10e142d5 jmp 0x10e14403 */
  goto L_10e14403;
L_10e142da:;
  /* 10e142da push 9 */
  push32((uint32_t)(0x9u));
  /* 10e142dc call 0x10e16500 */
  push32(0x10e142e1u); f_10e16500();
  /* 10e142e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e142e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e142e7 mov edx, dword ptr [0x10e3e458] */
  EDX = (r32((uint32_t)(0x10e3e458)));
  /* 10e142ed mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e142ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e142f6 jmp 0x10e14301 */
  goto L_10e14301;
L_10e142f8:;
  /* 10e142f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e142fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e142fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e14301:;
  /* 10e14301 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14305 jge 0x10e14325 */
  if ((C.sf==C.of)) goto L_10e14325;
  /* 10e14307 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1430a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1430d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10e14315 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14318 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1431b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10e14323 jmp 0x10e142f8 */
  goto L_10e142f8;
L_10e14325:;
  /* 10e14325 mov edx, dword ptr [0x10e3e458] */
  EDX = (r32((uint32_t)(0x10e3e458)));
  /* 10e1432b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e1432e jmp 0x10e14338 */
  goto L_10e14338;
L_10e14330:;
  /* 10e14330 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e14333 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e14335 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e14338:;
  /* 10e14338 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1433c je 0x10e143e1 */
  if (C.zf) goto L_10e143e1;
  /* 10e14342 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e14345 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e14348 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1434d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1434f jl 0x10e143b7 */
  if ((C.sf!=C.of)) goto L_10e143b7;
  /* 10e14351 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e14354 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e14357 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1435d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14360 jge 0x10e143b7 */
  if ((C.sf==C.of)) goto L_10e143b7;
  /* 10e14362 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e14365 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e14368 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e1436e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e14371 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10e14375 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14378 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1437b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e1437e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e14384 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e14387 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10e1438b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1438e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e14391 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e14396 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e14399 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10e1439d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e143a0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e143a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e143a6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e143a9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e143ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e143b1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10e143b5 jmp 0x10e143dc */
  goto L_10e143dc;
L_10e143b7:;
  /* 10e143b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e143ba push edx */
  push32((uint32_t)(EDX));
  /* 10e143bb push 0x10e398f4 */
  push32((uint32_t)(0x10e398f4u));
  /* 10e143c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e143c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e143c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e143c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e143c8 call 0x10e11bc0 */
  push32(0x10e143cdu); f_10e11bc0();
  /* 10e143cd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e143d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e143d3 jne 0x10e143d6 */
  if (!C.zf) goto L_10e143d6;
  /* 10e143d5 int3  */
  x86_unimpl("int3 @ 0x10e143d5");
L_10e143d6:;
  /* 10e143d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e143d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e143da jne 0x10e143b7 */
  if (!C.zf) goto L_10e143b7;
L_10e143dc:;
  /* 10e143dc jmp 0x10e14330 */
  goto L_10e14330;
L_10e143e1:;
  /* 10e143e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e143e4 mov edx, dword ptr [0x10e3e460] */
  EDX = (r32((uint32_t)(0x10e3e460)));
  /* 10e143ea mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10e143ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e143f0 mov ecx, dword ptr [0x10e3e454] */
  ECX = (r32((uint32_t)(0x10e3e454)));
  /* 10e143f6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10e143f9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e143fb call 0x10e165a0 */
  push32(0x10e14400u); f_10e165a0();
  /* 10e14400 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e14403:;
  /* 10e14403 pop edi */
  EDI = (pop32());
  /* 10e14404 pop esi */
  ESI = (pop32());
  /* 10e14405 pop ebx */
  EBX = (pop32());
  /* 10e14406 mov esp, ebp */
  ESP = (EBP);
  /* 10e14408 pop ebp */
  EBP = (pop32());
  /* 10e14409 ret  */
  ESPCHK(0x10e142a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004410 @ 0x10e14410 (291 bytes, 95 insns) */
void f_10e14410(void) {
  FTRACE(0x10e14410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e14410 push ebp */
  push32((uint32_t)(EBP));
  /* 10e14411 mov ebp, esp */
  EBP = (ESP);
  /* 10e14413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e14416 push ebx */
  push32((uint32_t)(EBX));
  /* 10e14417 push esi */
  push32((uint32_t)(ESI));
  /* 10e14418 push edi */
  push32((uint32_t)(EDI));
  /* 10e14419 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e14420 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14424 je 0x10e14432 */
  if (C.zf) goto L_10e14432;
  /* 10e14426 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1442a je 0x10e14432 */
  if (C.zf) goto L_10e14432;
  /* 10e1442c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14430 jne 0x10e14460 */
  if (!C.zf) goto L_10e14460;
L_10e14432:;
  /* 10e14432 push 0x10e39940 */
  push32((uint32_t)(0x10e39940u));
  /* 10e14437 push 0x10e39430 */
  push32((uint32_t)(0x10e39430u));
  /* 10e1443c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1443e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14440 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14442 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14444 call 0x10e11bc0 */
  push32(0x10e14449u); f_10e11bc0();
  /* 10e14449 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1444c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1444f jne 0x10e14452 */
  if (!C.zf) goto L_10e14452;
  /* 10e14451 int3  */
  x86_unimpl("int3 @ 0x10e14451");
L_10e14452:;
  /* 10e14452 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e14454 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e14456 jne 0x10e14432 */
  if (!C.zf) goto L_10e14432;
  /* 10e14458 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1445b jmp 0x10e1452c */
  goto L_10e1452c;
L_10e14460:;
  /* 10e14460 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e14467 jmp 0x10e14472 */
  goto L_10e14472;
L_10e14469:;
  /* 10e14469 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1446c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1446f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e14472:;
  /* 10e14472 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14476 jge 0x10e144fc */
  if ((C.sf==C.of)) goto L_10e144fc;
  /* 10e1447c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1447f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14482 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14485 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e14488 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10e1448c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e14490 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14493 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e14496 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10e1449a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1449d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e144a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e144a3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e144a6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10e144aa sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e144ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e144b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e144b4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10e144b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e144bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e144be cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e144c3 jne 0x10e144d2 */
  if (!C.zf) goto L_10e144d2;
  /* 10e144c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e144c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e144cb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e144d0 je 0x10e144f7 */
  if (C.zf) goto L_10e144f7;
L_10e144d2:;
  /* 10e144d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e144d6 je 0x10e144f7 */
  if (C.zf) goto L_10e144f7;
  /* 10e144d8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e144dc jne 0x10e144f0 */
  if (!C.zf) goto L_10e144f0;
  /* 10e144de cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e144e2 jne 0x10e144f7 */
  if (!C.zf) goto L_10e144f7;
  /* 10e144e4 mov eax, dword ptr [0x10e3ca84] */
  EAX = (r32((uint32_t)(0x10e3ca84)));
  /* 10e144e9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10e144ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e144ee je 0x10e144f7 */
  if (C.zf) goto L_10e144f7;
L_10e144f0:;
  /* 10e144f0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10e144f7:;
  /* 10e144f7 jmp 0x10e14469 */
  goto L_10e14469;
L_10e144fc:;
  /* 10e144fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e144ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e14502 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10e14505 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e14508 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1450b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10e1450e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14511 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e14514 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10e14517 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1451a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1451d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10e14520 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e14523 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e14529 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e1452c:;
  /* 10e1452c pop edi */
  EDI = (pop32());
  /* 10e1452d pop esi */
  ESI = (pop32());
  /* 10e1452e pop ebx */
  EBX = (pop32());
  /* 10e1452f mov esp, ebp */
  ESP = (EBP);
  /* 10e14531 pop ebp */
  EBP = (pop32());
  /* 10e14532 ret  */
  ESPCHK(0x10e14410u, _esp0);
  ESP += 4; return;
}

/* FUN_10004540 @ 0x10e14540 (697 bytes, 253 insns) */
void f_10e14540(void) {
  FTRACE(0x10e14540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e14540 push ebp */
  push32((uint32_t)(EBP));
  /* 10e14541 mov ebp, esp */
  EBP = (ESP);
  /* 10e14543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e14546 push ebx */
  push32((uint32_t)(EBX));
  /* 10e14547 push esi */
  push32((uint32_t)(ESI));
  /* 10e14548 push edi */
  push32((uint32_t)(EDI));
  /* 10e14549 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e14550 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e14552 call 0x10e16500 */
  push32(0x10e14557u); f_10e16500();
  /* 10e14557 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1455a:;
  /* 10e1455a push 0x10e39a38 */
  push32((uint32_t)(0x10e39a38u));
  /* 10e1455f push 0x10e39430 */
  push32((uint32_t)(0x10e39430u));
  /* 10e14564 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14566 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14568 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1456a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1456c call 0x10e11bc0 */
  push32(0x10e14571u); f_10e11bc0();
  /* 10e14571 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14574 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14577 jne 0x10e1457a */
  if (!C.zf) goto L_10e1457a;
  /* 10e14579 int3  */
  x86_unimpl("int3 @ 0x10e14579");
L_10e1457a:;
  /* 10e1457a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1457c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1457e jne 0x10e1455a */
  if (!C.zf) goto L_10e1455a;
  /* 10e14580 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14584 je 0x10e1458e */
  if (C.zf) goto L_10e1458e;
  /* 10e14586 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e14589 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e1458b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e1458e:;
  /* 10e1458e mov eax, dword ptr [0x10e3e458] */
  EAX = (r32((uint32_t)(0x10e3e458)));
  /* 10e14593 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e14596 jmp 0x10e145a0 */
  goto L_10e145a0;
L_10e14598:;
  /* 10e14598 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1459b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e1459d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e145a0:;
  /* 10e145a0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e145a4 je 0x10e147c2 */
  if (C.zf) goto L_10e147c2;
  /* 10e145aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e145ad cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e145b0 je 0x10e147c2 */
  if (C.zf) goto L_10e147c2;
  /* 10e145b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e145b9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e145bc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e145c2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e145c5 je 0x10e145f4 */
  if (C.zf) goto L_10e145f4;
  /* 10e145c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e145ca mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e145cd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e145d3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e145d5 je 0x10e145f4 */
  if (C.zf) goto L_10e145f4;
  /* 10e145d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e145da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e145dd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e145e2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e145e5 jne 0x10e145f9 */
  if (!C.zf) goto L_10e145f9;
  /* 10e145e7 mov ecx, dword ptr [0x10e3ca84] */
  ECX = (r32((uint32_t)(0x10e3ca84)));
  /* 10e145ed and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10e145f0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e145f2 jne 0x10e145f9 */
  if (!C.zf) goto L_10e145f9;
L_10e145f4:;
  /* 10e145f4 jmp 0x10e147bd */
  goto L_10e147bd;
L_10e145f9:;
  /* 10e145f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e145fc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14600 je 0x10e14672 */
  if (C.zf) goto L_10e14672;
  /* 10e14602 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14604 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e14606 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14609 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e1460c push ecx */
  push32((uint32_t)(ECX));
  /* 10e1460d call 0x10e140b0 */
  push32(0x10e14612u); f_10e140b0();
  /* 10e14612 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14615 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e14617 jne 0x10e14643 */
  if (!C.zf) goto L_10e14643;
L_10e14619:;
  /* 10e14619 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1461c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e1461f push eax */
  push32((uint32_t)(EAX));
  /* 10e14620 push 0x10e39a24 */
  push32((uint32_t)(0x10e39a24u));
  /* 10e14625 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14627 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14629 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1462b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1462d call 0x10e11bc0 */
  push32(0x10e14632u); f_10e11bc0();
  /* 10e14632 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14635 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14638 jne 0x10e1463b */
  if (!C.zf) goto L_10e1463b;
  /* 10e1463a int3  */
  x86_unimpl("int3 @ 0x10e1463a");
L_10e1463b:;
  /* 10e1463b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1463d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1463f jne 0x10e14619 */
  if (!C.zf) goto L_10e14619;
  /* 10e14641 jmp 0x10e14672 */
  goto L_10e14672;
L_10e14643:;
  /* 10e14643 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14646 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e14649 push eax */
  push32((uint32_t)(EAX));
  /* 10e1464a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1464d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e14650 push edx */
  push32((uint32_t)(EDX));
  /* 10e14651 push 0x10e39a18 */
  push32((uint32_t)(0x10e39a18u));
  /* 10e14656 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14658 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1465a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1465c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1465e call 0x10e11bc0 */
  push32(0x10e14663u); f_10e11bc0();
  /* 10e14663 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14666 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14669 jne 0x10e1466c */
  if (!C.zf) goto L_10e1466c;
  /* 10e1466b int3  */
  x86_unimpl("int3 @ 0x10e1466b");
L_10e1466c:;
  /* 10e1466c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1466e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e14670 jne 0x10e14643 */
  if (!C.zf) goto L_10e14643;
L_10e14672:;
  /* 10e14672 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14675 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e14678 push edx */
  push32((uint32_t)(EDX));
  /* 10e14679 push 0x10e39a10 */
  push32((uint32_t)(0x10e39a10u));
  /* 10e1467e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14680 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14682 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14684 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14686 call 0x10e11bc0 */
  push32(0x10e1468bu); f_10e11bc0();
  /* 10e1468b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1468e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14691 jne 0x10e14694 */
  if (!C.zf) goto L_10e14694;
  /* 10e14693 int3  */
  x86_unimpl("int3 @ 0x10e14693");
L_10e14694:;
  /* 10e14694 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e14696 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e14698 jne 0x10e14672 */
  if (!C.zf) goto L_10e14672;
  /* 10e1469a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1469d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e146a0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e146a6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e146a9 jne 0x10e1471c */
  if (!C.zf) goto L_10e1471c;
L_10e146ab:;
  /* 10e146ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e146ae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e146b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e146b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e146b5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e146b8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10e146bb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e146c0 push eax */
  push32((uint32_t)(EAX));
  /* 10e146c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e146c4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e146c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e146c8 push 0x10e399dc */
  push32((uint32_t)(0x10e399dcu));
  /* 10e146cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e146cf push 0 */
  push32((uint32_t)(0x0u));
  /* 10e146d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e146d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e146d5 call 0x10e11bc0 */
  push32(0x10e146dau); f_10e11bc0();
  /* 10e146da add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e146dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e146e0 jne 0x10e146e3 */
  if (!C.zf) goto L_10e146e3;
  /* 10e146e2 int3  */
  x86_unimpl("int3 @ 0x10e146e2");
L_10e146e3:;
  /* 10e146e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e146e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e146e7 jne 0x10e146ab */
  if (!C.zf) goto L_10e146ab;
  /* 10e146e9 cmp dword ptr [0x10e3fdb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3fdb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e146f0 je 0x10e1470b */
  if (C.zf) goto L_10e1470b;
  /* 10e146f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e146f5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e146f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e146f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e146fc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e146ff push edx */
  push32((uint32_t)(EDX));
  /* 10e14700 call dword ptr [0x10e3fdb8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3fdb8))), 0x10e14706u);
  /* 10e14706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14709 jmp 0x10e14717 */
  goto L_10e14717;
L_10e1470b:;
  /* 10e1470b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1470e push eax */
  push32((uint32_t)(EAX));
  /* 10e1470f call 0x10e14800 */
  push32(0x10e14714u); f_10e14800();
  /* 10e14714 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e14717:;
  /* 10e14717 jmp 0x10e147bd */
  goto L_10e147bd;
L_10e1471c:;
  /* 10e1471c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1471f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14723 jne 0x10e14762 */
  if (!C.zf) goto L_10e14762;
L_10e14725:;
  /* 10e14725 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14728 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e1472b push eax */
  push32((uint32_t)(EAX));
  /* 10e1472c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1472f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14732 push ecx */
  push32((uint32_t)(ECX));
  /* 10e14733 push 0x10e399b4 */
  push32((uint32_t)(0x10e399b4u));
  /* 10e14738 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1473a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1473c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1473e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14740 call 0x10e11bc0 */
  push32(0x10e14745u); f_10e11bc0();
  /* 10e14745 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14748 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1474b jne 0x10e1474e */
  if (!C.zf) goto L_10e1474e;
  /* 10e1474d int3  */
  x86_unimpl("int3 @ 0x10e1474d");
L_10e1474e:;
  /* 10e1474e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e14750 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e14752 jne 0x10e14725 */
  if (!C.zf) goto L_10e14725;
  /* 10e14754 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14757 push eax */
  push32((uint32_t)(EAX));
  /* 10e14758 call 0x10e14800 */
  push32(0x10e1475du); f_10e14800();
  /* 10e1475d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14760 jmp 0x10e147bd */
  goto L_10e147bd;
L_10e14762:;
  /* 10e14762 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14765 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e14768 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1476e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14771 jne 0x10e147bd */
  if (!C.zf) goto L_10e147bd;
L_10e14773:;
  /* 10e14773 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14776 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e14779 push ecx */
  push32((uint32_t)(ECX));
  /* 10e1477a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1477d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e14780 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10e14783 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e14788 push eax */
  push32((uint32_t)(EAX));
  /* 10e14789 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1478c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1478f push ecx */
  push32((uint32_t)(ECX));
  /* 10e14790 push 0x10e39980 */
  push32((uint32_t)(0x10e39980u));
  /* 10e14795 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14797 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14799 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1479b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1479d call 0x10e11bc0 */
  push32(0x10e147a2u); f_10e11bc0();
  /* 10e147a2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e147a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e147a8 jne 0x10e147ab */
  if (!C.zf) goto L_10e147ab;
  /* 10e147aa int3  */
  x86_unimpl("int3 @ 0x10e147aa");
L_10e147ab:;
  /* 10e147ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e147ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e147af jne 0x10e14773 */
  if (!C.zf) goto L_10e14773;
  /* 10e147b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e147b4 push eax */
  push32((uint32_t)(EAX));
  /* 10e147b5 call 0x10e14800 */
  push32(0x10e147bau); f_10e14800();
  /* 10e147ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e147bd:;
  /* 10e147bd jmp 0x10e14598 */
  goto L_10e14598;
L_10e147c2:;
  /* 10e147c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e147c4 call 0x10e165a0 */
  push32(0x10e147c9u); f_10e165a0();
  /* 10e147c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e147cc:;
  /* 10e147cc push 0x10e39968 */
  push32((uint32_t)(0x10e39968u));
  /* 10e147d1 push 0x10e39430 */
  push32((uint32_t)(0x10e39430u));
  /* 10e147d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e147d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e147da push 0 */
  push32((uint32_t)(0x0u));
  /* 10e147dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10e147de call 0x10e11bc0 */
  push32(0x10e147e3u); f_10e11bc0();
  /* 10e147e3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e147e6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e147e9 jne 0x10e147ec */
  if (!C.zf) goto L_10e147ec;
  /* 10e147eb int3  */
  x86_unimpl("int3 @ 0x10e147eb");
L_10e147ec:;
  /* 10e147ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e147ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e147f0 jne 0x10e147cc */
  if (!C.zf) goto L_10e147cc;
  /* 10e147f2 pop edi */
  EDI = (pop32());
  /* 10e147f3 pop esi */
  ESI = (pop32());
  /* 10e147f4 pop ebx */
  EBX = (pop32());
  /* 10e147f5 mov esp, ebp */
  ESP = (EBP);
  /* 10e147f7 pop ebp */
  EBP = (pop32());
  /* 10e147f8 ret  */
  ESPCHK(0x10e14540u, _esp0);
  ESP += 4; return;
}

/* FUN_10004800 @ 0x10e14800 (276 bytes, 89 insns) */
void f_10e14800(void) {
  FTRACE(0x10e14800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e14800 push ebp */
  push32((uint32_t)(EBP));
  /* 10e14801 mov ebp, esp */
  EBP = (ESP);
  /* 10e14803 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e14806 push ebx */
  push32((uint32_t)(EBX));
  /* 10e14807 push esi */
  push32((uint32_t)(ESI));
  /* 10e14808 push edi */
  push32((uint32_t)(EDI));
  /* 10e14809 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10e14810 jmp 0x10e1481b */
  goto L_10e1481b;
L_10e14812:;
  /* 10e14812 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e14815 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14818 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10e1481b:;
  /* 10e1481b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1481e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14822 jge 0x10e1482f */
  if ((C.sf==C.of)) goto L_10e1482f;
  /* 10e14824 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e14827 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e1482a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10e1482d jmp 0x10e14836 */
  goto L_10e14836;
L_10e1482f:;
  /* 10e1482f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10e14836:;
  /* 10e14836 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e14839 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1483c jge 0x10e148dc */
  if ((C.sf==C.of)) goto L_10e148dc;
  /* 10e14842 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e14845 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14848 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10e1484b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10e1484e cmp dword ptr [0x10e3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14855 jle 0x10e14873 */
  if ((C.zf||C.sf!=C.of)) goto L_10e14873;
  /* 10e14857 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10e1485c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e1485f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e14865 push ecx */
  push32((uint32_t)(ECX));
  /* 10e14866 call 0x10e18b10 */
  push32(0x10e1486bu); f_10e18b10();
  /* 10e1486b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1486e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10e14871 jmp 0x10e14890 */
  goto L_10e14890;
L_10e14873:;
  /* 10e14873 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e14876 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1487c mov eax, dword ptr [0x10e3cc98] */
  EAX = (r32((uint32_t)(0x10e3cc98)));
  /* 10e14881 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e14883 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10e14887 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1488d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10e14890:;
  /* 10e14890 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14894 je 0x10e148a4 */
  if (C.zf) goto L_10e148a4;
  /* 10e14896 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e14899 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e1489f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10e148a2 jmp 0x10e148ab */
  goto L_10e148ab;
L_10e148a4:;
  /* 10e148a4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10e148ab:;
  /* 10e148ab mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e148ae mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10e148b1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10e148b5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e148b8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e148be push edx */
  push32((uint32_t)(EDX));
  /* 10e148bf push 0x10e39a5c */
  push32((uint32_t)(0x10e39a5cu));
  /* 10e148c4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e148c7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e148ca lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10e148ce push ecx */
  push32((uint32_t)(ECX));
  /* 10e148cf call 0x10e18a10 */
  push32(0x10e148d4u); f_10e18a10();
  /* 10e148d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e148d7 jmp 0x10e14812 */
  goto L_10e14812;
L_10e148dc:;
  /* 10e148dc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e148df mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10e148e4:;
  /* 10e148e4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10e148e7 push eax */
  push32((uint32_t)(EAX));
  /* 10e148e8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10e148eb push ecx */
  push32((uint32_t)(ECX));
  /* 10e148ec push 0x10e39a4c */
  push32((uint32_t)(0x10e39a4cu));
  /* 10e148f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e148f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e148f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e148f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e148f9 call 0x10e11bc0 */
  push32(0x10e148feu); f_10e11bc0();
  /* 10e148fe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14901 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14904 jne 0x10e14907 */
  if (!C.zf) goto L_10e14907;
  /* 10e14906 int3  */
  x86_unimpl("int3 @ 0x10e14906");
L_10e14907:;
  /* 10e14907 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e14909 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1490b jne 0x10e148e4 */
  if (!C.zf) goto L_10e148e4;
  /* 10e1490d pop edi */
  EDI = (pop32());
  /* 10e1490e pop esi */
  ESI = (pop32());
  /* 10e1490f pop ebx */
  EBX = (pop32());
  /* 10e14910 mov esp, ebp */
  ESP = (EBP);
  /* 10e14912 pop ebp */
  EBP = (pop32());
  /* 10e14913 ret  */
  ESPCHK(0x10e14800u, _esp0);
  ESP += 4; return;
}

/* FUN_10004920 @ 0x10e14920 (116 bytes, 46 insns) */
void f_10e14920(void) {
  FTRACE(0x10e14920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e14920 push ebp */
  push32((uint32_t)(EBP));
  /* 10e14921 mov ebp, esp */
  EBP = (ESP);
  /* 10e14923 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e14926 push ebx */
  push32((uint32_t)(EBX));
  /* 10e14927 push esi */
  push32((uint32_t)(ESI));
  /* 10e14928 push edi */
  push32((uint32_t)(EDI));
  /* 10e14929 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10e1492c push eax */
  push32((uint32_t)(EAX));
  /* 10e1492d call 0x10e142a0 */
  push32(0x10e14932u); f_10e142a0();
  /* 10e14932 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14935 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14939 jne 0x10e14954 */
  if (!C.zf) goto L_10e14954;
  /* 10e1493b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1493f jne 0x10e14954 */
  if (!C.zf) goto L_10e14954;
  /* 10e14941 mov ecx, dword ptr [0x10e3ca84] */
  ECX = (r32((uint32_t)(0x10e3ca84)));
  /* 10e14947 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1494a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e1494c je 0x10e1498b */
  if (C.zf) goto L_10e1498b;
  /* 10e1494e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14952 je 0x10e1498b */
  if (C.zf) goto L_10e1498b;
L_10e14954:;
  /* 10e14954 push 0x10e39a64 */
  push32((uint32_t)(0x10e39a64u));
  /* 10e14959 push 0x10e39430 */
  push32((uint32_t)(0x10e39430u));
  /* 10e1495e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14960 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14962 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14964 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14966 call 0x10e11bc0 */
  push32(0x10e1496bu); f_10e11bc0();
  /* 10e1496b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1496e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14971 jne 0x10e14974 */
  if (!C.zf) goto L_10e14974;
  /* 10e14973 int3  */
  x86_unimpl("int3 @ 0x10e14973");
L_10e14974:;
  /* 10e14974 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e14976 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e14978 jne 0x10e14954 */
  if (!C.zf) goto L_10e14954;
  /* 10e1497a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1497c call 0x10e14540 */
  push32(0x10e14981u); f_10e14540();
  /* 10e14981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14984 mov eax, 1 */
  EAX = (0x1u);
  /* 10e14989 jmp 0x10e1498d */
  goto L_10e1498d;
L_10e1498b:;
  /* 10e1498b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e1498d:;
  /* 10e1498d pop edi */
  EDI = (pop32());
  /* 10e1498e pop esi */
  ESI = (pop32());
  /* 10e1498f pop ebx */
  EBX = (pop32());
  /* 10e14990 mov esp, ebp */
  ESP = (EBP);
  /* 10e14992 pop ebp */
  EBP = (pop32());
  /* 10e14993 ret  */
  ESPCHK(0x10e14920u, _esp0);
  ESP += 4; return;
}

/* FUN_100049a0 @ 0x10e149a0 (197 bytes, 79 insns) */
void f_10e149a0(void) {
  FTRACE(0x10e149a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e149a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e149a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e149a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e149a4 push ebx */
  push32((uint32_t)(EBX));
  /* 10e149a5 push esi */
  push32((uint32_t)(ESI));
  /* 10e149a6 push edi */
  push32((uint32_t)(EDI));
  /* 10e149a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e149ab jne 0x10e149b2 */
  if (!C.zf) goto L_10e149b2;
  /* 10e149ad jmp 0x10e14a5e */
  goto L_10e14a5e;
L_10e149b2:;
  /* 10e149b2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e149b9 jmp 0x10e149c4 */
  goto L_10e149c4;
L_10e149bb:;
  /* 10e149bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e149be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e149c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e149c4:;
  /* 10e149c4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e149c8 jge 0x10e14a0e */
  if ((C.sf==C.of)) goto L_10e14a0e;
L_10e149ca:;
  /* 10e149ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e149cd mov edx, dword ptr [ecx*4 + 0x10e3ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e3ca94)));
  /* 10e149d4 push edx */
  push32((uint32_t)(EDX));
  /* 10e149d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e149d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e149db mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10e149df push edx */
  push32((uint32_t)(EDX));
  /* 10e149e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e149e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e149e6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10e149ea push edx */
  push32((uint32_t)(EDX));
  /* 10e149eb push 0x10e39ac0 */
  push32((uint32_t)(0x10e39ac0u));
  /* 10e149f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e149f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e149f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e149f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e149f8 call 0x10e11bc0 */
  push32(0x10e149fdu); f_10e11bc0();
  /* 10e149fd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14a00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14a03 jne 0x10e14a06 */
  if (!C.zf) goto L_10e14a06;
  /* 10e14a05 int3  */
  x86_unimpl("int3 @ 0x10e14a05");
L_10e14a06:;
  /* 10e14a06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e14a08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e14a0a jne 0x10e149ca */
  if (!C.zf) goto L_10e149ca;
  /* 10e14a0c jmp 0x10e149bb */
  goto L_10e149bb;
L_10e14a0e:;
  /* 10e14a0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e14a11 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10e14a14 push edx */
  push32((uint32_t)(EDX));
  /* 10e14a15 push 0x10e39a9c */
  push32((uint32_t)(0x10e39a9cu));
  /* 10e14a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14a1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14a1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14a20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14a22 call 0x10e11bc0 */
  push32(0x10e14a27u); f_10e11bc0();
  /* 10e14a27 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14a2a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14a2d jne 0x10e14a30 */
  if (!C.zf) goto L_10e14a30;
  /* 10e14a2f int3  */
  x86_unimpl("int3 @ 0x10e14a2f");
L_10e14a30:;
  /* 10e14a30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e14a32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e14a34 jne 0x10e14a0e */
  if (!C.zf) goto L_10e14a0e;
L_10e14a36:;
  /* 10e14a36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e14a39 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10e14a3c push edx */
  push32((uint32_t)(EDX));
  /* 10e14a3d push 0x10e39a7c */
  push32((uint32_t)(0x10e39a7cu));
  /* 10e14a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14a46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14a48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14a4a call 0x10e11bc0 */
  push32(0x10e14a4fu); f_10e11bc0();
  /* 10e14a4f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14a52 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14a55 jne 0x10e14a58 */
  if (!C.zf) goto L_10e14a58;
  /* 10e14a57 int3  */
  x86_unimpl("int3 @ 0x10e14a57");
L_10e14a58:;
  /* 10e14a58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e14a5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e14a5c jne 0x10e14a36 */
  if (!C.zf) goto L_10e14a36;
L_10e14a5e:;
  /* 10e14a5e pop edi */
  EDI = (pop32());
  /* 10e14a5f pop esi */
  ESI = (pop32());
  /* 10e14a60 pop ebx */
  EBX = (pop32());
  /* 10e14a61 mov esp, ebp */
  ESP = (EBP);
  /* 10e14a63 pop ebp */
  EBP = (pop32());
  /* 10e14a64 ret  */
  ESPCHK(0x10e149a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a70 @ 0x10e14a70 (329 bytes, 102 insns) */
void f_10e14a70(void) {
  FTRACE(0x10e14a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e14a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e14a71 mov ebp, esp */
  EBP = (ESP);
  /* 10e14a73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e14a76 cmp dword ptr [0x10e3ff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3ff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14a7d jne 0x10e14a84 */
  if (!C.zf) goto L_10e14a84;
  /* 10e14a7f call 0x10e193b0 */
  push32(0x10e14a84u); f_10e193b0();
L_10e14a84:;
  /* 10e14a84 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e14a8b mov eax, dword ptr [0x10e3e3f4] */
  EAX = (r32((uint32_t)(0x10e3e3f4)));
  /* 10e14a90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e14a93:;
  /* 10e14a93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14a96 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e14a99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e14a9b je 0x10e14ac9 */
  if (C.zf) goto L_10e14ac9;
  /* 10e14a9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14aa0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e14aa3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14aa6 je 0x10e14ab1 */
  if (C.zf) goto L_10e14ab1;
  /* 10e14aa8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e14aab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14aae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e14ab1:;
  /* 10e14ab1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14ab4 push eax */
  push32((uint32_t)(EAX));
  /* 10e14ab5 call 0x10e15930 */
  push32(0x10e14abau); f_10e15930();
  /* 10e14aba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14abd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14ac0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10e14ac4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e14ac7 jmp 0x10e14a93 */
  goto L_10e14a93;
L_10e14ac9:;
  /* 10e14ac9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10e14acb push 0x10e39ae0 */
  push32((uint32_t)(0x10e39ae0u));
  /* 10e14ad0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e14ad2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e14ad5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10e14adc push ecx */
  push32((uint32_t)(ECX));
  /* 10e14add call 0x10e12b00 */
  push32(0x10e14ae2u); f_10e12b00();
  /* 10e14ae2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14ae5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e14ae8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e14aeb mov dword ptr [0x10e3e428], edx */
  w32((uint32_t)(0x10e3e428), (EDX));
  /* 10e14af1 cmp dword ptr [0x10e3e428], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e428))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14af8 jne 0x10e14b04 */
  if (!C.zf) goto L_10e14b04;
  /* 10e14afa push 9 */
  push32((uint32_t)(0x9u));
  /* 10e14afc call 0x10e11a70 */
  push32(0x10e14b01u); f_10e11a70();
  /* 10e14b01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e14b04:;
  /* 10e14b04 mov eax, dword ptr [0x10e3e3f4] */
  EAX = (r32((uint32_t)(0x10e3e3f4)));
  /* 10e14b09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e14b0c jmp 0x10e14b17 */
  goto L_10e14b17;
L_10e14b0e:;
  /* 10e14b0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14b11 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14b14 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e14b17:;
  /* 10e14b17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14b1a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e14b1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e14b1f je 0x10e14b87 */
  if (C.zf) goto L_10e14b87;
  /* 10e14b21 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14b24 push ecx */
  push32((uint32_t)(ECX));
  /* 10e14b25 call 0x10e15930 */
  push32(0x10e14b2au); f_10e15930();
  /* 10e14b2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14b2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14b30 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e14b33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14b36 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e14b39 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14b3c je 0x10e14b85 */
  if (C.zf) goto L_10e14b85;
  /* 10e14b3e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10e14b40 push 0x10e39ae0 */
  push32((uint32_t)(0x10e39ae0u));
  /* 10e14b45 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e14b47 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e14b4a push ecx */
  push32((uint32_t)(ECX));
  /* 10e14b4b call 0x10e12b00 */
  push32(0x10e14b50u); f_10e12b00();
  /* 10e14b50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14b53 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e14b56 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e14b58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e14b5b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14b5e jne 0x10e14b6a */
  if (!C.zf) goto L_10e14b6a;
  /* 10e14b60 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e14b62 call 0x10e11a70 */
  push32(0x10e14b67u); f_10e11a70();
  /* 10e14b67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e14b6a:;
  /* 10e14b6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14b6d push ecx */
  push32((uint32_t)(ECX));
  /* 10e14b6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e14b71 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e14b73 push eax */
  push32((uint32_t)(EAX));
  /* 10e14b74 call 0x10e15ab0 */
  push32(0x10e14b79u); f_10e15ab0();
  /* 10e14b79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14b7c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e14b7f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14b82 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10e14b85:;
  /* 10e14b85 jmp 0x10e14b0e */
  goto L_10e14b0e;
L_10e14b87:;
  /* 10e14b87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e14b89 mov edx, dword ptr [0x10e3e3f4] */
  EDX = (r32((uint32_t)(0x10e3e3f4)));
  /* 10e14b8f push edx */
  push32((uint32_t)(EDX));
  /* 10e14b90 call 0x10e13590 */
  push32(0x10e14b95u); f_10e13590();
  /* 10e14b95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14b98 mov dword ptr [0x10e3e3f4], 0 */
  w32((uint32_t)(0x10e3e3f4), (0x0u));
  /* 10e14ba2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e14ba5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e14bab mov dword ptr [0x10e3ff20], 1 */
  w32((uint32_t)(0x10e3ff20), (0x1u));
  /* 10e14bb5 mov esp, ebp */
  ESP = (EBP);
  /* 10e14bb7 pop ebp */
  EBP = (pop32());
  /* 10e14bb8 ret  */
  ESPCHK(0x10e14a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bc0 @ 0x10e14bc0 (216 bytes, 69 insns) */
void f_10e14bc0(void) {
  FTRACE(0x10e14bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e14bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e14bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10e14bc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e14bc6 cmp dword ptr [0x10e3ff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3ff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14bcd jne 0x10e14bd4 */
  if (!C.zf) goto L_10e14bd4;
  /* 10e14bcf call 0x10e193b0 */
  push32(0x10e14bd4u); f_10e193b0();
L_10e14bd4:;
  /* 10e14bd4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10e14bd9 push 0x10e3e464 */
  push32((uint32_t)(0x10e3e464u));
  /* 10e14bde push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14be0 call dword ptr [0x10e40274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40274))), 0x10e14be6u);
  /* 10e14be6 mov dword ptr [0x10e3e438], 0x10e3e464 */
  w32((uint32_t)(0x10e3e438), (0x10e3e464u));
  /* 10e14bf0 mov eax, dword ptr [0x10e3ff4c] */
  EAX = (r32((uint32_t)(0x10e3ff4c)));
  /* 10e14bf5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e14bf8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e14bfa jne 0x10e14c07 */
  if (!C.zf) goto L_10e14c07;
  /* 10e14bfc mov edx, dword ptr [0x10e3e438] */
  EDX = (r32((uint32_t)(0x10e3e438)));
  /* 10e14c02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e14c05 jmp 0x10e14c0f */
  goto L_10e14c0f;
L_10e14c07:;
  /* 10e14c07 mov eax, dword ptr [0x10e3ff4c] */
  EAX = (r32((uint32_t)(0x10e3ff4c)));
  /* 10e14c0c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10e14c0f:;
  /* 10e14c0f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e14c12 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e14c15 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10e14c18 push edx */
  push32((uint32_t)(EDX));
  /* 10e14c19 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10e14c1c push eax */
  push32((uint32_t)(EAX));
  /* 10e14c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14c1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e14c21 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e14c24 push ecx */
  push32((uint32_t)(ECX));
  /* 10e14c25 call 0x10e14ca0 */
  push32(0x10e14c2au); f_10e14ca0();
  /* 10e14c2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14c2d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10e14c32 push 0x10e39aec */
  push32((uint32_t)(0x10e39aecu));
  /* 10e14c37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e14c39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e14c3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14c3f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10e14c42 push ecx */
  push32((uint32_t)(ECX));
  /* 10e14c43 call 0x10e12b00 */
  push32(0x10e14c48u); f_10e12b00();
  /* 10e14c48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14c4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e14c4e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14c52 jne 0x10e14c5e */
  if (!C.zf) goto L_10e14c5e;
  /* 10e14c54 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e14c56 call 0x10e11a70 */
  push32(0x10e14c5bu); f_10e11a70();
  /* 10e14c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e14c5e:;
  /* 10e14c5e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10e14c61 push edx */
  push32((uint32_t)(EDX));
  /* 10e14c62 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10e14c65 push eax */
  push32((uint32_t)(EAX));
  /* 10e14c66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e14c69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e14c6c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10e14c6f push eax */
  push32((uint32_t)(EAX));
  /* 10e14c70 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e14c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10e14c74 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e14c77 push edx */
  push32((uint32_t)(EDX));
  /* 10e14c78 call 0x10e14ca0 */
  push32(0x10e14c7du); f_10e14ca0();
  /* 10e14c7d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14c80 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e14c83 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e14c86 mov dword ptr [0x10e3e41c], eax */
  w32((uint32_t)(0x10e3e41c), (EAX));
  /* 10e14c8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e14c8e mov dword ptr [0x10e3e420], ecx */
  w32((uint32_t)(0x10e3e420), (ECX));
  /* 10e14c94 mov esp, ebp */
  ESP = (EBP);
  /* 10e14c96 pop ebp */
  EBP = (pop32());
  /* 10e14c97 ret  */
  ESPCHK(0x10e14bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ca0 @ 0x10e14ca0 (1060 bytes, 360 insns) */
void f_10e14ca0(void) {
  FTRACE(0x10e14ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e14ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e14ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10e14ca3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e14ca6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e14ca9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e14caf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e14cb2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10e14cb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e14cbb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e14cbe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14cc2 je 0x10e14cd5 */
  if (C.zf) goto L_10e14cd5;
  /* 10e14cc4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e14cc7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14cca mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e14ccc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e14ccf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14cd2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10e14cd5:;
  /* 10e14cd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14cd8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e14cdb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14cde jne 0x10e14dad */
  if (!C.zf) goto L_10e14dad;
L_10e14ce4:;
  /* 10e14ce4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14ce7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14cea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e14ced mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14cf0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e14cf3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14cf6 je 0x10e14d72 */
  if (C.zf) goto L_10e14d72;
  /* 10e14cf8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14cfb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e14cfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e14d00 je 0x10e14d72 */
  if (C.zf) goto L_10e14d72;
  /* 10e14d02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14d05 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e14d07 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e14d09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e14d0b mov al, byte ptr [edx + 0x10e3fc81] */
  AL = (r8((uint32_t)(EDX + 0x10e3fc81)));
  /* 10e14d11 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e14d14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e14d16 je 0x10e14d47 */
  if (C.zf) goto L_10e14d47;
  /* 10e14d18 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e14d1b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e14d1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14d20 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e14d23 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e14d25 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14d29 je 0x10e14d47 */
  if (C.zf) goto L_10e14d47;
  /* 10e14d2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14d2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14d31 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e14d33 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e14d35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14d38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14d3b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10e14d3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14d41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14d44 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e14d47:;
  /* 10e14d47 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e14d4a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e14d4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14d4f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e14d52 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e14d54 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14d58 je 0x10e14d6d */
  if (C.zf) goto L_10e14d6d;
  /* 10e14d5a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14d5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14d60 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e14d62 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e14d64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14d67 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14d6a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10e14d6d:;
  /* 10e14d6d jmp 0x10e14ce4 */
  goto L_10e14ce4;
L_10e14d72:;
  /* 10e14d72 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e14d75 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e14d77 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14d7a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e14d7d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e14d7f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14d83 je 0x10e14d94 */
  if (C.zf) goto L_10e14d94;
  /* 10e14d85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14d88 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10e14d8b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14d8e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14d91 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10e14d94:;
  /* 10e14d94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14d97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e14d9a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14d9d jne 0x10e14da8 */
  if (!C.zf) goto L_10e14da8;
  /* 10e14d9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14da2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14da5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e14da8:;
  /* 10e14da8 jmp 0x10e14e7c */
  goto L_10e14e7c;
L_10e14dad:;
  /* 10e14dad mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e14db0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e14db2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14db5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e14db8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e14dba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14dbe je 0x10e14dd3 */
  if (C.zf) goto L_10e14dd3;
  /* 10e14dc0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14dc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14dc6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e14dc8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e14dca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14dcd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14dd0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10e14dd3:;
  /* 10e14dd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14dd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e14dd8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10e14ddb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14dde add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14de1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e14de4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e14de7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e14ded xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e14def mov dl, byte ptr [ecx + 0x10e3fc81] */
  DL = (r8((uint32_t)(ECX + 0x10e3fc81)));
  /* 10e14df5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e14df8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e14dfa je 0x10e14e2b */
  if (C.zf) goto L_10e14e2b;
  /* 10e14dfc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e14dff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e14e01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14e04 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e14e07 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e14e09 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14e0d je 0x10e14e22 */
  if (C.zf) goto L_10e14e22;
  /* 10e14e0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14e12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14e15 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e14e17 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e14e19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14e1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14e1f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10e14e22:;
  /* 10e14e22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14e25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14e28 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e14e2b:;
  /* 10e14e2b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e14e2e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e14e34 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14e37 je 0x10e14e57 */
  if (C.zf) goto L_10e14e57;
  /* 10e14e39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e14e3c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e14e41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e14e43 je 0x10e14e57 */
  if (C.zf) goto L_10e14e57;
  /* 10e14e45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e14e48 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e14e4e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14e51 jne 0x10e14dad */
  if (!C.zf) goto L_10e14dad;
L_10e14e57:;
  /* 10e14e57 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e14e5a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e14e60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e14e62 jne 0x10e14e6f */
  if (!C.zf) goto L_10e14e6f;
  /* 10e14e64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14e67 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e14e6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e14e6d jmp 0x10e14e7c */
  goto L_10e14e7c;
L_10e14e6f:;
  /* 10e14e6f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14e73 je 0x10e14e7c */
  if (C.zf) goto L_10e14e7c;
  /* 10e14e75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14e78 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10e14e7c:;
  /* 10e14e7c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10e14e83:;
  /* 10e14e83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14e86 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e14e89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e14e8b je 0x10e14eae */
  if (C.zf) goto L_10e14eae;
L_10e14e8d:;
  /* 10e14e8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14e90 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e14e93 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14e96 je 0x10e14ea3 */
  if (C.zf) goto L_10e14ea3;
  /* 10e14e98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14e9b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e14e9e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14ea1 jne 0x10e14eae */
  if (!C.zf) goto L_10e14eae;
L_10e14ea3:;
  /* 10e14ea3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14ea6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14ea9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e14eac jmp 0x10e14e8d */
  goto L_10e14e8d;
L_10e14eae:;
  /* 10e14eae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14eb1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e14eb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e14eb6 jne 0x10e14ebd */
  if (!C.zf) goto L_10e14ebd;
  /* 10e14eb8 jmp 0x10e1509b */
  goto L_10e1509b;
L_10e14ebd:;
  /* 10e14ebd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14ec1 je 0x10e14ed4 */
  if (C.zf) goto L_10e14ed4;
  /* 10e14ec3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e14ec6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14ec9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e14ecb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e14ece add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14ed1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10e14ed4:;
  /* 10e14ed4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e14ed7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e14ed9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14edc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e14edf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10e14ee1:;
  /* 10e14ee1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10e14ee8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10e14eef:;
  /* 10e14eef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14ef2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e14ef5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14ef8 jne 0x10e14f0e */
  if (!C.zf) goto L_10e14f0e;
  /* 10e14efa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14efd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14f00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e14f03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e14f06 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14f09 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e14f0c jmp 0x10e14eef */
  goto L_10e14eef;
L_10e14f0e:;
  /* 10e14f0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14f11 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e14f14 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14f17 jne 0x10e14f6a */
  if (!C.zf) goto L_10e14f6a;
  /* 10e14f19 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e14f1c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e14f1e mov ecx, 2 */
  ECX = (0x2u);
  /* 10e14f23 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e14f25 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e14f27 jne 0x10e14f62 */
  if (!C.zf) goto L_10e14f62;
  /* 10e14f29 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14f2d je 0x10e14f4f */
  if (C.zf) goto L_10e14f4f;
  /* 10e14f2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14f32 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10e14f36 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14f39 jne 0x10e14f46 */
  if (!C.zf) goto L_10e14f46;
  /* 10e14f3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14f3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14f41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e14f44 jmp 0x10e14f4d */
  goto L_10e14f4d;
L_10e14f46:;
  /* 10e14f46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10e14f4d:;
  /* 10e14f4d jmp 0x10e14f56 */
  goto L_10e14f56;
L_10e14f4f:;
  /* 10e14f4f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10e14f56:;
  /* 10e14f56 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e14f58 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14f5c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10e14f5f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10e14f62:;
  /* 10e14f62 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e14f65 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e14f67 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10e14f6a:;
  /* 10e14f6a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e14f6d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e14f70 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e14f73 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e14f76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e14f78 je 0x10e14f9e */
  if (C.zf) goto L_10e14f9e;
  /* 10e14f7a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14f7e je 0x10e14f8f */
  if (C.zf) goto L_10e14f8f;
  /* 10e14f80 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14f83 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10e14f86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14f89 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14f8c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10e14f8f:;
  /* 10e14f8f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e14f92 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e14f94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14f97 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e14f9a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e14f9c jmp 0x10e14f6a */
  goto L_10e14f6a;
L_10e14f9e:;
  /* 10e14f9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14fa1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e14fa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e14fa6 je 0x10e14fc4 */
  if (C.zf) goto L_10e14fc4;
  /* 10e14fa8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14fac jne 0x10e14fc9 */
  if (!C.zf) goto L_10e14fc9;
  /* 10e14fae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14fb1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e14fb4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14fb7 je 0x10e14fc4 */
  if (C.zf) goto L_10e14fc4;
  /* 10e14fb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14fbc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e14fbf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14fc2 jne 0x10e14fc9 */
  if (!C.zf) goto L_10e14fc9;
L_10e14fc4:;
  /* 10e14fc4 jmp 0x10e15074 */
  goto L_10e15074;
L_10e14fc9:;
  /* 10e14fc9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14fcd je 0x10e15066 */
  if (C.zf) goto L_10e15066;
  /* 10e14fd3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e14fd7 je 0x10e1502d */
  if (C.zf) goto L_10e1502d;
  /* 10e14fd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14fdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e14fde mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e14fe0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e14fe2 mov cl, byte ptr [eax + 0x10e3fc81] */
  CL = (r8((uint32_t)(EAX + 0x10e3fc81)));
  /* 10e14fe8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10e14feb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e14fed je 0x10e15018 */
  if (C.zf) goto L_10e15018;
  /* 10e14fef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14ff2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e14ff5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e14ff7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10e14ff9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e14ffc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e14fff mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10e15002 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15005 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15008 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1500b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e1500e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e15010 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15013 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e15016 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e15018:;
  /* 10e15018 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1501b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1501e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e15020 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e15022 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e15025 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15028 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10e1502b jmp 0x10e15059 */
  goto L_10e15059;
L_10e1502d:;
  /* 10e1502d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15030 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e15032 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e15034 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e15036 mov cl, byte ptr [eax + 0x10e3fc81] */
  CL = (r8((uint32_t)(EAX + 0x10e3fc81)));
  /* 10e1503c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1503f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e15041 je 0x10e15059 */
  if (C.zf) goto L_10e15059;
  /* 10e15043 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15046 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15049 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e1504c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e1504f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e15051 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15054 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e15057 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e15059:;
  /* 10e15059 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e1505c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e1505e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15061 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e15064 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e15066:;
  /* 10e15066 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15069 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1506c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1506f jmp 0x10e14ee1 */
  goto L_10e14ee1;
L_10e15074:;
  /* 10e15074 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15078 je 0x10e15089 */
  if (C.zf) goto L_10e15089;
  /* 10e1507a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1507d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10e15080 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e15083 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15086 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10e15089:;
  /* 10e15089 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e1508c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e1508e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15091 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e15094 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e15096 jmp 0x10e14e83 */
  goto L_10e14e83;
L_10e1509b:;
  /* 10e1509b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1509f je 0x10e150b3 */
  if (C.zf) goto L_10e150b3;
  /* 10e150a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e150a4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e150aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e150ad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e150b0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10e150b3:;
  /* 10e150b3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e150b6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e150b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e150bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e150be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e150c0 mov esp, ebp */
  ESP = (EBP);
  /* 10e150c2 pop ebp */
  EBP = (pop32());
  /* 10e150c3 ret  */
  ESPCHK(0x10e14ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_100050d0 @ 0x10e150d0 (537 bytes, 173 insns) */
void f_10e150d0(void) {
  FTRACE(0x10e150d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e150d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e150d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e150d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e150d6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10e150dd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10e150e4 cmp dword ptr [0x10e3e568], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e568))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e150eb jne 0x10e1512a */
  if (!C.zf) goto L_10e1512a;
  /* 10e150ed call dword ptr [0x10e402d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402d0))), 0x10e150f3u);
  /* 10e150f3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e150f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e150fa je 0x10e15108 */
  if (C.zf) goto L_10e15108;
  /* 10e150fc mov dword ptr [0x10e3e568], 1 */
  w32((uint32_t)(0x10e3e568), (0x1u));
  /* 10e15106 jmp 0x10e1512a */
  goto L_10e1512a;
L_10e15108:;
  /* 10e15108 call dword ptr [0x10e402cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402cc))), 0x10e1510eu);
  /* 10e1510e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e15111 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15115 je 0x10e15123 */
  if (C.zf) goto L_10e15123;
  /* 10e15117 mov dword ptr [0x10e3e568], 2 */
  w32((uint32_t)(0x10e3e568), (0x2u));
  /* 10e15121 jmp 0x10e1512a */
  goto L_10e1512a;
L_10e15123:;
  /* 10e15123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e15125 jmp 0x10e152e5 */
  goto L_10e152e5;
L_10e1512a:;
  /* 10e1512a cmp dword ptr [0x10e3e568], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e568))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15131 jne 0x10e1522e */
  if (!C.zf) goto L_10e1522e;
  /* 10e15137 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1513b jne 0x10e15153 */
  if (!C.zf) goto L_10e15153;
  /* 10e1513d call dword ptr [0x10e402d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402d0))), 0x10e15143u);
  /* 10e15143 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e15146 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1514a jne 0x10e15153 */
  if (!C.zf) goto L_10e15153;
  /* 10e1514c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1514e jmp 0x10e152e5 */
  goto L_10e152e5;
L_10e15153:;
  /* 10e15153 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e15156 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e15159:;
  /* 10e15159 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1515c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e1515e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10e15161 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e15163 je 0x10e15185 */
  if (C.zf) goto L_10e15185;
  /* 10e15165 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e15168 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1516b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e1516e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e15171 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e15173 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10e15176 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e15178 jne 0x10e15183 */
  if (!C.zf) goto L_10e15183;
  /* 10e1517a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1517d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15180 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e15183:;
  /* 10e15183 jmp 0x10e15159 */
  goto L_10e15159;
L_10e15185:;
  /* 10e15185 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e15188 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1518b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10e1518d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15190 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e15193 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e15195 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e15197 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e15199 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1519b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1519e push edx */
  push32((uint32_t)(EDX));
  /* 10e1519f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e151a2 push eax */
  push32((uint32_t)(EAX));
  /* 10e151a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e151a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e151a7 call dword ptr [0x10e40224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40224))), 0x10e151adu);
  /* 10e151ad mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e151b0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e151b4 je 0x10e151d4 */
  if (C.zf) goto L_10e151d4;
  /* 10e151b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10e151b8 push 0x10e39af8 */
  push32((uint32_t)(0x10e39af8u));
  /* 10e151bd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e151bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e151c2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e151c3 call 0x10e12b00 */
  push32(0x10e151c8u); f_10e12b00();
  /* 10e151c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e151cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e151ce cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e151d2 jne 0x10e151e5 */
  if (!C.zf) goto L_10e151e5;
L_10e151d4:;
  /* 10e151d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e151d7 push edx */
  push32((uint32_t)(EDX));
  /* 10e151d8 call dword ptr [0x10e40220] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40220))), 0x10e151deu);
  /* 10e151de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e151e0 jmp 0x10e152e5 */
  goto L_10e152e5;
L_10e151e5:;
  /* 10e151e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e151e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e151e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e151ec push eax */
  push32((uint32_t)(EAX));
  /* 10e151ed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e151f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e151f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e151f4 push edx */
  push32((uint32_t)(EDX));
  /* 10e151f5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e151f8 push eax */
  push32((uint32_t)(EAX));
  /* 10e151f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e151fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e151fd call dword ptr [0x10e40224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40224))), 0x10e15203u);
  /* 10e15203 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e15205 jne 0x10e1521c */
  if (!C.zf) goto L_10e1521c;
  /* 10e15207 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e15209 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1520c push ecx */
  push32((uint32_t)(ECX));
  /* 10e1520d call 0x10e13590 */
  push32(0x10e15212u); f_10e13590();
  /* 10e15212 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15215 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10e1521c:;
  /* 10e1521c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1521f push edx */
  push32((uint32_t)(EDX));
  /* 10e15220 call dword ptr [0x10e40220] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40220))), 0x10e15226u);
  /* 10e15226 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e15229 jmp 0x10e152e5 */
  goto L_10e152e5;
L_10e1522e:;
  /* 10e1522e cmp dword ptr [0x10e3e568], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e568))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15235 jne 0x10e152e3 */
  if (!C.zf) goto L_10e152e3;
  /* 10e1523b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1523f jne 0x10e15257 */
  if (!C.zf) goto L_10e15257;
  /* 10e15241 call dword ptr [0x10e402cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402cc))), 0x10e15247u);
  /* 10e15247 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e1524a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1524e jne 0x10e15257 */
  if (!C.zf) goto L_10e15257;
  /* 10e15250 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e15252 jmp 0x10e152e5 */
  goto L_10e152e5;
L_10e15257:;
  /* 10e15257 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e1525a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e1525d:;
  /* 10e1525d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e15260 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e15263 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e15265 je 0x10e15285 */
  if (C.zf) goto L_10e15285;
  /* 10e15267 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1526a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1526d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e15270 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e15273 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e15276 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e15278 jne 0x10e15283 */
  if (!C.zf) goto L_10e15283;
  /* 10e1527a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1527d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15280 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e15283:;
  /* 10e15283 jmp 0x10e1525d */
  goto L_10e1525d;
L_10e15285:;
  /* 10e15285 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e15288 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1528b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1528e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e15291 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10e15296 push 0x10e39af8 */
  push32((uint32_t)(0x10e39af8u));
  /* 10e1529b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1529d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e152a0 push edx */
  push32((uint32_t)(EDX));
  /* 10e152a1 call 0x10e12b00 */
  push32(0x10e152a6u); f_10e12b00();
  /* 10e152a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e152a9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e152ac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e152b0 jne 0x10e152c0 */
  if (!C.zf) goto L_10e152c0;
  /* 10e152b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e152b5 push eax */
  push32((uint32_t)(EAX));
  /* 10e152b6 call dword ptr [0x10e402c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402c0))), 0x10e152bcu);
  /* 10e152bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e152be jmp 0x10e152e5 */
  goto L_10e152e5;
L_10e152c0:;
  /* 10e152c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e152c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e152c4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e152c7 push edx */
  push32((uint32_t)(EDX));
  /* 10e152c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e152cb push eax */
  push32((uint32_t)(EAX));
  /* 10e152cc call 0x10e193e0 */
  push32(0x10e152d1u); f_10e193e0();
  /* 10e152d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e152d4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e152d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e152d8 call dword ptr [0x10e402c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402c0))), 0x10e152deu);
  /* 10e152de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e152e1 jmp 0x10e152e5 */
  goto L_10e152e5;
L_10e152e3:;
  /* 10e152e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e152e5:;
  /* 10e152e5 mov esp, ebp */
  ESP = (EBP);
  /* 10e152e7 pop ebp */
  EBP = (pop32());
  /* 10e152e8 ret  */
  ESPCHK(0x10e150d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100052f0 @ 0x10e152f0 (77 bytes, 25 insns) */
void f_10e152f0(void) {
  FTRACE(0x10e152f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e152f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e152f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e152f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e152f5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10e152fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e152fc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15300 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10e15303 push eax */
  push32((uint32_t)(EAX));
  /* 10e15304 call dword ptr [0x10e402d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402d8))), 0x10e1530au);
  /* 10e1530a mov dword ptr [0x10e3fdac], eax */
  w32((uint32_t)(0x10e3fdac), (EAX));
  /* 10e1530f cmp dword ptr [0x10e3fdac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3fdac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15316 jne 0x10e1531c */
  if (!C.zf) goto L_10e1531c;
  /* 10e15318 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1531a jmp 0x10e1533b */
  goto L_10e1533b;
L_10e1531c:;
  /* 10e1531c call 0x10e16da0 */
  push32(0x10e15321u); f_10e16da0();
  /* 10e15321 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e15323 jne 0x10e15336 */
  if (!C.zf) goto L_10e15336;
  /* 10e15325 mov ecx, dword ptr [0x10e3fdac] */
  ECX = (r32((uint32_t)(0x10e3fdac)));
  /* 10e1532b push ecx */
  push32((uint32_t)(ECX));
  /* 10e1532c call dword ptr [0x10e402d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402d4))), 0x10e15332u);
  /* 10e15332 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e15334 jmp 0x10e1533b */
  goto L_10e1533b;
L_10e15336:;
  /* 10e15336 mov eax, 1 */
  EAX = (0x1u);
L_10e1533b:;
  /* 10e1533b pop ebp */
  EBP = (pop32());
  /* 10e1533c ret  */
  ESPCHK(0x10e152f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005340 @ 0x10e15340 (156 bytes, 48 insns) */
void f_10e15340(void) {
  FTRACE(0x10e15340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e15340 push ebp */
  push32((uint32_t)(EBP));
  /* 10e15341 mov ebp, esp */
  EBP = (ESP);
  /* 10e15343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e15346 mov eax, dword ptr [0x10e3fda8] */
  EAX = (r32((uint32_t)(0x10e3fda8)));
  /* 10e1534b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e1534e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e15355 jmp 0x10e15360 */
  goto L_10e15360;
L_10e15357:;
  /* 10e15357 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1535a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1535d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e15360:;
  /* 10e15360 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15363 cmp edx, dword ptr [0x10e3fda4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e3fda4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15369 jge 0x10e153b6 */
  if ((C.sf==C.of)) goto L_10e153b6;
  /* 10e1536b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10e15370 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10e15375 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e15378 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e1537b push ecx */
  push32((uint32_t)(ECX));
  /* 10e1537c call dword ptr [0x10e402e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402e0))), 0x10e15382u);
  /* 10e15382 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10e15387 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e15389 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1538c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e1538f push eax */
  push32((uint32_t)(EAX));
  /* 10e15390 call dword ptr [0x10e402e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402e0))), 0x10e15396u);
  /* 10e15396 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e15399 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e1539c push edx */
  push32((uint32_t)(EDX));
  /* 10e1539d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e1539f mov eax, dword ptr [0x10e3fdac] */
  EAX = (r32((uint32_t)(0x10e3fdac)));
  /* 10e153a4 push eax */
  push32((uint32_t)(EAX));
  /* 10e153a5 call dword ptr [0x10e402dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402dc))), 0x10e153abu);
  /* 10e153ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e153ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e153b1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e153b4 jmp 0x10e15357 */
  goto L_10e15357;
L_10e153b6:;
  /* 10e153b6 mov edx, dword ptr [0x10e3fda8] */
  EDX = (r32((uint32_t)(0x10e3fda8)));
  /* 10e153bc push edx */
  push32((uint32_t)(EDX));
  /* 10e153bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e153bf mov eax, dword ptr [0x10e3fdac] */
  EAX = (r32((uint32_t)(0x10e3fdac)));
  /* 10e153c4 push eax */
  push32((uint32_t)(EAX));
  /* 10e153c5 call dword ptr [0x10e402dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402dc))), 0x10e153cbu);
  /* 10e153cb mov ecx, dword ptr [0x10e3fdac] */
  ECX = (r32((uint32_t)(0x10e3fdac)));
  /* 10e153d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e153d2 call dword ptr [0x10e402d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402d4))), 0x10e153d8u);
  /* 10e153d8 mov esp, ebp */
  ESP = (EBP);
  /* 10e153da pop ebp */
  EBP = (pop32());
  /* 10e153db ret  */
  ESPCHK(0x10e15340u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10e153e0 (73 bytes, 19 insns) */
void f_10e153e0(void) {
  FTRACE(0x10e153e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e153e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e153e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e153e3 cmp dword ptr [0x10e3e3fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e3fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e153ea je 0x10e153fe */
  if (C.zf) goto L_10e153fe;
  /* 10e153ec cmp dword ptr [0x10e3e3fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e3fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e153f3 jne 0x10e15427 */
  if (!C.zf) goto L_10e15427;
  /* 10e153f5 cmp dword ptr [0x10e3e400], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e400))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e153fc jne 0x10e15427 */
  if (!C.zf) goto L_10e15427;
L_10e153fe:;
  /* 10e153fe push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10e15403 call 0x10e15430 */
  push32(0x10e15408u); f_10e15430();
  /* 10e15408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1540b cmp dword ptr [0x10e3e56c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e56c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15412 je 0x10e1541a */
  if (C.zf) goto L_10e1541a;
  /* 10e15414 call dword ptr [0x10e3e56c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3e56c))), 0x10e1541au);
L_10e1541a:;
  /* 10e1541a push 0xff */
  push32((uint32_t)(0xffu));
  /* 10e1541f call 0x10e15430 */
  push32(0x10e15424u); f_10e15430();
  /* 10e15424 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e15427:;
  /* 10e15427 pop ebp */
  EBP = (pop32());
  /* 10e15428 ret  */
  ESPCHK(0x10e153e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005430 @ 0x10e15430 (447 bytes, 131 insns) */
void f_10e15430(void) {
  FTRACE(0x10e15430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e15430 push ebp */
  push32((uint32_t)(EBP));
  /* 10e15431 mov ebp, esp */
  EBP = (ESP);
  /* 10e15433 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e15439 push ebx */
  push32((uint32_t)(EBX));
  /* 10e1543a push esi */
  push32((uint32_t)(ESI));
  /* 10e1543b push edi */
  push32((uint32_t)(EDI));
  /* 10e1543c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e15443 jmp 0x10e1544e */
  goto L_10e1544e;
L_10e15445:;
  /* 10e15445 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e15448 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1544b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e1544e:;
  /* 10e1544e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15452 jae 0x10e15467 */
  if (!C.cf) goto L_10e15467;
  /* 10e15454 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e15457 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1545a cmp edx, dword ptr [ecx*8 + 0x10e3cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10e3cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15461 jne 0x10e15465 */
  if (!C.zf) goto L_10e15465;
  /* 10e15463 jmp 0x10e15467 */
  goto L_10e15467;
L_10e15465:;
  /* 10e15465 jmp 0x10e15445 */
  goto L_10e15445;
L_10e15467:;
  /* 10e15467 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1546a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1546d cmp ecx, dword ptr [eax*8 + 0x10e3cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10e3cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15474 jne 0x10e155e8 */
  if (!C.zf) goto L_10e155e8;
  /* 10e1547a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15481 je 0x10e154a4 */
  if (C.zf) goto L_10e154a4;
  /* 10e15483 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e15486 mov eax, dword ptr [edx*8 + 0x10e3cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10e3cab4)));
  /* 10e1548d push eax */
  push32((uint32_t)(EAX));
  /* 10e1548e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e15490 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e15492 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e15494 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e15496 call 0x10e11bc0 */
  push32(0x10e1549bu); f_10e11bc0();
  /* 10e1549b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1549e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e154a1 jne 0x10e154a4 */
  if (!C.zf) goto L_10e154a4;
  /* 10e154a3 int3  */
  x86_unimpl("int3 @ 0x10e154a3");
L_10e154a4:;
  /* 10e154a4 cmp dword ptr [0x10e3e3fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e3fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e154ab je 0x10e154bf */
  if (C.zf) goto L_10e154bf;
  /* 10e154ad cmp dword ptr [0x10e3e3fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e3fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e154b4 jne 0x10e154f8 */
  if (!C.zf) goto L_10e154f8;
  /* 10e154b6 cmp dword ptr [0x10e3e400], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e400))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e154bd jne 0x10e154f8 */
  if (!C.zf) goto L_10e154f8;
L_10e154bf:;
  /* 10e154bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10e154c1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10e154c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e154c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e154c8 mov eax, dword ptr [edx*8 + 0x10e3cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10e3cab4)));
  /* 10e154cf push eax */
  push32((uint32_t)(EAX));
  /* 10e154d0 call 0x10e15930 */
  push32(0x10e154d5u); f_10e15930();
  /* 10e154d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e154d8 push eax */
  push32((uint32_t)(EAX));
  /* 10e154d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e154dc mov edx, dword ptr [ecx*8 + 0x10e3cab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10e3cab4)));
  /* 10e154e3 push edx */
  push32((uint32_t)(EDX));
  /* 10e154e4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10e154e6 call dword ptr [0x10e40258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40258))), 0x10e154ecu);
  /* 10e154ec push eax */
  push32((uint32_t)(EAX));
  /* 10e154ed call dword ptr [0x10e4025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4025c))), 0x10e154f3u);
  /* 10e154f3 jmp 0x10e155e8 */
  goto L_10e155e8;
L_10e154f8:;
  /* 10e154f8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e154ff je 0x10e155e8 */
  if (C.zf) goto L_10e155e8;
  /* 10e15505 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10e1550a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10e15510 push eax */
  push32((uint32_t)(EAX));
  /* 10e15511 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e15513 call dword ptr [0x10e40274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40274))), 0x10e15519u);
  /* 10e15519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1551b jne 0x10e15531 */
  if (!C.zf) goto L_10e15531;
  /* 10e1551d push 0x10e39360 */
  push32((uint32_t)(0x10e39360u));
  /* 10e15522 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10e15528 push ecx */
  push32((uint32_t)(ECX));
  /* 10e15529 call 0x10e15ab0 */
  push32(0x10e1552eu); f_10e15ab0();
  /* 10e1552e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e15531:;
  /* 10e15531 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10e15537 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e1553a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1553d push eax */
  push32((uint32_t)(EAX));
  /* 10e1553e call 0x10e15930 */
  push32(0x10e15543u); f_10e15930();
  /* 10e15543 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15546 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15549 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1554c jbe 0x10e1557a */
  if ((C.cf||C.zf)) goto L_10e1557a;
  /* 10e1554e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10e15554 push ecx */
  push32((uint32_t)(ECX));
  /* 10e15555 call 0x10e15930 */
  push32(0x10e1555au); f_10e15930();
  /* 10e1555a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1555d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e15560 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10e15564 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e15567 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e15569 push 0x10e3935c */
  push32((uint32_t)(0x10e3935cu));
  /* 10e1556e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e15571 push ecx */
  push32((uint32_t)(ECX));
  /* 10e15572 call 0x10e16320 */
  push32(0x10e15577u); f_10e16320();
  /* 10e15577 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1557a:;
  /* 10e1557a push 0x10e39db4 */
  push32((uint32_t)(0x10e39db4u));
  /* 10e1557f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10e15585 push edx */
  push32((uint32_t)(EDX));
  /* 10e15586 call 0x10e15ab0 */
  push32(0x10e1558bu); f_10e15ab0();
  /* 10e1558b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1558e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e15591 push eax */
  push32((uint32_t)(EAX));
  /* 10e15592 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10e15598 push ecx */
  push32((uint32_t)(ECX));
  /* 10e15599 call 0x10e15ac0 */
  push32(0x10e1559eu); f_10e15ac0();
  /* 10e1559e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e155a1 push 0x10e392d4 */
  push32((uint32_t)(0x10e392d4u));
  /* 10e155a6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10e155ac push edx */
  push32((uint32_t)(EDX));
  /* 10e155ad call 0x10e15ac0 */
  push32(0x10e155b2u); f_10e15ac0();
  /* 10e155b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e155b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e155b8 mov ecx, dword ptr [eax*8 + 0x10e3cab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10e3cab4)));
  /* 10e155bf push ecx */
  push32((uint32_t)(ECX));
  /* 10e155c0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10e155c6 push edx */
  push32((uint32_t)(EDX));
  /* 10e155c7 call 0x10e15ac0 */
  push32(0x10e155ccu); f_10e15ac0();
  /* 10e155cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e155cf push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10e155d4 push 0x10e39d8c */
  push32((uint32_t)(0x10e39d8cu));
  /* 10e155d9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10e155df push eax */
  push32((uint32_t)(EAX));
  /* 10e155e0 call 0x10e16260 */
  push32(0x10e155e5u); f_10e16260();
  /* 10e155e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e155e8:;
  /* 10e155e8 pop edi */
  EDI = (pop32());
  /* 10e155e9 pop esi */
  ESI = (pop32());
  /* 10e155ea pop ebx */
  EBX = (pop32());
  /* 10e155eb mov esp, ebp */
  ESP = (EBP);
  /* 10e155ed pop ebp */
  EBP = (pop32());
  /* 10e155ee ret  */
  ESPCHK(0x10e15430u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10e155f0 (80 bytes, 27 insns) */
void f_10e155f0(void) {
  FTRACE(0x10e155f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e155f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e155f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e155f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e155f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e155fb jmp 0x10e15606 */
  goto L_10e15606;
L_10e155fd:;
  /* 10e155fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15600 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15603 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e15606:;
  /* 10e15606 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1560a jae 0x10e1561f */
  if (!C.cf) goto L_10e1561f;
  /* 10e1560c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1560f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e15612 cmp edx, dword ptr [ecx*8 + 0x10e3cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10e3cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15619 jne 0x10e1561d */
  if (!C.zf) goto L_10e1561d;
  /* 10e1561b jmp 0x10e1561f */
  goto L_10e1561f;
L_10e1561d:;
  /* 10e1561d jmp 0x10e155fd */
  goto L_10e155fd;
L_10e1561f:;
  /* 10e1561f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15622 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e15625 cmp ecx, dword ptr [eax*8 + 0x10e3cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10e3cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1562c jne 0x10e1563a */
  if (!C.zf) goto L_10e1563a;
  /* 10e1562e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15631 mov eax, dword ptr [edx*8 + 0x10e3cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10e3cab4)));
  /* 10e15638 jmp 0x10e1563c */
  goto L_10e1563c;
L_10e1563a:;
  /* 10e1563a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e1563c:;
  /* 10e1563c mov esp, ebp */
  ESP = (EBP);
  /* 10e1563e pop ebp */
  EBP = (pop32());
  /* 10e1563f ret  */
  ESPCHK(0x10e155f0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10e15640 (66 bytes, 28 insns) */
void f_10e15640(void) {
  FTRACE(0x10e15640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e15640 push ebp */
  push32((uint32_t)(EBP));
  /* 10e15641 mov ebp, esp */
  EBP = (ESP);
  /* 10e15643 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15647 jne 0x10e15667 */
  if (!C.zf) goto L_10e15667;
  /* 10e15649 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1564d jge 0x10e15667 */
  if ((C.sf==C.of)) goto L_10e15667;
  /* 10e1564f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e15651 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e15654 push eax */
  push32((uint32_t)(EAX));
  /* 10e15655 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e15658 push ecx */
  push32((uint32_t)(ECX));
  /* 10e15659 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1565c push edx */
  push32((uint32_t)(EDX));
  /* 10e1565d call 0x10e15690 */
  push32(0x10e15662u); f_10e15690();
  /* 10e15662 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15665 jmp 0x10e1567d */
  goto L_10e1567d;
L_10e15667:;
  /* 10e15667 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e15669 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1566c push eax */
  push32((uint32_t)(EAX));
  /* 10e1566d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e15670 push ecx */
  push32((uint32_t)(ECX));
  /* 10e15671 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e15674 push edx */
  push32((uint32_t)(EDX));
  /* 10e15675 call 0x10e15690 */
  push32(0x10e1567au); f_10e15690();
  /* 10e1567a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1567d:;
  /* 10e1567d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e15680 pop ebp */
  EBP = (pop32());
  /* 10e15681 ret  */
  ESPCHK(0x10e15640u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10e15690 (194 bytes, 71 insns) */
void f_10e15690(void) {
  FTRACE(0x10e15690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e15690 push ebp */
  push32((uint32_t)(EBP));
  /* 10e15691 mov ebp, esp */
  EBP = (ESP);
  /* 10e15693 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e15696 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e15699 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1569c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e156a0 je 0x10e156b9 */
  if (C.zf) goto L_10e156b9;
  /* 10e156a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e156a5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10e156a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e156ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e156ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e156b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e156b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e156b6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10e156b9:;
  /* 10e156b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e156bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e156bf:;
  /* 10e156bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e156c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e156c4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e156c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e156ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e156cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e156cf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e156d2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e156d5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e156d9 jbe 0x10e156f1 */
  if ((C.cf||C.zf)) goto L_10e156f1;
  /* 10e156db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e156de add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e156e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e156e4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e156e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e156e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e156ec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e156ef jmp 0x10e15705 */
  goto L_10e15705;
L_10e156f1:;
  /* 10e156f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e156f4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e156f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e156fa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e156fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e156ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15702 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e15705:;
  /* 10e15705 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15709 ja 0x10e156bf */
  if ((!C.cf&&!C.zf)) goto L_10e156bf;
  /* 10e1570b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1570e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10e15711 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15714 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e15717 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e1571a:;
  /* 10e1571a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1571d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e1571f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10e15722 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15725 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e15728 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e1572a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e1572c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1572f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10e15732 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10e15734 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15737 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1573a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e1573d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e15740 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15743 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e15746 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e15749 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1574c jb 0x10e1571a */
  if (C.cf) goto L_10e1571a;
  /* 10e1574e mov esp, ebp */
  ESP = (EBP);
  /* 10e15750 pop ebp */
  EBP = (pop32());
  /* 10e15751 ret  */
  ESPCHK(0x10e15690u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10e15760 (63 bytes, 24 insns) */
void f_10e15760(void) {
  FTRACE(0x10e15760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e15760 push ebp */
  push32((uint32_t)(EBP));
  /* 10e15761 mov ebp, esp */
  EBP = (ESP);
  /* 10e15763 push ecx */
  push32((uint32_t)(ECX));
  /* 10e15764 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15768 jne 0x10e15779 */
  if (!C.zf) goto L_10e15779;
  /* 10e1576a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1576e jge 0x10e15779 */
  if ((C.sf==C.of)) goto L_10e15779;
  /* 10e15770 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e15777 jmp 0x10e15780 */
  goto L_10e15780;
L_10e15779:;
  /* 10e15779 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e15780:;
  /* 10e15780 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15783 push eax */
  push32((uint32_t)(EAX));
  /* 10e15784 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e15787 push ecx */
  push32((uint32_t)(ECX));
  /* 10e15788 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1578b push edx */
  push32((uint32_t)(EDX));
  /* 10e1578c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1578f push eax */
  push32((uint32_t)(EAX));
  /* 10e15790 call 0x10e15690 */
  push32(0x10e15795u); f_10e15690();
  /* 10e15795 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15798 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1579b mov esp, ebp */
  ESP = (EBP);
  /* 10e1579d pop ebp */
  EBP = (pop32());
  /* 10e1579e ret  */
  ESPCHK(0x10e15760u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10e157a0 (30 bytes, 14 insns) */
void f_10e157a0(void) {
  FTRACE(0x10e157a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e157a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e157a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e157a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e157a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e157a8 push eax */
  push32((uint32_t)(EAX));
  /* 10e157a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e157ac push ecx */
  push32((uint32_t)(ECX));
  /* 10e157ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e157b0 push edx */
  push32((uint32_t)(EDX));
  /* 10e157b1 call 0x10e15690 */
  push32(0x10e157b6u); f_10e15690();
  /* 10e157b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e157b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e157bc pop ebp */
  EBP = (pop32());
  /* 10e157bd ret  */
  ESPCHK(0x10e157a0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10e157c0 (72 bytes, 28 insns) */
void f_10e157c0(void) {
  FTRACE(0x10e157c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e157c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e157c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e157c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e157c4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e157c8 jne 0x10e157e1 */
  if (!C.zf) goto L_10e157e1;
  /* 10e157ca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e157ce jg 0x10e157e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e157e1;
  /* 10e157d0 jl 0x10e157d8 */
  if ((C.sf!=C.of)) goto L_10e157d8;
  /* 10e157d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e157d6 jae 0x10e157e1 */
  if (!C.cf) goto L_10e157e1;
L_10e157d8:;
  /* 10e157d8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e157df jmp 0x10e157e8 */
  goto L_10e157e8;
L_10e157e1:;
  /* 10e157e1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e157e8:;
  /* 10e157e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e157eb push eax */
  push32((uint32_t)(EAX));
  /* 10e157ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e157ef push ecx */
  push32((uint32_t)(ECX));
  /* 10e157f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e157f3 push edx */
  push32((uint32_t)(EDX));
  /* 10e157f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e157f7 push eax */
  push32((uint32_t)(EAX));
  /* 10e157f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e157fb push ecx */
  push32((uint32_t)(ECX));
  /* 10e157fc call 0x10e15810 */
  push32(0x10e15801u); f_10e15810();
  /* 10e15801 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e15804 mov esp, ebp */
  ESP = (EBP);
  /* 10e15806 pop ebp */
  EBP = (pop32());
  /* 10e15807 ret  */
  ESPCHK(0x10e157c0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10e15810 (242 bytes, 91 insns) */
void f_10e15810(void) {
  FTRACE(0x10e15810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e15810 push ebp */
  push32((uint32_t)(EBP));
  /* 10e15811 mov ebp, esp */
  EBP = (ESP);
  /* 10e15813 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e15816 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e15819 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1581c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15820 je 0x10e15844 */
  if (C.zf) goto L_10e15844;
  /* 10e15822 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15825 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10e15828 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1582b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1582e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e15831 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e15834 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e15836 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e15839 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1583c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e1583e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e15841 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10e15844:;
  /* 10e15844 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15847 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e1584a:;
  /* 10e1584a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e1584d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e1584f push ecx */
  push32((uint32_t)(ECX));
  /* 10e15850 push eax */
  push32((uint32_t)(EAX));
  /* 10e15851 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e15854 push edx */
  push32((uint32_t)(EDX));
  /* 10e15855 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e15858 push eax */
  push32((uint32_t)(EAX));
  /* 10e15859 call 0x10e19790 */
  push32(0x10e1585eu); f_10e19790();
  /* 10e1585e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e15861 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e15864 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e15866 push edx */
  push32((uint32_t)(EDX));
  /* 10e15867 push ecx */
  push32((uint32_t)(ECX));
  /* 10e15868 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1586b push eax */
  push32((uint32_t)(EAX));
  /* 10e1586c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1586f push ecx */
  push32((uint32_t)(ECX));
  /* 10e15870 call 0x10e19720 */
  push32(0x10e15875u); f_10e19720();
  /* 10e15875 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e15878 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10e1587b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1587f jbe 0x10e15897 */
  if ((C.cf||C.zf)) goto L_10e15897;
  /* 10e15881 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e15884 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15887 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1588a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e1588c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1588f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15892 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e15895 jmp 0x10e158ab */
  goto L_10e158ab;
L_10e15897:;
  /* 10e15897 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1589a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1589d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e158a0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e158a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e158a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e158a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e158ab:;
  /* 10e158ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e158af ja 0x10e1584a */
  if ((!C.cf&&!C.zf)) goto L_10e1584a;
  /* 10e158b1 jb 0x10e158b9 */
  if (C.cf) goto L_10e158b9;
  /* 10e158b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e158b7 ja 0x10e1584a */
  if ((!C.cf&&!C.zf)) goto L_10e1584a;
L_10e158b9:;
  /* 10e158b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e158bc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10e158bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e158c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e158c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e158c8:;
  /* 10e158c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e158cb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e158cd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10e158d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e158d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e158d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e158d8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e158da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e158dd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10e158e0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10e158e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e158e5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e158e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e158eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e158ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e158f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e158f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e158f7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e158fa jb 0x10e158c8 */
  if (C.cf) goto L_10e158c8;
  /* 10e158fc mov esp, ebp */
  ESP = (EBP);
  /* 10e158fe pop ebp */
  EBP = (pop32());
  /* 10e158ff ret 0x14 */
  ESPCHK(0x10e15810u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10e15910 (31 bytes, 15 insns) */
void f_10e15910(void) {
  FTRACE(0x10e15910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e15910 push ebp */
  push32((uint32_t)(EBP));
  /* 10e15911 mov ebp, esp */
  EBP = (ESP);
  /* 10e15913 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e15915 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e15918 push eax */
  push32((uint32_t)(EAX));
  /* 10e15919 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1591c push ecx */
  push32((uint32_t)(ECX));
  /* 10e1591d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e15920 push edx */
  push32((uint32_t)(EDX));
  /* 10e15921 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e15924 push eax */
  push32((uint32_t)(EAX));
  /* 10e15925 call 0x10e15810 */
  push32(0x10e1592au); f_10e15810();
  /* 10e1592a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e1592d pop ebp */
  EBP = (pop32());
  /* 10e1592e ret  */
  ESPCHK(0x10e15910u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10e15930 (123 bytes, 44 insns) */
void f_10e15930(void) {
  FTRACE(0x10e15930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e15930 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e15934 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10e1593a je 0x10e15950 */
  if (C.zf) goto L_10e15950;
L_10e1593c:;
  /* 10e1593c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10e1593e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10e1593f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e15941 je 0x10e15983 */
  if (C.zf) goto L_10e15983;
  /* 10e15943 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10e15949 jne 0x10e1593c */
  if (!C.zf) goto L_10e1593c;
  /* 10e1594b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10e15950:;
  /* 10e15950 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10e15952 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10e15957 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15959 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1595c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1595e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15961 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10e15966 je 0x10e15950 */
  if (C.zf) goto L_10e15950;
  /* 10e15968 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10e1596b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e1596d je 0x10e159a1 */
  if (C.zf) goto L_10e159a1;
  /* 10e1596f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10e15971 je 0x10e15997 */
  if (C.zf) goto L_10e15997;
  /* 10e15973 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10e15978 je 0x10e1598d */
  if (C.zf) goto L_10e1598d;
  /* 10e1597a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10e1597f je 0x10e15983 */
  if (C.zf) goto L_10e15983;
  /* 10e15981 jmp 0x10e15950 */
  goto L_10e15950;
L_10e15983:;
  /* 10e15983 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10e15986 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e1598a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e1598c ret  */
  ESPCHK(0x10e15930u, _esp0);
  ESP += 4; return;
L_10e1598d:;
  /* 10e1598d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10e15990 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e15994 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e15996 ret  */
  ESPCHK(0x10e15930u, _esp0);
  ESP += 4; return;
L_10e15997:;
  /* 10e15997 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10e1599a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e1599e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e159a0 ret  */
  ESPCHK(0x10e15930u, _esp0);
  ESP += 4; return;
L_10e159a1:;
  /* 10e159a1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10e159a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e159a8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e159aa ret  */
  ESPCHK(0x10e15930u, _esp0);
  ESP += 4; return;
}

/* FUN_100059b0 @ 0x10e159b0 (249 bytes, 93 insns) */
void f_10e159b0(void) {
  FTRACE(0x10e159b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e159b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e159b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e159b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e159b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e159b7 push esi */
  push32((uint32_t)(ESI));
  /* 10e159b8 push edi */
  push32((uint32_t)(EDI));
  /* 10e159b9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10e159bc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e159bf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10e159c2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10e159c5:;
  /* 10e159c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e159c9 jne 0x10e159e9 */
  if (!C.zf) goto L_10e159e9;
  /* 10e159cb push 0x10e39dec */
  push32((uint32_t)(0x10e39decu));
  /* 10e159d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e159d2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10e159d4 push 0x10e39de0 */
  push32((uint32_t)(0x10e39de0u));
  /* 10e159d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e159db call 0x10e11bc0 */
  push32(0x10e159e0u); f_10e11bc0();
  /* 10e159e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e159e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e159e6 jne 0x10e159e9 */
  if (!C.zf) goto L_10e159e9;
  /* 10e159e8 int3  */
  x86_unimpl("int3 @ 0x10e159e8");
L_10e159e9:;
  /* 10e159e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e159eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e159ed jne 0x10e159c5 */
  if (!C.zf) goto L_10e159c5;
L_10e159ef:;
  /* 10e159ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e159f3 jne 0x10e15a13 */
  if (!C.zf) goto L_10e15a13;
  /* 10e159f5 push 0x10e39dd0 */
  push32((uint32_t)(0x10e39dd0u));
  /* 10e159fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10e159fc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10e159fe push 0x10e39de0 */
  push32((uint32_t)(0x10e39de0u));
  /* 10e15a03 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e15a05 call 0x10e11bc0 */
  push32(0x10e15a0au); f_10e11bc0();
  /* 10e15a0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15a0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15a10 jne 0x10e15a13 */
  if (!C.zf) goto L_10e15a13;
  /* 10e15a12 int3  */
  x86_unimpl("int3 @ 0x10e15a12");
L_10e15a13:;
  /* 10e15a13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e15a15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e15a17 jne 0x10e159ef */
  if (!C.zf) goto L_10e159ef;
  /* 10e15a19 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15a1c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10e15a23 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15a26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e15a29 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e15a2c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15a2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e15a32 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e15a34 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15a37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e15a3a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10e15a3d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e15a40 push edx */
  push32((uint32_t)(EDX));
  /* 10e15a41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e15a44 push eax */
  push32((uint32_t)(EAX));
  /* 10e15a45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15a48 push ecx */
  push32((uint32_t)(ECX));
  /* 10e15a49 call 0x10e19a90 */
  push32(0x10e15a4eu); f_10e19a90();
  /* 10e15a4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15a51 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e15a54 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15a57 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e15a5a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e15a5d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15a60 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10e15a63 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15a66 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15a6a jl 0x10e15a8e */
  if ((C.sf!=C.of)) goto L_10e15a8e;
  /* 10e15a6c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15a6f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e15a71 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10e15a74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e15a76 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e15a7c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10e15a7f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15a82 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e15a84 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15a87 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15a8a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e15a8c jmp 0x10e15a9f */
  goto L_10e15a9f;
L_10e15a8e:;
  /* 10e15a8e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15a91 push eax */
  push32((uint32_t)(EAX));
  /* 10e15a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e15a94 call 0x10e19810 */
  push32(0x10e15a99u); f_10e19810();
  /* 10e15a99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15a9c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10e15a9f:;
  /* 10e15a9f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e15aa2 pop edi */
  EDI = (pop32());
  /* 10e15aa3 pop esi */
  ESI = (pop32());
  /* 10e15aa4 pop ebx */
  EBX = (pop32());
  /* 10e15aa5 mov esp, ebp */
  ESP = (EBP);
  /* 10e15aa7 pop ebp */
  EBP = (pop32());
  /* 10e15aa8 ret  */
  ESPCHK(0x10e159b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ab0 @ 0x10e15ab0 (7 bytes, 3 insns) */
void f_10e15ab0(void) {
  FTRACE(0x10e15ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e15ab0 push edi */
  push32((uint32_t)(EDI));
  /* 10e15ab1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10e15ab5 jmp 0x10e15b21 */
  jmp_ind(0x10e15b21u); return;
}

/* FUN_10005ac0 @ 0x10e15ac0 (224 bytes, 84 insns) */
void f_10e15ac0(void) {
  FTRACE(0x10e15ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e15ac0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e15ac4 push edi */
  push32((uint32_t)(EDI));
  /* 10e15ac5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10e15acb je 0x10e15adc */
  if (C.zf) goto L_10e15adc;
L_10e15acd:;
  /* 10e15acd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10e15acf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10e15ad0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e15ad2 je 0x10e15b0f */
  if (C.zf) goto L_10e15b0f;
  /* 10e15ad4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10e15ada jne 0x10e15acd */
  if (!C.zf) goto L_10e15acd;
L_10e15adc:;
  /* 10e15adc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10e15ade mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10e15ae3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15ae5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e15ae8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e15aea add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15aed test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10e15af2 je 0x10e15adc */
  if (C.zf) goto L_10e15adc;
  /* 10e15af4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10e15af7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e15af9 je 0x10e15b1e */
  if (C.zf) goto L_10e15b1e;
  /* 10e15afb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10e15afd je 0x10e15b19 */
  if (C.zf) goto L_10e15b19;
  /* 10e15aff test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10e15b04 je 0x10e15b14 */
  if (C.zf) goto L_10e15b14;
  /* 10e15b06 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10e15b0b je 0x10e15b0f */
  if (C.zf) goto L_10e15b0f;
  /* 10e15b0d jmp 0x10e15adc */
  goto L_10e15adc;
L_10e15b0f:;
  /* 10e15b0f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10e15b12 jmp 0x10e15b21 */
  goto L_10e15b21;
L_10e15b14:;
  /* 10e15b14 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10e15b17 jmp 0x10e15b21 */
  goto L_10e15b21;
L_10e15b19:;
  /* 10e15b19 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10e15b1c jmp 0x10e15b21 */
  goto L_10e15b21;
L_10e15b1e:;
  /* 10e15b1e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10e15b21:;
  /* 10e15b21 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e15b25 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10e15b2b je 0x10e15b46 */
  if (C.zf) goto L_10e15b46;
L_10e15b2d:;
  /* 10e15b2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e15b2f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10e15b30 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10e15b32 je 0x10e15b98 */
  if (C.zf) goto L_10e15b98;
  /* 10e15b34 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10e15b36 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e15b37 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10e15b3d jne 0x10e15b2d */
  if (!C.zf) goto L_10e15b2d;
  /* 10e15b3f jmp 0x10e15b46 */
  goto L_10e15b46;
L_10e15b41:;
  /* 10e15b41 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10e15b43 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10e15b46:;
  /* 10e15b46 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10e15b4b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10e15b4d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15b4f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e15b52 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e15b54 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e15b56 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15b59 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10e15b5e je 0x10e15b41 */
  if (C.zf) goto L_10e15b41;
  /* 10e15b60 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10e15b62 je 0x10e15b98 */
  if (C.zf) goto L_10e15b98;
  /* 10e15b64 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10e15b66 je 0x10e15b8f */
  if (C.zf) goto L_10e15b8f;
  /* 10e15b68 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10e15b6e je 0x10e15b82 */
  if (C.zf) goto L_10e15b82;
  /* 10e15b70 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10e15b76 je 0x10e15b7a */
  if (C.zf) goto L_10e15b7a;
  /* 10e15b78 jmp 0x10e15b41 */
  goto L_10e15b41;
L_10e15b7a:;
  /* 10e15b7a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10e15b7c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e15b80 pop edi */
  EDI = (pop32());
  /* 10e15b81 ret  */
  ESPCHK(0x10e15ac0u, _esp0);
  ESP += 4; return;
L_10e15b82:;
  /* 10e15b82 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10e15b85 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e15b89 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10e15b8d pop edi */
  EDI = (pop32());
  /* 10e15b8e ret  */
  ESPCHK(0x10e15ac0u, _esp0);
  ESP += 4; return;
L_10e15b8f:;
  /* 10e15b8f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10e15b92 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e15b96 pop edi */
  EDI = (pop32());
  /* 10e15b97 ret  */
  ESPCHK(0x10e15ac0u, _esp0);
  ESP += 4; return;
L_10e15b98:;
  /* 10e15b98 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10e15b9a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e15b9e pop edi */
  EDI = (pop32());
  /* 10e15b9f ret  */
  ESPCHK(0x10e15ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ba0 @ 0x10e15ba0 (243 bytes, 91 insns) */
void f_10e15ba0(void) {
  FTRACE(0x10e15ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e15ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e15ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10e15ba3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e15ba6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e15ba7 push esi */
  push32((uint32_t)(ESI));
  /* 10e15ba8 push edi */
  push32((uint32_t)(EDI));
  /* 10e15ba9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10e15bac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e15baf:;
  /* 10e15baf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15bb3 jne 0x10e15bd3 */
  if (!C.zf) goto L_10e15bd3;
  /* 10e15bb5 push 0x10e39dec */
  push32((uint32_t)(0x10e39decu));
  /* 10e15bba push 0 */
  push32((uint32_t)(0x0u));
  /* 10e15bbc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10e15bbe push 0x10e39dfc */
  push32((uint32_t)(0x10e39dfcu));
  /* 10e15bc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e15bc5 call 0x10e11bc0 */
  push32(0x10e15bcau); f_10e11bc0();
  /* 10e15bca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15bcd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15bd0 jne 0x10e15bd3 */
  if (!C.zf) goto L_10e15bd3;
  /* 10e15bd2 int3  */
  x86_unimpl("int3 @ 0x10e15bd2");
L_10e15bd3:;
  /* 10e15bd3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e15bd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e15bd7 jne 0x10e15baf */
  if (!C.zf) goto L_10e15baf;
L_10e15bd9:;
  /* 10e15bd9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15bdd jne 0x10e15bfd */
  if (!C.zf) goto L_10e15bfd;
  /* 10e15bdf push 0x10e39dd0 */
  push32((uint32_t)(0x10e39dd0u));
  /* 10e15be4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e15be6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10e15be8 push 0x10e39dfc */
  push32((uint32_t)(0x10e39dfcu));
  /* 10e15bed push 2 */
  push32((uint32_t)(0x2u));
  /* 10e15bef call 0x10e11bc0 */
  push32(0x10e15bf4u); f_10e11bc0();
  /* 10e15bf4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15bf7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15bfa jne 0x10e15bfd */
  if (!C.zf) goto L_10e15bfd;
  /* 10e15bfc int3  */
  x86_unimpl("int3 @ 0x10e15bfc");
L_10e15bfd:;
  /* 10e15bfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e15bff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e15c01 jne 0x10e15bd9 */
  if (!C.zf) goto L_10e15bd9;
  /* 10e15c03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15c06 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10e15c0d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15c10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e15c13 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10e15c16 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15c19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e15c1c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e15c1e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15c21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e15c24 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10e15c27 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e15c2a push ecx */
  push32((uint32_t)(ECX));
  /* 10e15c2b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e15c2e push edx */
  push32((uint32_t)(EDX));
  /* 10e15c2f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15c32 push eax */
  push32((uint32_t)(EAX));
  /* 10e15c33 call 0x10e19a90 */
  push32(0x10e15c38u); f_10e19a90();
  /* 10e15c38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15c3b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e15c3e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15c41 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e15c44 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e15c47 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15c4a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e15c4d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15c50 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15c54 jl 0x10e15c78 */
  if ((C.sf!=C.of)) goto L_10e15c78;
  /* 10e15c56 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15c59 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e15c5b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e15c5e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e15c60 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e15c66 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10e15c69 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15c6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e15c6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15c71 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15c74 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e15c76 jmp 0x10e15c89 */
  goto L_10e15c89;
L_10e15c78:;
  /* 10e15c78 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e15c7b push edx */
  push32((uint32_t)(EDX));
  /* 10e15c7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e15c7e call 0x10e19810 */
  push32(0x10e15c83u); f_10e19810();
  /* 10e15c83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15c86 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10e15c89:;
  /* 10e15c89 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e15c8c pop edi */
  EDI = (pop32());
  /* 10e15c8d pop esi */
  ESI = (pop32());
  /* 10e15c8e pop ebx */
  EBX = (pop32());
  /* 10e15c8f mov esp, ebp */
  ESP = (EBP);
  /* 10e15c91 pop ebp */
  EBP = (pop32());
  /* 10e15c92 ret  */
  ESPCHK(0x10e15ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ca0 @ 0x10e15ca0 (47 bytes, 17 insns) */
void f_10e15ca0(void) {
  FTRACE(0x10e15ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e15ca0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e15ca1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15ca6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10e15caa jb 0x10e15cc0 */
  if (C.cf) goto L_10e15cc0;
L_10e15cac:;
  /* 10e15cac sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e15cb2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e15cb7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10e15cb9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15cbe jae 0x10e15cac */
  if (!C.cf) goto L_10e15cac;
L_10e15cc0:;
  /* 10e15cc0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e15cc2 mov eax, esp */
  EAX = (ESP);
  /* 10e15cc4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10e15cc6 mov esp, ecx */
  ESP = (ECX);
  /* 10e15cc8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e15cca mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e15ccd push eax */
  push32((uint32_t)(EAX));
  /* 10e15cce ret  */
  ESPCHK(0x10e15ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cd0 @ 0x10e15cd0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10e15cd0(void) {
  FTRACE(0x10e15cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e15cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e15cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10e15cd3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e15cd6 push esi */
  push32((uint32_t)(ESI));
  /* 10e15cd7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15cdb je 0x10e15ce3 */
  if (C.zf) goto L_10e15ce3;
  /* 10e15cdd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15ce1 jne 0x10e15ce8 */
  if (!C.zf) goto L_10e15ce8;
L_10e15ce3:;
  /* 10e15ce3 jmp 0x10e15eb8 */
  goto L_10e15eb8;
L_10e15ce8:;
  /* 10e15ce8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15cec je 0x10e15d04 */
  if (C.zf) goto L_10e15d04;
  /* 10e15cee cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15cf2 je 0x10e15d04 */
  if (C.zf) goto L_10e15d04;
  /* 10e15cf4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15cf8 je 0x10e15d04 */
  if (C.zf) goto L_10e15d04;
  /* 10e15cfa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15cfe jne 0x10e15de1 */
  if (!C.zf) goto L_10e15de1;
L_10e15d04:;
  /* 10e15d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e15d06 call 0x10e16500 */
  push32(0x10e15d0bu); f_10e16500();
  /* 10e15d0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15d0e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15d12 je 0x10e15d1a */
  if (C.zf) goto L_10e15d1a;
  /* 10e15d14 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15d18 jne 0x10e15d5f */
  if (!C.zf) goto L_10e15d5f;
L_10e15d1a:;
  /* 10e15d1a cmp dword ptr [0x10e3e580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15d21 jne 0x10e15d5f */
  if (!C.zf) goto L_10e15d5f;
  /* 10e15d23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e15d25 push 0x10e15f00 */
  push32((uint32_t)(0x10e15f00u));
  /* 10e15d2a call dword ptr [0x10e402e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402e4))), 0x10e15d30u);
  /* 10e15d30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15d33 jne 0x10e15d41 */
  if (!C.zf) goto L_10e15d41;
  /* 10e15d35 mov dword ptr [0x10e3e580], 1 */
  w32((uint32_t)(0x10e3e580), (0x1u));
  /* 10e15d3f jmp 0x10e15d5f */
  goto L_10e15d5f;
L_10e15d41:;
  /* 10e15d41 call dword ptr [0x10e4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4029c))), 0x10e15d47u);
  /* 10e15d47 mov esi, eax */
  ESI = (EAX);
  /* 10e15d49 call 0x10e1a9e0 */
  push32(0x10e15d4eu); f_10e1a9e0();
  /* 10e15d4e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10e15d50 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e15d52 call 0x10e165a0 */
  push32(0x10e15d57u); f_10e165a0();
  /* 10e15d57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15d5a jmp 0x10e15eb8 */
  goto L_10e15eb8;
L_10e15d5f:;
  /* 10e15d5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e15d62 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e15d65 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e15d68 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e15d6b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e15d6e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15d72 ja 0x10e15dd2 */
  if ((!C.cf&&!C.zf)) goto L_10e15dd2;
  /* 10e15d74 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e15d77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e15d79 mov dl, byte ptr [eax + 0x10e15edf] */
  DL = (r8((uint32_t)(EAX + 0x10e15edf)));
  /* 10e15d7f jmp dword ptr [edx*4 + 0x10e15ecb] */
  switch (EDX) {
    case 0: goto L_10e15d86;
    case 1: goto L_10e15dc0;
    case 2: goto L_10e15d9a;
    case 3: goto L_10e15dad;
    case 4: goto L_10e15dd2;
    default: x86_unimpl("switch@0x10e15d7f out of table"); return;
  }
L_10e15d86:;
  /* 10e15d86 mov ecx, dword ptr [0x10e3e570] */
  ECX = (r32((uint32_t)(0x10e3e570)));
  /* 10e15d8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e15d8f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e15d92 mov dword ptr [0x10e3e570], edx */
  w32((uint32_t)(0x10e3e570), (EDX));
  /* 10e15d98 jmp 0x10e15dd2 */
  goto L_10e15dd2;
L_10e15d9a:;
  /* 10e15d9a mov eax, dword ptr [0x10e3e574] */
  EAX = (r32((uint32_t)(0x10e3e574)));
  /* 10e15d9f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e15da2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e15da5 mov dword ptr [0x10e3e574], ecx */
  w32((uint32_t)(0x10e3e574), (ECX));
  /* 10e15dab jmp 0x10e15dd2 */
  goto L_10e15dd2;
L_10e15dad:;
  /* 10e15dad mov edx, dword ptr [0x10e3e578] */
  EDX = (r32((uint32_t)(0x10e3e578)));
  /* 10e15db3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e15db6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e15db9 mov dword ptr [0x10e3e578], eax */
  w32((uint32_t)(0x10e3e578), (EAX));
  /* 10e15dbe jmp 0x10e15dd2 */
  goto L_10e15dd2;
L_10e15dc0:;
  /* 10e15dc0 mov ecx, dword ptr [0x10e3e57c] */
  ECX = (r32((uint32_t)(0x10e3e57c)));
  /* 10e15dc6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e15dc9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e15dcc mov dword ptr [0x10e3e57c], edx */
  w32((uint32_t)(0x10e3e57c), (EDX));
L_10e15dd2:;
  /* 10e15dd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e15dd4 call 0x10e165a0 */
  push32(0x10e15dd9u); f_10e165a0();
  /* 10e15dd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15ddc jmp 0x10e15eb3 */
  goto L_10e15eb3;
L_10e15de1:;
  /* 10e15de1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15de5 je 0x10e15df8 */
  if (C.zf) goto L_10e15df8;
  /* 10e15de7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15deb je 0x10e15df8 */
  if (C.zf) goto L_10e15df8;
  /* 10e15ded cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15df1 je 0x10e15df8 */
  if (C.zf) goto L_10e15df8;
  /* 10e15df3 jmp 0x10e15eb8 */
  goto L_10e15eb8;
L_10e15df8:;
  /* 10e15df8 call 0x10e12540 */
  push32(0x10e15dfdu); f_10e12540();
  /* 10e15dfd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e15e00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15e03 cmp dword ptr [eax + 0x50], 0x10e3cc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10e3cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15e0a jne 0x10e15e55 */
  if (!C.zf) goto L_10e15e55;
  /* 10e15e0c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10e15e11 push 0x10e39e08 */
  push32((uint32_t)(0x10e39e08u));
  /* 10e15e16 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e15e18 mov ecx, dword ptr [0x10e3cc80] */
  ECX = (r32((uint32_t)(0x10e3cc80)));
  /* 10e15e1e push ecx */
  push32((uint32_t)(ECX));
  /* 10e15e1f call 0x10e12b00 */
  push32(0x10e15e24u); f_10e12b00();
  /* 10e15e24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15e27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15e2a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10e15e2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15e30 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15e34 je 0x10e15e53 */
  if (C.zf) goto L_10e15e53;
  /* 10e15e36 mov ecx, dword ptr [0x10e3cc80] */
  ECX = (r32((uint32_t)(0x10e3cc80)));
  /* 10e15e3c push ecx */
  push32((uint32_t)(ECX));
  /* 10e15e3d push 0x10e3cc00 */
  push32((uint32_t)(0x10e3cc00u));
  /* 10e15e42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15e45 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10e15e48 push eax */
  push32((uint32_t)(EAX));
  /* 10e15e49 call 0x10e193e0 */
  push32(0x10e15e4eu); f_10e193e0();
  /* 10e15e4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15e51 jmp 0x10e15e55 */
  goto L_10e15e55;
L_10e15e53:;
  /* 10e15e53 jmp 0x10e15eb8 */
  goto L_10e15eb8;
L_10e15e55:;
  /* 10e15e55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15e58 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10e15e5b push edx */
  push32((uint32_t)(EDX));
  /* 10e15e5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e15e5f push eax */
  push32((uint32_t)(EAX));
  /* 10e15e60 call 0x10e161e0 */
  push32(0x10e15e65u); f_10e161e0();
  /* 10e15e65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15e68 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e15e6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15e6f jne 0x10e15e73 */
  if (!C.zf) goto L_10e15e73;
  /* 10e15e71 jmp 0x10e15eb8 */
  goto L_10e15eb8;
L_10e15e73:;
  /* 10e15e73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e15e76 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e15e79 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10e15e7c:;
  /* 10e15e7c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e15e7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e15e82 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15e85 jne 0x10e15eb3 */
  if (!C.zf) goto L_10e15eb3;
  /* 10e15e87 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e15e8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e15e8d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e15e90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e15e93 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15e96 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e15e99 mov edx, dword ptr [0x10e3cc84] */
  EDX = (r32((uint32_t)(0x10e3cc84)));
  /* 10e15e9f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e15ea2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15ea5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10e15ea8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15eaa cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15ead jb 0x10e15eb1 */
  if (C.cf) goto L_10e15eb1;
  /* 10e15eaf jmp 0x10e15eb3 */
  goto L_10e15eb3;
L_10e15eb1:;
  /* 10e15eb1 jmp 0x10e15e7c */
  goto L_10e15e7c;
L_10e15eb3:;
  /* 10e15eb3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e15eb6 jmp 0x10e15ec6 */
  goto L_10e15ec6;
L_10e15eb8:;
  /* 10e15eb8 call 0x10e1a9d0 */
  push32(0x10e15ebdu); f_10e1a9d0();
  /* 10e15ebd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10e15ec3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e15ec6:;
  /* 10e15ec6 pop esi */
  ESI = (pop32());
  /* 10e15ec7 mov esp, ebp */
  ESP = (EBP);
  /* 10e15ec9 pop ebp */
  EBP = (pop32());
  /* 10e15eca ret  */
  ESPCHK(0x10e15cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f00 @ 0x10e15f00 (146 bytes, 45 insns) */
void f_10e15f00(void) {
  FTRACE(0x10e15f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e15f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10e15f01 mov ebp, esp */
  EBP = (ESP);
  /* 10e15f03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e15f06 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e15f08 call 0x10e16500 */
  push32(0x10e15f0du); f_10e16500();
  /* 10e15f0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15f10 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15f14 jne 0x10e15f2e */
  if (!C.zf) goto L_10e15f2e;
  /* 10e15f16 mov dword ptr [ebp - 8], 0x10e3e570 */
  w32((uint32_t)(EBP + -0x8), (0x10e3e570u));
  /* 10e15f1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e15f20 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e15f22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e15f25 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10e15f2c jmp 0x10e15f44 */
  goto L_10e15f44;
L_10e15f2e:;
  /* 10e15f2e mov dword ptr [ebp - 8], 0x10e3e574 */
  w32((uint32_t)(EBP + -0x8), (0x10e3e574u));
  /* 10e15f35 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e15f38 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e15f3a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e15f3d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10e15f44:;
  /* 10e15f44 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15f48 jne 0x10e15f58 */
  if (!C.zf) goto L_10e15f58;
  /* 10e15f4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e15f4c call 0x10e165a0 */
  push32(0x10e15f51u); f_10e165a0();
  /* 10e15f51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15f54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e15f56 jmp 0x10e15f8c */
  goto L_10e15f8c;
L_10e15f58:;
  /* 10e15f58 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15f5c je 0x10e15f7d */
  if (C.zf) goto L_10e15f7d;
  /* 10e15f5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e15f61 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10e15f67 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e15f69 call 0x10e165a0 */
  push32(0x10e15f6eu); f_10e165a0();
  /* 10e15f6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15f71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e15f74 push edx */
  push32((uint32_t)(EDX));
  /* 10e15f75 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10e15f78u);
  /* 10e15f78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15f7b jmp 0x10e15f87 */
  goto L_10e15f87;
L_10e15f7d:;
  /* 10e15f7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e15f7f call 0x10e165a0 */
  push32(0x10e15f84u); f_10e165a0();
  /* 10e15f84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e15f87:;
  /* 10e15f87 mov eax, 1 */
  EAX = (0x1u);
L_10e15f8c:;
  /* 10e15f8c mov esp, ebp */
  ESP = (EBP);
  /* 10e15f8e pop ebp */
  EBP = (pop32());
  /* 10e15f8f ret 4 */
  ESPCHK(0x10e15f00u, _esp0);
  ESP += 8; return;
}

/* FUN_10005fa0 @ 0x10e15fa0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10e15fa0(void) {
  FTRACE(0x10e15fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e15fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e15fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10e15fa3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e15fa6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e15fad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e15fb0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e15fb3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e15fb6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e15fb9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e15fbc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e15fc0 ja 0x10e1606e */
  if ((!C.cf&&!C.zf)) goto L_10e1606e;
  /* 10e15fc6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e15fc9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e15fcb mov dl, byte ptr [eax + 0x10e161c2] */
  DL = (r8((uint32_t)(EAX + 0x10e161c2)));
  /* 10e15fd1 jmp dword ptr [edx*4 + 0x10e161aa] */
  switch (EDX) {
    case 0: goto L_10e15fd8;
    case 1: goto L_10e16043;
    case 2: goto L_10e16029;
    case 3: goto L_10e15ff5;
    case 4: goto L_10e1600f;
    case 5: goto L_10e1606e;
    default: x86_unimpl("switch@0x10e15fd1 out of table"); return;
  }
L_10e15fd8:;
  /* 10e15fd8 mov dword ptr [ebp - 0x18], 0x10e3e570 */
  w32((uint32_t)(EBP + -0x18), (0x10e3e570u));
  /* 10e15fdf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e15fe2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e15fe4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e15fe7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e15fea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e15fed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e15ff0 jmp 0x10e16076 */
  goto L_10e16076;
L_10e15ff5:;
  /* 10e15ff5 mov dword ptr [ebp - 0x18], 0x10e3e574 */
  w32((uint32_t)(EBP + -0x18), (0x10e3e574u));
  /* 10e15ffc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e15fff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e16001 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e16004 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e16007 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1600a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e1600d jmp 0x10e16076 */
  goto L_10e16076;
L_10e1600f:;
  /* 10e1600f mov dword ptr [ebp - 0x18], 0x10e3e578 */
  w32((uint32_t)(EBP + -0x18), (0x10e3e578u));
  /* 10e16016 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e16019 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e1601b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e1601e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e16021 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16024 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e16027 jmp 0x10e16076 */
  goto L_10e16076;
L_10e16029:;
  /* 10e16029 mov dword ptr [ebp - 0x18], 0x10e3e57c */
  w32((uint32_t)(EBP + -0x18), (0x10e3e57cu));
  /* 10e16030 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e16033 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e16035 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e16038 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e1603b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1603e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e16041 jmp 0x10e16076 */
  goto L_10e16076;
L_10e16043:;
  /* 10e16043 call 0x10e12540 */
  push32(0x10e16048u); f_10e12540();
  /* 10e16048 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1604b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1604e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10e16051 push edx */
  push32((uint32_t)(EDX));
  /* 10e16052 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16055 push eax */
  push32((uint32_t)(EAX));
  /* 10e16056 call 0x10e161e0 */
  push32(0x10e1605bu); f_10e161e0();
  /* 10e1605b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1605e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16061 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e16064 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e16067 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e16069 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e1606c jmp 0x10e16076 */
  goto L_10e16076;
L_10e1606e:;
  /* 10e1606e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e16071 jmp 0x10e161a6 */
  goto L_10e161a6;
L_10e16076:;
  /* 10e16076 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1607a je 0x10e16086 */
  if (C.zf) goto L_10e16086;
  /* 10e1607c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e1607e call 0x10e16500 */
  push32(0x10e16083u); f_10e16500();
  /* 10e16083 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e16086:;
  /* 10e16086 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1608a jne 0x10e160a3 */
  if (!C.zf) goto L_10e160a3;
  /* 10e1608c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16090 je 0x10e1609c */
  if (C.zf) goto L_10e1609c;
  /* 10e16092 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e16094 call 0x10e165a0 */
  push32(0x10e16099u); f_10e165a0();
  /* 10e16099 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1609c:;
  /* 10e1609c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1609e jmp 0x10e161a6 */
  goto L_10e161a6;
L_10e160a3:;
  /* 10e160a3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e160a7 jne 0x10e160c0 */
  if (!C.zf) goto L_10e160c0;
  /* 10e160a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e160ad je 0x10e160b9 */
  if (C.zf) goto L_10e160b9;
  /* 10e160af push 1 */
  push32((uint32_t)(0x1u));
  /* 10e160b1 call 0x10e165a0 */
  push32(0x10e160b6u); f_10e165a0();
  /* 10e160b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e160b9:;
  /* 10e160b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e160bb call 0x10e122c0 */
  push32(0x10e160c0u); f_10e122c0();
L_10e160c0:;
  /* 10e160c0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e160c4 je 0x10e160d2 */
  if (C.zf) goto L_10e160d2;
  /* 10e160c6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e160ca je 0x10e160d2 */
  if (C.zf) goto L_10e160d2;
  /* 10e160cc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e160d0 jne 0x10e160fe */
  if (!C.zf) goto L_10e160fe;
L_10e160d2:;
  /* 10e160d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e160d5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10e160d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e160db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e160de mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10e160e5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e160e9 jne 0x10e160fe */
  if (!C.zf) goto L_10e160fe;
  /* 10e160eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e160ee mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10e160f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e160f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e160f7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10e160fe:;
  /* 10e160fe cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16102 jne 0x10e16140 */
  if (!C.zf) goto L_10e16140;
  /* 10e16104 mov eax, dword ptr [0x10e3cc78] */
  EAX = (r32((uint32_t)(0x10e3cc78)));
  /* 10e16109 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e1610c jmp 0x10e16117 */
  goto L_10e16117;
L_10e1610e:;
  /* 10e1610e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e16111 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16114 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10e16117:;
  /* 10e16117 mov edx, dword ptr [0x10e3cc78] */
  EDX = (r32((uint32_t)(0x10e3cc78)));
  /* 10e1611d add edx, dword ptr [0x10e3cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e3cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16123 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16126 jge 0x10e1613e */
  if ((C.sf==C.of)) goto L_10e1613e;
  /* 10e16128 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1612b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1612e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16131 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10e16134 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10e1613c jmp 0x10e1610e */
  goto L_10e1610e;
L_10e1613e:;
  /* 10e1613e jmp 0x10e16149 */
  goto L_10e16149;
L_10e16140:;
  /* 10e16140 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e16143 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10e16149:;
  /* 10e16149 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1614d je 0x10e16159 */
  if (C.zf) goto L_10e16159;
  /* 10e1614f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e16151 call 0x10e165a0 */
  push32(0x10e16156u); f_10e165a0();
  /* 10e16156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e16159:;
  /* 10e16159 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1615d jne 0x10e16170 */
  if (!C.zf) goto L_10e16170;
  /* 10e1615f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16162 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10e16165 push edx */
  push32((uint32_t)(EDX));
  /* 10e16166 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e16168 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10e1616bu);
  /* 10e1616b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1616e jmp 0x10e1617a */
  goto L_10e1617a;
L_10e16170:;
  /* 10e16170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16173 push eax */
  push32((uint32_t)(EAX));
  /* 10e16174 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10e16177u);
  /* 10e16177 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1617a:;
  /* 10e1617a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1617e je 0x10e1618c */
  if (C.zf) goto L_10e1618c;
  /* 10e16180 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16184 je 0x10e1618c */
  if (C.zf) goto L_10e1618c;
  /* 10e16186 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1618a jne 0x10e161a4 */
  if (!C.zf) goto L_10e161a4;
L_10e1618c:;
  /* 10e1618c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1618f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e16192 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10e16195 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16199 jne 0x10e161a4 */
  if (!C.zf) goto L_10e161a4;
  /* 10e1619b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1619e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e161a1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10e161a4:;
  /* 10e161a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e161a6:;
  /* 10e161a6 mov esp, ebp */
  ESP = (EBP);
  /* 10e161a8 pop ebp */
  EBP = (pop32());
  /* 10e161a9 ret  */
  ESPCHK(0x10e15fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061e0 @ 0x10e161e0 (91 bytes, 35 insns) */
void f_10e161e0(void) {
  FTRACE(0x10e161e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e161e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e161e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e161e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e161e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e161e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e161ea:;
  /* 10e161ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e161ed mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e161f0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e161f3 je 0x10e16213 */
  if (C.zf) goto L_10e16213;
  /* 10e161f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e161f8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e161fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e161fe mov ecx, dword ptr [0x10e3cc84] */
  ECX = (r32((uint32_t)(0x10e3cc84)));
  /* 10e16204 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e16207 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1620a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1620c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1620f jae 0x10e16213 */
  if (!C.cf) goto L_10e16213;
  /* 10e16211 jmp 0x10e161ea */
  goto L_10e161ea;
L_10e16213:;
  /* 10e16213 mov eax, dword ptr [0x10e3cc84] */
  EAX = (r32((uint32_t)(0x10e3cc84)));
  /* 10e16218 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e1621b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e1621e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16220 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16223 jae 0x10e16235 */
  if (!C.cf) goto L_10e16235;
  /* 10e16225 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16228 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e1622b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1622e jne 0x10e16235 */
  if (!C.zf) goto L_10e16235;
  /* 10e16230 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16233 jmp 0x10e16237 */
  goto L_10e16237;
L_10e16235:;
  /* 10e16235 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e16237:;
  /* 10e16237 mov esp, ebp */
  ESP = (EBP);
  /* 10e16239 pop ebp */
  EBP = (pop32());
  /* 10e1623a ret  */
  ESPCHK(0x10e161e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006240 @ 0x10e16240 (13 bytes, 6 insns) */
void f_10e16240(void) {
  FTRACE(0x10e16240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16240 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16241 mov ebp, esp */
  EBP = (ESP);
  /* 10e16243 call 0x10e12540 */
  push32(0x10e16248u); f_10e12540();
  /* 10e16248 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1624b pop ebp */
  EBP = (pop32());
  /* 10e1624c ret  */
  ESPCHK(0x10e16240u, _esp0);
  ESP += 4; return;
}

/* FUN_10006250 @ 0x10e16250 (13 bytes, 6 insns) */
void f_10e16250(void) {
  FTRACE(0x10e16250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16250 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16251 mov ebp, esp */
  EBP = (ESP);
  /* 10e16253 call 0x10e12540 */
  push32(0x10e16258u); f_10e12540();
  /* 10e16258 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1625b pop ebp */
  EBP = (pop32());
  /* 10e1625c ret  */
  ESPCHK(0x10e16250u, _esp0);
  ESP += 4; return;
}

/* FUN_10006260 @ 0x10e16260 (187 bytes, 54 insns) */
void f_10e16260(void) {
  FTRACE(0x10e16260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16260 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16261 mov ebp, esp */
  EBP = (ESP);
  /* 10e16263 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e16266 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e1626d cmp dword ptr [0x10e3e584], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e584))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16274 jne 0x10e162d3 */
  if (!C.zf) goto L_10e162d3;
  /* 10e16276 push 0x10e39234 */
  push32((uint32_t)(0x10e39234u));
  /* 10e1627b call dword ptr [0x10e4026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e4026c))), 0x10e16281u);
  /* 10e16281 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e16284 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16288 je 0x10e162a7 */
  if (C.zf) goto L_10e162a7;
  /* 10e1628a push 0x10e39e38 */
  push32((uint32_t)(0x10e39e38u));
  /* 10e1628f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e16292 push eax */
  push32((uint32_t)(EAX));
  /* 10e16293 call dword ptr [0x10e40268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40268))), 0x10e16299u);
  /* 10e16299 mov dword ptr [0x10e3e584], eax */
  w32((uint32_t)(0x10e3e584), (EAX));
  /* 10e1629e cmp dword ptr [0x10e3e584], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e584))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e162a5 jne 0x10e162ab */
  if (!C.zf) goto L_10e162ab;
L_10e162a7:;
  /* 10e162a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e162a9 jmp 0x10e16317 */
  goto L_10e16317;
L_10e162ab:;
  /* 10e162ab push 0x10e39e28 */
  push32((uint32_t)(0x10e39e28u));
  /* 10e162b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e162b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e162b4 call dword ptr [0x10e40268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40268))), 0x10e162bau);
  /* 10e162ba mov dword ptr [0x10e3e588], eax */
  w32((uint32_t)(0x10e3e588), (EAX));
  /* 10e162bf push 0x10e39e14 */
  push32((uint32_t)(0x10e39e14u));
  /* 10e162c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e162c7 push edx */
  push32((uint32_t)(EDX));
  /* 10e162c8 call dword ptr [0x10e40268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40268))), 0x10e162ceu);
  /* 10e162ce mov dword ptr [0x10e3e58c], eax */
  w32((uint32_t)(0x10e3e58c), (EAX));
L_10e162d3:;
  /* 10e162d3 cmp dword ptr [0x10e3e588], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e588))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e162da je 0x10e162e5 */
  if (C.zf) goto L_10e162e5;
  /* 10e162dc call dword ptr [0x10e3e588] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3e588))), 0x10e162e2u);
  /* 10e162e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e162e5:;
  /* 10e162e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e162e9 je 0x10e16301 */
  if (C.zf) goto L_10e16301;
  /* 10e162eb cmp dword ptr [0x10e3e58c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e58c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e162f2 je 0x10e16301 */
  if (C.zf) goto L_10e16301;
  /* 10e162f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e162f7 push eax */
  push32((uint32_t)(EAX));
  /* 10e162f8 call dword ptr [0x10e3e58c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3e58c))), 0x10e162feu);
  /* 10e162fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e16301:;
  /* 10e16301 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e16304 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16305 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16308 push edx */
  push32((uint32_t)(EDX));
  /* 10e16309 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1630c push eax */
  push32((uint32_t)(EAX));
  /* 10e1630d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16310 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16311 call dword ptr [0x10e3e584] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e3e584))), 0x10e16317u);
L_10e16317:;
  /* 10e16317 mov esp, ebp */
  ESP = (EBP);
  /* 10e16319 pop ebp */
  EBP = (pop32());
  /* 10e1631a ret  */
  ESPCHK(0x10e16260u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10e16320 (254 bytes, 109 insns) */
void f_10e16320(void) {
  FTRACE(0x10e16320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16320 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e16324 push edi */
  push32((uint32_t)(EDI));
  /* 10e16325 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e16327 je 0x10e163a3 */
  if (C.zf) goto L_10e163a3;
  /* 10e16329 push esi */
  push32((uint32_t)(ESI));
  /* 10e1632a push ebx */
  push32((uint32_t)(EBX));
  /* 10e1632b mov ebx, ecx */
  EBX = (ECX);
  /* 10e1632d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10e16331 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10e16337 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10e1633b jne 0x10e16344 */
  if (!C.zf) goto L_10e16344;
  /* 10e1633d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e16340 jne 0x10e163b1 */
  if (!C.zf) goto L_10e163b1;
  /* 10e16342 jmp 0x10e16365 */
  goto L_10e16365;
L_10e16344:;
  /* 10e16344 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e16346 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e16347 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e16349 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e1634a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e1634b je 0x10e16372 */
  if (C.zf) goto L_10e16372;
  /* 10e1634d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e1634f je 0x10e1637a */
  if (C.zf) goto L_10e1637a;
  /* 10e16351 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10e16357 jne 0x10e16344 */
  if (!C.zf) goto L_10e16344;
  /* 10e16359 mov ebx, ecx */
  EBX = (ECX);
  /* 10e1635b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e1635e jne 0x10e163b1 */
  if (!C.zf) goto L_10e163b1;
L_10e16360:;
  /* 10e16360 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10e16363 je 0x10e16372 */
  if (C.zf) goto L_10e16372;
L_10e16365:;
  /* 10e16365 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e16367 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e16368 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e1636a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e1636b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e1636d je 0x10e1639e */
  if (C.zf) goto L_10e1639e;
  /* 10e1636f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10e16370 jne 0x10e16365 */
  if (!C.zf) goto L_10e16365;
L_10e16372:;
  /* 10e16372 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e16376 pop ebx */
  EBX = (pop32());
  /* 10e16377 pop esi */
  ESI = (pop32());
  /* 10e16378 pop edi */
  EDI = (pop32());
  /* 10e16379 ret  */
  ESPCHK(0x10e16320u, _esp0);
  ESP += 4; return;
L_10e1637a:;
  /* 10e1637a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10e16380 je 0x10e16394 */
  if (C.zf) goto L_10e16394;
L_10e16382:;
  /* 10e16382 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e16384 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e16385 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e16386 je 0x10e16416 */
  if (C.zf) goto L_10e16416;
  /* 10e1638c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10e16392 jne 0x10e16382 */
  if (!C.zf) goto L_10e16382;
L_10e16394:;
  /* 10e16394 mov ebx, ecx */
  EBX = (ECX);
  /* 10e16396 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e16399 jne 0x10e16407 */
  if (!C.zf) goto L_10e16407;
L_10e1639b:;
  /* 10e1639b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e1639d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10e1639e:;
  /* 10e1639e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10e1639f jne 0x10e1639b */
  if (!C.zf) goto L_10e1639b;
  /* 10e163a1 pop ebx */
  EBX = (pop32());
  /* 10e163a2 pop esi */
  ESI = (pop32());
L_10e163a3:;
  /* 10e163a3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e163a7 pop edi */
  EDI = (pop32());
  /* 10e163a8 ret  */
  ESPCHK(0x10e16320u, _esp0);
  ESP += 4; return;
L_10e163a9:;
  /* 10e163a9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10e163ab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e163ae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e163af je 0x10e16360 */
  if (C.zf) goto L_10e16360;
L_10e163b1:;
  /* 10e163b1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10e163b6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10e163b8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e163ba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e163bd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e163bf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10e163c1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e163c4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10e163c9 je 0x10e163a9 */
  if (C.zf) goto L_10e163a9;
  /* 10e163cb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10e163cd je 0x10e163fb */
  if (C.zf) goto L_10e163fb;
  /* 10e163cf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10e163d1 je 0x10e163f1 */
  if (C.zf) goto L_10e163f1;
  /* 10e163d3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10e163d9 je 0x10e163e7 */
  if (C.zf) goto L_10e163e7;
  /* 10e163db test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10e163e1 jne 0x10e163a9 */
  if (!C.zf) goto L_10e163a9;
  /* 10e163e3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10e163e5 jmp 0x10e163ff */
  goto L_10e163ff;
L_10e163e7:;
  /* 10e163e7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e163ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10e163ef jmp 0x10e163ff */
  goto L_10e163ff;
L_10e163f1:;
  /* 10e163f1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e163f7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10e163f9 jmp 0x10e163ff */
  goto L_10e163ff;
L_10e163fb:;
  /* 10e163fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e163fd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10e163ff:;
  /* 10e163ff add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16402 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e16404 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e16405 je 0x10e16411 */
  if (C.zf) goto L_10e16411;
L_10e16407:;
  /* 10e16407 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e16409:;
  /* 10e16409 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10e1640b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1640e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e1640f jne 0x10e16409 */
  if (!C.zf) goto L_10e16409;
L_10e16411:;
  /* 10e16411 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10e16414 jne 0x10e1639b */
  if (!C.zf) goto L_10e1639b;
L_10e16416:;
  /* 10e16416 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e1641a pop ebx */
  EBX = (pop32());
  /* 10e1641b pop esi */
  ESI = (pop32());
  /* 10e1641c pop edi */
  EDI = (pop32());
  /* 10e1641d ret  */
  ESPCHK(0x10e16320u, _esp0);
  ESP += 4; return;
}

/* FUN_10006420 @ 0x10e16420 (55 bytes, 16 insns) */
void f_10e16420(void) {
  FTRACE(0x10e16420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16420 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16421 mov ebp, esp */
  EBP = (ESP);
  /* 10e16423 mov eax, dword ptr [0x10e3cb84] */
  EAX = (r32((uint32_t)(0x10e3cb84)));
  /* 10e16428 push eax */
  push32((uint32_t)(EAX));
  /* 10e16429 call dword ptr [0x10e402e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402e8))), 0x10e1642fu);
  /* 10e1642f mov ecx, dword ptr [0x10e3cb74] */
  ECX = (r32((uint32_t)(0x10e3cb74)));
  /* 10e16435 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16436 call dword ptr [0x10e402e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402e8))), 0x10e1643cu);
  /* 10e1643c mov edx, dword ptr [0x10e3cb64] */
  EDX = (r32((uint32_t)(0x10e3cb64)));
  /* 10e16442 push edx */
  push32((uint32_t)(EDX));
  /* 10e16443 call dword ptr [0x10e402e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402e8))), 0x10e16449u);
  /* 10e16449 mov eax, dword ptr [0x10e3cb44] */
  EAX = (r32((uint32_t)(0x10e3cb44)));
  /* 10e1644e push eax */
  push32((uint32_t)(EAX));
  /* 10e1644f call dword ptr [0x10e402e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402e8))), 0x10e16455u);
  /* 10e16455 pop ebp */
  EBP = (pop32());
  /* 10e16456 ret  */
  ESPCHK(0x10e16420u, _esp0);
  ESP += 4; return;
}

/* FUN_10006460 @ 0x10e16460 (159 bytes, 47 insns) */
void f_10e16460(void) {
  FTRACE(0x10e16460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16460 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16461 mov ebp, esp */
  EBP = (ESP);
  /* 10e16463 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16464 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e1646b jmp 0x10e16476 */
  goto L_10e16476;
L_10e1646d:;
  /* 10e1646d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16470 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16473 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e16476:;
  /* 10e16476 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1647a jge 0x10e164c9 */
  if ((C.sf==C.of)) goto L_10e164c9;
  /* 10e1647c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1647f cmp dword ptr [ecx*4 + 0x10e3cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10e3cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16487 je 0x10e164c7 */
  if (C.zf) goto L_10e164c7;
  /* 10e16489 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1648d je 0x10e164c7 */
  if (C.zf) goto L_10e164c7;
  /* 10e1648f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16493 je 0x10e164c7 */
  if (C.zf) goto L_10e164c7;
  /* 10e16495 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16499 je 0x10e164c7 */
  if (C.zf) goto L_10e164c7;
  /* 10e1649b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1649f je 0x10e164c7 */
  if (C.zf) goto L_10e164c7;
  /* 10e164a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e164a4 mov eax, dword ptr [edx*4 + 0x10e3cb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e3cb40)));
  /* 10e164ab push eax */
  push32((uint32_t)(EAX));
  /* 10e164ac call dword ptr [0x10e402b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402b0))), 0x10e164b2u);
  /* 10e164b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e164b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e164b7 mov edx, dword ptr [ecx*4 + 0x10e3cb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e3cb40)));
  /* 10e164be push edx */
  push32((uint32_t)(EDX));
  /* 10e164bf call 0x10e13590 */
  push32(0x10e164c4u); f_10e13590();
  /* 10e164c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e164c7:;
  /* 10e164c7 jmp 0x10e1646d */
  goto L_10e1646d;
L_10e164c9:;
  /* 10e164c9 mov eax, dword ptr [0x10e3cb64] */
  EAX = (r32((uint32_t)(0x10e3cb64)));
  /* 10e164ce push eax */
  push32((uint32_t)(EAX));
  /* 10e164cf call dword ptr [0x10e402b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402b0))), 0x10e164d5u);
  /* 10e164d5 mov ecx, dword ptr [0x10e3cb74] */
  ECX = (r32((uint32_t)(0x10e3cb74)));
  /* 10e164db push ecx */
  push32((uint32_t)(ECX));
  /* 10e164dc call dword ptr [0x10e402b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402b0))), 0x10e164e2u);
  /* 10e164e2 mov edx, dword ptr [0x10e3cb84] */
  EDX = (r32((uint32_t)(0x10e3cb84)));
  /* 10e164e8 push edx */
  push32((uint32_t)(EDX));
  /* 10e164e9 call dword ptr [0x10e402b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402b0))), 0x10e164efu);
  /* 10e164ef mov eax, dword ptr [0x10e3cb44] */
  EAX = (r32((uint32_t)(0x10e3cb44)));
  /* 10e164f4 push eax */
  push32((uint32_t)(EAX));
  /* 10e164f5 call dword ptr [0x10e402b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402b0))), 0x10e164fbu);
  /* 10e164fb mov esp, ebp */
  ESP = (EBP);
  /* 10e164fd pop ebp */
  EBP = (pop32());
  /* 10e164fe ret  */
  ESPCHK(0x10e16460u, _esp0);
  ESP += 4; return;
}

/* FUN_10006500 @ 0x10e16500 (151 bytes, 46 insns) */
void f_10e16500(void) {
  FTRACE(0x10e16500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16500 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16501 mov ebp, esp */
  EBP = (ESP);
  /* 10e16503 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16507 cmp dword ptr [eax*4 + 0x10e3cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10e3cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1650f jne 0x10e16582 */
  if (!C.zf) goto L_10e16582;
  /* 10e16511 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10e16516 push 0x10e39e44 */
  push32((uint32_t)(0x10e39e44u));
  /* 10e1651b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1651d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10e1651f call 0x10e12b00 */
  push32(0x10e16524u); f_10e12b00();
  /* 10e16524 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16527 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1652a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1652e jne 0x10e1653a */
  if (!C.zf) goto L_10e1653a;
  /* 10e16530 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e16532 call 0x10e11a70 */
  push32(0x10e16537u); f_10e11a70();
  /* 10e16537 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1653a:;
  /* 10e1653a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e1653c call 0x10e16500 */
  push32(0x10e16541u); f_10e16500();
  /* 10e16541 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16544 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16547 cmp dword ptr [ecx*4 + 0x10e3cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10e3cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1654f jne 0x10e1656a */
  if (!C.zf) goto L_10e1656a;
  /* 10e16551 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16554 push edx */
  push32((uint32_t)(EDX));
  /* 10e16555 call dword ptr [0x10e402e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402e8))), 0x10e1655bu);
  /* 10e1655b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1655e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16561 mov dword ptr [eax*4 + 0x10e3cb40], ecx */
  w32((uint32_t)(EAX*4 + 0x10e3cb40), (ECX));
  /* 10e16568 jmp 0x10e16578 */
  goto L_10e16578;
L_10e1656a:;
  /* 10e1656a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e1656c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1656f push edx */
  push32((uint32_t)(EDX));
  /* 10e16570 call 0x10e13590 */
  push32(0x10e16575u); f_10e13590();
  /* 10e16575 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e16578:;
  /* 10e16578 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e1657a call 0x10e165a0 */
  push32(0x10e1657fu); f_10e165a0();
  /* 10e1657f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e16582:;
  /* 10e16582 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16585 mov ecx, dword ptr [eax*4 + 0x10e3cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10e3cb40)));
  /* 10e1658c push ecx */
  push32((uint32_t)(ECX));
  /* 10e1658d call dword ptr [0x10e402ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402ec))), 0x10e16593u);
  /* 10e16593 mov esp, ebp */
  ESP = (EBP);
  /* 10e16595 pop ebp */
  EBP = (pop32());
  /* 10e16596 ret  */
  ESPCHK(0x10e16500u, _esp0);
  ESP += 4; return;
}

/* FUN_100065a0 @ 0x10e165a0 (22 bytes, 8 insns) */
void f_10e165a0(void) {
  FTRACE(0x10e165a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e165a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e165a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e165a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e165a6 mov ecx, dword ptr [eax*4 + 0x10e3cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10e3cb40)));
  /* 10e165ad push ecx */
  push32((uint32_t)(ECX));
  /* 10e165ae call dword ptr [0x10e402f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402f0))), 0x10e165b4u);
  /* 10e165b4 pop ebp */
  EBP = (pop32());
  /* 10e165b5 ret  */
  ESPCHK(0x10e165a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100065c0 @ 0x10e165c0 (26 bytes, 10 insns) */
void f_10e165c0(void) {
  FTRACE(0x10e165c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e165c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e165c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e165c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e165c6 push eax */
  push32((uint32_t)(EAX));
  /* 10e165c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e165c9 call dword ptr [0x10e402f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402f4))), 0x10e165cfu);
  /* 10e165cf push 0xff */
  push32((uint32_t)(0xffu));
  /* 10e165d4 call dword ptr [0x10e40278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40278))), 0x10e165dau);
  /* 10e165da pop ebp */
  EBP = (pop32());
  /* 10e165db ret  */
  ESPCHK(0x10e165c0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10e165e0 (446 bytes, 130 insns) */
void f_10e165e0(void) {
  FTRACE(0x10e165e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e165e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e165e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e165e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e165e6 call 0x10e12540 */
  push32(0x10e165ebu); f_10e12540();
  /* 10e165eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e165ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e165f1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10e165f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e165f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e165f8 push edx */
  push32((uint32_t)(EDX));
  /* 10e165f9 call 0x10e167a0 */
  push32(0x10e165feu); f_10e167a0();
  /* 10e165fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16601 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e16604 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16608 je 0x10e16613 */
  if (C.zf) goto L_10e16613;
  /* 10e1660a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1660d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16611 jne 0x10e16622 */
  if (!C.zf) goto L_10e16622;
L_10e16613:;
  /* 10e16613 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16616 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16617 call dword ptr [0x10e402f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402f8))), 0x10e1661du);
  /* 10e1661d jmp 0x10e1679a */
  goto L_10e1679a;
L_10e16622:;
  /* 10e16622 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e16625 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16629 jne 0x10e1663f */
  if (!C.zf) goto L_10e1663f;
  /* 10e1662b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1662e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10e16635 mov eax, 1 */
  EAX = (0x1u);
  /* 10e1663a jmp 0x10e1679a */
  goto L_10e1679a;
L_10e1663f:;
  /* 10e1663f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e16642 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16646 jne 0x10e16650 */
  if (!C.zf) goto L_10e16650;
  /* 10e16648 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e1664b jmp 0x10e1679a */
  goto L_10e1679a;
L_10e16650:;
  /* 10e16650 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e16653 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e16656 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e16659 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1665c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10e1665f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e16662 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e16665 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16668 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10e1666b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1666e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16672 jne 0x10e16777 */
  if (!C.zf) goto L_10e16777;
  /* 10e16678 mov eax, dword ptr [0x10e3cc78] */
  EAX = (r32((uint32_t)(0x10e3cc78)));
  /* 10e1667d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e16680 jmp 0x10e1668b */
  goto L_10e1668b;
L_10e16682:;
  /* 10e16682 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e16685 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16688 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10e1668b:;
  /* 10e1668b mov edx, dword ptr [0x10e3cc78] */
  EDX = (r32((uint32_t)(0x10e3cc78)));
  /* 10e16691 add edx, dword ptr [0x10e3cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e3cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16697 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1669a jge 0x10e166b2 */
  if ((C.sf==C.of)) goto L_10e166b2;
  /* 10e1669c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e1669f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e166a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e166a5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10e166a8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10e166b0 jmp 0x10e16682 */
  goto L_10e16682;
L_10e166b2:;
  /* 10e166b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e166b5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10e166b8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e166bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e166be cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e166c4 jne 0x10e166d5 */
  if (!C.zf) goto L_10e166d5;
  /* 10e166c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e166c9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10e166d0 jmp 0x10e1675d */
  goto L_10e1675d;
L_10e166d5:;
  /* 10e166d5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e166d8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e166de jne 0x10e166ec */
  if (!C.zf) goto L_10e166ec;
  /* 10e166e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e166e3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10e166ea jmp 0x10e1675d */
  goto L_10e1675d;
L_10e166ec:;
  /* 10e166ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e166ef cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e166f5 jne 0x10e16703 */
  if (!C.zf) goto L_10e16703;
  /* 10e166f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e166fa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10e16701 jmp 0x10e1675d */
  goto L_10e1675d;
L_10e16703:;
  /* 10e16703 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e16706 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1670c jne 0x10e1671a */
  if (!C.zf) goto L_10e1671a;
  /* 10e1670e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e16711 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10e16718 jmp 0x10e1675d */
  goto L_10e1675d;
L_10e1671a:;
  /* 10e1671a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1671d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16723 jne 0x10e16731 */
  if (!C.zf) goto L_10e16731;
  /* 10e16725 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e16728 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10e1672f jmp 0x10e1675d */
  goto L_10e1675d;
L_10e16731:;
  /* 10e16731 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e16734 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1673a jne 0x10e16748 */
  if (!C.zf) goto L_10e16748;
  /* 10e1673c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1673f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10e16746 jmp 0x10e1675d */
  goto L_10e1675d;
L_10e16748:;
  /* 10e16748 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1674b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16751 jne 0x10e1675d */
  if (!C.zf) goto L_10e1675d;
  /* 10e16753 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e16756 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10e1675d:;
  /* 10e1675d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e16760 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10e16763 push edx */
  push32((uint32_t)(EDX));
  /* 10e16764 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e16766 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10e16769u);
  /* 10e16769 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1676c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e1676f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e16772 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10e16775 jmp 0x10e1678e */
  goto L_10e1678e;
L_10e16777:;
  /* 10e16777 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e1677a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10e16781 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e16784 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e16787 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16788 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10e1678bu);
  /* 10e1678b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e1678e:;
  /* 10e1678e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e16791 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e16794 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10e16797 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e1679a:;
  /* 10e1679a mov esp, ebp */
  ESP = (EBP);
  /* 10e1679c pop ebp */
  EBP = (pop32());
  /* 10e1679d ret  */
  ESPCHK(0x10e165e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100067a0 @ 0x10e167a0 (89 bytes, 35 insns) */
void f_10e167a0(void) {
  FTRACE(0x10e167a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e167a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e167a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e167a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e167a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e167a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e167aa:;
  /* 10e167aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e167ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e167af cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e167b2 je 0x10e167d2 */
  if (C.zf) goto L_10e167d2;
  /* 10e167b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e167b7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e167ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e167bd mov ecx, dword ptr [0x10e3cc84] */
  ECX = (r32((uint32_t)(0x10e3cc84)));
  /* 10e167c3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e167c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e167c9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e167cb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e167ce jae 0x10e167d2 */
  if (!C.cf) goto L_10e167d2;
  /* 10e167d0 jmp 0x10e167aa */
  goto L_10e167aa;
L_10e167d2:;
  /* 10e167d2 mov eax, dword ptr [0x10e3cc84] */
  EAX = (r32((uint32_t)(0x10e3cc84)));
  /* 10e167d7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e167da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e167dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e167df cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e167e2 jae 0x10e167ee */
  if (!C.cf) goto L_10e167ee;
  /* 10e167e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e167e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e167e9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e167ec je 0x10e167f2 */
  if (C.zf) goto L_10e167f2;
L_10e167ee:;
  /* 10e167ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e167f0 jmp 0x10e167f5 */
  goto L_10e167f5;
L_10e167f2:;
  /* 10e167f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e167f5:;
  /* 10e167f5 mov esp, ebp */
  ESP = (EBP);
  /* 10e167f7 pop ebp */
  EBP = (pop32());
  /* 10e167f8 ret  */
  ESPCHK(0x10e167a0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10e16800 (48 bytes, 17 insns) */
void f_10e16800(void) {
  FTRACE(0x10e16800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16800 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16801 mov ebp, esp */
  EBP = (ESP);
  /* 10e16803 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16804 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e16806 call 0x10e16500 */
  push32(0x10e1680bu); f_10e16500();
  /* 10e1680b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1680e mov eax, dword ptr [0x10e3e5f4] */
  EAX = (r32((uint32_t)(0x10e3e5f4)));
  /* 10e16813 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e16816 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16819 mov dword ptr [0x10e3e5f4], ecx */
  w32((uint32_t)(0x10e3e5f4), (ECX));
  /* 10e1681f push 9 */
  push32((uint32_t)(0x9u));
  /* 10e16821 call 0x10e165a0 */
  push32(0x10e16826u); f_10e165a0();
  /* 10e16826 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16829 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1682c mov esp, ebp */
  ESP = (EBP);
  /* 10e1682e pop ebp */
  EBP = (pop32());
  /* 10e1682f ret  */
  ESPCHK(0x10e16800u, _esp0);
  ESP += 4; return;
}

/* FUN_10006830 @ 0x10e16830 (10 bytes, 5 insns) */
void f_10e16830(void) {
  FTRACE(0x10e16830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16830 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16831 mov ebp, esp */
  EBP = (ESP);
  /* 10e16833 mov eax, dword ptr [0x10e3e5f4] */
  EAX = (r32((uint32_t)(0x10e3e5f4)));
  /* 10e16838 pop ebp */
  EBP = (pop32());
  /* 10e16839 ret  */
  ESPCHK(0x10e16830u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10e16840 (45 bytes, 19 insns) */
void f_10e16840(void) {
  FTRACE(0x10e16840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16840 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16841 mov ebp, esp */
  EBP = (ESP);
  /* 10e16843 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16844 mov eax, dword ptr [0x10e3e5f4] */
  EAX = (r32((uint32_t)(0x10e3e5f4)));
  /* 10e16849 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e1684c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16850 je 0x10e16860 */
  if (C.zf) goto L_10e16860;
  /* 10e16852 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16855 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16856 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10e16859u);
  /* 10e16859 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e1685c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1685e jne 0x10e16864 */
  if (!C.zf) goto L_10e16864;
L_10e16860:;
  /* 10e16860 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e16862 jmp 0x10e16869 */
  goto L_10e16869;
L_10e16864:;
  /* 10e16864 mov eax, 1 */
  EAX = (0x1u);
L_10e16869:;
  /* 10e16869 mov esp, ebp */
  ESP = (EBP);
  /* 10e1686b pop ebp */
  EBP = (pop32());
  /* 10e1686c ret  */
  ESPCHK(0x10e16840u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10e16870 (88 bytes, 40 insns) */
void f_10e16870(void) {
  FTRACE(0x10e16870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16870 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e16874 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e16878 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e1687a je 0x10e168c3 */
  if (C.zf) goto L_10e168c3;
  /* 10e1687c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1687e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10e16882 push edi */
  push32((uint32_t)(EDI));
  /* 10e16883 mov edi, ecx */
  EDI = (ECX);
  /* 10e16885 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16888 jb 0x10e168b7 */
  if (C.cf) goto L_10e168b7;
  /* 10e1688a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e1688c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10e1688f je 0x10e16899 */
  if (C.zf) goto L_10e16899;
  /* 10e16891 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10e16893:;
  /* 10e16893 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e16895 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e16896 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e16897 jne 0x10e16893 */
  if (!C.zf) goto L_10e16893;
L_10e16899:;
  /* 10e16899 mov ecx, eax */
  ECX = (EAX);
  /* 10e1689b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10e1689e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e168a0 mov ecx, eax */
  ECX = (EAX);
  /* 10e168a2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10e168a5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e168a7 mov ecx, edx */
  ECX = (EDX);
  /* 10e168a9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e168ac shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e168af je 0x10e168b7 */
  if (C.zf) goto L_10e168b7;
  /* 10e168b1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e168b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e168b5 je 0x10e168bd */
  if (C.zf) goto L_10e168bd;
L_10e168b7:;
  /* 10e168b7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e168b9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e168ba dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10e168bb jne 0x10e168b7 */
  if (!C.zf) goto L_10e168b7;
L_10e168bd:;
  /* 10e168bd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e168c1 pop edi */
  EDI = (pop32());
  /* 10e168c2 ret  */
  ESPCHK(0x10e16870u, _esp0);
  ESP += 4; return;
L_10e168c3:;
  /* 10e168c3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e168c7 ret  */
  ESPCHK(0x10e16870u, _esp0);
  ESP += 4; return;
}

/* FUN_100068d0 @ 0x10e168d0 (23 bytes, 10 insns) */
void f_10e168d0(void) {
  FTRACE(0x10e168d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e168d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e168d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e168d3 mov eax, dword ptr [0x10e3e5f0] */
  EAX = (r32((uint32_t)(0x10e3e5f0)));
  /* 10e168d8 push eax */
  push32((uint32_t)(EAX));
  /* 10e168d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e168dc push ecx */
  push32((uint32_t)(ECX));
  /* 10e168dd call 0x10e168f0 */
  push32(0x10e168e2u); f_10e168f0();
  /* 10e168e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e168e5 pop ebp */
  EBP = (pop32());
  /* 10e168e6 ret  */
  ESPCHK(0x10e168d0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10e168f0 (87 bytes, 34 insns) */
void f_10e168f0(void) {
  FTRACE(0x10e168f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e168f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e168f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e168f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e168f4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e168f8 jbe 0x10e168fe */
  if ((C.cf||C.zf)) goto L_10e168fe;
  /* 10e168fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e168fc jmp 0x10e16943 */
  goto L_10e16943;
L_10e168fe:;
  /* 10e168fe cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16902 ja 0x10e16915 */
  if ((!C.cf&&!C.zf)) goto L_10e16915;
  /* 10e16904 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16907 push eax */
  push32((uint32_t)(EAX));
  /* 10e16908 call 0x10e16950 */
  push32(0x10e1690du); f_10e16950();
  /* 10e1690d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16910 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e16913 jmp 0x10e1691c */
  goto L_10e1691c;
L_10e16915:;
  /* 10e16915 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e1691c:;
  /* 10e1691c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16920 jne 0x10e16928 */
  if (!C.zf) goto L_10e16928;
  /* 10e16922 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16926 jne 0x10e1692d */
  if (!C.zf) goto L_10e1692d;
L_10e16928:;
  /* 10e16928 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1692b jmp 0x10e16943 */
  goto L_10e16943;
L_10e1692d:;
  /* 10e1692d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16930 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16931 call 0x10e16840 */
  push32(0x10e16936u); f_10e16840();
  /* 10e16936 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16939 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e1693b jne 0x10e16941 */
  if (!C.zf) goto L_10e16941;
  /* 10e1693d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e1693f jmp 0x10e16943 */
  goto L_10e16943;
L_10e16941:;
  /* 10e16941 jmp 0x10e168fe */
  goto L_10e168fe;
L_10e16943:;
  /* 10e16943 mov esp, ebp */
  ESP = (EBP);
  /* 10e16945 pop ebp */
  EBP = (pop32());
  /* 10e16946 ret  */
  ESPCHK(0x10e168f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006950 @ 0x10e16950 (109 bytes, 37 insns) */
void f_10e16950(void) {
  FTRACE(0x10e16950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16950 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16951 mov ebp, esp */
  EBP = (ESP);
  /* 10e16953 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16957 cmp eax, dword ptr [0x10e3cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e1695d ja 0x10e1698d */
  if ((!C.cf&&!C.zf)) goto L_10e1698d;
  /* 10e1695f push 9 */
  push32((uint32_t)(0x9u));
  /* 10e16961 call 0x10e16500 */
  push32(0x10e16966u); f_10e16500();
  /* 10e16966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16969 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1696c push ecx */
  push32((uint32_t)(ECX));
  /* 10e1696d call 0x10e17490 */
  push32(0x10e16972u); f_10e17490();
  /* 10e16972 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16975 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e16978 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e1697a call 0x10e165a0 */
  push32(0x10e1697fu); f_10e165a0();
  /* 10e1697f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16982 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16986 je 0x10e1698d */
  if (C.zf) goto L_10e1698d;
  /* 10e16988 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e1698b jmp 0x10e169b9 */
  goto L_10e169b9;
L_10e1698d:;
  /* 10e1698d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16991 jne 0x10e1699a */
  if (!C.zf) goto L_10e1699a;
  /* 10e16993 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10e1699a:;
  /* 10e1699a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e1699d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e169a0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10e169a3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10e169a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e169a9 push eax */
  push32((uint32_t)(EAX));
  /* 10e169aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10e169ac mov ecx, dword ptr [0x10e3fdac] */
  ECX = (r32((uint32_t)(0x10e3fdac)));
  /* 10e169b2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e169b3 call dword ptr [0x10e402fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402fc))), 0x10e169b9u);
L_10e169b9:;
  /* 10e169b9 mov esp, ebp */
  ESP = (EBP);
  /* 10e169bb pop ebp */
  EBP = (pop32());
  /* 10e169bc ret  */
  ESPCHK(0x10e16950u, _esp0);
  ESP += 4; return;
}

/* FUN_100069c0 @ 0x10e169c0 (10 bytes, 5 insns) */
void f_10e169c0(void) {
  FTRACE(0x10e169c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e169c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e169c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e169c3 mov eax, 1 */
  EAX = (0x1u);
  /* 10e169c8 pop ebp */
  EBP = (pop32());
  /* 10e169c9 ret  */
  ESPCHK(0x10e169c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100069d0 @ 0x10e169d0 (173 bytes, 59 insns) */
void f_10e169d0(void) {
  FTRACE(0x10e169d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e169d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e169d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e169d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e169d6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e169da jbe 0x10e169e3 */
  if ((C.cf||C.zf)) goto L_10e169e3;
  /* 10e169dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e169de jmp 0x10e16a79 */
  goto L_10e16a79;
L_10e169e3:;
  /* 10e169e3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e169e5 call 0x10e16500 */
  push32(0x10e169eau); f_10e16500();
  /* 10e169ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e169ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e169f0 push eax */
  push32((uint32_t)(EAX));
  /* 10e169f1 call 0x10e16e00 */
  push32(0x10e169f6u); f_10e16e00();
  /* 10e169f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e169f9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e169fc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16a00 je 0x10e16a41 */
  if (C.zf) goto L_10e16a41;
  /* 10e16a02 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e16a09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16a0c cmp ecx, dword ptr [0x10e3cc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e3cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16a12 ja 0x10e16a32 */
  if ((!C.cf&&!C.zf)) goto L_10e16a32;
  /* 10e16a14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16a17 push edx */
  push32((uint32_t)(EDX));
  /* 10e16a18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16a1b push eax */
  push32((uint32_t)(EAX));
  /* 10e16a1c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e16a1f push ecx */
  push32((uint32_t)(ECX));
  /* 10e16a20 call 0x10e17cd0 */
  push32(0x10e16a25u); f_10e17cd0();
  /* 10e16a25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16a28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e16a2a je 0x10e16a32 */
  if (C.zf) goto L_10e16a32;
  /* 10e16a2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16a2f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e16a32:;
  /* 10e16a32 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e16a34 call 0x10e165a0 */
  push32(0x10e16a39u); f_10e165a0();
  /* 10e16a39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16a3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16a3f jmp 0x10e16a79 */
  goto L_10e16a79;
L_10e16a41:;
  /* 10e16a41 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e16a43 call 0x10e165a0 */
  push32(0x10e16a48u); f_10e165a0();
  /* 10e16a48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16a4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16a4f jne 0x10e16a58 */
  if (!C.zf) goto L_10e16a58;
  /* 10e16a51 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10e16a58:;
  /* 10e16a58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16a5b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16a5e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10e16a60 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10e16a63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16a66 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16a67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16a6a push edx */
  push32((uint32_t)(EDX));
  /* 10e16a6b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10e16a6d mov eax, dword ptr [0x10e3fdac] */
  EAX = (r32((uint32_t)(0x10e3fdac)));
  /* 10e16a72 push eax */
  push32((uint32_t)(EAX));
  /* 10e16a73 call dword ptr [0x10e40300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40300))), 0x10e16a79u);
L_10e16a79:;
  /* 10e16a79 mov esp, ebp */
  ESP = (EBP);
  /* 10e16a7b pop ebp */
  EBP = (pop32());
  /* 10e16a7c ret  */
  ESPCHK(0x10e169d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a80 @ 0x10e16a80 (490 bytes, 165 insns) */
void f_10e16a80(void) {
  FTRACE(0x10e16a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16a81 mov ebp, esp */
  EBP = (ESP);
  /* 10e16a83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e16a86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16a8a jne 0x10e16a9d */
  if (!C.zf) goto L_10e16a9d;
  /* 10e16a8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16a8f push eax */
  push32((uint32_t)(EAX));
  /* 10e16a90 call 0x10e168d0 */
  push32(0x10e16a95u); f_10e168d0();
  /* 10e16a95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16a98 jmp 0x10e16c66 */
  goto L_10e16c66;
L_10e16a9d:;
  /* 10e16a9d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16aa1 jne 0x10e16ab6 */
  if (!C.zf) goto L_10e16ab6;
  /* 10e16aa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16aa6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16aa7 call 0x10e16c70 */
  push32(0x10e16aacu); f_10e16c70();
  /* 10e16aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16aaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e16ab1 jmp 0x10e16c66 */
  goto L_10e16c66;
L_10e16ab6:;
  /* 10e16ab6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e16abd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16ac1 ja 0x10e16c39 */
  if ((!C.cf&&!C.zf)) goto L_10e16c39;
  /* 10e16ac7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e16ac9 call 0x10e16500 */
  push32(0x10e16aceu); f_10e16500();
  /* 10e16ace add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16ad1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16ad4 push edx */
  push32((uint32_t)(EDX));
  /* 10e16ad5 call 0x10e16e00 */
  push32(0x10e16adau); f_10e16e00();
  /* 10e16ada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16add mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e16ae0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16ae4 je 0x10e16bfc */
  if (C.zf) goto L_10e16bfc;
  /* 10e16aea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16aed cmp eax, dword ptr [0x10e3cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e3cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16af3 ja 0x10e16b70 */
  if ((!C.cf&&!C.zf)) goto L_10e16b70;
  /* 10e16af5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16af8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16af9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16afc push edx */
  push32((uint32_t)(EDX));
  /* 10e16afd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e16b00 push eax */
  push32((uint32_t)(EAX));
  /* 10e16b01 call 0x10e17cd0 */
  push32(0x10e16b06u); f_10e17cd0();
  /* 10e16b06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e16b0b je 0x10e16b15 */
  if (C.zf) goto L_10e16b15;
  /* 10e16b0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16b10 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e16b13 jmp 0x10e16b70 */
  goto L_10e16b70;
L_10e16b15:;
  /* 10e16b15 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16b18 push edx */
  push32((uint32_t)(EDX));
  /* 10e16b19 call 0x10e17490 */
  push32(0x10e16b1eu); f_10e17490();
  /* 10e16b1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16b21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e16b24 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16b28 je 0x10e16b70 */
  if (C.zf) goto L_10e16b70;
  /* 10e16b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16b2d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10e16b30 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e16b33 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e16b36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16b39 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16b3c jae 0x10e16b46 */
  if (!C.cf) goto L_10e16b46;
  /* 10e16b3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16b41 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e16b44 jmp 0x10e16b4c */
  goto L_10e16b4c;
L_10e16b46:;
  /* 10e16b46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16b49 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10e16b4c:;
  /* 10e16b4c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e16b4f push edx */
  push32((uint32_t)(EDX));
  /* 10e16b50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16b53 push eax */
  push32((uint32_t)(EAX));
  /* 10e16b54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e16b57 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16b58 call 0x10e193e0 */
  push32(0x10e16b5du); f_10e193e0();
  /* 10e16b5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16b60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16b63 push edx */
  push32((uint32_t)(EDX));
  /* 10e16b64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e16b67 push eax */
  push32((uint32_t)(EAX));
  /* 10e16b68 call 0x10e16ec0 */
  push32(0x10e16b6du); f_10e16ec0();
  /* 10e16b6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e16b70:;
  /* 10e16b70 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16b74 jne 0x10e16bf0 */
  if (!C.zf) goto L_10e16bf0;
  /* 10e16b76 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16b7a jne 0x10e16b83 */
  if (!C.zf) goto L_10e16b83;
  /* 10e16b7c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10e16b83:;
  /* 10e16b83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16b86 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16b89 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10e16b8c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10e16b8f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16b92 push edx */
  push32((uint32_t)(EDX));
  /* 10e16b93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e16b95 mov eax, dword ptr [0x10e3fdac] */
  EAX = (r32((uint32_t)(0x10e3fdac)));
  /* 10e16b9a push eax */
  push32((uint32_t)(EAX));
  /* 10e16b9b call dword ptr [0x10e402fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402fc))), 0x10e16ba1u);
  /* 10e16ba1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e16ba4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16ba8 je 0x10e16bf0 */
  if (C.zf) goto L_10e16bf0;
  /* 10e16baa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16bad mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10e16bb0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e16bb3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e16bb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16bb9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16bbc jae 0x10e16bc6 */
  if (!C.cf) goto L_10e16bc6;
  /* 10e16bbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16bc1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e16bc4 jmp 0x10e16bcc */
  goto L_10e16bcc;
L_10e16bc6:;
  /* 10e16bc6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16bc9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10e16bcc:;
  /* 10e16bcc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e16bcf push eax */
  push32((uint32_t)(EAX));
  /* 10e16bd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16bd4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e16bd7 push edx */
  push32((uint32_t)(EDX));
  /* 10e16bd8 call 0x10e193e0 */
  push32(0x10e16bddu); f_10e193e0();
  /* 10e16bdd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16be0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16be3 push eax */
  push32((uint32_t)(EAX));
  /* 10e16be4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e16be7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16be8 call 0x10e16ec0 */
  push32(0x10e16bedu); f_10e16ec0();
  /* 10e16bed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e16bf0:;
  /* 10e16bf0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e16bf2 call 0x10e165a0 */
  push32(0x10e16bf7u); f_10e165a0();
  /* 10e16bf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16bfa jmp 0x10e16c39 */
  goto L_10e16c39;
L_10e16bfc:;
  /* 10e16bfc push 9 */
  push32((uint32_t)(0x9u));
  /* 10e16bfe call 0x10e165a0 */
  push32(0x10e16c03u); f_10e165a0();
  /* 10e16c03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16c06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16c0a jne 0x10e16c13 */
  if (!C.zf) goto L_10e16c13;
  /* 10e16c0c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10e16c13:;
  /* 10e16c13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16c16 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16c19 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10e16c1c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10e16c1f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16c22 push eax */
  push32((uint32_t)(EAX));
  /* 10e16c23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16c26 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e16c29 mov edx, dword ptr [0x10e3fdac] */
  EDX = (r32((uint32_t)(0x10e3fdac)));
  /* 10e16c2f push edx */
  push32((uint32_t)(EDX));
  /* 10e16c30 call dword ptr [0x10e40300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e40300))), 0x10e16c36u);
  /* 10e16c36 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e16c39:;
  /* 10e16c39 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16c3d jne 0x10e16c48 */
  if (!C.zf) goto L_10e16c48;
  /* 10e16c3f cmp dword ptr [0x10e3e5f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e3e5f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16c46 jne 0x10e16c4d */
  if (!C.zf) goto L_10e16c4d;
L_10e16c48:;
  /* 10e16c48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e16c4b jmp 0x10e16c66 */
  goto L_10e16c66;
L_10e16c4d:;
  /* 10e16c4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e16c50 push eax */
  push32((uint32_t)(EAX));
  /* 10e16c51 call 0x10e16840 */
  push32(0x10e16c56u); f_10e16840();
  /* 10e16c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e16c5b jne 0x10e16c61 */
  if (!C.zf) goto L_10e16c61;
  /* 10e16c5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e16c5f jmp 0x10e16c66 */
  goto L_10e16c66;
L_10e16c61:;
  /* 10e16c61 jmp 0x10e16ab6 */
  goto L_10e16ab6;
L_10e16c66:;
  /* 10e16c66 mov esp, ebp */
  ESP = (EBP);
  /* 10e16c68 pop ebp */
  EBP = (pop32());
  /* 10e16c69 ret  */
  ESPCHK(0x10e16a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c70 @ 0x10e16c70 (104 bytes, 38 insns) */
void f_10e16c70(void) {
  FTRACE(0x10e16c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e16c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e16c71 mov ebp, esp */
  EBP = (ESP);
  /* 10e16c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10e16c74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16c78 jne 0x10e16c7c */
  if (!C.zf) goto L_10e16c7c;
  /* 10e16c7a jmp 0x10e16cd4 */
  goto L_10e16cd4;
L_10e16c7c:;
  /* 10e16c7c push 9 */
  push32((uint32_t)(0x9u));
  /* 10e16c7e call 0x10e16500 */
  push32(0x10e16c83u); f_10e16500();
  /* 10e16c83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16c86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16c89 push eax */
  push32((uint32_t)(EAX));
  /* 10e16c8a call 0x10e16e00 */
  push32(0x10e16c8fu); f_10e16e00();
  /* 10e16c8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16c92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e16c95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e16c99 je 0x10e16cb7 */
  if (C.zf) goto L_10e16cb7;
  /* 10e16c9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16c9e push ecx */
  push32((uint32_t)(ECX));
  /* 10e16c9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e16ca2 push edx */
  push32((uint32_t)(EDX));
  /* 10e16ca3 call 0x10e16ec0 */
  push32(0x10e16ca8u); f_10e16ec0();
  /* 10e16ca8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16cab push 9 */
  push32((uint32_t)(0x9u));
  /* 10e16cad call 0x10e165a0 */
  push32(0x10e16cb2u); f_10e165a0();
  /* 10e16cb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16cb5 jmp 0x10e16cd4 */
  goto L_10e16cd4;
L_10e16cb7:;
  /* 10e16cb7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e16cb9 call 0x10e165a0 */
  push32(0x10e16cbeu); f_10e165a0();
  /* 10e16cbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e16cc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e16cc4 push eax */
  push32((uint32_t)(EAX));
  /* 10e16cc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e16cc7 mov ecx, dword ptr [0x10e3fdac] */
  ECX = (r32((uint32_t)(0x10e3fdac)));
  /* 10e16ccd push ecx */
  push32((uint32_t)(ECX));
  /* 10e16cce call dword ptr [0x10e402dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e402dc))), 0x10e16cd4u);
L_10e16cd4:;
  /* 10e16cd4 mov esp, ebp */
  ESP = (EBP);
  /* 10e16cd6 pop ebp */
  EBP = (pop32());
  /* 10e16cd7 ret  */
  ESPCHK(0x10e16c70u, _esp0);
  ESP += 4; return;
}

