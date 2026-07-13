#include "recomp.h"

/* thunk_FUN_10002f20 @ 0x108f1005 (5 bytes, 1 insns) */
void f_108f1005(void) {
  FTRACE(0x108f1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f1005 jmp 0x108f2f20 */
  f_108f2f20(); return;
}

/* OnInit @ 0x108f100a (5 bytes, 1 insns) */
void f_108f100a(void) {
  FTRACE(0x108f100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f100a jmp 0x108f1090 */
  f_108f1090(); return;
}

/* thunk_FUN_10001030 @ 0x108f100f (5 bytes, 1 insns) */
void f_108f100f(void) {
  FTRACE(0x108f100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f100f jmp 0x108f1030 */
  f_108f1030(); return;
}

/* ProcessScenary @ 0x108f1014 (5 bytes, 1 insns) */
void f_108f1014(void) {
  FTRACE(0x108f1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f1014 jmp 0x108f17a0 */
  f_108f17a0(); return;
}

/* FUN_10001030 @ 0x108f1030 (67 bytes, 26 insns) */
void f_108f1030(void) {
  FTRACE(0x108f1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f1030 push ebp */
  push32((uint32_t)(EBP));
  /* 108f1031 mov ebp, esp */
  EBP = (ESP);
  /* 108f1033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f1036 push ebx */
  push32((uint32_t)(EBX));
  /* 108f1037 push esi */
  push32((uint32_t)(ESI));
  /* 108f1038 push edi */
  push32((uint32_t)(EDI));
  /* 108f1039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 108f103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 108f1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 108f1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108f1048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1052 je 0x108f1056 */
  if (C.zf) goto L_108f1056;
  /* 108f1054 jmp 0x108f105b */
  goto L_108f105b;
L_108f1056:;
  /* 108f1056 call 0x108f100a */
  push32(0x108f105bu); f_108f100a();
L_108f105b:;
  /* 108f105b mov eax, 1 */
  EAX = (0x1u);
  /* 108f1060 pop edi */
  EDI = (pop32());
  /* 108f1061 pop esi */
  ESI = (pop32());
  /* 108f1062 pop ebx */
  EBX = (pop32());
  /* 108f1063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1068 call 0x108f3070 */
  push32(0x108f106du); f_108f3070();
  /* 108f106d mov esp, ebp */
  ESP = (EBP);
  /* 108f106f pop ebp */
  EBP = (pop32());
  /* 108f1070 ret 0xc */
  ESPCHK(0x108f1030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x108f1090 (1435 bytes, 382 insns) */
void f_108f1090(void) {
  FTRACE(0x108f1090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f1090 push ebp */
  push32((uint32_t)(EBP));
  /* 108f1091 mov ebp, esp */
  EBP = (ESP);
  /* 108f1093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f1096 push ebx */
  push32((uint32_t)(EBX));
  /* 108f1097 push esi */
  push32((uint32_t)(ESI));
  /* 108f1098 push edi */
  push32((uint32_t)(EDI));
  /* 108f1099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 108f109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 108f10a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 108f10a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108f10a8 mov esi, esp */
  ESI = (ESP);
  /* 108f10aa push 0x1091b140 */
  push32((uint32_t)(0x1091b140u));
  /* 108f10af push 0x10920408 */
  push32((uint32_t)(0x10920408u));
  /* 108f10b4 call dword ptr [0x109234c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c0))), 0x108f10bau);
  /* 108f10ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f10bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f10bf call 0x108f3070 */
  push32(0x108f10c4u); f_108f3070();
  /* 108f10c4 mov esi, esp */
  ESI = (ESP);
  /* 108f10c6 push 0x1091b13c */
  push32((uint32_t)(0x1091b13cu));
  /* 108f10cb push 0x10920490 */
  push32((uint32_t)(0x10920490u));
  /* 108f10d0 call dword ptr [0x109234c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c0))), 0x108f10d6u);
  /* 108f10d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f10d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f10db call 0x108f3070 */
  push32(0x108f10e0u); f_108f3070();
  /* 108f10e0 mov esi, esp */
  ESI = (ESP);
  /* 108f10e2 push 0x1091b138 */
  push32((uint32_t)(0x1091b138u));
  /* 108f10e7 push 0x10920498 */
  push32((uint32_t)(0x10920498u));
  /* 108f10ec call dword ptr [0x109234c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c0))), 0x108f10f2u);
  /* 108f10f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f10f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f10f7 call 0x108f3070 */
  push32(0x108f10fcu); f_108f3070();
  /* 108f10fc mov esi, esp */
  ESI = (ESP);
  /* 108f10fe push 0x1091b134 */
  push32((uint32_t)(0x1091b134u));
  /* 108f1103 push 0x10920410 */
  push32((uint32_t)(0x10920410u));
  /* 108f1108 call dword ptr [0x109234c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c0))), 0x108f110eu);
  /* 108f110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1113 call 0x108f3070 */
  push32(0x108f1118u); f_108f3070();
  /* 108f1118 mov esi, esp */
  ESI = (ESP);
  /* 108f111a push 0x1091b130 */
  push32((uint32_t)(0x1091b130u));
  /* 108f111f push 0x10920418 */
  push32((uint32_t)(0x10920418u));
  /* 108f1124 call dword ptr [0x109234c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c0))), 0x108f112au);
  /* 108f112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f112f call 0x108f3070 */
  push32(0x108f1134u); f_108f3070();
  /* 108f1134 mov esi, esp */
  ESI = (ESP);
  /* 108f1136 push 0x1091b12c */
  push32((uint32_t)(0x1091b12cu));
  /* 108f113b push 0x10920420 */
  push32((uint32_t)(0x10920420u));
  /* 108f1140 call dword ptr [0x109234c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c0))), 0x108f1146u);
  /* 108f1146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f114b call 0x108f3070 */
  push32(0x108f1150u); f_108f3070();
  /* 108f1150 mov esi, esp */
  ESI = (ESP);
  /* 108f1152 push 0x1091b128 */
  push32((uint32_t)(0x1091b128u));
  /* 108f1157 push 0x109204e8 */
  push32((uint32_t)(0x109204e8u));
  /* 108f115c call dword ptr [0x109234c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c0))), 0x108f1162u);
  /* 108f1162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1167 call 0x108f3070 */
  push32(0x108f116cu); f_108f3070();
  /* 108f116c mov esi, esp */
  ESI = (ESP);
  /* 108f116e push 0x1091b124 */
  push32((uint32_t)(0x1091b124u));
  /* 108f1173 push 0x10920428 */
  push32((uint32_t)(0x10920428u));
  /* 108f1178 call dword ptr [0x109234c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c0))), 0x108f117eu);
  /* 108f117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1183 call 0x108f3070 */
  push32(0x108f1188u); f_108f3070();
  /* 108f1188 mov esi, esp */
  ESI = (ESP);
  /* 108f118a push 0x1091b120 */
  push32((uint32_t)(0x1091b120u));
  /* 108f118f push 0x10920430 */
  push32((uint32_t)(0x10920430u));
  /* 108f1194 call dword ptr [0x109234c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c0))), 0x108f119au);
  /* 108f119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f119f call 0x108f3070 */
  push32(0x108f11a4u); f_108f3070();
  /* 108f11a4 mov esi, esp */
  ESI = (ESP);
  /* 108f11a6 push 0x1091b11c */
  push32((uint32_t)(0x1091b11cu));
  /* 108f11ab push 0x10920438 */
  push32((uint32_t)(0x10920438u));
  /* 108f11b0 call dword ptr [0x109234c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c0))), 0x108f11b6u);
  /* 108f11b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f11b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f11bb call 0x108f3070 */
  push32(0x108f11c0u); f_108f3070();
  /* 108f11c0 mov esi, esp */
  ESI = (ESP);
  /* 108f11c2 push 0x1091b118 */
  push32((uint32_t)(0x1091b118u));
  /* 108f11c7 push 0x10920440 */
  push32((uint32_t)(0x10920440u));
  /* 108f11cc call dword ptr [0x109234c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c0))), 0x108f11d2u);
  /* 108f11d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f11d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f11d7 call 0x108f3070 */
  push32(0x108f11dcu); f_108f3070();
  /* 108f11dc mov esi, esp */
  ESI = (ESP);
  /* 108f11de push 0x1091b114 */
  push32((uint32_t)(0x1091b114u));
  /* 108f11e3 push 0x10920448 */
  push32((uint32_t)(0x10920448u));
  /* 108f11e8 call dword ptr [0x109234c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c0))), 0x108f11eeu);
  /* 108f11ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f11f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f11f3 call 0x108f3070 */
  push32(0x108f11f8u); f_108f3070();
  /* 108f11f8 mov esi, esp */
  ESI = (ESP);
  /* 108f11fa push 0x1091b110 */
  push32((uint32_t)(0x1091b110u));
  /* 108f11ff push 0x109204a0 */
  push32((uint32_t)(0x109204a0u));
  /* 108f1204 call dword ptr [0x109234c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c4))), 0x108f120au);
  /* 108f120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f120f call 0x108f3070 */
  push32(0x108f1214u); f_108f3070();
  /* 108f1214 mov esi, esp */
  ESI = (ESP);
  /* 108f1216 push 0x1091b10c */
  push32((uint32_t)(0x1091b10cu));
  /* 108f121b push 0x109204a8 */
  push32((uint32_t)(0x109204a8u));
  /* 108f1220 call dword ptr [0x109234c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c4))), 0x108f1226u);
  /* 108f1226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f122b call 0x108f3070 */
  push32(0x108f1230u); f_108f3070();
  /* 108f1230 mov esi, esp */
  ESI = (ESP);
  /* 108f1232 push 0x1091b108 */
  push32((uint32_t)(0x1091b108u));
  /* 108f1237 push 0x109204b0 */
  push32((uint32_t)(0x109204b0u));
  /* 108f123c call dword ptr [0x109234c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c4))), 0x108f1242u);
  /* 108f1242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1247 call 0x108f3070 */
  push32(0x108f124cu); f_108f3070();
  /* 108f124c mov esi, esp */
  ESI = (ESP);
  /* 108f124e push 0x1091b104 */
  push32((uint32_t)(0x1091b104u));
  /* 108f1253 push 0x109204b8 */
  push32((uint32_t)(0x109204b8u));
  /* 108f1258 call dword ptr [0x109234c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c4))), 0x108f125eu);
  /* 108f125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1263 call 0x108f3070 */
  push32(0x108f1268u); f_108f3070();
  /* 108f1268 mov esi, esp */
  ESI = (ESP);
  /* 108f126a push 0x1091b100 */
  push32((uint32_t)(0x1091b100u));
  /* 108f126f push 0x109204c0 */
  push32((uint32_t)(0x109204c0u));
  /* 108f1274 call dword ptr [0x109234c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c4))), 0x108f127au);
  /* 108f127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f127f call 0x108f3070 */
  push32(0x108f1284u); f_108f3070();
  /* 108f1284 mov esi, esp */
  ESI = (ESP);
  /* 108f1286 push 0x1091b0fc */
  push32((uint32_t)(0x1091b0fcu));
  /* 108f128b push 0x109204c8 */
  push32((uint32_t)(0x109204c8u));
  /* 108f1290 call dword ptr [0x109234c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c4))), 0x108f1296u);
  /* 108f1296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f129b call 0x108f3070 */
  push32(0x108f12a0u); f_108f3070();
  /* 108f12a0 mov esi, esp */
  ESI = (ESP);
  /* 108f12a2 push 0x1091b0f8 */
  push32((uint32_t)(0x1091b0f8u));
  /* 108f12a7 push 0x109204d0 */
  push32((uint32_t)(0x109204d0u));
  /* 108f12ac call dword ptr [0x109234c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c4))), 0x108f12b2u);
  /* 108f12b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f12b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f12b7 call 0x108f3070 */
  push32(0x108f12bcu); f_108f3070();
  /* 108f12bc mov esi, esp */
  ESI = (ESP);
  /* 108f12be push 0x1091b0f4 */
  push32((uint32_t)(0x1091b0f4u));
  /* 108f12c3 push 0x10920530 */
  push32((uint32_t)(0x10920530u));
  /* 108f12c8 call dword ptr [0x109234c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c4))), 0x108f12ceu);
  /* 108f12ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f12d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f12d3 call 0x108f3070 */
  push32(0x108f12d8u); f_108f3070();
  /* 108f12d8 mov esi, esp */
  ESI = (ESP);
  /* 108f12da push 0x1091b0f0 */
  push32((uint32_t)(0x1091b0f0u));
  /* 108f12df push 0x109204d8 */
  push32((uint32_t)(0x109204d8u));
  /* 108f12e4 call dword ptr [0x109234c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c4))), 0x108f12eau);
  /* 108f12ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f12ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f12ef call 0x108f3070 */
  push32(0x108f12f4u); f_108f3070();
  /* 108f12f4 mov esi, esp */
  ESI = (ESP);
  /* 108f12f6 push 0x1091b0ec */
  push32((uint32_t)(0x1091b0ecu));
  /* 108f12fb push 0x10920538 */
  push32((uint32_t)(0x10920538u));
  /* 108f1300 call dword ptr [0x109234c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c4))), 0x108f1306u);
  /* 108f1306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f130b call 0x108f3070 */
  push32(0x108f1310u); f_108f3070();
  /* 108f1310 mov esi, esp */
  ESI = (ESP);
  /* 108f1312 push 0x1091b0e8 */
  push32((uint32_t)(0x1091b0e8u));
  /* 108f1317 push 0x109204e0 */
  push32((uint32_t)(0x109204e0u));
  /* 108f131c call dword ptr [0x109234c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c4))), 0x108f1322u);
  /* 108f1322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1327 call 0x108f3070 */
  push32(0x108f132cu); f_108f3070();
  /* 108f132c mov esi, esp */
  ESI = (ESP);
  /* 108f132e push 0x1091b0e4 */
  push32((uint32_t)(0x1091b0e4u));
  /* 108f1333 push 0x10920540 */
  push32((uint32_t)(0x10920540u));
  /* 108f1338 call dword ptr [0x109234c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c4))), 0x108f133eu);
  /* 108f133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1343 call 0x108f3070 */
  push32(0x108f1348u); f_108f3070();
  /* 108f1348 mov esi, esp */
  ESI = (ESP);
  /* 108f134a push 0x1091b0e0 */
  push32((uint32_t)(0x1091b0e0u));
  /* 108f134f push 0x10920528 */
  push32((uint32_t)(0x10920528u));
  /* 108f1354 call dword ptr [0x109234c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c4))), 0x108f135au);
  /* 108f135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f135f call 0x108f3070 */
  push32(0x108f1364u); f_108f3070();
  /* 108f1364 mov esi, esp */
  ESI = (ESP);
  /* 108f1366 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f1368 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f136a call dword ptr [0x109234c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c8))), 0x108f1370u);
  /* 108f1370 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1373 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1375 call 0x108f3070 */
  push32(0x108f137au); f_108f3070();
  /* 108f137a mov esi, esp */
  ESI = (ESP);
  /* 108f137c push 0x16 */
  push32((uint32_t)(0x16u));
  /* 108f137e push 1 */
  push32((uint32_t)(0x1u));
  /* 108f1380 call dword ptr [0x109234c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c8))), 0x108f1386u);
  /* 108f1386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f138b call 0x108f3070 */
  push32(0x108f1390u); f_108f3070();
  /* 108f1390 mov esi, esp */
  ESI = (ESP);
  /* 108f1392 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 108f1394 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f1396 call dword ptr [0x109234c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c8))), 0x108f139cu);
  /* 108f139c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f139f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f13a1 call 0x108f3070 */
  push32(0x108f13a6u); f_108f3070();
  /* 108f13a6 mov esi, esp */
  ESI = (ESP);
  /* 108f13a8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 108f13aa push 4 */
  push32((uint32_t)(0x4u));
  /* 108f13ac call dword ptr [0x109234c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c8))), 0x108f13b2u);
  /* 108f13b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f13b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f13b7 call 0x108f3070 */
  push32(0x108f13bcu); f_108f3070();
  /* 108f13bc mov esi, esp */
  ESI = (ESP);
  /* 108f13be push 0x1091b0c8 */
  push32((uint32_t)(0x1091b0c8u));
  /* 108f13c3 push 0x10920518 */
  push32((uint32_t)(0x10920518u));
  /* 108f13c8 call dword ptr [0x109234cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234cc))), 0x108f13ceu);
  /* 108f13ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f13d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f13d3 call 0x108f3070 */
  push32(0x108f13d8u); f_108f3070();
  /* 108f13d8 mov esi, esp */
  ESI = (ESP);
  /* 108f13da push 0x1091b0b0 */
  push32((uint32_t)(0x1091b0b0u));
  /* 108f13df push 0x10920548 */
  push32((uint32_t)(0x10920548u));
  /* 108f13e4 call dword ptr [0x109234cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234cc))), 0x108f13eau);
  /* 108f13ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f13ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f13ef call 0x108f3070 */
  push32(0x108f13f4u); f_108f3070();
  /* 108f13f4 mov esi, esp */
  ESI = (ESP);
  /* 108f13f6 push 0x1091b0a0 */
  push32((uint32_t)(0x1091b0a0u));
  /* 108f13fb push 0x109204f8 */
  push32((uint32_t)(0x109204f8u));
  /* 108f1400 call dword ptr [0x109234cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234cc))), 0x108f1406u);
  /* 108f1406 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1409 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f140b call 0x108f3070 */
  push32(0x108f1410u); f_108f3070();
  /* 108f1410 mov esi, esp */
  ESI = (ESP);
  /* 108f1412 push 0x1091b090 */
  push32((uint32_t)(0x1091b090u));
  /* 108f1417 push 0x10920520 */
  push32((uint32_t)(0x10920520u));
  /* 108f141c call dword ptr [0x109234cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234cc))), 0x108f1422u);
  /* 108f1422 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1425 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1427 call 0x108f3070 */
  push32(0x108f142cu); f_108f3070();
  /* 108f142c mov esi, esp */
  ESI = (ESP);
  /* 108f142e push 0x1091b080 */
  push32((uint32_t)(0x1091b080u));
  /* 108f1433 push 0x10920508 */
  push32((uint32_t)(0x10920508u));
  /* 108f1438 call dword ptr [0x109234cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234cc))), 0x108f143eu);
  /* 108f143e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1441 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1443 call 0x108f3070 */
  push32(0x108f1448u); f_108f3070();
  /* 108f1448 mov esi, esp */
  ESI = (ESP);
  /* 108f144a push 0x1091b070 */
  push32((uint32_t)(0x1091b070u));
  /* 108f144f push 0x10920510 */
  push32((uint32_t)(0x10920510u));
  /* 108f1454 call dword ptr [0x109234cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234cc))), 0x108f145au);
  /* 108f145a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f145d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f145f call 0x108f3070 */
  push32(0x108f1464u); f_108f3070();
  /* 108f1464 mov esi, esp */
  ESI = (ESP);
  /* 108f1466 push 0x1091b068 */
  push32((uint32_t)(0x1091b068u));
  /* 108f146b push 0x109203e0 */
  push32((uint32_t)(0x109203e0u));
  /* 108f1470 call dword ptr [0x109234d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234d0))), 0x108f1476u);
  /* 108f1476 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1479 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f147b call 0x108f3070 */
  push32(0x108f1480u); f_108f3070();
  /* 108f1480 mov esi, esp */
  ESI = (ESP);
  /* 108f1482 push 0x1091b058 */
  push32((uint32_t)(0x1091b058u));
  /* 108f1487 push 0x109203e8 */
  push32((uint32_t)(0x109203e8u));
  /* 108f148c call dword ptr [0x109234d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234d0))), 0x108f1492u);
  /* 108f1492 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1495 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1497 call 0x108f3070 */
  push32(0x108f149cu); f_108f3070();
  /* 108f149c mov esi, esp */
  ESI = (ESP);
  /* 108f149e push 0x1091b048 */
  push32((uint32_t)(0x1091b048u));
  /* 108f14a3 push 0x109203f0 */
  push32((uint32_t)(0x109203f0u));
  /* 108f14a8 call dword ptr [0x109234d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234d0))), 0x108f14aeu);
  /* 108f14ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f14b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f14b3 call 0x108f3070 */
  push32(0x108f14b8u); f_108f3070();
  /* 108f14b8 mov esi, esp */
  ESI = (ESP);
  /* 108f14ba push 0x1091b038 */
  push32((uint32_t)(0x1091b038u));
  /* 108f14bf push 0x109203f8 */
  push32((uint32_t)(0x109203f8u));
  /* 108f14c4 call dword ptr [0x109234d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234d0))), 0x108f14cau);
  /* 108f14ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f14cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f14cf call 0x108f3070 */
  push32(0x108f14d4u); f_108f3070();
  /* 108f14d4 mov esi, esp */
  ESI = (ESP);
  /* 108f14d6 push 0x1091b030 */
  push32((uint32_t)(0x1091b030u));
  /* 108f14db push 0x10920500 */
  push32((uint32_t)(0x10920500u));
  /* 108f14e0 call dword ptr [0x109234d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234d0))), 0x108f14e6u);
  /* 108f14e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f14e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f14eb call 0x108f3070 */
  push32(0x108f14f0u); f_108f3070();
  /* 108f14f0 mov esi, esp */
  ESI = (ESP);
  /* 108f14f2 push 8 */
  push32((uint32_t)(0x8u));
  /* 108f14f4 push 0x10920400 */
  push32((uint32_t)(0x10920400u));
  /* 108f14f9 call dword ptr [0x109234d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234d4))), 0x108f14ffu);
  /* 108f14ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1502 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1504 call 0x108f3070 */
  push32(0x108f1509u); f_108f3070();
  /* 108f1509 mov esi, esp */
  ESI = (ESP);
  /* 108f150b push 8 */
  push32((uint32_t)(0x8u));
  /* 108f150d push 0x10920478 */
  push32((uint32_t)(0x10920478u));
  /* 108f1512 call dword ptr [0x109234d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234d4))), 0x108f1518u);
  /* 108f1518 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f151b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f151d call 0x108f3070 */
  push32(0x108f1522u); f_108f3070();
  /* 108f1522 mov esi, esp */
  ESI = (ESP);
  /* 108f1524 push 0x10920468 */
  push32((uint32_t)(0x10920468u));
  /* 108f1529 call dword ptr [0x109234d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234d8))), 0x108f152fu);
  /* 108f152f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1532 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1534 call 0x108f3070 */
  push32(0x108f1539u); f_108f3070();
  /* 108f1539 mov esi, esp */
  ESI = (ESP);
  /* 108f153b push 8 */
  push32((uint32_t)(0x8u));
  /* 108f153d push 0x10920450 */
  push32((uint32_t)(0x10920450u));
  /* 108f1542 call dword ptr [0x109234d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234d4))), 0x108f1548u);
  /* 108f1548 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f154b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f154d call 0x108f3070 */
  push32(0x108f1552u); f_108f3070();
  /* 108f1552 mov esi, esp */
  ESI = (ESP);
  /* 108f1554 push 8 */
  push32((uint32_t)(0x8u));
  /* 108f1556 push 0x10920458 */
  push32((uint32_t)(0x10920458u));
  /* 108f155b call dword ptr [0x109234d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234d4))), 0x108f1561u);
  /* 108f1561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1564 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1566 call 0x108f3070 */
  push32(0x108f156bu); f_108f3070();
  /* 108f156b mov esi, esp */
  ESI = (ESP);
  /* 108f156d push 8 */
  push32((uint32_t)(0x8u));
  /* 108f156f push 0x10920460 */
  push32((uint32_t)(0x10920460u));
  /* 108f1574 call dword ptr [0x109234d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234d4))), 0x108f157au);
  /* 108f157a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f157d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f157f call 0x108f3070 */
  push32(0x108f1584u); f_108f3070();
  /* 108f1584 mov esi, esp */
  ESI = (ESP);
  /* 108f1586 push 8 */
  push32((uint32_t)(0x8u));
  /* 108f1588 push 0x10920470 */
  push32((uint32_t)(0x10920470u));
  /* 108f158d call dword ptr [0x109234d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234d4))), 0x108f1593u);
  /* 108f1593 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1596 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1598 call 0x108f3070 */
  push32(0x108f159du); f_108f3070();
  /* 108f159d mov esi, esp */
  ESI = (ESP);
  /* 108f159f push 8 */
  push32((uint32_t)(0x8u));
  /* 108f15a1 push 0x10920480 */
  push32((uint32_t)(0x10920480u));
  /* 108f15a6 call dword ptr [0x109234d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234d4))), 0x108f15acu);
  /* 108f15ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f15af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f15b1 call 0x108f3070 */
  push32(0x108f15b6u); f_108f3070();
  /* 108f15b6 mov esi, esp */
  ESI = (ESP);
  /* 108f15b8 push 8 */
  push32((uint32_t)(0x8u));
  /* 108f15ba push 0x10920488 */
  push32((uint32_t)(0x10920488u));
  /* 108f15bf call dword ptr [0x109234d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234d4))), 0x108f15c5u);
  /* 108f15c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f15c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f15ca call 0x108f3070 */
  push32(0x108f15cfu); f_108f3070();
  /* 108f15cf mov esi, esp */
  ESI = (ESP);
  /* 108f15d1 push 0x1091b024 */
  push32((uint32_t)(0x1091b024u));
  /* 108f15d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f15d8 call dword ptr [0x109234dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234dc))), 0x108f15deu);
  /* 108f15de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f15e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f15e3 call 0x108f3070 */
  push32(0x108f15e8u); f_108f3070();
  /* 108f15e8 mov esi, esp */
  ESI = (ESP);
  /* 108f15ea push 0x1091b024 */
  push32((uint32_t)(0x1091b024u));
  /* 108f15ef push 2 */
  push32((uint32_t)(0x2u));
  /* 108f15f1 call dword ptr [0x109234dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234dc))), 0x108f15f7u);
  /* 108f15f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f15fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f15fc call 0x108f3070 */
  push32(0x108f1601u); f_108f3070();
  /* 108f1601 mov esi, esp */
  ESI = (ESP);
  /* 108f1603 push 0x1091b01c */
  push32((uint32_t)(0x1091b01cu));
  /* 108f1608 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f160a call dword ptr [0x109234dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234dc))), 0x108f1610u);
  /* 108f1610 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1613 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1615 call 0x108f3070 */
  push32(0x108f161au); f_108f3070();
  /* 108f161a pop edi */
  EDI = (pop32());
  /* 108f161b pop esi */
  ESI = (pop32());
  /* 108f161c pop ebx */
  EBX = (pop32());
  /* 108f161d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1620 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1622 call 0x108f3070 */
  push32(0x108f1627u); f_108f3070();
  /* 108f1627 mov esp, ebp */
  ESP = (EBP);
  /* 108f1629 pop ebp */
  EBP = (pop32());
  /* 108f162a ret  */
  ESPCHK(0x108f1090u, _esp0);
  ESP += 4; return;
}

/* FUN_100017a0 @ 0x108f17a0 (4808 bytes, 1394 insns) */
void f_108f17a0(void) {
  FTRACE(0x108f17a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f17a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f17a1 mov ebp, esp */
  EBP = (ESP);
  /* 108f17a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f17a6 push ebx */
  push32((uint32_t)(EBX));
  /* 108f17a7 push esi */
  push32((uint32_t)(ESI));
  /* 108f17a8 push edi */
  push32((uint32_t)(EDI));
  /* 108f17a9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 108f17ac mov ecx, 0x11 */
  ECX = (0x11u);
  /* 108f17b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 108f17b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108f17b8 mov esi, esp */
  ESI = (ESP);
  /* 108f17ba push 0x63 */
  push32((uint32_t)(0x63u));
  /* 108f17bc call dword ptr [0x1092343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092343c))), 0x108f17c2u);
  /* 108f17c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f17c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f17c7 call 0x108f3070 */
  push32(0x108f17ccu); f_108f3070();
  /* 108f17cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f17d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f17d3 je 0x108f1c03 */
  if (C.zf) goto L_108f1c03;
  /* 108f17d9 mov esi, esp */
  ESI = (ESP);
  /* 108f17db push 0 */
  push32((uint32_t)(0x0u));
  /* 108f17dd push 0x10920418 */
  push32((uint32_t)(0x10920418u));
  /* 108f17e2 call dword ptr [0x10923440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923440))), 0x108f17e8u);
  /* 108f17e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f17eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f17ed call 0x108f3070 */
  push32(0x108f17f2u); f_108f3070();
  /* 108f17f2 mov esi, esp */
  ESI = (ESP);
  /* 108f17f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f17f6 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 108f17f8 call dword ptr [0x10923444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923444))), 0x108f17feu);
  /* 108f17fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1801 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1803 call 0x108f3070 */
  push32(0x108f1808u); f_108f3070();
  /* 108f1808 mov esi, esp */
  ESI = (ESP);
  /* 108f180a push 0 */
  push32((uint32_t)(0x0u));
  /* 108f180c call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f1812u);
  /* 108f1812 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1815 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1817 call 0x108f3070 */
  push32(0x108f181cu); f_108f3070();
  /* 108f181c imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f1822 mov ecx, 0x1770 */
  ECX = (0x1770u);
  /* 108f1827 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f1829 mov esi, esp */
  ESI = (ESP);
  /* 108f182b push ecx */
  push32((uint32_t)(ECX));
  /* 108f182c push 3 */
  push32((uint32_t)(0x3u));
  /* 108f182e push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1830 call dword ptr [0x1092344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092344c))), 0x108f1836u);
  /* 108f1836 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1839 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f183b call 0x108f3070 */
  push32(0x108f1840u); f_108f3070();
  /* 108f1840 mov esi, esp */
  ESI = (ESP);
  /* 108f1842 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1844 call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f184au);
  /* 108f184a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f184d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f184f call 0x108f3070 */
  push32(0x108f1854u); f_108f3070();
  /* 108f1854 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f185a mov edx, 0x1388 */
  EDX = (0x1388u);
  /* 108f185f sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f1861 mov esi, esp */
  ESI = (ESP);
  /* 108f1863 push edx */
  push32((uint32_t)(EDX));
  /* 108f1864 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f1866 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1868 call dword ptr [0x1092344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092344c))), 0x108f186eu);
  /* 108f186e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1871 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1873 call 0x108f3070 */
  push32(0x108f1878u); f_108f3070();
  /* 108f1878 mov esi, esp */
  ESI = (ESP);
  /* 108f187a push 0 */
  push32((uint32_t)(0x0u));
  /* 108f187c call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f1882u);
  /* 108f1882 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1885 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1887 call 0x108f3070 */
  push32(0x108f188cu); f_108f3070();
  /* 108f188c imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f1892 mov ecx, 0x1388 */
  ECX = (0x1388u);
  /* 108f1897 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f1899 mov esi, esp */
  ESI = (ESP);
  /* 108f189b push ecx */
  push32((uint32_t)(ECX));
  /* 108f189c push 0 */
  push32((uint32_t)(0x0u));
  /* 108f189e push 0 */
  push32((uint32_t)(0x0u));
  /* 108f18a0 call dword ptr [0x1092344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092344c))), 0x108f18a6u);
  /* 108f18a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f18a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f18ab call 0x108f3070 */
  push32(0x108f18b0u); f_108f3070();
  /* 108f18b0 mov esi, esp */
  ESI = (ESP);
  /* 108f18b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f18b4 call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f18bau);
  /* 108f18ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f18bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f18bf call 0x108f3070 */
  push32(0x108f18c4u); f_108f3070();
  /* 108f18c4 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f18ca mov edx, 0x1388 */
  EDX = (0x1388u);
  /* 108f18cf sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f18d1 mov esi, esp */
  ESI = (ESP);
  /* 108f18d3 push edx */
  push32((uint32_t)(EDX));
  /* 108f18d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f18d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f18d8 call dword ptr [0x1092344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092344c))), 0x108f18deu);
  /* 108f18de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f18e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f18e3 call 0x108f3070 */
  push32(0x108f18e8u); f_108f3070();
  /* 108f18e8 mov esi, esp */
  ESI = (ESP);
  /* 108f18ea push 0 */
  push32((uint32_t)(0x0u));
  /* 108f18ec call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f18f2u);
  /* 108f18f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f18f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f18f7 call 0x108f3070 */
  push32(0x108f18fcu); f_108f3070();
  /* 108f18fc imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f1902 mov ecx, 0x1388 */
  ECX = (0x1388u);
  /* 108f1907 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f1909 mov esi, esp */
  ESI = (ESP);
  /* 108f190b push ecx */
  push32((uint32_t)(ECX));
  /* 108f190c push 5 */
  push32((uint32_t)(0x5u));
  /* 108f190e push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1910 call dword ptr [0x1092344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092344c))), 0x108f1916u);
  /* 108f1916 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1919 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f191b call 0x108f3070 */
  push32(0x108f1920u); f_108f3070();
  /* 108f1920 mov esi, esp */
  ESI = (ESP);
  /* 108f1922 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1924 call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f192au);
  /* 108f192a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f192d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f192f call 0x108f3070 */
  push32(0x108f1934u); f_108f3070();
  /* 108f1934 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f193a mov edx, 0x1388 */
  EDX = (0x1388u);
  /* 108f193f sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f1941 mov esi, esp */
  ESI = (ESP);
  /* 108f1943 push edx */
  push32((uint32_t)(EDX));
  /* 108f1944 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f1946 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1948 call dword ptr [0x1092344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092344c))), 0x108f194eu);
  /* 108f194e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1951 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1953 call 0x108f3070 */
  push32(0x108f1958u); f_108f3070();
  /* 108f1958 mov esi, esp */
  ESI = (ESP);
  /* 108f195a push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 108f195f push 3 */
  push32((uint32_t)(0x3u));
  /* 108f1961 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f1963 call dword ptr [0x1092344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092344c))), 0x108f1969u);
  /* 108f1969 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f196c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f196e call 0x108f3070 */
  push32(0x108f1973u); f_108f3070();
  /* 108f1973 mov esi, esp */
  ESI = (ESP);
  /* 108f1975 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 108f197a push 1 */
  push32((uint32_t)(0x1u));
  /* 108f197c push 1 */
  push32((uint32_t)(0x1u));
  /* 108f197e call dword ptr [0x1092344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092344c))), 0x108f1984u);
  /* 108f1984 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1987 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1989 call 0x108f3070 */
  push32(0x108f198eu); f_108f3070();
  /* 108f198e mov esi, esp */
  ESI = (ESP);
  /* 108f1990 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 108f1995 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1997 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f1999 call dword ptr [0x1092344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092344c))), 0x108f199fu);
  /* 108f199f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f19a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f19a4 call 0x108f3070 */
  push32(0x108f19a9u); f_108f3070();
  /* 108f19a9 mov esi, esp */
  ESI = (ESP);
  /* 108f19ab push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 108f19b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f19b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f19b4 call dword ptr [0x1092344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092344c))), 0x108f19bau);
  /* 108f19ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f19bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f19bf call 0x108f3070 */
  push32(0x108f19c4u); f_108f3070();
  /* 108f19c4 mov esi, esp */
  ESI = (ESP);
  /* 108f19c6 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 108f19cb push 5 */
  push32((uint32_t)(0x5u));
  /* 108f19cd push 1 */
  push32((uint32_t)(0x1u));
  /* 108f19cf call dword ptr [0x1092344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092344c))), 0x108f19d5u);
  /* 108f19d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f19d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f19da call 0x108f3070 */
  push32(0x108f19dfu); f_108f3070();
  /* 108f19df mov esi, esp */
  ESI = (ESP);
  /* 108f19e1 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 108f19e6 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f19e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f19ea call dword ptr [0x1092344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092344c))), 0x108f19f0u);
  /* 108f19f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f19f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f19f5 call 0x108f3070 */
  push32(0x108f19fau); f_108f3070();
  /* 108f19fa mov esi, esp */
  ESI = (ESP);
  /* 108f19fc push 0 */
  push32((uint32_t)(0x0u));
  /* 108f19fe call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f1a04u);
  /* 108f1a04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1a07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1a09 call 0x108f3070 */
  push32(0x108f1a0eu); f_108f3070();
  /* 108f1a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f1a10 jne 0x108f1a8d */
  if (!C.zf) goto L_108f1a8d;
  /* 108f1a12 mov esi, esp */
  ESI = (ESP);
  /* 108f1a14 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 108f1a19 push 3 */
  push32((uint32_t)(0x3u));
  /* 108f1a1b push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1a1d call dword ptr [0x1092344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092344c))), 0x108f1a23u);
  /* 108f1a23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1a26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1a28 call 0x108f3070 */
  push32(0x108f1a2du); f_108f3070();
  /* 108f1a2d mov esi, esp */
  ESI = (ESP);
  /* 108f1a2f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 108f1a34 push 5 */
  push32((uint32_t)(0x5u));
  /* 108f1a36 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1a38 call dword ptr [0x1092344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092344c))), 0x108f1a3eu);
  /* 108f1a3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1a41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1a43 call 0x108f3070 */
  push32(0x108f1a48u); f_108f3070();
  /* 108f1a48 mov esi, esp */
  ESI = (ESP);
  /* 108f1a4a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 108f1a4f push 4 */
  push32((uint32_t)(0x4u));
  /* 108f1a51 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1a53 call dword ptr [0x1092344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092344c))), 0x108f1a59u);
  /* 108f1a59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1a5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1a5e call 0x108f3070 */
  push32(0x108f1a63u); f_108f3070();
  /* 108f1a63 mov esi, esp */
  ESI = (ESP);
  /* 108f1a65 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 108f1a67 push 0x10920528 */
  push32((uint32_t)(0x10920528u));
  /* 108f1a6c push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1a6e push 0x10920548 */
  push32((uint32_t)(0x10920548u));
  /* 108f1a73 push 0x109203f8 */
  push32((uint32_t)(0x109203f8u));
  /* 108f1a78 push 0x10920478 */
  push32((uint32_t)(0x10920478u));
  /* 108f1a7d call dword ptr [0x10923450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923450))), 0x108f1a83u);
  /* 108f1a83 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1a86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1a88 call 0x108f3070 */
  push32(0x108f1a8du); f_108f3070();
L_108f1a8d:;
  /* 108f1a8d mov esi, esp */
  ESI = (ESP);
  /* 108f1a8f push 0x1091b1b4 */
  push32((uint32_t)(0x1091b1b4u));
  /* 108f1a94 call dword ptr [0x10923454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923454))), 0x108f1a9au);
  /* 108f1a9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1a9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1a9f call 0x108f3070 */
  push32(0x108f1aa4u); f_108f3070();
  /* 108f1aa4 mov esi, esp */
  ESI = (ESP);
  /* 108f1aa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1aa8 call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f1aaeu);
  /* 108f1aae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1ab1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1ab3 call 0x108f3070 */
  push32(0x108f1ab8u); f_108f3070();
  /* 108f1ab8 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f1abe mov ecx, 0x1770 */
  ECX = (0x1770u);
  /* 108f1ac3 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f1ac5 mov esi, esp */
  ESI = (ESP);
  /* 108f1ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 108f1ac8 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f1aca call dword ptr [0x10923458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923458))), 0x108f1ad0u);
  /* 108f1ad0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1ad3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1ad5 call 0x108f3070 */
  push32(0x108f1adau); f_108f3070();
  /* 108f1ada mov esi, esp */
  ESI = (ESP);
  /* 108f1adc push 0x43 */
  push32((uint32_t)(0x43u));
  /* 108f1ade call dword ptr [0x1092345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092345c))), 0x108f1ae4u);
  /* 108f1ae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1ae7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1ae9 call 0x108f3070 */
  push32(0x108f1aeeu); f_108f3070();
  /* 108f1aee mov esi, esp */
  ESI = (ESP);
  /* 108f1af0 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 108f1af2 call dword ptr [0x1092345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092345c))), 0x108f1af8u);
  /* 108f1af8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1afb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1afd call 0x108f3070 */
  push32(0x108f1b02u); f_108f3070();
  /* 108f1b02 mov esi, esp */
  ESI = (ESP);
  /* 108f1b04 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 108f1b06 call dword ptr [0x1092345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092345c))), 0x108f1b0cu);
  /* 108f1b0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1b0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1b11 call 0x108f3070 */
  push32(0x108f1b16u); f_108f3070();
  /* 108f1b16 mov esi, esp */
  ESI = (ESP);
  /* 108f1b18 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 108f1b1a call dword ptr [0x1092345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092345c))), 0x108f1b20u);
  /* 108f1b20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1b23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1b25 call 0x108f3070 */
  push32(0x108f1b2au); f_108f3070();
  /* 108f1b2a mov esi, esp */
  ESI = (ESP);
  /* 108f1b2c push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1b2e push 0x109204d0 */
  push32((uint32_t)(0x109204d0u));
  /* 108f1b33 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f1b35 push 0x109204f8 */
  push32((uint32_t)(0x109204f8u));
  /* 108f1b3a push 0x10920500 */
  push32((uint32_t)(0x10920500u));
  /* 108f1b3f push 0x10920450 */
  push32((uint32_t)(0x10920450u));
  /* 108f1b44 call dword ptr [0x10923450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923450))), 0x108f1b4au);
  /* 108f1b4a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1b4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1b4f call 0x108f3070 */
  push32(0x108f1b54u); f_108f3070();
  /* 108f1b54 mov esi, esp */
  ESI = (ESP);
  /* 108f1b56 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1b58 push 0x109204d8 */
  push32((uint32_t)(0x109204d8u));
  /* 108f1b5d push 4 */
  push32((uint32_t)(0x4u));
  /* 108f1b5f push 0x109204f8 */
  push32((uint32_t)(0x109204f8u));
  /* 108f1b64 push 0x10920500 */
  push32((uint32_t)(0x10920500u));
  /* 108f1b69 push 0x10920458 */
  push32((uint32_t)(0x10920458u));
  /* 108f1b6e call dword ptr [0x10923450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923450))), 0x108f1b74u);
  /* 108f1b74 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1b77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1b79 call 0x108f3070 */
  push32(0x108f1b7eu); f_108f3070();
  /* 108f1b7e mov esi, esp */
  ESI = (ESP);
  /* 108f1b80 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1b82 push 0x109204e0 */
  push32((uint32_t)(0x109204e0u));
  /* 108f1b87 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f1b89 push 0x10920508 */
  push32((uint32_t)(0x10920508u));
  /* 108f1b8e push 0x10920500 */
  push32((uint32_t)(0x10920500u));
  /* 108f1b93 push 0x10920460 */
  push32((uint32_t)(0x10920460u));
  /* 108f1b98 call dword ptr [0x10923450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923450))), 0x108f1b9eu);
  /* 108f1b9e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1ba1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1ba3 call 0x108f3070 */
  push32(0x108f1ba8u); f_108f3070();
  /* 108f1ba8 mov esi, esp */
  ESI = (ESP);
  /* 108f1baa push 0x10920498 */
  push32((uint32_t)(0x10920498u));
  /* 108f1baf call dword ptr [0x10923460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923460))), 0x108f1bb5u);
  /* 108f1bb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1bb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1bba call 0x108f3070 */
  push32(0x108f1bbfu); f_108f3070();
  /* 108f1bbf mov esi, esp */
  ESI = (ESP);
  /* 108f1bc1 push 0x10920490 */
  push32((uint32_t)(0x10920490u));
  /* 108f1bc6 call dword ptr [0x10923464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923464))), 0x108f1bccu);
  /* 108f1bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1bcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1bd1 call 0x108f3070 */
  push32(0x108f1bd6u); f_108f3070();
  /* 108f1bd6 mov esi, esp */
  ESI = (ESP);
  /* 108f1bd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1bda push 0x10920430 */
  push32((uint32_t)(0x10920430u));
  /* 108f1bdf call dword ptr [0x10923440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923440))), 0x108f1be5u);
  /* 108f1be5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1be8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1bea call 0x108f3070 */
  push32(0x108f1befu); f_108f3070();
  /* 108f1bef mov esi, esp */
  ESI = (ESP);
  /* 108f1bf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f1bf3 call dword ptr [0x10923468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923468))), 0x108f1bf9u);
  /* 108f1bf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1bfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1bfe call 0x108f3070 */
  push32(0x108f1c03u); f_108f3070();
L_108f1c03:;
  /* 108f1c03 mov esi, esp */
  ESI = (ESP);
  /* 108f1c05 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f1c07 call dword ptr [0x1092346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092346c))), 0x108f1c0du);
  /* 108f1c0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1c10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1c12 call 0x108f3070 */
  push32(0x108f1c17u); f_108f3070();
  /* 108f1c17 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f1c1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f1c1e je 0x108f1c93 */
  if (C.zf) goto L_108f1c93;
  /* 108f1c20 mov esi, esp */
  ESI = (ESP);
  /* 108f1c22 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f1c24 call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f1c2au);
  /* 108f1c2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1c2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1c2f call 0x108f3070 */
  push32(0x108f1c34u); f_108f3070();
  /* 108f1c34 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1c37 jge 0x108f1c72 */
  if ((C.sf==C.of)) goto L_108f1c72;
  /* 108f1c39 mov esi, esp */
  ESI = (ESP);
  /* 108f1c3b push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1c3d call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f1c43u);
  /* 108f1c43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1c46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1c48 call 0x108f3070 */
  push32(0x108f1c4du); f_108f3070();
  /* 108f1c4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1c50 mov esi, esp */
  ESI = (ESP);
  /* 108f1c52 push eax */
  push32((uint32_t)(EAX));
  /* 108f1c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1c55 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f1c57 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f1c59 push 0x1091b1a8 */
  push32((uint32_t)(0x1091b1a8u));
  /* 108f1c5e push 1 */
  push32((uint32_t)(0x1u));
  /* 108f1c60 call dword ptr [0x10923470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923470))), 0x108f1c66u);
  /* 108f1c66 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1c69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1c6b call 0x108f3070 */
  push32(0x108f1c70u); f_108f3070();
  /* 108f1c70 jmp 0x108f1c93 */
  goto L_108f1c93;
L_108f1c72:;
  /* 108f1c72 mov esi, esp */
  ESI = (ESP);
  /* 108f1c74 push 3 */
  push32((uint32_t)(0x3u));
  /* 108f1c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1c78 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f1c7a push 1 */
  push32((uint32_t)(0x1u));
  /* 108f1c7c push 0x1091b1a8 */
  push32((uint32_t)(0x1091b1a8u));
  /* 108f1c81 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f1c83 call dword ptr [0x10923470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923470))), 0x108f1c89u);
  /* 108f1c89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1c8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1c8e call 0x108f3070 */
  push32(0x108f1c93u); f_108f3070();
L_108f1c93:;
  /* 108f1c93 mov esi, esp */
  ESI = (ESP);
  /* 108f1c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1c97 push 0x109204a0 */
  push32((uint32_t)(0x109204a0u));
  /* 108f1c9c call dword ptr [0x10923474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923474))), 0x108f1ca2u);
  /* 108f1ca2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1ca5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1ca7 call 0x108f3070 */
  push32(0x108f1cacu); f_108f3070();
  /* 108f1cac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f1cae jle 0x108f1e1e */
  if ((C.zf||C.sf!=C.of)) goto L_108f1e1e;
  /* 108f1cb4 push 0x10920408 */
  push32((uint32_t)(0x10920408u));
  /* 108f1cb9 call 0x108f1005 */
  push32(0x108f1cbeu); f_108f1005();
  /* 108f1cbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1cc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f1cc3 jle 0x108f1e1e */
  if ((C.zf||C.sf!=C.of)) goto L_108f1e1e;
  /* 108f1cc9 mov esi, esp */
  ESI = (ESP);
  /* 108f1ccb push 1 */
  push32((uint32_t)(0x1u));
  /* 108f1ccd call dword ptr [0x1092343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092343c))), 0x108f1cd3u);
  /* 108f1cd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1cd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1cd8 call 0x108f3070 */
  push32(0x108f1cddu); f_108f3070();
  /* 108f1cdd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f1ce2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f1ce4 je 0x108f1e00 */
  if (C.zf) goto L_108f1e00;
  /* 108f1cea mov esi, esp */
  ESI = (ESP);
  /* 108f1cec push 0x1091b1a0 */
  push32((uint32_t)(0x1091b1a0u));
  /* 108f1cf1 call dword ptr [0x10923454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923454))), 0x108f1cf7u);
  /* 108f1cf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1cfa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1cfc call 0x108f3070 */
  push32(0x108f1d01u); f_108f3070();
  /* 108f1d01 mov esi, esp */
  ESI = (ESP);
  /* 108f1d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1d05 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f1d07 call dword ptr [0x10923444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923444))), 0x108f1d0du);
  /* 108f1d0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1d10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1d12 call 0x108f3070 */
  push32(0x108f1d17u); f_108f3070();
  /* 108f1d17 mov esi, esp */
  ESI = (ESP);
  /* 108f1d19 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1d1b call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f1d21u);
  /* 108f1d21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1d24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1d26 call 0x108f3070 */
  push32(0x108f1d2bu); f_108f3070();
  /* 108f1d2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f1d2e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1d32 je 0x108f1d6b */
  if (C.zf) goto L_108f1d6b;
  /* 108f1d34 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1d38 je 0x108f1d3c */
  if (C.zf) goto L_108f1d3c;
  /* 108f1d3a jmp 0x108f1d9a */
  goto L_108f1d9a;
L_108f1d3c:;
  /* 108f1d3c mov esi, esp */
  ESI = (ESP);
  /* 108f1d3e push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 108f1d43 push 0x109204b8 */
  push32((uint32_t)(0x109204b8u));
  /* 108f1d48 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f1d4a push 0x10920518 */
  push32((uint32_t)(0x10920518u));
  /* 108f1d4f push 0x109203e0 */
  push32((uint32_t)(0x109203e0u));
  /* 108f1d54 push 0x10920400 */
  push32((uint32_t)(0x10920400u));
  /* 108f1d59 call dword ptr [0x10923450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923450))), 0x108f1d5fu);
  /* 108f1d5f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1d62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1d64 call 0x108f3070 */
  push32(0x108f1d69u); f_108f3070();
  /* 108f1d69 jmp 0x108f1dc7 */
  goto L_108f1dc7;
L_108f1d6b:;
  /* 108f1d6b mov esi, esp */
  ESI = (ESP);
  /* 108f1d6d push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 108f1d72 push 0x109204b8 */
  push32((uint32_t)(0x109204b8u));
  /* 108f1d77 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f1d79 push 0x10920518 */
  push32((uint32_t)(0x10920518u));
  /* 108f1d7e push 0x109203e8 */
  push32((uint32_t)(0x109203e8u));
  /* 108f1d83 push 0x10920400 */
  push32((uint32_t)(0x10920400u));
  /* 108f1d88 call dword ptr [0x10923450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923450))), 0x108f1d8eu);
  /* 108f1d8e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1d91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1d93 call 0x108f3070 */
  push32(0x108f1d98u); f_108f3070();
  /* 108f1d98 jmp 0x108f1dc7 */
  goto L_108f1dc7;
L_108f1d9a:;
  /* 108f1d9a mov esi, esp */
  ESI = (ESP);
  /* 108f1d9c push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 108f1da1 push 0x109204b8 */
  push32((uint32_t)(0x109204b8u));
  /* 108f1da6 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f1da8 push 0x10920518 */
  push32((uint32_t)(0x10920518u));
  /* 108f1dad push 0x109203f0 */
  push32((uint32_t)(0x109203f0u));
  /* 108f1db2 push 0x10920400 */
  push32((uint32_t)(0x10920400u));
  /* 108f1db7 call dword ptr [0x10923450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923450))), 0x108f1dbdu);
  /* 108f1dbd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1dc0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1dc2 call 0x108f3070 */
  push32(0x108f1dc7u); f_108f3070();
L_108f1dc7:;
  /* 108f1dc7 mov esi, esp */
  ESI = (ESP);
  /* 108f1dc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1dcb push 0x10920400 */
  push32((uint32_t)(0x10920400u));
  /* 108f1dd0 call dword ptr [0x10923440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923440))), 0x108f1dd6u);
  /* 108f1dd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1dd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1ddb call 0x108f3070 */
  push32(0x108f1de0u); f_108f3070();
  /* 108f1de0 mov esi, esp */
  ESI = (ESP);
  /* 108f1de2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1de4 push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 108f1de9 push 0x109204c0 */
  push32((uint32_t)(0x109204c0u));
  /* 108f1dee push 4 */
  push32((uint32_t)(0x4u));
  /* 108f1df0 call dword ptr [0x10923478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923478))), 0x108f1df6u);
  /* 108f1df6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1df9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1dfb call 0x108f3070 */
  push32(0x108f1e00u); f_108f3070();
L_108f1e00:;
  /* 108f1e00 mov esi, esp */
  ESI = (ESP);
  /* 108f1e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1e04 push 0x109204a0 */
  push32((uint32_t)(0x109204a0u));
  /* 108f1e09 push 0x10920408 */
  push32((uint32_t)(0x10920408u));
  /* 108f1e0e call dword ptr [0x1092347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092347c))), 0x108f1e14u);
  /* 108f1e14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1e17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1e19 call 0x108f3070 */
  push32(0x108f1e1eu); f_108f3070();
L_108f1e1e:;
  /* 108f1e1e mov esi, esp */
  ESI = (ESP);
  /* 108f1e20 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1e22 push 0x10920408 */
  push32((uint32_t)(0x10920408u));
  /* 108f1e27 call dword ptr [0x10923480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923480))), 0x108f1e2du);
  /* 108f1e2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1e30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1e32 call 0x108f3070 */
  push32(0x108f1e37u); f_108f3070();
  /* 108f1e37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f1e39 jle 0x108f1eb2 */
  if ((C.zf||C.sf!=C.of)) goto L_108f1eb2;
  /* 108f1e3b mov esi, esp */
  ESI = (ESP);
  /* 108f1e3d push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1e3f push 0x10920468 */
  push32((uint32_t)(0x10920468u));
  /* 108f1e44 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1e46 call dword ptr [0x10923484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923484))), 0x108f1e4cu);
  /* 108f1e4c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1e4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1e51 call 0x108f3070 */
  push32(0x108f1e56u); f_108f3070();
  /* 108f1e56 mov esi, esp */
  ESI = (ESP);
  /* 108f1e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1e5a call dword ptr [0x10923488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923488))), 0x108f1e60u);
  /* 108f1e60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1e63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1e65 call 0x108f3070 */
  push32(0x108f1e6au); f_108f3070();
  /* 108f1e6a mov esi, esp */
  ESI = (ESP);
  /* 108f1e6c push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1e6e push 0x10920408 */
  push32((uint32_t)(0x10920408u));
  /* 108f1e73 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1e75 call dword ptr [0x1092348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092348c))), 0x108f1e7bu);
  /* 108f1e7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1e7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1e80 call 0x108f3070 */
  push32(0x108f1e85u); f_108f3070();
  /* 108f1e85 mov esi, esp */
  ESI = (ESP);
  /* 108f1e87 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1e89 call dword ptr [0x10923490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923490))), 0x108f1e8fu);
  /* 108f1e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1e92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1e94 call 0x108f3070 */
  push32(0x108f1e99u); f_108f3070();
  /* 108f1e99 mov esi, esp */
  ESI = (ESP);
  /* 108f1e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1e9d push 0x10920468 */
  push32((uint32_t)(0x10920468u));
  /* 108f1ea2 call dword ptr [0x10923440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923440))), 0x108f1ea8u);
  /* 108f1ea8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1eab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1ead call 0x108f3070 */
  push32(0x108f1eb2u); f_108f3070();
L_108f1eb2:;
  /* 108f1eb2 mov esi, esp */
  ESI = (ESP);
  /* 108f1eb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f1eb6 call dword ptr [0x1092343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092343c))), 0x108f1ebcu);
  /* 108f1ebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1ebf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1ec1 call 0x108f3070 */
  push32(0x108f1ec6u); f_108f3070();
  /* 108f1ec6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f1ecb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f1ecd je 0x108f1fa1 */
  if (C.zf) goto L_108f1fa1;
  /* 108f1ed3 mov esi, esp */
  ESI = (ESP);
  /* 108f1ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1ed7 push 0x109204a8 */
  push32((uint32_t)(0x109204a8u));
  /* 108f1edc call dword ptr [0x10923474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923474))), 0x108f1ee2u);
  /* 108f1ee2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1ee5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1ee7 call 0x108f3070 */
  push32(0x108f1eecu); f_108f3070();
  /* 108f1eec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f1eee jle 0x108f1fa1 */
  if ((C.zf||C.sf!=C.of)) goto L_108f1fa1;
  /* 108f1ef4 push 0x10920410 */
  push32((uint32_t)(0x10920410u));
  /* 108f1ef9 call 0x108f1005 */
  push32(0x108f1efeu); f_108f1005();
  /* 108f1efe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1f01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f1f03 jle 0x108f1fa1 */
  if ((C.zf||C.sf!=C.of)) goto L_108f1fa1;
  /* 108f1f09 mov esi, esp */
  ESI = (ESP);
  /* 108f1f0b push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1f0d push 2 */
  push32((uint32_t)(0x2u));
  /* 108f1f0f call dword ptr [0x10923444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923444))), 0x108f1f15u);
  /* 108f1f15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1f18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1f1a call 0x108f3070 */
  push32(0x108f1f1fu); f_108f3070();
  /* 108f1f1f mov esi, esp */
  ESI = (ESP);
  /* 108f1f21 push 0x1091b198 */
  push32((uint32_t)(0x1091b198u));
  /* 108f1f26 call dword ptr [0x10923454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923454))), 0x108f1f2cu);
  /* 108f1f2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1f2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1f31 call 0x108f3070 */
  push32(0x108f1f36u); f_108f3070();
  /* 108f1f36 mov esi, esp */
  ESI = (ESP);
  /* 108f1f38 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f1f3a call dword ptr [0x10923488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923488))), 0x108f1f40u);
  /* 108f1f40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1f43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1f45 call 0x108f3070 */
  push32(0x108f1f4au); f_108f3070();
  /* 108f1f4a mov esi, esp */
  ESI = (ESP);
  /* 108f1f4c push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1f4e push 0x10920410 */
  push32((uint32_t)(0x10920410u));
  /* 108f1f53 call dword ptr [0x10923440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923440))), 0x108f1f59u);
  /* 108f1f59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1f5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1f5e call 0x108f3070 */
  push32(0x108f1f63u); f_108f3070();
  /* 108f1f63 mov esi, esp */
  ESI = (ESP);
  /* 108f1f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f1f67 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f1f69 call dword ptr [0x10923494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923494))), 0x108f1f6fu);
  /* 108f1f6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1f72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1f74 call 0x108f3070 */
  push32(0x108f1f79u); f_108f3070();
  /* 108f1f79 mov esi, esp */
  ESI = (ESP);
  /* 108f1f7b push 0x44 */
  push32((uint32_t)(0x44u));
  /* 108f1f7d call dword ptr [0x1092345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092345c))), 0x108f1f83u);
  /* 108f1f83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1f86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1f88 call 0x108f3070 */
  push32(0x108f1f8du); f_108f3070();
  /* 108f1f8d mov esi, esp */
  ESI = (ESP);
  /* 108f1f8f push 0x45 */
  push32((uint32_t)(0x45u));
  /* 108f1f91 call dword ptr [0x10923498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923498))), 0x108f1f97u);
  /* 108f1f97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1f9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1f9c call 0x108f3070 */
  push32(0x108f1fa1u); f_108f3070();
L_108f1fa1:;
  /* 108f1fa1 mov esi, esp */
  ESI = (ESP);
  /* 108f1fa3 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f1fa5 call dword ptr [0x1092343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092343c))), 0x108f1fabu);
  /* 108f1fab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1fae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1fb0 call 0x108f3070 */
  push32(0x108f1fb5u); f_108f3070();
  /* 108f1fb5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f1fba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f1fbc je 0x108f20c9 */
  if (C.zf) goto L_108f20c9;
  /* 108f1fc2 mov esi, esp */
  ESI = (ESP);
  /* 108f1fc4 push 3 */
  push32((uint32_t)(0x3u));
  /* 108f1fc6 call dword ptr [0x1092343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092343c))), 0x108f1fccu);
  /* 108f1fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1fcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f1fd1 call 0x108f3070 */
  push32(0x108f1fd6u); f_108f3070();
  /* 108f1fd6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f1fdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f1fdd je 0x108f20c9 */
  if (C.zf) goto L_108f20c9;
  /* 108f1fe3 push 0x10920418 */
  push32((uint32_t)(0x10920418u));
  /* 108f1fe8 call 0x108f1005 */
  push32(0x108f1fedu); f_108f1005();
  /* 108f1fed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f1ff0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f1ff2 jne 0x108f20c9 */
  if (!C.zf) goto L_108f20c9;
  /* 108f1ff8 mov byte ptr [0x109204f0], 1 */
  w8((uint32_t)(0x109204f0), (0x1u));
  /* 108f1fff mov esi, esp */
  ESI = (ESP);
  /* 108f2001 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f2003 call dword ptr [0x1092343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092343c))), 0x108f2009u);
  /* 108f2009 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f200c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f200e call 0x108f3070 */
  push32(0x108f2013u); f_108f3070();
  /* 108f2013 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f2018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f201a jne 0x108f2051 */
  if (!C.zf) goto L_108f2051;
  /* 108f201c mov esi, esp */
  ESI = (ESP);
  /* 108f201e push 7 */
  push32((uint32_t)(0x7u));
  /* 108f2020 call dword ptr [0x1092343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092343c))), 0x108f2026u);
  /* 108f2026 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2029 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f202b call 0x108f3070 */
  push32(0x108f2030u); f_108f3070();
  /* 108f2030 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f2035 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f2037 jne 0x108f2051 */
  if (!C.zf) goto L_108f2051;
  /* 108f2039 push 0x10920400 */
  push32((uint32_t)(0x10920400u));
  /* 108f203e call 0x108f1005 */
  push32(0x108f2043u); f_108f1005();
  /* 108f2043 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2046 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f2048 jle 0x108f2051 */
  if ((C.zf||C.sf!=C.of)) goto L_108f2051;
  /* 108f204a mov byte ptr [0x109204f0], 0 */
  w8((uint32_t)(0x109204f0), (0x0u));
L_108f2051:;
  /* 108f2051 mov esi, esp */
  ESI = (ESP);
  /* 108f2053 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f2055 call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f205bu);
  /* 108f205b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f205e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2060 call 0x108f3070 */
  push32(0x108f2065u); f_108f3070();
  /* 108f2065 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f2067 jne 0x108f2081 */
  if (!C.zf) goto L_108f2081;
  /* 108f2069 push 0x10920478 */
  push32((uint32_t)(0x10920478u));
  /* 108f206e call 0x108f1005 */
  push32(0x108f2073u); f_108f1005();
  /* 108f2073 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2076 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f2078 jle 0x108f2081 */
  if ((C.zf||C.sf!=C.of)) goto L_108f2081;
  /* 108f207a mov byte ptr [0x109204f0], 0 */
  w8((uint32_t)(0x109204f0), (0x0u));
L_108f2081:;
  /* 108f2081 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f2083 mov dl, byte ptr [0x109204f0] */
  DL = (r8((uint32_t)(0x109204f0)));
  /* 108f2089 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f208b je 0x108f20c9 */
  if (C.zf) goto L_108f20c9;
  /* 108f208d mov esi, esp */
  ESI = (ESP);
  /* 108f208f push 0 */
  push32((uint32_t)(0x0u));
  /* 108f2091 push 3 */
  push32((uint32_t)(0x3u));
  /* 108f2093 call dword ptr [0x10923444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923444))), 0x108f2099u);
  /* 108f2099 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f209c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f209e call 0x108f3070 */
  push32(0x108f20a3u); f_108f3070();
  /* 108f20a3 mov esi, esp */
  ESI = (ESP);
  /* 108f20a5 push 0x1091b190 */
  push32((uint32_t)(0x1091b190u));
  /* 108f20aa call dword ptr [0x10923454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923454))), 0x108f20b0u);
  /* 108f20b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f20b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f20b5 call 0x108f3070 */
  push32(0x108f20bau); f_108f3070();
  /* 108f20ba mov esi, esp */
  ESI = (ESP);
  /* 108f20bc call dword ptr [0x1092349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092349c))), 0x108f20c2u);
  /* 108f20c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f20c4 call 0x108f3070 */
  push32(0x108f20c9u); f_108f3070();
L_108f20c9:;
  /* 108f20c9 mov esi, esp */
  ESI = (ESP);
  /* 108f20cb push 4 */
  push32((uint32_t)(0x4u));
  /* 108f20cd call dword ptr [0x1092343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092343c))), 0x108f20d3u);
  /* 108f20d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f20d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f20d8 call 0x108f3070 */
  push32(0x108f20ddu); f_108f3070();
  /* 108f20dd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f20e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f20e4 je 0x108f2250 */
  if (C.zf) goto L_108f2250;
  /* 108f20ea mov esi, esp */
  ESI = (ESP);
  /* 108f20ec push 0 */
  push32((uint32_t)(0x0u));
  /* 108f20ee push 0x109204b0 */
  push32((uint32_t)(0x109204b0u));
  /* 108f20f3 call dword ptr [0x10923474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923474))), 0x108f20f9u);
  /* 108f20f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f20fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f20fe call 0x108f3070 */
  push32(0x108f2103u); f_108f3070();
  /* 108f2103 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f2105 jle 0x108f2250 */
  if ((C.zf||C.sf!=C.of)) goto L_108f2250;
  /* 108f210b push 0x10920420 */
  push32((uint32_t)(0x10920420u));
  /* 108f2110 call 0x108f1005 */
  push32(0x108f2115u); f_108f1005();
  /* 108f2115 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f211a jle 0x108f2250 */
  if ((C.zf||C.sf!=C.of)) goto L_108f2250;
  /* 108f2120 mov esi, esp */
  ESI = (ESP);
  /* 108f2122 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f2124 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f2126 call dword ptr [0x10923444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923444))), 0x108f212cu);
  /* 108f212c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f212f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2131 call 0x108f3070 */
  push32(0x108f2136u); f_108f3070();
  /* 108f2136 mov esi, esp */
  ESI = (ESP);
  /* 108f2138 push 0x1091b188 */
  push32((uint32_t)(0x1091b188u));
  /* 108f213d call dword ptr [0x10923454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923454))), 0x108f2143u);
  /* 108f2143 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2146 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2148 call 0x108f3070 */
  push32(0x108f214du); f_108f3070();
  /* 108f214d mov esi, esp */
  ESI = (ESP);
  /* 108f214f push 0 */
  push32((uint32_t)(0x0u));
  /* 108f2151 call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f2157u);
  /* 108f2157 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f215a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f215c call 0x108f3070 */
  push32(0x108f2161u); f_108f3070();
  /* 108f2161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f2163 jne 0x108f2195 */
  if (!C.zf) goto L_108f2195;
  /* 108f2165 mov esi, esp */
  ESI = (ESP);
  /* 108f2167 push 0x1091b180 */
  push32((uint32_t)(0x1091b180u));
  /* 108f216c call dword ptr [0x10923454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923454))), 0x108f2172u);
  /* 108f2172 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2177 call 0x108f3070 */
  push32(0x108f217cu); f_108f3070();
  /* 108f217c mov esi, esp */
  ESI = (ESP);
  /* 108f217e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 108f2183 push 7 */
  push32((uint32_t)(0x7u));
  /* 108f2185 call dword ptr [0x10923458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923458))), 0x108f218bu);
  /* 108f218b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f218e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2190 call 0x108f3070 */
  push32(0x108f2195u); f_108f3070();
L_108f2195:;
  /* 108f2195 mov esi, esp */
  ESI = (ESP);
  /* 108f2197 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f2199 call dword ptr [0x10923488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923488))), 0x108f219fu);
  /* 108f219f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f21a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f21a4 call 0x108f3070 */
  push32(0x108f21a9u); f_108f3070();
  /* 108f21a9 mov esi, esp */
  ESI = (ESP);
  /* 108f21ab push 0 */
  push32((uint32_t)(0x0u));
  /* 108f21ad push 0x10920420 */
  push32((uint32_t)(0x10920420u));
  /* 108f21b2 call dword ptr [0x10923440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923440))), 0x108f21b8u);
  /* 108f21b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f21bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f21bd call 0x108f3070 */
  push32(0x108f21c2u); f_108f3070();
  /* 108f21c2 mov esi, esp */
  ESI = (ESP);
  /* 108f21c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f21c6 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f21c8 call dword ptr [0x10923494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923494))), 0x108f21ceu);
  /* 108f21ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f21d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f21d3 call 0x108f3070 */
  push32(0x108f21d8u); f_108f3070();
  /* 108f21d8 mov esi, esp */
  ESI = (ESP);
  /* 108f21da push 0x44 */
  push32((uint32_t)(0x44u));
  /* 108f21dc call dword ptr [0x1092345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092345c))), 0x108f21e2u);
  /* 108f21e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f21e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f21e7 call 0x108f3070 */
  push32(0x108f21ecu); f_108f3070();
  /* 108f21ec mov esi, esp */
  ESI = (ESP);
  /* 108f21ee push 0x42 */
  push32((uint32_t)(0x42u));
  /* 108f21f0 call dword ptr [0x1092345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092345c))), 0x108f21f6u);
  /* 108f21f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f21f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f21fb call 0x108f3070 */
  push32(0x108f2200u); f_108f3070();
  /* 108f2200 mov esi, esp */
  ESI = (ESP);
  /* 108f2202 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 108f2204 call dword ptr [0x1092345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092345c))), 0x108f220au);
  /* 108f220a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f220d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f220f call 0x108f3070 */
  push32(0x108f2214u); f_108f3070();
  /* 108f2214 mov esi, esp */
  ESI = (ESP);
  /* 108f2216 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 108f2218 call dword ptr [0x10923498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923498))), 0x108f221eu);
  /* 108f221e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2221 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2223 call 0x108f3070 */
  push32(0x108f2228u); f_108f3070();
  /* 108f2228 mov esi, esp */
  ESI = (ESP);
  /* 108f222a push 0x47 */
  push32((uint32_t)(0x47u));
  /* 108f222c call dword ptr [0x10923498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923498))), 0x108f2232u);
  /* 108f2232 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2235 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2237 call 0x108f3070 */
  push32(0x108f223cu); f_108f3070();
  /* 108f223c mov esi, esp */
  ESI = (ESP);
  /* 108f223e push 0x43 */
  push32((uint32_t)(0x43u));
  /* 108f2240 call dword ptr [0x10923498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923498))), 0x108f2246u);
  /* 108f2246 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2249 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f224b call 0x108f3070 */
  push32(0x108f2250u); f_108f3070();
L_108f2250:;
  /* 108f2250 mov esi, esp */
  ESI = (ESP);
  /* 108f2252 push 7 */
  push32((uint32_t)(0x7u));
  /* 108f2254 call dword ptr [0x1092346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092346c))), 0x108f225au);
  /* 108f225a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f225d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f225f call 0x108f3070 */
  push32(0x108f2264u); f_108f3070();
  /* 108f2264 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f2269 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f226b je 0x108f2284 */
  if (C.zf) goto L_108f2284;
  /* 108f226d mov esi, esp */
  ESI = (ESP);
  /* 108f226f push 0x1091b178 */
  push32((uint32_t)(0x1091b178u));
  /* 108f2274 call dword ptr [0x10923454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923454))), 0x108f227au);
  /* 108f227a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f227d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f227f call 0x108f3070 */
  push32(0x108f2284u); f_108f3070();
L_108f2284:;
  /* 108f2284 mov esi, esp */
  ESI = (ESP);
  /* 108f2286 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f2288 push 0x10920420 */
  push32((uint32_t)(0x10920420u));
  /* 108f228d call dword ptr [0x10923480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923480))), 0x108f2293u);
  /* 108f2293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2296 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2298 call 0x108f3070 */
  push32(0x108f229du); f_108f3070();
  /* 108f229d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f229f jle 0x108f230d */
  if ((C.zf||C.sf!=C.of)) goto L_108f230d;
  /* 108f22a1 push 0x10920428 */
  push32((uint32_t)(0x10920428u));
  /* 108f22a6 call 0x108f1005 */
  push32(0x108f22abu); f_108f1005();
  /* 108f22ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f22ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f22b0 jle 0x108f230d */
  if ((C.zf||C.sf!=C.of)) goto L_108f230d;
  /* 108f22b2 push 0x109204e8 */
  push32((uint32_t)(0x109204e8u));
  /* 108f22b7 call 0x108f1005 */
  push32(0x108f22bcu); f_108f1005();
  /* 108f22bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f22bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f22c1 jne 0x108f230d */
  if (!C.zf) goto L_108f230d;
  /* 108f22c3 mov esi, esp */
  ESI = (ESP);
  /* 108f22c5 push 6 */
  push32((uint32_t)(0x6u));
  /* 108f22c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f22c9 call dword ptr [0x109234c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234c8))), 0x108f22cfu);
  /* 108f22cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f22d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f22d4 call 0x108f3070 */
  push32(0x108f22d9u); f_108f3070();
  /* 108f22d9 mov esi, esp */
  ESI = (ESP);
  /* 108f22db push 0 */
  push32((uint32_t)(0x0u));
  /* 108f22dd push 0x10920420 */
  push32((uint32_t)(0x10920420u));
  /* 108f22e2 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f22e4 call dword ptr [0x1092348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092348c))), 0x108f22eau);
  /* 108f22ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f22ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f22ef call 0x108f3070 */
  push32(0x108f22f4u); f_108f3070();
  /* 108f22f4 mov esi, esp */
  ESI = (ESP);
  /* 108f22f6 push 0x10920428 */
  push32((uint32_t)(0x10920428u));
  /* 108f22fb push 4 */
  push32((uint32_t)(0x4u));
  /* 108f22fd call dword ptr [0x109234a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234a0))), 0x108f2303u);
  /* 108f2303 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2306 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2308 call 0x108f3070 */
  push32(0x108f230du); f_108f3070();
L_108f230d:;
  /* 108f230d mov esi, esp */
  ESI = (ESP);
  /* 108f230f push 5 */
  push32((uint32_t)(0x5u));
  /* 108f2311 call dword ptr [0x1092343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092343c))), 0x108f2317u);
  /* 108f2317 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f231a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f231c call 0x108f3070 */
  push32(0x108f2321u); f_108f3070();
  /* 108f2321 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f2326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f2328 je 0x108f23a0 */
  if (C.zf) goto L_108f23a0;
  /* 108f232a mov esi, esp */
  ESI = (ESP);
  /* 108f232c push 4 */
  push32((uint32_t)(0x4u));
  /* 108f232e call dword ptr [0x1092343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092343c))), 0x108f2334u);
  /* 108f2334 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2337 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2339 call 0x108f3070 */
  push32(0x108f233eu); f_108f3070();
  /* 108f233e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f2343 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f2345 jne 0x108f23a0 */
  if (!C.zf) goto L_108f23a0;
  /* 108f2347 mov esi, esp */
  ESI = (ESP);
  /* 108f2349 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f234b call dword ptr [0x109234a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234a4))), 0x108f2351u);
  /* 108f2351 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2354 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2356 call 0x108f3070 */
  push32(0x108f235bu); f_108f3070();
  /* 108f235b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f2360 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f2362 je 0x108f23a0 */
  if (C.zf) goto L_108f23a0;
  /* 108f2364 mov esi, esp */
  ESI = (ESP);
  /* 108f2366 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f2368 push 5 */
  push32((uint32_t)(0x5u));
  /* 108f236a call dword ptr [0x10923444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923444))), 0x108f2370u);
  /* 108f2370 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2373 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2375 call 0x108f3070 */
  push32(0x108f237au); f_108f3070();
  /* 108f237a mov esi, esp */
  ESI = (ESP);
  /* 108f237c push 0x1091b170 */
  push32((uint32_t)(0x1091b170u));
  /* 108f2381 call dword ptr [0x10923454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923454))), 0x108f2387u);
  /* 108f2387 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f238a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f238c call 0x108f3070 */
  push32(0x108f2391u); f_108f3070();
  /* 108f2391 mov esi, esp */
  ESI = (ESP);
  /* 108f2393 call dword ptr [0x1092349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092349c))), 0x108f2399u);
  /* 108f2399 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f239b call 0x108f3070 */
  push32(0x108f23a0u); f_108f3070();
L_108f23a0:;
  /* 108f23a0 mov esi, esp */
  ESI = (ESP);
  /* 108f23a2 push 6 */
  push32((uint32_t)(0x6u));
  /* 108f23a4 call dword ptr [0x1092343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092343c))), 0x108f23aau);
  /* 108f23aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f23ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f23af call 0x108f3070 */
  push32(0x108f23b4u); f_108f3070();
  /* 108f23b4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f23b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f23bb je 0x108f2416 */
  if (C.zf) goto L_108f2416;
  /* 108f23bd mov esi, esp */
  ESI = (ESP);
  /* 108f23bf push 1 */
  push32((uint32_t)(0x1u));
  /* 108f23c1 call dword ptr [0x109234a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234a4))), 0x108f23c7u);
  /* 108f23c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f23ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f23cc call 0x108f3070 */
  push32(0x108f23d1u); f_108f3070();
  /* 108f23d1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f23d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f23d8 je 0x108f2416 */
  if (C.zf) goto L_108f2416;
  /* 108f23da mov esi, esp */
  ESI = (ESP);
  /* 108f23dc push 0 */
  push32((uint32_t)(0x0u));
  /* 108f23de push 6 */
  push32((uint32_t)(0x6u));
  /* 108f23e0 call dword ptr [0x10923444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923444))), 0x108f23e6u);
  /* 108f23e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f23e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f23eb call 0x108f3070 */
  push32(0x108f23f0u); f_108f3070();
  /* 108f23f0 mov esi, esp */
  ESI = (ESP);
  /* 108f23f2 push 0x1091b168 */
  push32((uint32_t)(0x1091b168u));
  /* 108f23f7 call dword ptr [0x10923454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923454))), 0x108f23fdu);
  /* 108f23fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2400 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2402 call 0x108f3070 */
  push32(0x108f2407u); f_108f3070();
  /* 108f2407 mov esi, esp */
  ESI = (ESP);
  /* 108f2409 call dword ptr [0x109234a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234a8))), 0x108f240fu);
  /* 108f240f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2411 call 0x108f3070 */
  push32(0x108f2416u); f_108f3070();
L_108f2416:;
  /* 108f2416 mov esi, esp */
  ESI = (ESP);
  /* 108f2418 push 7 */
  push32((uint32_t)(0x7u));
  /* 108f241a call dword ptr [0x1092343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092343c))), 0x108f2420u);
  /* 108f2420 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2423 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2425 call 0x108f3070 */
  push32(0x108f242au); f_108f3070();
  /* 108f242a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f242f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f2431 je 0x108f24f1 */
  if (C.zf) goto L_108f24f1;
  /* 108f2437 mov esi, esp */
  ESI = (ESP);
  /* 108f2439 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f243b call dword ptr [0x1092343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092343c))), 0x108f2441u);
  /* 108f2441 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2444 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2446 call 0x108f3070 */
  push32(0x108f244bu); f_108f3070();
  /* 108f244b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f2450 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f2452 jne 0x108f24f1 */
  if (!C.zf) goto L_108f24f1;
  /* 108f2458 mov esi, esp */
  ESI = (ESP);
  /* 108f245a push 0 */
  push32((uint32_t)(0x0u));
  /* 108f245c push 0x109204c0 */
  push32((uint32_t)(0x109204c0u));
  /* 108f2461 call dword ptr [0x10923474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923474))), 0x108f2467u);
  /* 108f2467 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f246a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f246c call 0x108f3070 */
  push32(0x108f2471u); f_108f3070();
  /* 108f2471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f2473 jle 0x108f24f1 */
  if ((C.zf||C.sf!=C.of)) goto L_108f24f1;
  /* 108f2475 mov esi, esp */
  ESI = (ESP);
  /* 108f2477 push 0x10920400 */
  push32((uint32_t)(0x10920400u));
  /* 108f247c push 0x109204c0 */
  push32((uint32_t)(0x109204c0u));
  /* 108f2481 call dword ptr [0x109234ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234ac))), 0x108f2487u);
  /* 108f2487 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f248a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f248c call 0x108f3070 */
  push32(0x108f2491u); f_108f3070();
  /* 108f2491 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f2493 jle 0x108f24f1 */
  if ((C.zf||C.sf!=C.of)) goto L_108f24f1;
  /* 108f2495 mov esi, esp */
  ESI = (ESP);
  /* 108f2497 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f2499 push 7 */
  push32((uint32_t)(0x7u));
  /* 108f249b call dword ptr [0x10923444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923444))), 0x108f24a1u);
  /* 108f24a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f24a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f24a6 call 0x108f3070 */
  push32(0x108f24abu); f_108f3070();
  /* 108f24ab mov esi, esp */
  ESI = (ESP);
  /* 108f24ad push 0x1091b160 */
  push32((uint32_t)(0x1091b160u));
  /* 108f24b2 call dword ptr [0x10923454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923454))), 0x108f24b8u);
  /* 108f24b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f24bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f24bd call 0x108f3070 */
  push32(0x108f24c2u); f_108f3070();
  /* 108f24c2 mov esi, esp */
  ESI = (ESP);
  /* 108f24c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f24c6 push 0x10920400 */
  push32((uint32_t)(0x10920400u));
  /* 108f24cb call dword ptr [0x10923440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923440))), 0x108f24d1u);
  /* 108f24d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f24d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f24d6 call 0x108f3070 */
  push32(0x108f24dbu); f_108f3070();
  /* 108f24db mov esi, esp */
  ESI = (ESP);
  /* 108f24dd push 0 */
  push32((uint32_t)(0x0u));
  /* 108f24df push 4 */
  push32((uint32_t)(0x4u));
  /* 108f24e1 call dword ptr [0x10923494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923494))), 0x108f24e7u);
  /* 108f24e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f24ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f24ec call 0x108f3070 */
  push32(0x108f24f1u); f_108f3070();
L_108f24f1:;
  /* 108f24f1 mov esi, esp */
  ESI = (ESP);
  /* 108f24f3 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 108f24f5 call dword ptr [0x1092343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092343c))), 0x108f24fbu);
  /* 108f24fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f24fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2500 call 0x108f3070 */
  push32(0x108f2505u); f_108f3070();
  /* 108f2505 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f250a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f250c je 0x108f25c1 */
  if (C.zf) goto L_108f25c1;
  /* 108f2512 push 0x10920430 */
  push32((uint32_t)(0x10920430u));
  /* 108f2517 call 0x108f1005 */
  push32(0x108f251cu); f_108f1005();
  /* 108f251c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f251f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f2521 jle 0x108f25c1 */
  if ((C.zf||C.sf!=C.of)) goto L_108f25c1;
  /* 108f2527 mov esi, esp */
  ESI = (ESP);
  /* 108f2529 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f252b push 0x109204c8 */
  push32((uint32_t)(0x109204c8u));
  /* 108f2530 call dword ptr [0x10923474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923474))), 0x108f2536u);
  /* 108f2536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2539 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f253b call 0x108f3070 */
  push32(0x108f2540u); f_108f3070();
  /* 108f2540 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f2542 jle 0x108f25c1 */
  if ((C.zf||C.sf!=C.of)) goto L_108f25c1;
  /* 108f2544 mov esi, esp */
  ESI = (ESP);
  /* 108f2546 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f2548 push 0x109204c8 */
  push32((uint32_t)(0x109204c8u));
  /* 108f254d call dword ptr [0x10923474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923474))), 0x108f2553u);
  /* 108f2553 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2556 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2558 call 0x108f3070 */
  push32(0x108f255du); f_108f3070();
  /* 108f255d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f255f jne 0x108f25c1 */
  if (!C.zf) goto L_108f25c1;
  /* 108f2561 mov esi, esp */
  ESI = (ESP);
  /* 108f2563 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f2565 push 0x109204c8 */
  push32((uint32_t)(0x109204c8u));
  /* 108f256a call dword ptr [0x10923474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923474))), 0x108f2570u);
  /* 108f2570 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2573 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2575 call 0x108f3070 */
  push32(0x108f257au); f_108f3070();
  /* 108f257a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f257c jne 0x108f25c1 */
  if (!C.zf) goto L_108f25c1;
  /* 108f257e mov esi, esp */
  ESI = (ESP);
  /* 108f2580 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f2582 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 108f2584 call dword ptr [0x10923444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923444))), 0x108f258au);
  /* 108f258a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f258d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f258f call 0x108f3070 */
  push32(0x108f2594u); f_108f3070();
  /* 108f2594 mov esi, esp */
  ESI = (ESP);
  /* 108f2596 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f2598 push 0x10920430 */
  push32((uint32_t)(0x10920430u));
  /* 108f259d call dword ptr [0x10923440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923440))), 0x108f25a3u);
  /* 108f25a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f25a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f25a8 call 0x108f3070 */
  push32(0x108f25adu); f_108f3070();
  /* 108f25ad mov esi, esp */
  ESI = (ESP);
  /* 108f25af push 2 */
  push32((uint32_t)(0x2u));
  /* 108f25b1 call dword ptr [0x109234b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234b0))), 0x108f25b7u);
  /* 108f25b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f25ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f25bc call 0x108f3070 */
  push32(0x108f25c1u); f_108f3070();
L_108f25c1:;
  /* 108f25c1 mov esi, esp */
  ESI = (ESP);
  /* 108f25c3 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 108f25c5 call dword ptr [0x1092343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092343c))), 0x108f25cbu);
  /* 108f25cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f25ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f25d0 call 0x108f3070 */
  push32(0x108f25d5u); f_108f3070();
  /* 108f25d5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f25da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f25dc jne 0x108f264f */
  if (!C.zf) goto L_108f264f;
  /* 108f25de push 0x10920430 */
  push32((uint32_t)(0x10920430u));
  /* 108f25e3 call 0x108f1005 */
  push32(0x108f25e8u); f_108f1005();
  /* 108f25e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f25eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f25ed jle 0x108f264f */
  if ((C.zf||C.sf!=C.of)) goto L_108f264f;
  /* 108f25ef mov esi, esp */
  ESI = (ESP);
  /* 108f25f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f25f3 push 0x109204c8 */
  push32((uint32_t)(0x109204c8u));
  /* 108f25f8 call dword ptr [0x10923474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923474))), 0x108f25feu);
  /* 108f25fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2601 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2603 call 0x108f3070 */
  push32(0x108f2608u); f_108f3070();
  /* 108f2608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f260a jne 0x108f264f */
  if (!C.zf) goto L_108f264f;
  /* 108f260c mov esi, esp */
  ESI = (ESP);
  /* 108f260e push 1 */
  push32((uint32_t)(0x1u));
  /* 108f2610 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 108f2612 call dword ptr [0x10923444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923444))), 0x108f2618u);
  /* 108f2618 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f261b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f261d call 0x108f3070 */
  push32(0x108f2622u); f_108f3070();
  /* 108f2622 mov esi, esp */
  ESI = (ESP);
  /* 108f2624 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f2626 push 0x10920430 */
  push32((uint32_t)(0x10920430u));
  /* 108f262b call dword ptr [0x10923440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923440))), 0x108f2631u);
  /* 108f2631 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2634 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2636 call 0x108f3070 */
  push32(0x108f263bu); f_108f3070();
  /* 108f263b mov esi, esp */
  ESI = (ESP);
  /* 108f263d push 2 */
  push32((uint32_t)(0x2u));
  /* 108f263f call dword ptr [0x10923468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923468))), 0x108f2645u);
  /* 108f2645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2648 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f264a call 0x108f3070 */
  push32(0x108f264fu); f_108f3070();
L_108f264f:;
  /* 108f264f mov esi, esp */
  ESI = (ESP);
  /* 108f2651 push 8 */
  push32((uint32_t)(0x8u));
  /* 108f2653 call dword ptr [0x1092343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092343c))), 0x108f2659u);
  /* 108f2659 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f265c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f265e call 0x108f3070 */
  push32(0x108f2663u); f_108f3070();
  /* 108f2663 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f2668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f266a je 0x108f27a7 */
  if (C.zf) goto L_108f27a7;
  /* 108f2670 mov esi, esp */
  ESI = (ESP);
  /* 108f2672 push 0x10920438 */
  push32((uint32_t)(0x10920438u));
  /* 108f2677 push 0x10920530 */
  push32((uint32_t)(0x10920530u));
  /* 108f267c call dword ptr [0x109234ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234ac))), 0x108f2682u);
  /* 108f2682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2685 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2687 call 0x108f3070 */
  push32(0x108f268cu); f_108f3070();
  /* 108f268c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f268e jne 0x108f27a7 */
  if (!C.zf) goto L_108f27a7;
  /* 108f2694 mov esi, esp */
  ESI = (ESP);
  /* 108f2696 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f2698 push 0x109204d0 */
  push32((uint32_t)(0x109204d0u));
  /* 108f269d call dword ptr [0x10923474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923474))), 0x108f26a3u);
  /* 108f26a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f26a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f26a8 call 0x108f3070 */
  push32(0x108f26adu); f_108f3070();
  /* 108f26ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f26af jle 0x108f27a7 */
  if ((C.zf||C.sf!=C.of)) goto L_108f27a7;
  /* 108f26b5 mov esi, esp */
  ESI = (ESP);
  /* 108f26b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f26b9 push 8 */
  push32((uint32_t)(0x8u));
  /* 108f26bb call dword ptr [0x10923444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923444))), 0x108f26c1u);
  /* 108f26c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f26c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f26c6 call 0x108f3070 */
  push32(0x108f26cbu); f_108f3070();
  /* 108f26cb mov esi, esp */
  ESI = (ESP);
  /* 108f26cd push 1 */
  push32((uint32_t)(0x1u));
  /* 108f26cf call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f26d5u);
  /* 108f26d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f26d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f26da call 0x108f3070 */
  push32(0x108f26dfu); f_108f3070();
  /* 108f26df imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f26e5 mov ecx, 0xbb8 */
  ECX = (0xbb8u);
  /* 108f26ea sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f26ec mov esi, esp */
  ESI = (ESP);
  /* 108f26ee push ecx */
  push32((uint32_t)(ECX));
  /* 108f26ef push 0x1091b158 */
  push32((uint32_t)(0x1091b158u));
  /* 108f26f4 call dword ptr [0x109234b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234b4))), 0x108f26fau);
  /* 108f26fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f26fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f26ff call 0x108f3070 */
  push32(0x108f2704u); f_108f3070();
  /* 108f2704 mov esi, esp */
  ESI = (ESP);
  /* 108f2706 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f2708 call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f270eu);
  /* 108f270e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2711 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2713 call 0x108f3070 */
  push32(0x108f2718u); f_108f3070();
  /* 108f2718 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f271e mov edx, 0xbb8 */
  EDX = (0xbb8u);
  /* 108f2723 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f2725 mov esi, esp */
  ESI = (ESP);
  /* 108f2727 push edx */
  push32((uint32_t)(EDX));
  /* 108f2728 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f272a push 0 */
  push32((uint32_t)(0x0u));
  /* 108f272c call dword ptr [0x109234b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234b8))), 0x108f2732u);
  /* 108f2732 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2735 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2737 call 0x108f3070 */
  push32(0x108f273cu); f_108f3070();
  /* 108f273c mov esi, esp */
  ESI = (ESP);
  /* 108f273e push 4 */
  push32((uint32_t)(0x4u));
  /* 108f2740 call dword ptr [0x10923488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923488))), 0x108f2746u);
  /* 108f2746 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2749 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f274b call 0x108f3070 */
  push32(0x108f2750u); f_108f3070();
  /* 108f2750 mov esi, esp */
  ESI = (ESP);
  /* 108f2752 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f2754 push 0x10920450 */
  push32((uint32_t)(0x10920450u));
  /* 108f2759 call dword ptr [0x10923440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923440))), 0x108f275fu);
  /* 108f275f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2762 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2764 call 0x108f3070 */
  push32(0x108f2769u); f_108f3070();
  /* 108f2769 mov esi, esp */
  ESI = (ESP);
  /* 108f276b push 4 */
  push32((uint32_t)(0x4u));
  /* 108f276d call dword ptr [0x109234bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234bc))), 0x108f2773u);
  /* 108f2773 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2776 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2778 call 0x108f3070 */
  push32(0x108f277du); f_108f3070();
  /* 108f277d mov esi, esp */
  ESI = (ESP);
  /* 108f277f push 0 */
  push32((uint32_t)(0x0u));
  /* 108f2781 push 0x109204d0 */
  push32((uint32_t)(0x109204d0u));
  /* 108f2786 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f2788 push 0x10920520 */
  push32((uint32_t)(0x10920520u));
  /* 108f278d push 0x10920500 */
  push32((uint32_t)(0x10920500u));
  /* 108f2792 push 0x10920470 */
  push32((uint32_t)(0x10920470u));
  /* 108f2797 call dword ptr [0x10923450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923450))), 0x108f279du);
  /* 108f279d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f27a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f27a2 call 0x108f3070 */
  push32(0x108f27a7u); f_108f3070();
L_108f27a7:;
  /* 108f27a7 mov esi, esp */
  ESI = (ESP);
  /* 108f27a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f27ab call dword ptr [0x1092343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092343c))), 0x108f27b1u);
  /* 108f27b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f27b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f27b6 call 0x108f3070 */
  push32(0x108f27bbu); f_108f3070();
  /* 108f27bb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f27c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f27c2 je 0x108f28ff */
  if (C.zf) goto L_108f28ff;
  /* 108f27c8 mov esi, esp */
  ESI = (ESP);
  /* 108f27ca push 0x10920440 */
  push32((uint32_t)(0x10920440u));
  /* 108f27cf push 0x10920538 */
  push32((uint32_t)(0x10920538u));
  /* 108f27d4 call dword ptr [0x109234ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234ac))), 0x108f27dau);
  /* 108f27da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f27dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f27df call 0x108f3070 */
  push32(0x108f27e4u); f_108f3070();
  /* 108f27e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f27e6 jne 0x108f28ff */
  if (!C.zf) goto L_108f28ff;
  /* 108f27ec mov esi, esp */
  ESI = (ESP);
  /* 108f27ee push 0 */
  push32((uint32_t)(0x0u));
  /* 108f27f0 push 0x109204d8 */
  push32((uint32_t)(0x109204d8u));
  /* 108f27f5 call dword ptr [0x10923474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923474))), 0x108f27fbu);
  /* 108f27fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f27fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2800 call 0x108f3070 */
  push32(0x108f2805u); f_108f3070();
  /* 108f2805 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f2807 jle 0x108f28ff */
  if ((C.zf||C.sf!=C.of)) goto L_108f28ff;
  /* 108f280d mov esi, esp */
  ESI = (ESP);
  /* 108f280f push 0 */
  push32((uint32_t)(0x0u));
  /* 108f2811 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f2813 call dword ptr [0x10923444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923444))), 0x108f2819u);
  /* 108f2819 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f281c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f281e call 0x108f3070 */
  push32(0x108f2823u); f_108f3070();
  /* 108f2823 mov esi, esp */
  ESI = (ESP);
  /* 108f2825 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f2827 call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f282du);
  /* 108f282d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2830 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2832 call 0x108f3070 */
  push32(0x108f2837u); f_108f3070();
  /* 108f2837 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f283d mov ecx, 0xfa0 */
  ECX = (0xfa0u);
  /* 108f2842 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f2844 mov esi, esp */
  ESI = (ESP);
  /* 108f2846 push ecx */
  push32((uint32_t)(ECX));
  /* 108f2847 push 0x1091b150 */
  push32((uint32_t)(0x1091b150u));
  /* 108f284c call dword ptr [0x109234b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234b4))), 0x108f2852u);
  /* 108f2852 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2855 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2857 call 0x108f3070 */
  push32(0x108f285cu); f_108f3070();
  /* 108f285c mov esi, esp */
  ESI = (ESP);
  /* 108f285e push 1 */
  push32((uint32_t)(0x1u));
  /* 108f2860 call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f2866u);
  /* 108f2866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2869 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f286b call 0x108f3070 */
  push32(0x108f2870u); f_108f3070();
  /* 108f2870 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f2876 mov edx, 0xfa0 */
  EDX = (0xfa0u);
  /* 108f287b sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f287d mov esi, esp */
  ESI = (ESP);
  /* 108f287f push edx */
  push32((uint32_t)(EDX));
  /* 108f2880 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f2882 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f2884 call dword ptr [0x109234b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234b8))), 0x108f288au);
  /* 108f288a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f288d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f288f call 0x108f3070 */
  push32(0x108f2894u); f_108f3070();
  /* 108f2894 mov esi, esp */
  ESI = (ESP);
  /* 108f2896 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f2898 call dword ptr [0x10923488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923488))), 0x108f289eu);
  /* 108f289e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f28a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f28a3 call 0x108f3070 */
  push32(0x108f28a8u); f_108f3070();
  /* 108f28a8 mov esi, esp */
  ESI = (ESP);
  /* 108f28aa push 0 */
  push32((uint32_t)(0x0u));
  /* 108f28ac push 0x10920458 */
  push32((uint32_t)(0x10920458u));
  /* 108f28b1 call dword ptr [0x10923440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923440))), 0x108f28b7u);
  /* 108f28b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f28ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f28bc call 0x108f3070 */
  push32(0x108f28c1u); f_108f3070();
  /* 108f28c1 mov esi, esp */
  ESI = (ESP);
  /* 108f28c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f28c5 call dword ptr [0x109234bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234bc))), 0x108f28cbu);
  /* 108f28cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f28ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f28d0 call 0x108f3070 */
  push32(0x108f28d5u); f_108f3070();
  /* 108f28d5 mov esi, esp */
  ESI = (ESP);
  /* 108f28d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f28d9 push 0x109204d8 */
  push32((uint32_t)(0x109204d8u));
  /* 108f28de push 4 */
  push32((uint32_t)(0x4u));
  /* 108f28e0 push 0x10920520 */
  push32((uint32_t)(0x10920520u));
  /* 108f28e5 push 0x10920500 */
  push32((uint32_t)(0x10920500u));
  /* 108f28ea push 0x10920480 */
  push32((uint32_t)(0x10920480u));
  /* 108f28ef call dword ptr [0x10923450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923450))), 0x108f28f5u);
  /* 108f28f5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f28f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f28fa call 0x108f3070 */
  push32(0x108f28ffu); f_108f3070();
L_108f28ff:;
  /* 108f28ff mov esi, esp */
  ESI = (ESP);
  /* 108f2901 push 0xa */
  push32((uint32_t)(0xau));
  /* 108f2903 call dword ptr [0x1092343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092343c))), 0x108f2909u);
  /* 108f2909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f290c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f290e call 0x108f3070 */
  push32(0x108f2913u); f_108f3070();
  /* 108f2913 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f2918 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f291a je 0x108f2a57 */
  if (C.zf) goto L_108f2a57;
  /* 108f2920 mov esi, esp */
  ESI = (ESP);
  /* 108f2922 push 0x10920448 */
  push32((uint32_t)(0x10920448u));
  /* 108f2927 push 0x10920540 */
  push32((uint32_t)(0x10920540u));
  /* 108f292c call dword ptr [0x109234ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234ac))), 0x108f2932u);
  /* 108f2932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2935 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2937 call 0x108f3070 */
  push32(0x108f293cu); f_108f3070();
  /* 108f293c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f293e jne 0x108f2a57 */
  if (!C.zf) goto L_108f2a57;
  /* 108f2944 mov esi, esp */
  ESI = (ESP);
  /* 108f2946 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f2948 push 0x109204e0 */
  push32((uint32_t)(0x109204e0u));
  /* 108f294d call dword ptr [0x10923474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923474))), 0x108f2953u);
  /* 108f2953 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2956 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2958 call 0x108f3070 */
  push32(0x108f295du); f_108f3070();
  /* 108f295d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f295f jle 0x108f2a57 */
  if ((C.zf||C.sf!=C.of)) goto L_108f2a57;
  /* 108f2965 mov esi, esp */
  ESI = (ESP);
  /* 108f2967 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f2969 push 0xa */
  push32((uint32_t)(0xau));
  /* 108f296b call dword ptr [0x10923444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923444))), 0x108f2971u);
  /* 108f2971 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2974 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2976 call 0x108f3070 */
  push32(0x108f297bu); f_108f3070();
  /* 108f297b mov esi, esp */
  ESI = (ESP);
  /* 108f297d push 1 */
  push32((uint32_t)(0x1u));
  /* 108f297f call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f2985u);
  /* 108f2985 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2988 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f298a call 0x108f3070 */
  push32(0x108f298fu); f_108f3070();
  /* 108f298f imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f2995 mov ecx, 0x7d0 */
  ECX = (0x7d0u);
  /* 108f299a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f299c mov esi, esp */
  ESI = (ESP);
  /* 108f299e push ecx */
  push32((uint32_t)(ECX));
  /* 108f299f push 0x1091b144 */
  push32((uint32_t)(0x1091b144u));
  /* 108f29a4 call dword ptr [0x109234b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234b4))), 0x108f29aau);
  /* 108f29aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f29ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f29af call 0x108f3070 */
  push32(0x108f29b4u); f_108f3070();
  /* 108f29b4 mov esi, esp */
  ESI = (ESP);
  /* 108f29b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f29b8 call dword ptr [0x10923448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923448))), 0x108f29beu);
  /* 108f29be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f29c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f29c3 call 0x108f3070 */
  push32(0x108f29c8u); f_108f3070();
  /* 108f29c8 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f29ce mov edx, 0x7d0 */
  EDX = (0x7d0u);
  /* 108f29d3 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f29d5 mov esi, esp */
  ESI = (ESP);
  /* 108f29d7 push edx */
  push32((uint32_t)(EDX));
  /* 108f29d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f29da push 0 */
  push32((uint32_t)(0x0u));
  /* 108f29dc call dword ptr [0x109234b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234b8))), 0x108f29e2u);
  /* 108f29e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f29e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f29e7 call 0x108f3070 */
  push32(0x108f29ecu); f_108f3070();
  /* 108f29ec mov esi, esp */
  ESI = (ESP);
  /* 108f29ee push 4 */
  push32((uint32_t)(0x4u));
  /* 108f29f0 call dword ptr [0x10923488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923488))), 0x108f29f6u);
  /* 108f29f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f29f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f29fb call 0x108f3070 */
  push32(0x108f2a00u); f_108f3070();
  /* 108f2a00 mov esi, esp */
  ESI = (ESP);
  /* 108f2a02 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f2a04 push 0x10920460 */
  push32((uint32_t)(0x10920460u));
  /* 108f2a09 call dword ptr [0x10923440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923440))), 0x108f2a0fu);
  /* 108f2a0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2a12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2a14 call 0x108f3070 */
  push32(0x108f2a19u); f_108f3070();
  /* 108f2a19 mov esi, esp */
  ESI = (ESP);
  /* 108f2a1b push 4 */
  push32((uint32_t)(0x4u));
  /* 108f2a1d call dword ptr [0x109234bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109234bc))), 0x108f2a23u);
  /* 108f2a23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2a26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2a28 call 0x108f3070 */
  push32(0x108f2a2du); f_108f3070();
  /* 108f2a2d mov esi, esp */
  ESI = (ESP);
  /* 108f2a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 108f2a31 push 0x109204e0 */
  push32((uint32_t)(0x109204e0u));
  /* 108f2a36 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f2a38 push 0x10920510 */
  push32((uint32_t)(0x10920510u));
  /* 108f2a3d push 0x10920500 */
  push32((uint32_t)(0x10920500u));
  /* 108f2a42 push 0x10920488 */
  push32((uint32_t)(0x10920488u));
  /* 108f2a47 call dword ptr [0x10923450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923450))), 0x108f2a4du);
  /* 108f2a4d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2a50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2a52 call 0x108f3070 */
  push32(0x108f2a57u); f_108f3070();
L_108f2a57:;
  /* 108f2a57 pop edi */
  EDI = (pop32());
  /* 108f2a58 pop esi */
  ESI = (pop32());
  /* 108f2a59 pop ebx */
  EBX = (pop32());
  /* 108f2a5a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2a5d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2a5f call 0x108f3070 */
  push32(0x108f2a64u); f_108f3070();
  /* 108f2a64 mov esp, ebp */
  ESP = (EBP);
  /* 108f2a66 pop ebp */
  EBP = (pop32());
  /* 108f2a67 ret  */
  ESPCHK(0x108f17a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f20 @ 0x108f2f20 (63 bytes, 26 insns) */
void f_108f2f20(void) {
  FTRACE(0x108f2f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f2f20 push ebp */
  push32((uint32_t)(EBP));
  /* 108f2f21 mov ebp, esp */
  EBP = (ESP);
  /* 108f2f23 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f2f26 push ebx */
  push32((uint32_t)(EBX));
  /* 108f2f27 push esi */
  push32((uint32_t)(ESI));
  /* 108f2f28 push edi */
  push32((uint32_t)(EDI));
  /* 108f2f29 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 108f2f2c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 108f2f31 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 108f2f36 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108f2f38 mov esi, esp */
  ESI = (ESP);
  /* 108f2f3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f2f3d push eax */
  push32((uint32_t)(EAX));
  /* 108f2f3e call dword ptr [0x10923438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923438))), 0x108f2f44u);
  /* 108f2f44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2f47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2f49 call 0x108f3070 */
  push32(0x108f2f4eu); f_108f3070();
  /* 108f2f4e pop edi */
  EDI = (pop32());
  /* 108f2f4f pop esi */
  ESI = (pop32());
  /* 108f2f50 pop ebx */
  EBX = (pop32());
  /* 108f2f51 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f2f54 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f2f56 call 0x108f3070 */
  push32(0x108f2f5bu); f_108f3070();
  /* 108f2f5b mov esp, ebp */
  ESP = (EBP);
  /* 108f2f5d pop ebp */
  EBP = (pop32());
  /* 108f2f5e ret  */
  ESPCHK(0x108f2f20u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x108f3070 (56 bytes, 28 insns) */
void f_108f3070(void) {
  FTRACE(0x108f3070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3070 jne 0x108f3073 */
  if (!C.zf) goto L_108f3073;
  /* 108f3072 ret  */
  ESPCHK(0x108f3070u, _esp0);
  ESP += 4; return;
L_108f3073:;
  /* 108f3073 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3074 mov ebp, esp */
  EBP = (ESP);
  /* 108f3076 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f3079 push eax */
  push32((uint32_t)(EAX));
  /* 108f307a push edx */
  push32((uint32_t)(EDX));
  /* 108f307b push ebx */
  push32((uint32_t)(EBX));
  /* 108f307c push esi */
  push32((uint32_t)(ESI));
  /* 108f307d push edi */
  push32((uint32_t)(EDI));
  /* 108f307e push 0x1091b1d0 */
  push32((uint32_t)(0x1091b1d0u));
  /* 108f3083 push 0x1091b1cc */
  push32((uint32_t)(0x1091b1ccu));
  /* 108f3088 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 108f308a push 0x1091b1bc */
  push32((uint32_t)(0x1091b1bcu));
  /* 108f308f push 1 */
  push32((uint32_t)(0x1u));
  /* 108f3091 call 0x108f3440 */
  push32(0x108f3096u); f_108f3440();
  /* 108f3096 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3099 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f309c jne 0x108f309f */
  if (!C.zf) goto L_108f309f;
  /* 108f309e int3  */
  x86_unimpl("int3 @ 0x108f309e");
L_108f309f:;
  /* 108f309f pop edi */
  EDI = (pop32());
  /* 108f30a0 pop esi */
  ESI = (pop32());
  /* 108f30a1 pop ebx */
  EBX = (pop32());
  /* 108f30a2 pop edx */
  EDX = (pop32());
  /* 108f30a3 pop eax */
  EAX = (pop32());
  /* 108f30a4 mov esp, ebp */
  ESP = (EBP);
  /* 108f30a6 pop ebp */
  EBP = (pop32());
  /* 108f30a7 ret  */
  ESPCHK(0x108f3070u, _esp0);
  ESP += 4; return;
}

/* FUN_100030b0 @ 0x108f30b0 (313 bytes, 78 insns) */
void f_108f30b0(void) {
  FTRACE(0x108f30b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f30b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f30b1 mov ebp, esp */
  EBP = (ESP);
  /* 108f30b3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f30b7 jne 0x108f3177 */
  if (!C.zf) goto L_108f3177;
  /* 108f30bd call dword ptr [0x10923360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923360))), 0x108f30c3u);
  /* 108f30c3 mov dword ptr [0x109205bc], eax */
  w32((uint32_t)(0x109205bc), (EAX));
  /* 108f30c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f30ca call 0x108f6b70 */
  push32(0x108f30cfu); f_108f6b70();
  /* 108f30cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f30d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f30d4 jne 0x108f30dd */
  if (!C.zf) goto L_108f30dd;
  /* 108f30d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f30d8 jmp 0x108f31e5 */
  goto L_108f31e5;
L_108f30dd:;
  /* 108f30dd mov eax, dword ptr [0x109205bc] */
  EAX = (r32((uint32_t)(0x109205bc)));
  /* 108f30e2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 108f30e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f30ea mov dword ptr [0x109205c8], eax */
  w32((uint32_t)(0x109205c8), (EAX));
  /* 108f30ef mov ecx, dword ptr [0x109205bc] */
  ECX = (r32((uint32_t)(0x109205bc)));
  /* 108f30f5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f30fb mov dword ptr [0x109205c4], ecx */
  w32((uint32_t)(0x109205c4), (ECX));
  /* 108f3101 mov edx, dword ptr [0x109205c4] */
  EDX = (r32((uint32_t)(0x109205c4)));
  /* 108f3107 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 108f310a add edx, dword ptr [0x109205c8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109205c8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3110 mov dword ptr [0x109205c0], edx */
  w32((uint32_t)(0x109205c0), (EDX));
  /* 108f3116 mov eax, dword ptr [0x109205bc] */
  EAX = (r32((uint32_t)(0x109205bc)));
  /* 108f311b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 108f311e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f3123 mov dword ptr [0x109205bc], eax */
  w32((uint32_t)(0x109205bc), (EAX));
  /* 108f3128 call 0x108f3ce0 */
  push32(0x108f312du); f_108f3ce0();
  /* 108f312d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f312f jne 0x108f313d */
  if (!C.zf) goto L_108f313d;
  /* 108f3131 call 0x108f6bc0 */
  push32(0x108f3136u); f_108f6bc0();
  /* 108f3136 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f3138 jmp 0x108f31e5 */
  goto L_108f31e5;
L_108f313d:;
  /* 108f313d call dword ptr [0x1092335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092335c))), 0x108f3143u);
  /* 108f3143 mov dword ptr [0x1092210c], eax */
  w32((uint32_t)(0x1092210c), (EAX));
  /* 108f3148 call 0x108f6950 */
  push32(0x108f314du); f_108f6950();
  /* 108f314d mov dword ptr [0x109205a4], eax */
  w32((uint32_t)(0x109205a4), (EAX));
  /* 108f3152 call 0x108f3f90 */
  push32(0x108f3157u); f_108f3f90();
  /* 108f3157 call 0x108f6440 */
  push32(0x108f315cu); f_108f6440();
  /* 108f315c call 0x108f62f0 */
  push32(0x108f3161u); f_108f62f0();
  /* 108f3161 call 0x108f3ae0 */
  push32(0x108f3166u); f_108f3ae0();
  /* 108f3166 mov ecx, dword ptr [0x109205a0] */
  ECX = (r32((uint32_t)(0x109205a0)));
  /* 108f316c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f316f mov dword ptr [0x109205a0], ecx */
  w32((uint32_t)(0x109205a0), (ECX));
  /* 108f3175 jmp 0x108f31e0 */
  goto L_108f31e0;
L_108f3177:;
  /* 108f3177 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f317b jne 0x108f31d0 */
  if (!C.zf) goto L_108f31d0;
  /* 108f317d cmp dword ptr [0x109205a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109205a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3184 jle 0x108f31ca */
  if ((C.zf||C.sf!=C.of)) goto L_108f31ca;
  /* 108f3186 mov edx, dword ptr [0x109205a0] */
  EDX = (r32((uint32_t)(0x109205a0)));
  /* 108f318c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f318f mov dword ptr [0x109205a0], edx */
  w32((uint32_t)(0x109205a0), (EDX));
  /* 108f3195 cmp dword ptr [0x109205f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109205f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f319c jne 0x108f31a3 */
  if (!C.zf) goto L_108f31a3;
  /* 108f319e call 0x108f3b60 */
  push32(0x108f31a3u); f_108f3b60();
L_108f31a3:;
  /* 108f31a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108f31a5 call 0x108f5890 */
  push32(0x108f31aau); f_108f5890();
  /* 108f31aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f31ad and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 108f31b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f31b2 je 0x108f31b9 */
  if (C.zf) goto L_108f31b9;
  /* 108f31b4 call 0x108f61a0 */
  push32(0x108f31b9u); f_108f61a0();
L_108f31b9:;
  /* 108f31b9 call 0x108f42c0 */
  push32(0x108f31beu); f_108f42c0();
  /* 108f31be call 0x108f3d70 */
  push32(0x108f31c3u); f_108f3d70();
  /* 108f31c3 call 0x108f6bc0 */
  push32(0x108f31c8u); f_108f6bc0();
  /* 108f31c8 jmp 0x108f31ce */
  goto L_108f31ce;
L_108f31ca:;
  /* 108f31ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f31cc jmp 0x108f31e5 */
  goto L_108f31e5;
L_108f31ce:;
  /* 108f31ce jmp 0x108f31e0 */
  goto L_108f31e0;
L_108f31d0:;
  /* 108f31d0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f31d4 jne 0x108f31e0 */
  if (!C.zf) goto L_108f31e0;
  /* 108f31d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f31d8 call 0x108f3e60 */
  push32(0x108f31ddu); f_108f3e60();
  /* 108f31dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f31e0:;
  /* 108f31e0 mov eax, 1 */
  EAX = (0x1u);
L_108f31e5:;
  /* 108f31e5 pop ebp */
  EBP = (pop32());
  /* 108f31e6 ret 0xc */
  ESPCHK(0x108f30b0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x108f31f0 (243 bytes, 86 insns) */
void f_108f31f0(void) {
  FTRACE(0x108f31f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f31f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f31f1 mov ebp, esp */
  EBP = (ESP);
  /* 108f31f3 push ecx */
  push32((uint32_t)(ECX));
  /* 108f31f4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108f31fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f31ff jne 0x108f3211 */
  if (!C.zf) goto L_108f3211;
  /* 108f3201 cmp dword ptr [0x109205a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109205a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3208 jne 0x108f3211 */
  if (!C.zf) goto L_108f3211;
  /* 108f320a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f320c jmp 0x108f32dd */
  goto L_108f32dd;
L_108f3211:;
  /* 108f3211 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3215 je 0x108f321d */
  if (C.zf) goto L_108f321d;
  /* 108f3217 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f321b jne 0x108f325f */
  if (!C.zf) goto L_108f325f;
L_108f321d:;
  /* 108f321d cmp dword ptr [0x1092211c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1092211c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3224 je 0x108f323b */
  if (C.zf) goto L_108f323b;
  /* 108f3226 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f3229 push eax */
  push32((uint32_t)(EAX));
  /* 108f322a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f322d push ecx */
  push32((uint32_t)(ECX));
  /* 108f322e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3231 push edx */
  push32((uint32_t)(EDX));
  /* 108f3232 call dword ptr [0x1092211c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092211c))), 0x108f3238u);
  /* 108f3238 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108f323b:;
  /* 108f323b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f323f je 0x108f3255 */
  if (C.zf) goto L_108f3255;
  /* 108f3241 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f3244 push eax */
  push32((uint32_t)(EAX));
  /* 108f3245 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f3248 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3249 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f324c push edx */
  push32((uint32_t)(EDX));
  /* 108f324d call 0x108f30b0 */
  push32(0x108f3252u); f_108f30b0();
  /* 108f3252 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108f3255:;
  /* 108f3255 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3259 jne 0x108f325f */
  if (!C.zf) goto L_108f325f;
  /* 108f325b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f325d jmp 0x108f32dd */
  goto L_108f32dd;
L_108f325f:;
  /* 108f325f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f3262 push eax */
  push32((uint32_t)(EAX));
  /* 108f3263 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f3266 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3267 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f326a push edx */
  push32((uint32_t)(EDX));
  /* 108f326b call 0x108f100f */
  push32(0x108f3270u); f_108f100f();
  /* 108f3270 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f3273 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3277 jne 0x108f328e */
  if (!C.zf) goto L_108f328e;
  /* 108f3279 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f327d jne 0x108f328e */
  if (!C.zf) goto L_108f328e;
  /* 108f327f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f3282 push eax */
  push32((uint32_t)(EAX));
  /* 108f3283 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f3285 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3288 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3289 call 0x108f30b0 */
  push32(0x108f328eu); f_108f30b0();
L_108f328e:;
  /* 108f328e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3292 je 0x108f329a */
  if (C.zf) goto L_108f329a;
  /* 108f3294 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3298 jne 0x108f32da */
  if (!C.zf) goto L_108f32da;
L_108f329a:;
  /* 108f329a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f329d push edx */
  push32((uint32_t)(EDX));
  /* 108f329e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f32a1 push eax */
  push32((uint32_t)(EAX));
  /* 108f32a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f32a5 push ecx */
  push32((uint32_t)(ECX));
  /* 108f32a6 call 0x108f30b0 */
  push32(0x108f32abu); f_108f30b0();
  /* 108f32ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f32ad jne 0x108f32b6 */
  if (!C.zf) goto L_108f32b6;
  /* 108f32af mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108f32b6:;
  /* 108f32b6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f32ba je 0x108f32da */
  if (C.zf) goto L_108f32da;
  /* 108f32bc cmp dword ptr [0x1092211c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1092211c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f32c3 je 0x108f32da */
  if (C.zf) goto L_108f32da;
  /* 108f32c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f32c8 push edx */
  push32((uint32_t)(EDX));
  /* 108f32c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f32cc push eax */
  push32((uint32_t)(EAX));
  /* 108f32cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f32d0 push ecx */
  push32((uint32_t)(ECX));
  /* 108f32d1 call dword ptr [0x1092211c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092211c))), 0x108f32d7u);
  /* 108f32d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108f32da:;
  /* 108f32da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108f32dd:;
  /* 108f32dd mov esp, ebp */
  ESP = (EBP);
  /* 108f32df pop ebp */
  EBP = (pop32());
  /* 108f32e0 ret 0xc */
  ESPCHK(0x108f31f0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x108f32f0 (58 bytes, 18 insns) */
void f_108f32f0(void) {
  FTRACE(0x108f32f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f32f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f32f1 mov ebp, esp */
  EBP = (ESP);
  /* 108f32f3 cmp dword ptr [0x109205ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109205ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f32fa je 0x108f330e */
  if (C.zf) goto L_108f330e;
  /* 108f32fc cmp dword ptr [0x109205ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109205ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3303 jne 0x108f3313 */
  if (!C.zf) goto L_108f3313;
  /* 108f3305 cmp dword ptr [0x109205b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109205b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f330c jne 0x108f3313 */
  if (!C.zf) goto L_108f3313;
L_108f330e:;
  /* 108f330e call 0x108f6c60 */
  push32(0x108f3313u); f_108f6c60();
L_108f3313:;
  /* 108f3313 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3316 push eax */
  push32((uint32_t)(EAX));
  /* 108f3317 call 0x108f6cb0 */
  push32(0x108f331cu); f_108f6cb0();
  /* 108f331c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f331f push 0xff */
  push32((uint32_t)(0xffu));
  /* 108f3324 call dword ptr [0x1091ea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1091ea30))), 0x108f332au);
  /* 108f332a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f332d pop ebp */
  EBP = (pop32());
  /* 108f332e ret  */
  ESPCHK(0x108f32f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003330 @ 0x108f3330 (11 bytes, 5 insns) */
void f_108f3330(void) {
  FTRACE(0x108f3330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3330 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3331 mov ebp, esp */
  EBP = (ESP);
  /* 108f3333 call dword ptr [0x10923364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923364))), 0x108f3339u);
  /* 108f3339 pop ebp */
  EBP = (pop32());
  /* 108f333a ret  */
  ESPCHK(0x108f3330u, _esp0);
  ESP += 4; return;
}

/* FUN_10003340 @ 0x108f3340 (87 bytes, 30 insns) */
void f_108f3340(void) {
  FTRACE(0x108f3340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3340 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3341 mov ebp, esp */
  EBP = (ESP);
  /* 108f3343 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3344 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3348 jl 0x108f3350 */
  if ((C.sf!=C.of)) goto L_108f3350;
  /* 108f334a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f334e jl 0x108f3355 */
  if ((C.sf!=C.of)) goto L_108f3355;
L_108f3350:;
  /* 108f3350 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f3353 jmp 0x108f3393 */
  goto L_108f3393;
L_108f3355:;
  /* 108f3355 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3359 jne 0x108f3367 */
  if (!C.zf) goto L_108f3367;
  /* 108f335b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f335e mov eax, dword ptr [eax*4 + 0x1091ea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1091ea38)));
  /* 108f3365 jmp 0x108f3393 */
  goto L_108f3393;
L_108f3367:;
  /* 108f3367 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f336a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 108f336d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f336f je 0x108f3376 */
  if (C.zf) goto L_108f3376;
  /* 108f3371 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f3374 jmp 0x108f3393 */
  goto L_108f3393;
L_108f3376:;
  /* 108f3376 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3379 mov eax, dword ptr [edx*4 + 0x1091ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1091ea38)));
  /* 108f3380 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f3383 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3386 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f3389 mov dword ptr [ecx*4 + 0x1091ea38], edx */
  w32((uint32_t)(ECX*4 + 0x1091ea38), (EDX));
  /* 108f3390 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108f3393:;
  /* 108f3393 mov esp, ebp */
  ESP = (EBP);
  /* 108f3395 pop ebp */
  EBP = (pop32());
  /* 108f3396 ret  */
  ESPCHK(0x108f3340u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x108f33a0 (126 bytes, 38 insns) */
void f_108f33a0(void) {
  FTRACE(0x108f33a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f33a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f33a1 mov ebp, esp */
  EBP = (ESP);
  /* 108f33a3 push ecx */
  push32((uint32_t)(ECX));
  /* 108f33a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f33a8 jl 0x108f33b0 */
  if ((C.sf!=C.of)) goto L_108f33b0;
  /* 108f33aa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f33ae jl 0x108f33b7 */
  if ((C.sf!=C.of)) goto L_108f33b7;
L_108f33b0:;
  /* 108f33b0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 108f33b5 jmp 0x108f341a */
  goto L_108f341a;
L_108f33b7:;
  /* 108f33b7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f33bb jne 0x108f33c9 */
  if (!C.zf) goto L_108f33c9;
  /* 108f33bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f33c0 mov eax, dword ptr [eax*4 + 0x1091ea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1091ea44)));
  /* 108f33c7 jmp 0x108f341a */
  goto L_108f341a;
L_108f33c9:;
  /* 108f33c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f33cc mov edx, dword ptr [ecx*4 + 0x1091ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1091ea44)));
  /* 108f33d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f33d6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f33da jne 0x108f33f0 */
  if (!C.zf) goto L_108f33f0;
  /* 108f33dc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 108f33de call dword ptr [0x10923368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923368))), 0x108f33e4u);
  /* 108f33e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f33e7 mov dword ptr [ecx*4 + 0x1091ea44], eax */
  w32((uint32_t)(ECX*4 + 0x1091ea44), (EAX));
  /* 108f33ee jmp 0x108f3417 */
  goto L_108f3417;
L_108f33f0:;
  /* 108f33f0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f33f4 jne 0x108f340a */
  if (!C.zf) goto L_108f340a;
  /* 108f33f6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 108f33f8 call dword ptr [0x10923368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923368))), 0x108f33feu);
  /* 108f33fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3401 mov dword ptr [edx*4 + 0x1091ea44], eax */
  w32((uint32_t)(EDX*4 + 0x1091ea44), (EAX));
  /* 108f3408 jmp 0x108f3417 */
  goto L_108f3417;
L_108f340a:;
  /* 108f340a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f340d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f3410 mov dword ptr [eax*4 + 0x1091ea44], ecx */
  w32((uint32_t)(EAX*4 + 0x1091ea44), (ECX));
L_108f3417:;
  /* 108f3417 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108f341a:;
  /* 108f341a mov esp, ebp */
  ESP = (EBP);
  /* 108f341c pop ebp */
  EBP = (pop32());
  /* 108f341d ret  */
  ESPCHK(0x108f33a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003420 @ 0x108f3420 (28 bytes, 11 insns) */
void f_108f3420(void) {
  FTRACE(0x108f3420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3420 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3421 mov ebp, esp */
  EBP = (ESP);
  /* 108f3423 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3424 mov eax, dword ptr [0x10922100] */
  EAX = (r32((uint32_t)(0x10922100)));
  /* 108f3429 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f342c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f342f mov dword ptr [0x10922100], ecx */
  w32((uint32_t)(0x10922100), (ECX));
  /* 108f3435 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3438 mov esp, ebp */
  ESP = (EBP);
  /* 108f343a pop ebp */
  EBP = (pop32());
  /* 108f343b ret  */
  ESPCHK(0x108f3420u, _esp0);
  ESP += 4; return;
}

/* FUN_10003440 @ 0x108f3440 (912 bytes, 248 insns) */
void f_108f3440(void) {
  FTRACE(0x108f3440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3440 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3441 mov ebp, esp */
  EBP = (ESP);
  /* 108f3443 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 108f3448 call 0x108f7520 */
  push32(0x108f344du); f_108f7520();
  /* 108f344d push edi */
  push32((uint32_t)(EDI));
  /* 108f344e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 108f3455 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 108f345a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f345c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 108f3462 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108f3464 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 108f3466 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 108f3467 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 108f346e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 108f3473 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f3475 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 108f347b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108f347d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 108f347f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 108f3480 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 108f3487 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 108f348c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f348e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 108f3494 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108f3496 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 108f3498 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 108f3499 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 108f349c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 108f34a2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f34a6 jl 0x108f34ae */
  if ((C.sf!=C.of)) goto L_108f34ae;
  /* 108f34a8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f34ac jl 0x108f34b6 */
  if ((C.sf!=C.of)) goto L_108f34b6;
L_108f34ae:;
  /* 108f34ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f34b1 jmp 0x108f37cb */
  goto L_108f37cb;
L_108f34b6:;
  /* 108f34b6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f34ba jne 0x108f3560 */
  if (!C.zf) goto L_108f3560;
  /* 108f34c0 push 0x1091ea34 */
  push32((uint32_t)(0x1091ea34u));
  /* 108f34c5 call dword ptr [0x10923380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923380))), 0x108f34cbu);
  /* 108f34cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f34cd jle 0x108f3560 */
  if ((C.zf||C.sf!=C.of)) goto L_108f3560;
  /* 108f34d3 cmp dword ptr [0x109205b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109205b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f34da jne 0x108f351e */
  if (!C.zf) goto L_108f351e;
  /* 108f34dc push 0x1091b378 */
  push32((uint32_t)(0x1091b378u));
  /* 108f34e1 call dword ptr [0x1092337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092337c))), 0x108f34e7u);
  /* 108f34e7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 108f34ed cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f34f4 je 0x108f3516 */
  if (C.zf) goto L_108f3516;
  /* 108f34f6 push 0x1091b36c */
  push32((uint32_t)(0x1091b36cu));
  /* 108f34fb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 108f3501 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3502 call dword ptr [0x10923378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923378))), 0x108f3508u);
  /* 108f3508 mov dword ptr [0x109205b4], eax */
  w32((uint32_t)(0x109205b4), (EAX));
  /* 108f350d cmp dword ptr [0x109205b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109205b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3514 jne 0x108f351e */
  if (!C.zf) goto L_108f351e;
L_108f3516:;
  /* 108f3516 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f3519 jmp 0x108f37cb */
  goto L_108f37cb;
L_108f351e:;
  /* 108f351e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f3521 push edx */
  push32((uint32_t)(EDX));
  /* 108f3522 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f3525 push eax */
  push32((uint32_t)(EAX));
  /* 108f3526 push 0x1091b338 */
  push32((uint32_t)(0x1091b338u));
  /* 108f352b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 108f3531 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3532 call dword ptr [0x109205b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109205b4))), 0x108f3538u);
  /* 108f3538 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f353b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 108f3541 push edx */
  push32((uint32_t)(EDX));
  /* 108f3542 call dword ptr [0x10923374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923374))), 0x108f3548u);
  /* 108f3548 push 0x1091ea34 */
  push32((uint32_t)(0x1091ea34u));
  /* 108f354d call dword ptr [0x10923370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923370))), 0x108f3553u);
  /* 108f3553 call 0x108f3330 */
  push32(0x108f3558u); f_108f3330();
  /* 108f3558 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f355b jmp 0x108f37cb */
  goto L_108f37cb;
L_108f3560:;
  /* 108f3560 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3564 je 0x108f359d */
  if (C.zf) goto L_108f359d;
  /* 108f3566 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 108f356c push eax */
  push32((uint32_t)(EAX));
  /* 108f356d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f3570 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3571 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 108f3576 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 108f357c push edx */
  push32((uint32_t)(EDX));
  /* 108f357d call 0x108f7420 */
  push32(0x108f3582u); f_108f7420();
  /* 108f3582 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3585 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f3587 jge 0x108f359d */
  if ((C.sf==C.of)) goto L_108f359d;
  /* 108f3589 push 0x1091b30c */
  push32((uint32_t)(0x1091b30cu));
  /* 108f358e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 108f3594 push eax */
  push32((uint32_t)(EAX));
  /* 108f3595 call 0x108f7330 */
  push32(0x108f359au); f_108f7330();
  /* 108f359a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f359d:;
  /* 108f359d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f35a1 jne 0x108f35d5 */
  if (!C.zf) goto L_108f35d5;
  /* 108f35a3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f35a7 je 0x108f35b5 */
  if (C.zf) goto L_108f35b5;
  /* 108f35a9 mov dword ptr [ebp - 0x3028], 0x1091b2f8 */
  w32((uint32_t)(EBP + -0x3028), (0x1091b2f8u));
  /* 108f35b3 jmp 0x108f35bf */
  goto L_108f35bf;
L_108f35b5:;
  /* 108f35b5 mov dword ptr [ebp - 0x3028], 0x1091b2e4 */
  w32((uint32_t)(EBP + -0x3028), (0x1091b2e4u));
L_108f35bf:;
  /* 108f35bf mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 108f35c5 push ecx */
  push32((uint32_t)(ECX));
  /* 108f35c6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 108f35cc push edx */
  push32((uint32_t)(EDX));
  /* 108f35cd call 0x108f7330 */
  push32(0x108f35d2u); f_108f7330();
  /* 108f35d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f35d5:;
  /* 108f35d5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 108f35db push eax */
  push32((uint32_t)(EAX));
  /* 108f35dc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 108f35e2 push ecx */
  push32((uint32_t)(ECX));
  /* 108f35e3 call 0x108f7340 */
  push32(0x108f35e8u); f_108f7340();
  /* 108f35e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f35eb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f35ef jne 0x108f362a */
  if (!C.zf) goto L_108f362a;
  /* 108f35f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f35f4 mov eax, dword ptr [edx*4 + 0x1091ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1091ea38)));
  /* 108f35fb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 108f35fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f3600 je 0x108f3616 */
  if (C.zf) goto L_108f3616;
  /* 108f3602 push 0x1091b2e0 */
  push32((uint32_t)(0x1091b2e0u));
  /* 108f3607 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 108f360d push ecx */
  push32((uint32_t)(ECX));
  /* 108f360e call 0x108f7340 */
  push32(0x108f3613u); f_108f7340();
  /* 108f3613 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f3616:;
  /* 108f3616 push 0x1091b2dc */
  push32((uint32_t)(0x1091b2dcu));
  /* 108f361b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 108f3621 push edx */
  push32((uint32_t)(EDX));
  /* 108f3622 call 0x108f7340 */
  push32(0x108f3627u); f_108f7340();
  /* 108f3627 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f362a:;
  /* 108f362a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f362e je 0x108f3672 */
  if (C.zf) goto L_108f3672;
  /* 108f3630 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 108f3636 push eax */
  push32((uint32_t)(EAX));
  /* 108f3637 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f363a push ecx */
  push32((uint32_t)(ECX));
  /* 108f363b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f363e push edx */
  push32((uint32_t)(EDX));
  /* 108f363f push 0x1091b2d0 */
  push32((uint32_t)(0x1091b2d0u));
  /* 108f3644 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 108f3649 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 108f364f push eax */
  push32((uint32_t)(EAX));
  /* 108f3650 call 0x108f7230 */
  push32(0x108f3655u); f_108f7230();
  /* 108f3655 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3658 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f365a jge 0x108f3670 */
  if ((C.sf==C.of)) goto L_108f3670;
  /* 108f365c push 0x1091b30c */
  push32((uint32_t)(0x1091b30cu));
  /* 108f3661 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 108f3667 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3668 call 0x108f7330 */
  push32(0x108f366du); f_108f7330();
  /* 108f366d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f3670:;
  /* 108f3670 jmp 0x108f3688 */
  goto L_108f3688;
L_108f3672:;
  /* 108f3672 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 108f3678 push edx */
  push32((uint32_t)(EDX));
  /* 108f3679 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 108f367f push eax */
  push32((uint32_t)(EAX));
  /* 108f3680 call 0x108f7330 */
  push32(0x108f3685u); f_108f7330();
  /* 108f3685 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f3688:;
  /* 108f3688 cmp dword ptr [0x10922100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10922100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f368f je 0x108f36cc */
  if (C.zf) goto L_108f36cc;
  /* 108f3691 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 108f3697 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3698 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 108f369e push edx */
  push32((uint32_t)(EDX));
  /* 108f369f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f36a2 push eax */
  push32((uint32_t)(EAX));
  /* 108f36a3 call dword ptr [0x10922100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10922100))), 0x108f36a9u);
  /* 108f36a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f36ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f36ae je 0x108f36cc */
  if (C.zf) goto L_108f36cc;
  /* 108f36b0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f36b4 jne 0x108f36c1 */
  if (!C.zf) goto L_108f36c1;
  /* 108f36b6 push 0x1091ea34 */
  push32((uint32_t)(0x1091ea34u));
  /* 108f36bb call dword ptr [0x10923370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923370))), 0x108f36c1u);
L_108f36c1:;
  /* 108f36c1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 108f36c7 jmp 0x108f37cb */
  goto L_108f37cb;
L_108f36cc:;
  /* 108f36cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f36cf mov edx, dword ptr [ecx*4 + 0x1091ea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1091ea38)));
  /* 108f36d6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108f36d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f36db je 0x108f371b */
  if (C.zf) goto L_108f371b;
  /* 108f36dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f36e0 cmp dword ptr [eax*4 + 0x1091ea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1091ea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f36e8 je 0x108f371b */
  if (C.zf) goto L_108f371b;
  /* 108f36ea push 0 */
  push32((uint32_t)(0x0u));
  /* 108f36ec lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 108f36f2 push ecx */
  push32((uint32_t)(ECX));
  /* 108f36f3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 108f36f9 push edx */
  push32((uint32_t)(EDX));
  /* 108f36fa call 0x108f71b0 */
  push32(0x108f36ffu); f_108f71b0();
  /* 108f36ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3702 push eax */
  push32((uint32_t)(EAX));
  /* 108f3703 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 108f3709 push eax */
  push32((uint32_t)(EAX));
  /* 108f370a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f370d mov edx, dword ptr [ecx*4 + 0x1091ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1091ea44)));
  /* 108f3714 push edx */
  push32((uint32_t)(EDX));
  /* 108f3715 call dword ptr [0x1092336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092336c))), 0x108f371bu);
L_108f371b:;
  /* 108f371b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f371e mov ecx, dword ptr [eax*4 + 0x1091ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1091ea38)));
  /* 108f3725 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 108f3728 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f372a je 0x108f3739 */
  if (C.zf) goto L_108f3739;
  /* 108f372c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 108f3732 push edx */
  push32((uint32_t)(EDX));
  /* 108f3733 call dword ptr [0x10923374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923374))), 0x108f3739u);
L_108f3739:;
  /* 108f3739 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f373c mov ecx, dword ptr [eax*4 + 0x1091ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1091ea38)));
  /* 108f3743 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 108f3746 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f3748 je 0x108f37b8 */
  if (C.zf) goto L_108f37b8;
  /* 108f374a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f374e je 0x108f376d */
  if (C.zf) goto L_108f376d;
  /* 108f3750 push 0xa */
  push32((uint32_t)(0xau));
  /* 108f3752 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 108f3758 push edx */
  push32((uint32_t)(EDX));
  /* 108f3759 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f375c push eax */
  push32((uint32_t)(EAX));
  /* 108f375d call 0x108f6ec0 */
  push32(0x108f3762u); f_108f6ec0();
  /* 108f3762 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3765 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 108f376b jmp 0x108f3777 */
  goto L_108f3777;
L_108f376d:;
  /* 108f376d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_108f3777:;
  /* 108f3777 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 108f377d push ecx */
  push32((uint32_t)(ECX));
  /* 108f377e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f3781 push edx */
  push32((uint32_t)(EDX));
  /* 108f3782 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 108f3788 push eax */
  push32((uint32_t)(EAX));
  /* 108f3789 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f378c push ecx */
  push32((uint32_t)(ECX));
  /* 108f378d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3790 push edx */
  push32((uint32_t)(EDX));
  /* 108f3791 call 0x108f37d0 */
  push32(0x108f3796u); f_108f37d0();
  /* 108f3796 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3799 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 108f379f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f37a3 jne 0x108f37b0 */
  if (!C.zf) goto L_108f37b0;
  /* 108f37a5 push 0x1091ea34 */
  push32((uint32_t)(0x1091ea34u));
  /* 108f37aa call dword ptr [0x10923370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923370))), 0x108f37b0u);
L_108f37b0:;
  /* 108f37b0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 108f37b6 jmp 0x108f37cb */
  goto L_108f37cb;
L_108f37b8:;
  /* 108f37b8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f37bc jne 0x108f37c9 */
  if (!C.zf) goto L_108f37c9;
  /* 108f37be push 0x1091ea34 */
  push32((uint32_t)(0x1091ea34u));
  /* 108f37c3 call dword ptr [0x10923370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923370))), 0x108f37c9u);
L_108f37c9:;
  /* 108f37c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108f37cb:;
  /* 108f37cb pop edi */
  EDI = (pop32());
  /* 108f37cc mov esp, ebp */
  ESP = (EBP);
  /* 108f37ce pop ebp */
  EBP = (pop32());
  /* 108f37cf ret  */
  ESPCHK(0x108f3440u, _esp0);
  ESP += 4; return;
}

/* FUN_100037d0 @ 0x108f37d0 (780 bytes, 197 insns) */
void f_108f37d0(void) {
  FTRACE(0x108f37d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f37d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f37d1 mov ebp, esp */
  EBP = (ESP);
  /* 108f37d3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 108f37d8 call 0x108f7520 */
  push32(0x108f37ddu); f_108f7520();
L_108f37dd:;
  /* 108f37dd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f37e1 jne 0x108f3808 */
  if (!C.zf) goto L_108f3808;
  /* 108f37e3 push 0x1091b4c8 */
  push32((uint32_t)(0x1091b4c8u));
  /* 108f37e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f37ea push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 108f37ef push 0x1091b4bc */
  push32((uint32_t)(0x1091b4bcu));
  /* 108f37f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f37f6 call 0x108f3440 */
  push32(0x108f37fbu); f_108f3440();
  /* 108f37fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f37fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3801 jne 0x108f3808 */
  if (!C.zf) goto L_108f3808;
  /* 108f3803 call 0x108f3330 */
  push32(0x108f3808u); f_108f3330();
L_108f3808:;
  /* 108f3808 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f380a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f380c jne 0x108f37dd */
  if (!C.zf) goto L_108f37dd;
  /* 108f380e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 108f3813 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 108f3819 push ecx */
  push32((uint32_t)(ECX));
  /* 108f381a push 0 */
  push32((uint32_t)(0x0u));
  /* 108f381c call dword ptr [0x10923384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923384))), 0x108f3822u);
  /* 108f3822 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f3824 jne 0x108f383a */
  if (!C.zf) goto L_108f383a;
  /* 108f3826 push 0x1091b4a4 */
  push32((uint32_t)(0x1091b4a4u));
  /* 108f382b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 108f3831 push edx */
  push32((uint32_t)(EDX));
  /* 108f3832 call 0x108f7330 */
  push32(0x108f3837u); f_108f7330();
  /* 108f3837 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f383a:;
  /* 108f383a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 108f3840 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f3843 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3846 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3847 call 0x108f71b0 */
  push32(0x108f384cu); f_108f71b0();
  /* 108f384c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f384f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3852 jbe 0x108f387d */
  if ((C.cf||C.zf)) goto L_108f387d;
  /* 108f3854 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3857 push edx */
  push32((uint32_t)(EDX));
  /* 108f3858 call 0x108f71b0 */
  push32(0x108f385du); f_108f71b0();
  /* 108f385d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3860 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3863 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 108f3867 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f386a push 3 */
  push32((uint32_t)(0x3u));
  /* 108f386c push 0x1091b4a0 */
  push32((uint32_t)(0x1091b4a0u));
  /* 108f3871 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3874 push eax */
  push32((uint32_t)(EAX));
  /* 108f3875 call 0x108f7ba0 */
  push32(0x108f387au); f_108f7ba0();
  /* 108f387a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f387d:;
  /* 108f387d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f3880 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 108f3886 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f388d je 0x108f38d8 */
  if (C.zf) goto L_108f38d8;
  /* 108f388f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 108f3895 push edx */
  push32((uint32_t)(EDX));
  /* 108f3896 call 0x108f71b0 */
  push32(0x108f389bu); f_108f71b0();
  /* 108f389b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f389e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f38a1 jbe 0x108f38d8 */
  if ((C.cf||C.zf)) goto L_108f38d8;
  /* 108f38a3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 108f38a9 push eax */
  push32((uint32_t)(EAX));
  /* 108f38aa call 0x108f71b0 */
  push32(0x108f38afu); f_108f71b0();
  /* 108f38af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f38b2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 108f38b8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 108f38bc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 108f38c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 108f38c4 push 0x1091b4a0 */
  push32((uint32_t)(0x1091b4a0u));
  /* 108f38c9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 108f38cf push eax */
  push32((uint32_t)(EAX));
  /* 108f38d0 call 0x108f7ba0 */
  push32(0x108f38d5u); f_108f7ba0();
  /* 108f38d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f38d8:;
  /* 108f38d8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f38dc jne 0x108f38ea */
  if (!C.zf) goto L_108f38ea;
  /* 108f38de mov dword ptr [ebp - 0x1114], 0x1091b42c */
  w32((uint32_t)(EBP + -0x1114), (0x1091b42cu));
  /* 108f38e8 jmp 0x108f38f4 */
  goto L_108f38f4;
L_108f38ea:;
  /* 108f38ea mov dword ptr [ebp - 0x1114], 0x1091b1cc */
  w32((uint32_t)(EBP + -0x1114), (0x1091b1ccu));
L_108f38f4:;
  /* 108f38f4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f38f7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108f38fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f38fc je 0x108f3909 */
  if (C.zf) goto L_108f3909;
  /* 108f38fe mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f3901 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 108f3907 jmp 0x108f3913 */
  goto L_108f3913;
L_108f3909:;
  /* 108f3909 mov dword ptr [ebp - 0x1118], 0x1091b1cc */
  w32((uint32_t)(EBP + -0x1118), (0x1091b1ccu));
L_108f3913:;
  /* 108f3913 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f3916 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108f3919 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f391b je 0x108f392f */
  if (C.zf) goto L_108f392f;
  /* 108f391d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3921 jne 0x108f392f */
  if (!C.zf) goto L_108f392f;
  /* 108f3923 mov dword ptr [ebp - 0x111c], 0x1091b41c */
  w32((uint32_t)(EBP + -0x111c), (0x1091b41cu));
  /* 108f392d jmp 0x108f3939 */
  goto L_108f3939;
L_108f392f:;
  /* 108f392f mov dword ptr [ebp - 0x111c], 0x1091b1cc */
  w32((uint32_t)(EBP + -0x111c), (0x1091b1ccu));
L_108f3939:;
  /* 108f3939 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f393c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108f393f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f3941 je 0x108f394f */
  if (C.zf) goto L_108f394f;
  /* 108f3943 mov dword ptr [ebp - 0x1120], 0x1091b418 */
  w32((uint32_t)(EBP + -0x1120), (0x1091b418u));
  /* 108f394d jmp 0x108f3959 */
  goto L_108f3959;
L_108f394f:;
  /* 108f394f mov dword ptr [ebp - 0x1120], 0x1091b1cc */
  w32((uint32_t)(EBP + -0x1120), (0x1091b1ccu));
L_108f3959:;
  /* 108f3959 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f395d je 0x108f396a */
  if (C.zf) goto L_108f396a;
  /* 108f395f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f3962 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 108f3968 jmp 0x108f3974 */
  goto L_108f3974;
L_108f396a:;
  /* 108f396a mov dword ptr [ebp - 0x1124], 0x1091b1cc */
  w32((uint32_t)(EBP + -0x1124), (0x1091b1ccu));
L_108f3974:;
  /* 108f3974 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3978 je 0x108f3986 */
  if (C.zf) goto L_108f3986;
  /* 108f397a mov dword ptr [ebp - 0x1128], 0x1091b410 */
  w32((uint32_t)(EBP + -0x1128), (0x1091b410u));
  /* 108f3984 jmp 0x108f3990 */
  goto L_108f3990;
L_108f3986:;
  /* 108f3986 mov dword ptr [ebp - 0x1128], 0x1091b1cc */
  w32((uint32_t)(EBP + -0x1128), (0x1091b1ccu));
L_108f3990:;
  /* 108f3990 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3994 je 0x108f39a1 */
  if (C.zf) goto L_108f39a1;
  /* 108f3996 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f3999 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 108f399f jmp 0x108f39ab */
  goto L_108f39ab;
L_108f39a1:;
  /* 108f39a1 mov dword ptr [ebp - 0x112c], 0x1091b1cc */
  w32((uint32_t)(EBP + -0x112c), (0x1091b1ccu));
L_108f39ab:;
  /* 108f39ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f39af je 0x108f39bd */
  if (C.zf) goto L_108f39bd;
  /* 108f39b1 mov dword ptr [ebp - 0x1130], 0x1091b408 */
  w32((uint32_t)(EBP + -0x1130), (0x1091b408u));
  /* 108f39bb jmp 0x108f39c7 */
  goto L_108f39c7;
L_108f39bd:;
  /* 108f39bd mov dword ptr [ebp - 0x1130], 0x1091b1cc */
  w32((uint32_t)(EBP + -0x1130), (0x1091b1ccu));
L_108f39c7:;
  /* 108f39c7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f39ce je 0x108f39de */
  if (C.zf) goto L_108f39de;
  /* 108f39d0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 108f39d6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 108f39dc jmp 0x108f39e8 */
  goto L_108f39e8;
L_108f39de:;
  /* 108f39de mov dword ptr [ebp - 0x1134], 0x1091b1cc */
  w32((uint32_t)(EBP + -0x1134), (0x1091b1ccu));
L_108f39e8:;
  /* 108f39e8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f39ef je 0x108f39fd */
  if (C.zf) goto L_108f39fd;
  /* 108f39f1 mov dword ptr [ebp - 0x1138], 0x1091b3fc */
  w32((uint32_t)(EBP + -0x1138), (0x1091b3fcu));
  /* 108f39fb jmp 0x108f3a07 */
  goto L_108f3a07;
L_108f39fd:;
  /* 108f39fd mov dword ptr [ebp - 0x1138], 0x1091b1cc */
  w32((uint32_t)(EBP + -0x1138), (0x1091b1ccu));
L_108f3a07:;
  /* 108f3a07 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 108f3a0d push edx */
  push32((uint32_t)(EDX));
  /* 108f3a0e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 108f3a14 push eax */
  push32((uint32_t)(EAX));
  /* 108f3a15 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 108f3a1b push ecx */
  push32((uint32_t)(ECX));
  /* 108f3a1c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 108f3a22 push edx */
  push32((uint32_t)(EDX));
  /* 108f3a23 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 108f3a29 push eax */
  push32((uint32_t)(EAX));
  /* 108f3a2a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 108f3a30 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3a31 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 108f3a37 push edx */
  push32((uint32_t)(EDX));
  /* 108f3a38 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 108f3a3e push eax */
  push32((uint32_t)(EAX));
  /* 108f3a3f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 108f3a45 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3a46 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 108f3a4c push edx */
  push32((uint32_t)(EDX));
  /* 108f3a4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3a50 push eax */
  push32((uint32_t)(EAX));
  /* 108f3a51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3a54 mov edx, dword ptr [ecx*4 + 0x1091ea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1091ea50)));
  /* 108f3a5b push edx */
  push32((uint32_t)(EDX));
  /* 108f3a5c push 0x1091b3a8 */
  push32((uint32_t)(0x1091b3a8u));
  /* 108f3a61 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 108f3a66 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 108f3a6c push eax */
  push32((uint32_t)(EAX));
  /* 108f3a6d call 0x108f7230 */
  push32(0x108f3a72u); f_108f7230();
  /* 108f3a72 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3a75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f3a77 jge 0x108f3a8d */
  if ((C.sf==C.of)) goto L_108f3a8d;
  /* 108f3a79 push 0x1091b30c */
  push32((uint32_t)(0x1091b30cu));
  /* 108f3a7e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 108f3a84 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3a85 call 0x108f7330 */
  push32(0x108f3a8au); f_108f7330();
  /* 108f3a8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f3a8d:;
  /* 108f3a8d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 108f3a92 push 0x1091b384 */
  push32((uint32_t)(0x1091b384u));
  /* 108f3a97 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 108f3a9d push edx */
  push32((uint32_t)(EDX));
  /* 108f3a9e call 0x108f7ae0 */
  push32(0x108f3aa3u); f_108f7ae0();
  /* 108f3aa3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3aa6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 108f3aac cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3ab3 jne 0x108f3ac6 */
  if (!C.zf) goto L_108f3ac6;
  /* 108f3ab5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 108f3ab7 call 0x108f7820 */
  push32(0x108f3abcu); f_108f7820();
  /* 108f3abc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3abf push 3 */
  push32((uint32_t)(0x3u));
  /* 108f3ac1 call 0x108f3b40 */
  push32(0x108f3ac6u); f_108f3b40();
L_108f3ac6:;
  /* 108f3ac6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3acd jne 0x108f3ad6 */
  if (!C.zf) goto L_108f3ad6;
  /* 108f3acf mov eax, 1 */
  EAX = (0x1u);
  /* 108f3ad4 jmp 0x108f3ad8 */
  goto L_108f3ad8;
L_108f3ad6:;
  /* 108f3ad6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108f3ad8:;
  /* 108f3ad8 mov esp, ebp */
  ESP = (EBP);
  /* 108f3ada pop ebp */
  EBP = (pop32());
  /* 108f3adb ret  */
  ESPCHK(0x108f37d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ae0 @ 0x108f3ae0 (56 bytes, 15 insns) */
void f_108f3ae0(void) {
  FTRACE(0x108f3ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3ae1 mov ebp, esp */
  EBP = (ESP);
  /* 108f3ae3 cmp dword ptr [0x109220fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109220fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3aea je 0x108f3af2 */
  if (C.zf) goto L_108f3af2;
  /* 108f3aec call dword ptr [0x109220fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109220fc))), 0x108f3af2u);
L_108f3af2:;
  /* 108f3af2 push 0x1091e418 */
  push32((uint32_t)(0x1091e418u));
  /* 108f3af7 push 0x1091e208 */
  push32((uint32_t)(0x1091e208u));
  /* 108f3afc call 0x108f3cb0 */
  push32(0x108f3b01u); f_108f3cb0();
  /* 108f3b01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3b04 push 0x1091e104 */
  push32((uint32_t)(0x1091e104u));
  /* 108f3b09 push 0x1091e000 */
  push32((uint32_t)(0x1091e000u));
  /* 108f3b0e call 0x108f3cb0 */
  push32(0x108f3b13u); f_108f3cb0();
  /* 108f3b13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3b16 pop ebp */
  EBP = (pop32());
  /* 108f3b17 ret  */
  ESPCHK(0x108f3ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b20 @ 0x108f3b20 (21 bytes, 10 insns) */
void f_108f3b20(void) {
  FTRACE(0x108f3b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3b20 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3b21 mov ebp, esp */
  EBP = (ESP);
  /* 108f3b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f3b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f3b27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3b2a push eax */
  push32((uint32_t)(EAX));
  /* 108f3b2b call 0x108f3ba0 */
  push32(0x108f3b30u); f_108f3ba0();
  /* 108f3b30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3b33 pop ebp */
  EBP = (pop32());
  /* 108f3b34 ret  */
  ESPCHK(0x108f3b20u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x108f3b40 (21 bytes, 10 insns) */
void f_108f3b40(void) {
  FTRACE(0x108f3b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3b40 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3b41 mov ebp, esp */
  EBP = (ESP);
  /* 108f3b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f3b45 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f3b47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3b4a push eax */
  push32((uint32_t)(EAX));
  /* 108f3b4b call 0x108f3ba0 */
  push32(0x108f3b50u); f_108f3ba0();
  /* 108f3b50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3b53 pop ebp */
  EBP = (pop32());
  /* 108f3b54 ret  */
  ESPCHK(0x108f3b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b60 @ 0x108f3b60 (19 bytes, 9 insns) */
void f_108f3b60(void) {
  FTRACE(0x108f3b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3b60 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3b61 mov ebp, esp */
  EBP = (ESP);
  /* 108f3b63 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f3b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f3b67 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f3b69 call 0x108f3ba0 */
  push32(0x108f3b6eu); f_108f3ba0();
  /* 108f3b6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3b71 pop ebp */
  EBP = (pop32());
  /* 108f3b72 ret  */
  ESPCHK(0x108f3b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b80 @ 0x108f3b80 (19 bytes, 9 insns) */
void f_108f3b80(void) {
  FTRACE(0x108f3b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3b80 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3b81 mov ebp, esp */
  EBP = (ESP);
  /* 108f3b83 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f3b85 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f3b87 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f3b89 call 0x108f3ba0 */
  push32(0x108f3b8eu); f_108f3ba0();
  /* 108f3b8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3b91 pop ebp */
  EBP = (pop32());
  /* 108f3b92 ret  */
  ESPCHK(0x108f3b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ba0 @ 0x108f3ba0 (227 bytes, 61 insns) */
void f_108f3ba0(void) {
  FTRACE(0x108f3ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3ba1 mov ebp, esp */
  EBP = (ESP);
  /* 108f3ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3ba4 call 0x108f3c90 */
  push32(0x108f3ba9u); f_108f3c90();
  /* 108f3ba9 cmp dword ptr [0x109205f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109205f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3bb0 jne 0x108f3bc3 */
  if (!C.zf) goto L_108f3bc3;
  /* 108f3bb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3bb5 push eax */
  push32((uint32_t)(EAX));
  /* 108f3bb6 call dword ptr [0x10923390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923390))), 0x108f3bbcu);
  /* 108f3bbc push eax */
  push32((uint32_t)(EAX));
  /* 108f3bbd call dword ptr [0x1092338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092338c))), 0x108f3bc3u);
L_108f3bc3:;
  /* 108f3bc3 mov dword ptr [0x109205f4], 1 */
  w32((uint32_t)(0x109205f4), (0x1u));
  /* 108f3bcd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 108f3bd0 mov byte ptr [0x109205f0], cl */
  w8((uint32_t)(0x109205f0), (CL));
  /* 108f3bd6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3bda jne 0x108f3c23 */
  if (!C.zf) goto L_108f3c23;
  /* 108f3bdc cmp dword ptr [0x109220f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109220f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3be3 je 0x108f3c11 */
  if (C.zf) goto L_108f3c11;
  /* 108f3be5 mov edx, dword ptr [0x109220f4] */
  EDX = (r32((uint32_t)(0x109220f4)));
  /* 108f3beb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108f3bee:;
  /* 108f3bee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3bf1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f3bf4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f3bf7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3bfa cmp ecx, dword ptr [0x109220f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109220f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3c00 jb 0x108f3c11 */
  if (C.cf) goto L_108f3c11;
  /* 108f3c02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3c05 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3c08 je 0x108f3c0f */
  if (C.zf) goto L_108f3c0f;
  /* 108f3c0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3c0d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x108f3c0fu);
L_108f3c0f:;
  /* 108f3c0f jmp 0x108f3bee */
  goto L_108f3bee;
L_108f3c11:;
  /* 108f3c11 push 0x1091e724 */
  push32((uint32_t)(0x1091e724u));
  /* 108f3c16 push 0x1091e51c */
  push32((uint32_t)(0x1091e51cu));
  /* 108f3c1b call 0x108f3cb0 */
  push32(0x108f3c20u); f_108f3cb0();
  /* 108f3c20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f3c23:;
  /* 108f3c23 push 0x1091e92c */
  push32((uint32_t)(0x1091e92cu));
  /* 108f3c28 push 0x1091e828 */
  push32((uint32_t)(0x1091e828u));
  /* 108f3c2d call 0x108f3cb0 */
  push32(0x108f3c32u); f_108f3cb0();
  /* 108f3c32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3c35 cmp dword ptr [0x109205fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109205fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3c3c jne 0x108f3c5e */
  if (!C.zf) goto L_108f3c5e;
  /* 108f3c3e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108f3c40 call 0x108f5890 */
  push32(0x108f3c45u); f_108f5890();
  /* 108f3c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3c48 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 108f3c4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f3c4d je 0x108f3c5e */
  if (C.zf) goto L_108f3c5e;
  /* 108f3c4f mov dword ptr [0x109205fc], 1 */
  w32((uint32_t)(0x109205fc), (0x1u));
  /* 108f3c59 call 0x108f61a0 */
  push32(0x108f3c5eu); f_108f61a0();
L_108f3c5e:;
  /* 108f3c5e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3c62 je 0x108f3c6b */
  if (C.zf) goto L_108f3c6b;
  /* 108f3c64 call 0x108f3ca0 */
  push32(0x108f3c69u); f_108f3ca0();
  /* 108f3c69 jmp 0x108f3c7f */
  goto L_108f3c7f;
L_108f3c6b:;
  /* 108f3c6b mov dword ptr [0x109205f8], 1 */
  w32((uint32_t)(0x109205f8), (0x1u));
  /* 108f3c75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3c78 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3c79 call dword ptr [0x10923388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923388))), 0x108f3c7fu);
L_108f3c7f:;
  /* 108f3c7f mov esp, ebp */
  ESP = (EBP);
  /* 108f3c81 pop ebp */
  EBP = (pop32());
  /* 108f3c82 ret  */
  ESPCHK(0x108f3ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c90 @ 0x108f3c90 (15 bytes, 7 insns) */
void f_108f3c90(void) {
  FTRACE(0x108f3c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3c90 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3c91 mov ebp, esp */
  EBP = (ESP);
  /* 108f3c93 push 0xd */
  push32((uint32_t)(0xdu));
  /* 108f3c95 call 0x108f7d80 */
  push32(0x108f3c9au); f_108f7d80();
  /* 108f3c9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3c9d pop ebp */
  EBP = (pop32());
  /* 108f3c9e ret  */
  ESPCHK(0x108f3c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ca0 @ 0x108f3ca0 (15 bytes, 7 insns) */
void f_108f3ca0(void) {
  FTRACE(0x108f3ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3ca1 mov ebp, esp */
  EBP = (ESP);
  /* 108f3ca3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 108f3ca5 call 0x108f7e20 */
  push32(0x108f3caau); f_108f7e20();
  /* 108f3caa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3cad pop ebp */
  EBP = (pop32());
  /* 108f3cae ret  */
  ESPCHK(0x108f3ca0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x108f3cb0 (37 bytes, 16 insns) */
void f_108f3cb0(void) {
  FTRACE(0x108f3cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3cb1 mov ebp, esp */
  EBP = (ESP);
L_108f3cb3:;
  /* 108f3cb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3cb6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3cb9 jae 0x108f3cd3 */
  if (!C.cf) goto L_108f3cd3;
  /* 108f3cbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3cbe cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3cc1 je 0x108f3cc8 */
  if (C.zf) goto L_108f3cc8;
  /* 108f3cc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3cc6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x108f3cc8u);
L_108f3cc8:;
  /* 108f3cc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3ccb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3cce mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108f3cd1 jmp 0x108f3cb3 */
  goto L_108f3cb3;
L_108f3cd3:;
  /* 108f3cd3 pop ebp */
  EBP = (pop32());
  /* 108f3cd4 ret  */
  ESPCHK(0x108f3cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ce0 @ 0x108f3ce0 (130 bytes, 42 insns) */
void f_108f3ce0(void) {
  FTRACE(0x108f3ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3ce1 mov ebp, esp */
  EBP = (ESP);
  /* 108f3ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3ce4 call 0x108f7ca0 */
  push32(0x108f3ce9u); f_108f7ca0();
  /* 108f3ce9 call dword ptr [0x1092339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092339c))), 0x108f3cefu);
  /* 108f3cef mov dword ptr [0x1091ea5c], eax */
  w32((uint32_t)(0x1091ea5c), (EAX));
  /* 108f3cf4 cmp dword ptr [0x1091ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1091ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3cfb jne 0x108f3d01 */
  if (!C.zf) goto L_108f3d01;
  /* 108f3cfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f3cff jmp 0x108f3d5e */
  goto L_108f3d5e;
L_108f3d01:;
  /* 108f3d01 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 108f3d03 push 0x1091b4e0 */
  push32((uint32_t)(0x1091b4e0u));
  /* 108f3d08 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f3d0a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 108f3d0c push 1 */
  push32((uint32_t)(0x1u));
  /* 108f3d0e call 0x108f4790 */
  push32(0x108f3d13u); f_108f4790();
  /* 108f3d13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3d16 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f3d19 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3d1d je 0x108f3d34 */
  if (C.zf) goto L_108f3d34;
  /* 108f3d1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3d22 push eax */
  push32((uint32_t)(EAX));
  /* 108f3d23 mov ecx, dword ptr [0x1091ea5c] */
  ECX = (r32((uint32_t)(0x1091ea5c)));
  /* 108f3d29 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3d2a call dword ptr [0x109232b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232b4))), 0x108f3d30u);
  /* 108f3d30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f3d32 jne 0x108f3d38 */
  if (!C.zf) goto L_108f3d38;
L_108f3d34:;
  /* 108f3d34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f3d36 jmp 0x108f3d5e */
  goto L_108f3d5e;
L_108f3d38:;
  /* 108f3d38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3d3b push edx */
  push32((uint32_t)(EDX));
  /* 108f3d3c call 0x108f3da0 */
  push32(0x108f3d41u); f_108f3da0();
  /* 108f3d41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3d44 call dword ptr [0x109232b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232b8))), 0x108f3d4au);
  /* 108f3d4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3d4d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108f3d4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3d52 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 108f3d59 mov eax, 1 */
  EAX = (0x1u);
L_108f3d5e:;
  /* 108f3d5e mov esp, ebp */
  ESP = (EBP);
  /* 108f3d60 pop ebp */
  EBP = (pop32());
  /* 108f3d61 ret  */
  ESPCHK(0x108f3ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d70 @ 0x108f3d70 (41 bytes, 11 insns) */
void f_108f3d70(void) {
  FTRACE(0x108f3d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3d70 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3d71 mov ebp, esp */
  EBP = (ESP);
  /* 108f3d73 call 0x108f7ce0 */
  push32(0x108f3d78u); f_108f7ce0();
  /* 108f3d78 cmp dword ptr [0x1091ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1091ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3d7f je 0x108f3d97 */
  if (C.zf) goto L_108f3d97;
  /* 108f3d81 mov eax, dword ptr [0x1091ea5c] */
  EAX = (r32((uint32_t)(0x1091ea5c)));
  /* 108f3d86 push eax */
  push32((uint32_t)(EAX));
  /* 108f3d87 call dword ptr [0x109233a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233a0))), 0x108f3d8du);
  /* 108f3d8d mov dword ptr [0x1091ea5c], 0xffffffff */
  w32((uint32_t)(0x1091ea5c), (0xffffffffu));
L_108f3d97:;
  /* 108f3d97 pop ebp */
  EBP = (pop32());
  /* 108f3d98 ret  */
  ESPCHK(0x108f3d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003da0 @ 0x108f3da0 (25 bytes, 8 insns) */
void f_108f3da0(void) {
  FTRACE(0x108f3da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3da0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3da1 mov ebp, esp */
  EBP = (ESP);
  /* 108f3da3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3da6 mov dword ptr [eax + 0x50], 0x1091ec00 */
  w32((uint32_t)(EAX + 0x50), (0x1091ec00u));
  /* 108f3dad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3db0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 108f3db7 pop ebp */
  EBP = (pop32());
  /* 108f3db8 ret  */
  ESPCHK(0x108f3da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dc0 @ 0x108f3dc0 (152 bytes, 48 insns) */
void f_108f3dc0(void) {
  FTRACE(0x108f3dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3dc1 mov ebp, esp */
  EBP = (ESP);
  /* 108f3dc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f3dc6 call dword ptr [0x109233ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233ac))), 0x108f3dccu);
  /* 108f3dcc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f3dcf mov eax, dword ptr [0x1091ea5c] */
  EAX = (r32((uint32_t)(0x1091ea5c)));
  /* 108f3dd4 push eax */
  push32((uint32_t)(EAX));
  /* 108f3dd5 call dword ptr [0x109233a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233a8))), 0x108f3ddbu);
  /* 108f3ddb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f3dde cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3de2 jne 0x108f3e47 */
  if (!C.zf) goto L_108f3e47;
  /* 108f3de4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 108f3de9 push 0x1091b4e0 */
  push32((uint32_t)(0x1091b4e0u));
  /* 108f3dee push 2 */
  push32((uint32_t)(0x2u));
  /* 108f3df0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 108f3df2 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f3df4 call 0x108f4790 */
  push32(0x108f3df9u); f_108f4790();
  /* 108f3df9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3dfc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f3dff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3e03 je 0x108f3e3d */
  if (C.zf) goto L_108f3e3d;
  /* 108f3e05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3e08 push ecx */
  push32((uint32_t)(ECX));
  /* 108f3e09 mov edx, dword ptr [0x1091ea5c] */
  EDX = (r32((uint32_t)(0x1091ea5c)));
  /* 108f3e0f push edx */
  push32((uint32_t)(EDX));
  /* 108f3e10 call dword ptr [0x109232b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232b4))), 0x108f3e16u);
  /* 108f3e16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f3e18 je 0x108f3e3d */
  if (C.zf) goto L_108f3e3d;
  /* 108f3e1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3e1d push eax */
  push32((uint32_t)(EAX));
  /* 108f3e1e call 0x108f3da0 */
  push32(0x108f3e23u); f_108f3da0();
  /* 108f3e23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3e26 call dword ptr [0x109232b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232b8))), 0x108f3e2cu);
  /* 108f3e2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3e2f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108f3e31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3e34 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 108f3e3b jmp 0x108f3e47 */
  goto L_108f3e47;
L_108f3e3d:;
  /* 108f3e3d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 108f3e3f call 0x108f32f0 */
  push32(0x108f3e44u); f_108f32f0();
  /* 108f3e44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f3e47:;
  /* 108f3e47 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f3e4a push eax */
  push32((uint32_t)(EAX));
  /* 108f3e4b call dword ptr [0x109233a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233a4))), 0x108f3e51u);
  /* 108f3e51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f3e54 mov esp, ebp */
  ESP = (EBP);
  /* 108f3e56 pop ebp */
  EBP = (pop32());
  /* 108f3e57 ret  */
  ESPCHK(0x108f3dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e60 @ 0x108f3e60 (263 bytes, 86 insns) */
void f_108f3e60(void) {
  FTRACE(0x108f3e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3e60 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3e61 mov ebp, esp */
  EBP = (ESP);
  /* 108f3e63 cmp dword ptr [0x1091ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1091ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3e6a je 0x108f3f65 */
  if (C.zf) goto L_108f3f65;
  /* 108f3e70 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3e74 jne 0x108f3e85 */
  if (!C.zf) goto L_108f3e85;
  /* 108f3e76 mov eax, dword ptr [0x1091ea5c] */
  EAX = (r32((uint32_t)(0x1091ea5c)));
  /* 108f3e7b push eax */
  push32((uint32_t)(EAX));
  /* 108f3e7c call dword ptr [0x109233a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233a8))), 0x108f3e82u);
  /* 108f3e82 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_108f3e85:;
  /* 108f3e85 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3e89 je 0x108f3f56 */
  if (C.zf) goto L_108f3f56;
  /* 108f3e8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3e92 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3e96 je 0x108f3ea9 */
  if (C.zf) goto L_108f3ea9;
  /* 108f3e98 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f3e9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3e9d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 108f3ea0 push eax */
  push32((uint32_t)(EAX));
  /* 108f3ea1 call 0x108f4e10 */
  push32(0x108f3ea6u); f_108f4e10();
  /* 108f3ea6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f3ea9:;
  /* 108f3ea9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3eac cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3eb0 je 0x108f3ec3 */
  if (C.zf) goto L_108f3ec3;
  /* 108f3eb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f3eb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3eb7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 108f3eba push eax */
  push32((uint32_t)(EAX));
  /* 108f3ebb call 0x108f4e10 */
  push32(0x108f3ec0u); f_108f4e10();
  /* 108f3ec0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f3ec3:;
  /* 108f3ec3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3ec6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3eca je 0x108f3edd */
  if (C.zf) goto L_108f3edd;
  /* 108f3ecc push 2 */
  push32((uint32_t)(0x2u));
  /* 108f3ece mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3ed1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 108f3ed4 push eax */
  push32((uint32_t)(EAX));
  /* 108f3ed5 call 0x108f4e10 */
  push32(0x108f3edau); f_108f4e10();
  /* 108f3eda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f3edd:;
  /* 108f3edd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3ee0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3ee4 je 0x108f3ef7 */
  if (C.zf) goto L_108f3ef7;
  /* 108f3ee6 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f3ee8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3eeb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 108f3eee push eax */
  push32((uint32_t)(EAX));
  /* 108f3eef call 0x108f4e10 */
  push32(0x108f3ef4u); f_108f4e10();
  /* 108f3ef4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f3ef7:;
  /* 108f3ef7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3efa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3efe je 0x108f3f11 */
  if (C.zf) goto L_108f3f11;
  /* 108f3f00 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f3f02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3f05 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 108f3f08 push eax */
  push32((uint32_t)(EAX));
  /* 108f3f09 call 0x108f4e10 */
  push32(0x108f3f0eu); f_108f4e10();
  /* 108f3f0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f3f11:;
  /* 108f3f11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3f14 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3f18 je 0x108f3f2b */
  if (C.zf) goto L_108f3f2b;
  /* 108f3f1a push 2 */
  push32((uint32_t)(0x2u));
  /* 108f3f1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3f1f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 108f3f22 push eax */
  push32((uint32_t)(EAX));
  /* 108f3f23 call 0x108f4e10 */
  push32(0x108f3f28u); f_108f4e10();
  /* 108f3f28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f3f2b:;
  /* 108f3f2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3f2e cmp dword ptr [ecx + 0x50], 0x1091ec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1091ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3f35 je 0x108f3f48 */
  if (C.zf) goto L_108f3f48;
  /* 108f3f37 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f3f39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3f3c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 108f3f3f push eax */
  push32((uint32_t)(EAX));
  /* 108f3f40 call 0x108f4e10 */
  push32(0x108f3f45u); f_108f4e10();
  /* 108f3f45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f3f48:;
  /* 108f3f48 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f3f4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f3f4d push ecx */
  push32((uint32_t)(ECX));
  /* 108f3f4e call 0x108f4e10 */
  push32(0x108f3f53u); f_108f4e10();
  /* 108f3f53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f3f56:;
  /* 108f3f56 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f3f58 mov edx, dword ptr [0x1091ea5c] */
  EDX = (r32((uint32_t)(0x1091ea5c)));
  /* 108f3f5e push edx */
  push32((uint32_t)(EDX));
  /* 108f3f5f call dword ptr [0x109232b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232b4))), 0x108f3f65u);
L_108f3f65:;
  /* 108f3f65 pop ebp */
  EBP = (pop32());
  /* 108f3f66 ret  */
  ESPCHK(0x108f3e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f70 @ 0x108f3f70 (11 bytes, 5 insns) */
void f_108f3f70(void) {
  FTRACE(0x108f3f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3f70 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3f71 mov ebp, esp */
  EBP = (ESP);
  /* 108f3f73 call dword ptr [0x109232b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109232b8))), 0x108f3f79u);
  /* 108f3f79 pop ebp */
  EBP = (pop32());
  /* 108f3f7a ret  */
  ESPCHK(0x108f3f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f80 @ 0x108f3f80 (11 bytes, 5 insns) */
void f_108f3f80(void) {
  FTRACE(0x108f3f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3f80 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3f81 mov ebp, esp */
  EBP = (ESP);
  /* 108f3f83 call dword ptr [0x109233b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233b0))), 0x108f3f89u);
  /* 108f3f89 pop ebp */
  EBP = (pop32());
  /* 108f3f8a ret  */
  ESPCHK(0x108f3f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f90 @ 0x108f3f90 (804 bytes, 236 insns) */
void f_108f3f90(void) {
  FTRACE(0x108f3f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f3f90 push ebp */
  push32((uint32_t)(EBP));
  /* 108f3f91 mov ebp, esp */
  EBP = (ESP);
  /* 108f3f93 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f3f96 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 108f3f9b push 0x1091b4ec */
  push32((uint32_t)(0x1091b4ecu));
  /* 108f3fa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f3fa2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 108f3fa7 call 0x108f4380 */
  push32(0x108f3facu); f_108f4380();
  /* 108f3fac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3faf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 108f3fb2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3fb6 jne 0x108f3fc2 */
  if (!C.zf) goto L_108f3fc2;
  /* 108f3fb8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 108f3fba call 0x108f32f0 */
  push32(0x108f3fbfu); f_108f32f0();
  /* 108f3fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f3fc2:;
  /* 108f3fc2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f3fc5 mov dword ptr [0x10921fa0], eax */
  w32((uint32_t)(0x10921fa0), (EAX));
  /* 108f3fca mov dword ptr [0x109220dc], 0x20 */
  w32((uint32_t)(0x109220dc), (0x20u));
  /* 108f3fd4 jmp 0x108f3fdf */
  goto L_108f3fdf;
L_108f3fd6:;
  /* 108f3fd6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f3fd9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3fdc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_108f3fdf:;
  /* 108f3fdf mov edx, dword ptr [0x10921fa0] */
  EDX = (r32((uint32_t)(0x10921fa0)));
  /* 108f3fe5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f3feb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f3fee jae 0x108f4013 */
  if (!C.cf) goto L_108f4013;
  /* 108f3ff0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f3ff3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 108f3ff7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f3ffa mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 108f4000 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f4003 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 108f4007 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f400a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 108f4011 jmp 0x108f3fd6 */
  goto L_108f3fd6;
L_108f4013:;
  /* 108f4013 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 108f4016 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4017 call dword ptr [0x109233b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233b8))), 0x108f401du);
  /* 108f401d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 108f4020 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108f4026 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f4028 je 0x108f41b5 */
  if (C.zf) goto L_108f41b5;
  /* 108f402e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4032 je 0x108f41b5 */
  if (C.zf) goto L_108f41b5;
  /* 108f4038 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f403b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f403d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 108f4040 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f4043 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4046 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f4049 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f404c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f404f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 108f4052 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4059 jge 0x108f4063 */
  if ((C.sf==C.of)) goto L_108f4063;
  /* 108f405b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 108f405e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 108f4061 jmp 0x108f406a */
  goto L_108f406a;
L_108f4063:;
  /* 108f4063 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_108f406a:;
  /* 108f406a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 108f406d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 108f4070 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 108f4077 jmp 0x108f4082 */
  goto L_108f4082;
L_108f4079:;
  /* 108f4079 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 108f407c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f407f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_108f4082:;
  /* 108f4082 mov ecx, dword ptr [0x109220dc] */
  ECX = (r32((uint32_t)(0x109220dc)));
  /* 108f4088 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f408b jge 0x108f4122 */
  if ((C.sf==C.of)) goto L_108f4122;
  /* 108f4091 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 108f4096 push 0x1091b4ec */
  push32((uint32_t)(0x1091b4ecu));
  /* 108f409b push 2 */
  push32((uint32_t)(0x2u));
  /* 108f409d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 108f40a2 call 0x108f4380 */
  push32(0x108f40a7u); f_108f4380();
  /* 108f40a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f40aa mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 108f40ad cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f40b1 jne 0x108f40be */
  if (!C.zf) goto L_108f40be;
  /* 108f40b3 mov edx, dword ptr [0x109220dc] */
  EDX = (r32((uint32_t)(0x109220dc)));
  /* 108f40b9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 108f40bc jmp 0x108f4122 */
  goto L_108f4122;
L_108f40be:;
  /* 108f40be mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 108f40c1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f40c4 mov dword ptr [eax*4 + 0x10921fa0], ecx */
  w32((uint32_t)(EAX*4 + 0x10921fa0), (ECX));
  /* 108f40cb mov edx, dword ptr [0x109220dc] */
  EDX = (r32((uint32_t)(0x109220dc)));
  /* 108f40d1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f40d4 mov dword ptr [0x109220dc], edx */
  w32((uint32_t)(0x109220dc), (EDX));
  /* 108f40da jmp 0x108f40e5 */
  goto L_108f40e5;
L_108f40dc:;
  /* 108f40dc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f40df add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f40e2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_108f40e5:;
  /* 108f40e5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 108f40e8 mov edx, dword ptr [ecx*4 + 0x10921fa0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10921fa0)));
  /* 108f40ef add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f40f5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f40f8 jae 0x108f411d */
  if (!C.cf) goto L_108f411d;
  /* 108f40fa mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f40fd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 108f4101 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f4104 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 108f410a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f410d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 108f4111 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f4114 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 108f411b jmp 0x108f40dc */
  goto L_108f40dc;
L_108f411d:;
  /* 108f411d jmp 0x108f4079 */
  goto L_108f4079;
L_108f4122:;
  /* 108f4122 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 108f4129 jmp 0x108f4146 */
  goto L_108f4146;
L_108f412b:;
  /* 108f412b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 108f412e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4131 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 108f4134 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4137 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f413a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f413d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 108f4140 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4143 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_108f4146:;
  /* 108f4146 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 108f4149 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f414c jge 0x108f41b5 */
  if ((C.sf==C.of)) goto L_108f41b5;
  /* 108f414e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 108f4151 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4154 je 0x108f41b0 */
  if (C.zf) goto L_108f41b0;
  /* 108f4156 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4159 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108f415c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108f415f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f4161 je 0x108f41b0 */
  if (C.zf) goto L_108f41b0;
  /* 108f4163 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4166 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108f4169 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 108f416c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f416e jne 0x108f4180 */
  if (!C.zf) goto L_108f4180;
  /* 108f4170 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 108f4173 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f4175 push edx */
  push32((uint32_t)(EDX));
  /* 108f4176 call dword ptr [0x10923398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923398))), 0x108f417cu);
  /* 108f417c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f417e je 0x108f41b0 */
  if (C.zf) goto L_108f41b0;
L_108f4180:;
  /* 108f4180 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 108f4183 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108f4186 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 108f4189 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108f418c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f418f mov edx, dword ptr [eax*4 + 0x10921fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10921fa0)));
  /* 108f4196 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4198 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 108f419b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f419e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 108f41a1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f41a3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108f41a5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f41a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f41ab mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108f41ad mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_108f41b0:;
  /* 108f41b0 jmp 0x108f412b */
  goto L_108f412b;
L_108f41b5:;
  /* 108f41b5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 108f41bc jmp 0x108f41c7 */
  goto L_108f41c7;
L_108f41be:;
  /* 108f41be mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 108f41c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f41c4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_108f41c7:;
  /* 108f41c7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f41cb jge 0x108f42a4 */
  if ((C.sf==C.of)) goto L_108f42a4;
  /* 108f41d1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 108f41d4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f41d7 mov edx, dword ptr [0x10921fa0] */
  EDX = (r32((uint32_t)(0x10921fa0)));
  /* 108f41dd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f41df mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 108f41e2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f41e5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f41e8 jne 0x108f4290 */
  if (!C.zf) goto L_108f4290;
  /* 108f41ee mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f41f1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 108f41f5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f41f9 jne 0x108f4204 */
  if (!C.zf) goto L_108f4204;
  /* 108f41fb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 108f4202 jmp 0x108f4214 */
  goto L_108f4214;
L_108f4204:;
  /* 108f4204 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 108f4207 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f420a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 108f420c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f420e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4211 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_108f4214:;
  /* 108f4214 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 108f4217 push eax */
  push32((uint32_t)(EAX));
  /* 108f4218 call dword ptr [0x10923368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923368))), 0x108f421eu);
  /* 108f421e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 108f4221 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4225 je 0x108f427f */
  if (C.zf) goto L_108f427f;
  /* 108f4227 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 108f422a push ecx */
  push32((uint32_t)(ECX));
  /* 108f422b call dword ptr [0x10923398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923398))), 0x108f4231u);
  /* 108f4231 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 108f4234 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4238 je 0x108f427f */
  if (C.zf) goto L_108f427f;
  /* 108f423a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f423d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 108f4240 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 108f4242 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 108f4245 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f424b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f424e jne 0x108f4260 */
  if (!C.zf) goto L_108f4260;
  /* 108f4250 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f4253 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 108f4256 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 108f4258 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f425b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 108f425e jmp 0x108f427d */
  goto L_108f427d;
L_108f4260:;
  /* 108f4260 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 108f4263 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108f4269 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f426c jne 0x108f427d */
  if (!C.zf) goto L_108f427d;
  /* 108f426e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f4271 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108f4274 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 108f4277 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f427a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_108f427d:;
  /* 108f427d jmp 0x108f428e */
  goto L_108f428e;
L_108f427f:;
  /* 108f427f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f4282 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108f4285 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 108f4288 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f428b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_108f428e:;
  /* 108f428e jmp 0x108f429f */
  goto L_108f429f;
L_108f4290:;
  /* 108f4290 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f4293 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108f4296 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 108f4299 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f429c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_108f429f:;
  /* 108f429f jmp 0x108f41be */
  goto L_108f41be;
L_108f42a4:;
  /* 108f42a4 mov eax, dword ptr [0x109220dc] */
  EAX = (r32((uint32_t)(0x109220dc)));
  /* 108f42a9 push eax */
  push32((uint32_t)(EAX));
  /* 108f42aa call dword ptr [0x109233b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233b4))), 0x108f42b0u);
  /* 108f42b0 mov esp, ebp */
  ESP = (EBP);
  /* 108f42b2 pop ebp */
  EBP = (pop32());
  /* 108f42b3 ret  */
  ESPCHK(0x108f3f90u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x108f42c0 (155 bytes, 45 insns) */
void f_108f42c0(void) {
  FTRACE(0x108f42c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f42c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f42c1 mov ebp, esp */
  EBP = (ESP);
  /* 108f42c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f42c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108f42cd jmp 0x108f42d8 */
  goto L_108f42d8;
L_108f42cf:;
  /* 108f42cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f42d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f42d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108f42d8:;
  /* 108f42d8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f42dc jge 0x108f4357 */
  if ((C.sf==C.of)) goto L_108f4357;
  /* 108f42de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f42e1 cmp dword ptr [ecx*4 + 0x10921fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10921fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f42e9 je 0x108f4352 */
  if (C.zf) goto L_108f4352;
  /* 108f42eb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f42ee mov eax, dword ptr [edx*4 + 0x10921fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10921fa0)));
  /* 108f42f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f42f8 jmp 0x108f4303 */
  goto L_108f4303;
L_108f42fa:;
  /* 108f42fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f42fd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4300 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108f4303:;
  /* 108f4303 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f4306 mov eax, dword ptr [edx*4 + 0x10921fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10921fa0)));
  /* 108f430d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4312 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4315 jae 0x108f432f */
  if (!C.cf) goto L_108f432f;
  /* 108f4317 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f431a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f431e je 0x108f432d */
  if (C.zf) goto L_108f432d;
  /* 108f4320 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4323 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4326 push edx */
  push32((uint32_t)(EDX));
  /* 108f4327 call dword ptr [0x109233bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233bc))), 0x108f432du);
L_108f432d:;
  /* 108f432d jmp 0x108f42fa */
  goto L_108f42fa;
L_108f432f:;
  /* 108f432f push 2 */
  push32((uint32_t)(0x2u));
  /* 108f4331 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f4334 mov ecx, dword ptr [eax*4 + 0x10921fa0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10921fa0)));
  /* 108f433b push ecx */
  push32((uint32_t)(ECX));
  /* 108f433c call 0x108f4e10 */
  push32(0x108f4341u); f_108f4e10();
  /* 108f4341 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4344 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f4347 mov dword ptr [edx*4 + 0x10921fa0], 0 */
  w32((uint32_t)(EDX*4 + 0x10921fa0), (0x0u));
L_108f4352:;
  /* 108f4352 jmp 0x108f42cf */
  goto L_108f42cf;
L_108f4357:;
  /* 108f4357 mov esp, ebp */
  ESP = (EBP);
  /* 108f4359 pop ebp */
  EBP = (pop32());
  /* 108f435a ret  */
  ESPCHK(0x108f42c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004360 @ 0x108f4360 (29 bytes, 13 insns) */
void f_108f4360(void) {
  FTRACE(0x108f4360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f4360 push ebp */
  push32((uint32_t)(EBP));
  /* 108f4361 mov ebp, esp */
  EBP = (ESP);
  /* 108f4363 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4365 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4367 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f4369 mov eax, dword ptr [0x109207a0] */
  EAX = (r32((uint32_t)(0x109207a0)));
  /* 108f436e push eax */
  push32((uint32_t)(EAX));
  /* 108f436f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f4372 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4373 call 0x108f43d0 */
  push32(0x108f4378u); f_108f43d0();
  /* 108f4378 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f437b pop ebp */
  EBP = (pop32());
  /* 108f437c ret  */
  ESPCHK(0x108f4360u, _esp0);
  ESP += 4; return;
}

/* FUN_10004380 @ 0x108f4380 (35 bytes, 16 insns) */
void f_108f4380(void) {
  FTRACE(0x108f4380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f4380 push ebp */
  push32((uint32_t)(EBP));
  /* 108f4381 mov ebp, esp */
  EBP = (ESP);
  /* 108f4383 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f4386 push eax */
  push32((uint32_t)(EAX));
  /* 108f4387 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f438a push ecx */
  push32((uint32_t)(ECX));
  /* 108f438b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f438e push edx */
  push32((uint32_t)(EDX));
  /* 108f438f mov eax, dword ptr [0x109207a0] */
  EAX = (r32((uint32_t)(0x109207a0)));
  /* 108f4394 push eax */
  push32((uint32_t)(EAX));
  /* 108f4395 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f4398 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4399 call 0x108f43d0 */
  push32(0x108f439eu); f_108f43d0();
  /* 108f439e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f43a1 pop ebp */
  EBP = (pop32());
  /* 108f43a2 ret  */
  ESPCHK(0x108f4380u, _esp0);
  ESP += 4; return;
}

/* FUN_100043b0 @ 0x108f43b0 (27 bytes, 13 insns) */
void f_108f43b0(void) {
  FTRACE(0x108f43b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f43b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f43b1 mov ebp, esp */
  EBP = (ESP);
  /* 108f43b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f43b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f43b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f43b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f43bc push eax */
  push32((uint32_t)(EAX));
  /* 108f43bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f43c0 push ecx */
  push32((uint32_t)(ECX));
  /* 108f43c1 call 0x108f43d0 */
  push32(0x108f43c6u); f_108f43d0();
  /* 108f43c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f43c9 pop ebp */
  EBP = (pop32());
  /* 108f43ca ret  */
  ESPCHK(0x108f43b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043d0 @ 0x108f43d0 (94 bytes, 38 insns) */
void f_108f43d0(void) {
  FTRACE(0x108f43d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f43d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f43d1 mov ebp, esp */
  EBP = (ESP);
  /* 108f43d3 push ecx */
  push32((uint32_t)(ECX));
L_108f43d4:;
  /* 108f43d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f43d6 call 0x108f7d80 */
  push32(0x108f43dbu); f_108f7d80();
  /* 108f43db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f43de mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f43e1 push eax */
  push32((uint32_t)(EAX));
  /* 108f43e2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f43e5 push ecx */
  push32((uint32_t)(ECX));
  /* 108f43e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f43e9 push edx */
  push32((uint32_t)(EDX));
  /* 108f43ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f43ed push eax */
  push32((uint32_t)(EAX));
  /* 108f43ee call 0x108f4450 */
  push32(0x108f43f3u); f_108f4450();
  /* 108f43f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f43f6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f43f9 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f43fb call 0x108f7e20 */
  push32(0x108f4400u); f_108f7e20();
  /* 108f4400 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4403 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4407 jne 0x108f440f */
  if (!C.zf) goto L_108f440f;
  /* 108f4409 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f440d jne 0x108f4414 */
  if (!C.zf) goto L_108f4414;
L_108f440f:;
  /* 108f440f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4412 jmp 0x108f442a */
  goto L_108f442a;
L_108f4414:;
  /* 108f4414 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f4417 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4418 call 0x108f80c0 */
  push32(0x108f441du); f_108f80c0();
  /* 108f441d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f4422 jne 0x108f4428 */
  if (!C.zf) goto L_108f4428;
  /* 108f4424 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f4426 jmp 0x108f442a */
  goto L_108f442a;
L_108f4428:;
  /* 108f4428 jmp 0x108f43d4 */
  goto L_108f43d4;
L_108f442a:;
  /* 108f442a mov esp, ebp */
  ESP = (EBP);
  /* 108f442c pop ebp */
  EBP = (pop32());
  /* 108f442d ret  */
  ESPCHK(0x108f43d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004430 @ 0x108f4430 (23 bytes, 11 insns) */
void f_108f4430(void) {
  FTRACE(0x108f4430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f4430 push ebp */
  push32((uint32_t)(EBP));
  /* 108f4431 mov ebp, esp */
  EBP = (ESP);
  /* 108f4433 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4435 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4437 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f4439 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f443c push eax */
  push32((uint32_t)(EAX));
  /* 108f443d call 0x108f4450 */
  push32(0x108f4442u); f_108f4450();
  /* 108f4442 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4445 pop ebp */
  EBP = (pop32());
  /* 108f4446 ret  */
  ESPCHK(0x108f4430u, _esp0);
  ESP += 4; return;
}

/* FUN_10004450 @ 0x108f4450 (787 bytes, 254 insns) */
void f_108f4450(void) {
  FTRACE(0x108f4450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f4450 push ebp */
  push32((uint32_t)(EBP));
  /* 108f4451 mov ebp, esp */
  EBP = (ESP);
  /* 108f4453 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f4456 push ebx */
  push32((uint32_t)(EBX));
  /* 108f4457 push esi */
  push32((uint32_t)(ESI));
  /* 108f4458 push edi */
  push32((uint32_t)(EDI));
  /* 108f4459 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108f4460 mov eax, dword ptr [0x1091ea84] */
  EAX = (r32((uint32_t)(0x1091ea84)));
  /* 108f4465 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108f4468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f446a je 0x108f449c */
  if (C.zf) goto L_108f449c;
L_108f446c:;
  /* 108f446c call 0x108f5520 */
  push32(0x108f4471u); f_108f5520();
  /* 108f4471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f4473 jne 0x108f4496 */
  if (!C.zf) goto L_108f4496;
  /* 108f4475 push 0x1091b5e0 */
  push32((uint32_t)(0x1091b5e0u));
  /* 108f447a push 0 */
  push32((uint32_t)(0x0u));
  /* 108f447c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 108f4481 push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f4486 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f4488 call 0x108f3440 */
  push32(0x108f448du); f_108f3440();
  /* 108f448d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4490 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4493 jne 0x108f4496 */
  if (!C.zf) goto L_108f4496;
  /* 108f4495 int3  */
  x86_unimpl("int3 @ 0x108f4495");
L_108f4496:;
  /* 108f4496 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f4498 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f449a jne 0x108f446c */
  if (!C.zf) goto L_108f446c;
L_108f449c:;
  /* 108f449c mov edx, dword ptr [0x1091ea88] */
  EDX = (r32((uint32_t)(0x1091ea88)));
  /* 108f44a2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108f44a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f44a8 cmp eax, dword ptr [0x1091ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1091ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f44ae jne 0x108f44b1 */
  if (!C.zf) goto L_108f44b1;
  /* 108f44b0 int3  */
  x86_unimpl("int3 @ 0x108f44b0");
L_108f44b1:;
  /* 108f44b1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f44b4 push ecx */
  push32((uint32_t)(ECX));
  /* 108f44b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f44b8 push edx */
  push32((uint32_t)(EDX));
  /* 108f44b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f44bc push eax */
  push32((uint32_t)(EAX));
  /* 108f44bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f44c0 push ecx */
  push32((uint32_t)(ECX));
  /* 108f44c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f44c4 push edx */
  push32((uint32_t)(EDX));
  /* 108f44c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f44c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f44c9 call dword ptr [0x1091ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1091ec90))), 0x108f44cfu);
  /* 108f44cf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f44d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f44d4 jne 0x108f4534 */
  if (!C.zf) goto L_108f4534;
  /* 108f44d6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f44da je 0x108f4507 */
  if (C.zf) goto L_108f4507;
L_108f44dc:;
  /* 108f44dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f44df push eax */
  push32((uint32_t)(EAX));
  /* 108f44e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f44e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108f44e4 push 0x1091b59c */
  push32((uint32_t)(0x1091b59cu));
  /* 108f44e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f44eb push 0 */
  push32((uint32_t)(0x0u));
  /* 108f44ed push 0 */
  push32((uint32_t)(0x0u));
  /* 108f44ef push 0 */
  push32((uint32_t)(0x0u));
  /* 108f44f1 call 0x108f3440 */
  push32(0x108f44f6u); f_108f3440();
  /* 108f44f6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f44f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f44fc jne 0x108f44ff */
  if (!C.zf) goto L_108f44ff;
  /* 108f44fe int3  */
  x86_unimpl("int3 @ 0x108f44fe");
L_108f44ff:;
  /* 108f44ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f4501 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f4503 jne 0x108f44dc */
  if (!C.zf) goto L_108f44dc;
  /* 108f4505 jmp 0x108f452d */
  goto L_108f452d;
L_108f4507:;
  /* 108f4507 push 0x1091b578 */
  push32((uint32_t)(0x1091b578u));
  /* 108f450c push 0x1091b574 */
  push32((uint32_t)(0x1091b574u));
  /* 108f4511 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4513 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4515 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4517 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4519 call 0x108f3440 */
  push32(0x108f451eu); f_108f3440();
  /* 108f451e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4521 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4524 jne 0x108f4527 */
  if (!C.zf) goto L_108f4527;
  /* 108f4526 int3  */
  x86_unimpl("int3 @ 0x108f4526");
L_108f4527:;
  /* 108f4527 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f4529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f452b jne 0x108f4507 */
  if (!C.zf) goto L_108f4507;
L_108f452d:;
  /* 108f452d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f452f jmp 0x108f475c */
  goto L_108f475c;
L_108f4534:;
  /* 108f4534 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f4537 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f453d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4540 je 0x108f4556 */
  if (C.zf) goto L_108f4556;
  /* 108f4542 mov edx, dword ptr [0x1091ea84] */
  EDX = (r32((uint32_t)(0x1091ea84)));
  /* 108f4548 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108f454b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f454d jne 0x108f4556 */
  if (!C.zf) goto L_108f4556;
  /* 108f454f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_108f4556:;
  /* 108f4556 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f455a ja 0x108f4567 */
  if ((!C.cf&&!C.zf)) goto L_108f4567;
  /* 108f455c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f455f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4562 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4565 jbe 0x108f4593 */
  if ((C.cf||C.zf)) goto L_108f4593;
L_108f4567:;
  /* 108f4567 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f456a push ecx */
  push32((uint32_t)(ECX));
  /* 108f456b push 0x1091b550 */
  push32((uint32_t)(0x1091b550u));
  /* 108f4570 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4572 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4574 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4576 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f4578 call 0x108f3440 */
  push32(0x108f457du); f_108f3440();
  /* 108f457d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4580 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4583 jne 0x108f4586 */
  if (!C.zf) goto L_108f4586;
  /* 108f4585 int3  */
  x86_unimpl("int3 @ 0x108f4585");
L_108f4586:;
  /* 108f4586 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f4588 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f458a jne 0x108f4567 */
  if (!C.zf) goto L_108f4567;
  /* 108f458c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f458e jmp 0x108f475c */
  goto L_108f475c;
L_108f4593:;
  /* 108f4593 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f4596 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f459b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f459e je 0x108f45e0 */
  if (C.zf) goto L_108f45e0;
  /* 108f45a0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f45a4 je 0x108f45e0 */
  if (C.zf) goto L_108f45e0;
  /* 108f45a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f45a9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f45af cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f45b2 je 0x108f45e0 */
  if (C.zf) goto L_108f45e0;
  /* 108f45b4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f45b8 je 0x108f45e0 */
  if (C.zf) goto L_108f45e0;
L_108f45ba:;
  /* 108f45ba push 0x1091b51c */
  push32((uint32_t)(0x1091b51cu));
  /* 108f45bf push 0x1091b574 */
  push32((uint32_t)(0x1091b574u));
  /* 108f45c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f45c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f45c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f45ca push 1 */
  push32((uint32_t)(0x1u));
  /* 108f45cc call 0x108f3440 */
  push32(0x108f45d1u); f_108f3440();
  /* 108f45d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f45d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f45d7 jne 0x108f45da */
  if (!C.zf) goto L_108f45da;
  /* 108f45d9 int3  */
  x86_unimpl("int3 @ 0x108f45d9");
L_108f45da:;
  /* 108f45da xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f45dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f45de jne 0x108f45ba */
  if (!C.zf) goto L_108f45ba;
L_108f45e0:;
  /* 108f45e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f45e3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f45e6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108f45e9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f45ec push ecx */
  push32((uint32_t)(ECX));
  /* 108f45ed call 0x108f81d0 */
  push32(0x108f45f2u); f_108f81d0();
  /* 108f45f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f45f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f45f8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f45fc jne 0x108f4605 */
  if (!C.zf) goto L_108f4605;
  /* 108f45fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f4600 jmp 0x108f475c */
  goto L_108f475c;
L_108f4605:;
  /* 108f4605 mov edx, dword ptr [0x1091ea88] */
  EDX = (r32((uint32_t)(0x1091ea88)));
  /* 108f460b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f460e mov dword ptr [0x1091ea88], edx */
  w32((uint32_t)(0x1091ea88), (EDX));
  /* 108f4614 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4618 je 0x108f4663 */
  if (C.zf) goto L_108f4663;
  /* 108f461a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f461d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108f4623 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4626 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 108f462d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4630 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 108f4637 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f463a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 108f4641 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4644 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f4647 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 108f464a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f464d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 108f4654 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4657 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 108f465e jmp 0x108f4703 */
  goto L_108f4703;
L_108f4663:;
  /* 108f4663 mov edx, dword ptr [0x10920604] */
  EDX = (r32((uint32_t)(0x10920604)));
  /* 108f4669 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f466c mov dword ptr [0x10920604], edx */
  w32((uint32_t)(0x10920604), (EDX));
  /* 108f4672 mov eax, dword ptr [0x1092060c] */
  EAX = (r32((uint32_t)(0x1092060c)));
  /* 108f4677 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f467a mov dword ptr [0x1092060c], eax */
  w32((uint32_t)(0x1092060c), (EAX));
  /* 108f467f mov ecx, dword ptr [0x1092060c] */
  ECX = (r32((uint32_t)(0x1092060c)));
  /* 108f4685 cmp ecx, dword ptr [0x10920610] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10920610))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f468b jbe 0x108f4699 */
  if ((C.cf||C.zf)) goto L_108f4699;
  /* 108f468d mov edx, dword ptr [0x1092060c] */
  EDX = (r32((uint32_t)(0x1092060c)));
  /* 108f4693 mov dword ptr [0x10920610], edx */
  w32((uint32_t)(0x10920610), (EDX));
L_108f4699:;
  /* 108f4699 cmp dword ptr [0x10920608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f46a0 je 0x108f46af */
  if (C.zf) goto L_108f46af;
  /* 108f46a2 mov eax, dword ptr [0x10920608] */
  EAX = (r32((uint32_t)(0x10920608)));
  /* 108f46a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f46aa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 108f46ad jmp 0x108f46b8 */
  goto L_108f46b8;
L_108f46af:;
  /* 108f46af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f46b2 mov dword ptr [0x10920600], edx */
  w32((uint32_t)(0x10920600), (EDX));
L_108f46b8:;
  /* 108f46b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f46bb mov ecx, dword ptr [0x10920608] */
  ECX = (r32((uint32_t)(0x10920608)));
  /* 108f46c1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108f46c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f46c6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 108f46cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f46d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f46d3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 108f46d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f46d9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f46dc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 108f46df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f46e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f46e5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 108f46e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f46eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f46ee mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 108f46f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f46f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f46f7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 108f46fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f46fd mov dword ptr [0x10920608], ecx */
  w32((uint32_t)(0x10920608), (ECX));
L_108f4703:;
  /* 108f4703 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f4705 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f4707 mov dl, byte ptr [0x1091ea90] */
  DL = (r8((uint32_t)(0x1091ea90)));
  /* 108f470d push edx */
  push32((uint32_t)(EDX));
  /* 108f470e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4711 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4714 push eax */
  push32((uint32_t)(EAX));
  /* 108f4715 call 0x108f80f0 */
  push32(0x108f471au); f_108f80f0();
  /* 108f471a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f471d push 4 */
  push32((uint32_t)(0x4u));
  /* 108f471f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f4721 mov cl, byte ptr [0x1091ea90] */
  CL = (r8((uint32_t)(0x1091ea90)));
  /* 108f4727 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4728 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f472b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f472e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 108f4732 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4733 call 0x108f80f0 */
  push32(0x108f4738u); f_108f80f0();
  /* 108f4738 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f473b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f473e push edx */
  push32((uint32_t)(EDX));
  /* 108f473f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f4741 mov al, byte ptr [0x1091ea92] */
  AL = (r8((uint32_t)(0x1091ea92)));
  /* 108f4746 push eax */
  push32((uint32_t)(EAX));
  /* 108f4747 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f474a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f474d push ecx */
  push32((uint32_t)(ECX));
  /* 108f474e call 0x108f80f0 */
  push32(0x108f4753u); f_108f80f0();
  /* 108f4753 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4756 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4759 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_108f475c:;
  /* 108f475c pop edi */
  EDI = (pop32());
  /* 108f475d pop esi */
  ESI = (pop32());
  /* 108f475e pop ebx */
  EBX = (pop32());
  /* 108f475f mov esp, ebp */
  ESP = (EBP);
  /* 108f4761 pop ebp */
  EBP = (pop32());
  /* 108f4762 ret  */
  ESPCHK(0x108f4450u, _esp0);
  ESP += 4; return;
}

/* FUN_10004770 @ 0x108f4770 (27 bytes, 13 insns) */
void f_108f4770(void) {
  FTRACE(0x108f4770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f4770 push ebp */
  push32((uint32_t)(EBP));
  /* 108f4771 mov ebp, esp */
  EBP = (ESP);
  /* 108f4773 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4775 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4777 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f4779 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f477c push eax */
  push32((uint32_t)(EAX));
  /* 108f477d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f4780 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4781 call 0x108f4790 */
  push32(0x108f4786u); f_108f4790();
  /* 108f4786 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4789 pop ebp */
  EBP = (pop32());
  /* 108f478a ret  */
  ESPCHK(0x108f4770u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x108f4790 (96 bytes, 37 insns) */
void f_108f4790(void) {
  FTRACE(0x108f4790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f4790 push ebp */
  push32((uint32_t)(EBP));
  /* 108f4791 mov ebp, esp */
  EBP = (ESP);
  /* 108f4793 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f4796 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f4799 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f479d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 108f47a0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f47a3 push ecx */
  push32((uint32_t)(ECX));
  /* 108f47a4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f47a7 push edx */
  push32((uint32_t)(EDX));
  /* 108f47a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f47ab push eax */
  push32((uint32_t)(EAX));
  /* 108f47ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f47af push ecx */
  push32((uint32_t)(ECX));
  /* 108f47b0 call 0x108f4380 */
  push32(0x108f47b5u); f_108f4380();
  /* 108f47b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f47b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f47bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f47bf je 0x108f47e9 */
  if (C.zf) goto L_108f47e9;
  /* 108f47c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f47c4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108f47c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f47ca add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f47cd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108f47d0:;
  /* 108f47d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f47d3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f47d6 jae 0x108f47e9 */
  if (!C.cf) goto L_108f47e9;
  /* 108f47d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f47db mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 108f47de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f47e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f47e4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108f47e7 jmp 0x108f47d0 */
  goto L_108f47d0;
L_108f47e9:;
  /* 108f47e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f47ec mov esp, ebp */
  ESP = (EBP);
  /* 108f47ee pop ebp */
  EBP = (pop32());
  /* 108f47ef ret  */
  ESPCHK(0x108f4790u, _esp0);
  ESP += 4; return;
}

/* FUN_100047f0 @ 0x108f47f0 (27 bytes, 13 insns) */
void f_108f47f0(void) {
  FTRACE(0x108f47f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f47f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f47f1 mov ebp, esp */
  EBP = (ESP);
  /* 108f47f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f47f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f47f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f47f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f47fc push eax */
  push32((uint32_t)(EAX));
  /* 108f47fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f4800 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4801 call 0x108f4810 */
  push32(0x108f4806u); f_108f4810();
  /* 108f4806 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4809 pop ebp */
  EBP = (pop32());
  /* 108f480a ret  */
  ESPCHK(0x108f47f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004810 @ 0x108f4810 (64 bytes, 27 insns) */
void f_108f4810(void) {
  FTRACE(0x108f4810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f4810 push ebp */
  push32((uint32_t)(EBP));
  /* 108f4811 mov ebp, esp */
  EBP = (ESP);
  /* 108f4813 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4814 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f4816 call 0x108f7d80 */
  push32(0x108f481bu); f_108f7d80();
  /* 108f481b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f481e push 1 */
  push32((uint32_t)(0x1u));
  /* 108f4820 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f4823 push eax */
  push32((uint32_t)(EAX));
  /* 108f4824 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f4827 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4828 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f482b push edx */
  push32((uint32_t)(EDX));
  /* 108f482c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f482f push eax */
  push32((uint32_t)(EAX));
  /* 108f4830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f4833 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4834 call 0x108f4850 */
  push32(0x108f4839u); f_108f4850();
  /* 108f4839 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f483c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f483f push 9 */
  push32((uint32_t)(0x9u));
  /* 108f4841 call 0x108f7e20 */
  push32(0x108f4846u); f_108f7e20();
  /* 108f4846 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4849 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f484c mov esp, ebp */
  ESP = (EBP);
  /* 108f484e pop ebp */
  EBP = (pop32());
  /* 108f484f ret  */
  ESPCHK(0x108f4810u, _esp0);
  ESP += 4; return;
}

/* FUN_10004850 @ 0x108f4850 (1297 bytes, 431 insns) */
void f_108f4850(void) {
  FTRACE(0x108f4850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f4850 push ebp */
  push32((uint32_t)(EBP));
  /* 108f4851 mov ebp, esp */
  EBP = (ESP);
  /* 108f4853 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f4856 push ebx */
  push32((uint32_t)(EBX));
  /* 108f4857 push esi */
  push32((uint32_t)(ESI));
  /* 108f4858 push edi */
  push32((uint32_t)(EDI));
  /* 108f4859 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 108f4860 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4864 jne 0x108f4883 */
  if (!C.zf) goto L_108f4883;
  /* 108f4866 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f4869 push eax */
  push32((uint32_t)(EAX));
  /* 108f486a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f486d push ecx */
  push32((uint32_t)(ECX));
  /* 108f486e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f4871 push edx */
  push32((uint32_t)(EDX));
  /* 108f4872 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f4875 push eax */
  push32((uint32_t)(EAX));
  /* 108f4876 call 0x108f4380 */
  push32(0x108f487bu); f_108f4380();
  /* 108f487b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f487e jmp 0x108f4d5a */
  goto L_108f4d5a;
L_108f4883:;
  /* 108f4883 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4887 je 0x108f48a6 */
  if (C.zf) goto L_108f48a6;
  /* 108f4889 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f488d jne 0x108f48a6 */
  if (!C.zf) goto L_108f48a6;
  /* 108f488f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f4892 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4893 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f4896 push edx */
  push32((uint32_t)(EDX));
  /* 108f4897 call 0x108f4e10 */
  push32(0x108f489cu); f_108f4e10();
  /* 108f489c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f489f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f48a1 jmp 0x108f4d5a */
  goto L_108f4d5a;
L_108f48a6:;
  /* 108f48a6 mov eax, dword ptr [0x1091ea84] */
  EAX = (r32((uint32_t)(0x1091ea84)));
  /* 108f48ab and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108f48ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f48b0 je 0x108f48e2 */
  if (C.zf) goto L_108f48e2;
L_108f48b2:;
  /* 108f48b2 call 0x108f5520 */
  push32(0x108f48b7u); f_108f5520();
  /* 108f48b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f48b9 jne 0x108f48dc */
  if (!C.zf) goto L_108f48dc;
  /* 108f48bb push 0x1091b5e0 */
  push32((uint32_t)(0x1091b5e0u));
  /* 108f48c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f48c2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 108f48c7 push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f48cc push 2 */
  push32((uint32_t)(0x2u));
  /* 108f48ce call 0x108f3440 */
  push32(0x108f48d3u); f_108f3440();
  /* 108f48d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f48d6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f48d9 jne 0x108f48dc */
  if (!C.zf) goto L_108f48dc;
  /* 108f48db int3  */
  x86_unimpl("int3 @ 0x108f48db");
L_108f48dc:;
  /* 108f48dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f48de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f48e0 jne 0x108f48b2 */
  if (!C.zf) goto L_108f48b2;
L_108f48e2:;
  /* 108f48e2 mov edx, dword ptr [0x1091ea88] */
  EDX = (r32((uint32_t)(0x1091ea88)));
  /* 108f48e8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108f48eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f48ee cmp eax, dword ptr [0x1091ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1091ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f48f4 jne 0x108f48f7 */
  if (!C.zf) goto L_108f48f7;
  /* 108f48f6 int3  */
  x86_unimpl("int3 @ 0x108f48f6");
L_108f48f7:;
  /* 108f48f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f48fa push ecx */
  push32((uint32_t)(ECX));
  /* 108f48fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f48fe push edx */
  push32((uint32_t)(EDX));
  /* 108f48ff mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f4902 push eax */
  push32((uint32_t)(EAX));
  /* 108f4903 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f4906 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4907 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f490a push edx */
  push32((uint32_t)(EDX));
  /* 108f490b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f490e push eax */
  push32((uint32_t)(EAX));
  /* 108f490f push 2 */
  push32((uint32_t)(0x2u));
  /* 108f4911 call dword ptr [0x1091ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1091ec90))), 0x108f4917u);
  /* 108f4917 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f491a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f491c jne 0x108f497c */
  if (!C.zf) goto L_108f497c;
  /* 108f491e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4922 je 0x108f494f */
  if (C.zf) goto L_108f494f;
L_108f4924:;
  /* 108f4924 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f4927 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4928 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f492b push edx */
  push32((uint32_t)(EDX));
  /* 108f492c push 0x1091b75c */
  push32((uint32_t)(0x1091b75cu));
  /* 108f4931 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4933 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4935 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4937 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4939 call 0x108f3440 */
  push32(0x108f493eu); f_108f3440();
  /* 108f493e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4941 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4944 jne 0x108f4947 */
  if (!C.zf) goto L_108f4947;
  /* 108f4946 int3  */
  x86_unimpl("int3 @ 0x108f4946");
L_108f4947:;
  /* 108f4947 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f4949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f494b jne 0x108f4924 */
  if (!C.zf) goto L_108f4924;
  /* 108f494d jmp 0x108f4975 */
  goto L_108f4975;
L_108f494f:;
  /* 108f494f push 0x1091b738 */
  push32((uint32_t)(0x1091b738u));
  /* 108f4954 push 0x1091b574 */
  push32((uint32_t)(0x1091b574u));
  /* 108f4959 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f495b push 0 */
  push32((uint32_t)(0x0u));
  /* 108f495d push 0 */
  push32((uint32_t)(0x0u));
  /* 108f495f push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4961 call 0x108f3440 */
  push32(0x108f4966u); f_108f3440();
  /* 108f4966 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4969 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f496c jne 0x108f496f */
  if (!C.zf) goto L_108f496f;
  /* 108f496e int3  */
  x86_unimpl("int3 @ 0x108f496e");
L_108f496f:;
  /* 108f496f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f4971 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f4973 jne 0x108f494f */
  if (!C.zf) goto L_108f494f;
L_108f4975:;
  /* 108f4975 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f4977 jmp 0x108f4d5a */
  goto L_108f4d5a;
L_108f497c:;
  /* 108f497c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4980 jbe 0x108f49ae */
  if ((C.cf||C.zf)) goto L_108f49ae;
L_108f4982:;
  /* 108f4982 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f4985 push edx */
  push32((uint32_t)(EDX));
  /* 108f4986 push 0x1091b708 */
  push32((uint32_t)(0x1091b708u));
  /* 108f498b push 0 */
  push32((uint32_t)(0x0u));
  /* 108f498d push 0 */
  push32((uint32_t)(0x0u));
  /* 108f498f push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4991 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f4993 call 0x108f3440 */
  push32(0x108f4998u); f_108f3440();
  /* 108f4998 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f499b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f499e jne 0x108f49a1 */
  if (!C.zf) goto L_108f49a1;
  /* 108f49a0 int3  */
  x86_unimpl("int3 @ 0x108f49a0");
L_108f49a1:;
  /* 108f49a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f49a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f49a5 jne 0x108f4982 */
  if (!C.zf) goto L_108f4982;
  /* 108f49a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f49a9 jmp 0x108f4d5a */
  goto L_108f4d5a;
L_108f49ae:;
  /* 108f49ae cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f49b2 je 0x108f49f6 */
  if (C.zf) goto L_108f49f6;
  /* 108f49b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f49b7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f49bd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f49c0 je 0x108f49f6 */
  if (C.zf) goto L_108f49f6;
  /* 108f49c2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f49c5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108f49cb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f49ce je 0x108f49f6 */
  if (C.zf) goto L_108f49f6;
L_108f49d0:;
  /* 108f49d0 push 0x1091b51c */
  push32((uint32_t)(0x1091b51cu));
  /* 108f49d5 push 0x1091b574 */
  push32((uint32_t)(0x1091b574u));
  /* 108f49da push 0 */
  push32((uint32_t)(0x0u));
  /* 108f49dc push 0 */
  push32((uint32_t)(0x0u));
  /* 108f49de push 0 */
  push32((uint32_t)(0x0u));
  /* 108f49e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f49e2 call 0x108f3440 */
  push32(0x108f49e7u); f_108f3440();
  /* 108f49e7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f49ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f49ed jne 0x108f49f0 */
  if (!C.zf) goto L_108f49f0;
  /* 108f49ef int3  */
  x86_unimpl("int3 @ 0x108f49ef");
L_108f49f0:;
  /* 108f49f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f49f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f49f4 jne 0x108f49d0 */
  if (!C.zf) goto L_108f49d0;
L_108f49f6:;
  /* 108f49f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f49f9 push ecx */
  push32((uint32_t)(ECX));
  /* 108f49fa call 0x108f5980 */
  push32(0x108f49ffu); f_108f5980();
  /* 108f49ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4a02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f4a04 jne 0x108f4a27 */
  if (!C.zf) goto L_108f4a27;
  /* 108f4a06 push 0x1091b6e4 */
  push32((uint32_t)(0x1091b6e4u));
  /* 108f4a0b push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4a0d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 108f4a12 push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f4a17 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f4a19 call 0x108f3440 */
  push32(0x108f4a1eu); f_108f3440();
  /* 108f4a1e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4a21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4a24 jne 0x108f4a27 */
  if (!C.zf) goto L_108f4a27;
  /* 108f4a26 int3  */
  x86_unimpl("int3 @ 0x108f4a26");
L_108f4a27:;
  /* 108f4a27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f4a29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f4a2b jne 0x108f49f6 */
  if (!C.zf) goto L_108f49f6;
  /* 108f4a2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f4a30 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f4a33 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f4a36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f4a39 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4a3d jne 0x108f4a46 */
  if (!C.zf) goto L_108f4a46;
  /* 108f4a3f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_108f4a46:;
  /* 108f4a46 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4a4a je 0x108f4a8a */
  if (C.zf) goto L_108f4a8a;
L_108f4a4c:;
  /* 108f4a4c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f4a4f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4a56 jne 0x108f4a61 */
  if (!C.zf) goto L_108f4a61;
  /* 108f4a58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f4a5b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4a5f je 0x108f4a82 */
  if (C.zf) goto L_108f4a82;
L_108f4a61:;
  /* 108f4a61 push 0x1091b69c */
  push32((uint32_t)(0x1091b69cu));
  /* 108f4a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4a68 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 108f4a6d push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f4a72 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f4a74 call 0x108f3440 */
  push32(0x108f4a79u); f_108f3440();
  /* 108f4a79 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4a7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4a7f jne 0x108f4a82 */
  if (!C.zf) goto L_108f4a82;
  /* 108f4a81 int3  */
  x86_unimpl("int3 @ 0x108f4a81");
L_108f4a82:;
  /* 108f4a82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f4a84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f4a86 jne 0x108f4a4c */
  if (!C.zf) goto L_108f4a4c;
  /* 108f4a88 jmp 0x108f4aee */
  goto L_108f4aee;
L_108f4a8a:;
  /* 108f4a8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f4a8d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108f4a90 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f4a95 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4a98 jne 0x108f4aaf */
  if (!C.zf) goto L_108f4aaf;
  /* 108f4a9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f4a9d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f4aa3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4aa6 jne 0x108f4aaf */
  if (!C.zf) goto L_108f4aaf;
  /* 108f4aa8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_108f4aaf:;
  /* 108f4aaf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f4ab2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108f4ab5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f4aba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f4abd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f4ac3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4ac5 je 0x108f4ae8 */
  if (C.zf) goto L_108f4ae8;
  /* 108f4ac7 push 0x1091b660 */
  push32((uint32_t)(0x1091b660u));
  /* 108f4acc push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4ace push 0x272 */
  push32((uint32_t)(0x272u));
  /* 108f4ad3 push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f4ad8 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f4ada call 0x108f3440 */
  push32(0x108f4adfu); f_108f3440();
  /* 108f4adf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4ae2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4ae5 jne 0x108f4ae8 */
  if (!C.zf) goto L_108f4ae8;
  /* 108f4ae7 int3  */
  x86_unimpl("int3 @ 0x108f4ae7");
L_108f4ae8:;
  /* 108f4ae8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f4aea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f4aec jne 0x108f4aaf */
  if (!C.zf) goto L_108f4aaf;
L_108f4aee:;
  /* 108f4aee cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4af2 je 0x108f4b19 */
  if (C.zf) goto L_108f4b19;
  /* 108f4af4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f4af7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4afa push eax */
  push32((uint32_t)(EAX));
  /* 108f4afb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f4afe push ecx */
  push32((uint32_t)(ECX));
  /* 108f4aff call 0x108f8300 */
  push32(0x108f4b04u); f_108f8300();
  /* 108f4b04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4b07 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108f4b0a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4b0e jne 0x108f4b17 */
  if (!C.zf) goto L_108f4b17;
  /* 108f4b10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f4b12 jmp 0x108f4d5a */
  goto L_108f4d5a;
L_108f4b17:;
  /* 108f4b17 jmp 0x108f4b3c */
  goto L_108f4b3c;
L_108f4b19:;
  /* 108f4b19 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f4b1c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4b1f push edx */
  push32((uint32_t)(EDX));
  /* 108f4b20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f4b23 push eax */
  push32((uint32_t)(EAX));
  /* 108f4b24 call 0x108f8250 */
  push32(0x108f4b29u); f_108f8250();
  /* 108f4b29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4b2c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108f4b2f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4b33 jne 0x108f4b3c */
  if (!C.zf) goto L_108f4b3c;
  /* 108f4b35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f4b37 jmp 0x108f4d5a */
  goto L_108f4d5a;
L_108f4b3c:;
  /* 108f4b3c mov ecx, dword ptr [0x1091ea88] */
  ECX = (r32((uint32_t)(0x1091ea88)));
  /* 108f4b42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4b45 mov dword ptr [0x1091ea88], ecx */
  w32((uint32_t)(0x1091ea88), (ECX));
  /* 108f4b4b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4b4f jne 0x108f4ba7 */
  if (!C.zf) goto L_108f4ba7;
  /* 108f4b51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4b54 mov eax, dword ptr [0x10920604] */
  EAX = (r32((uint32_t)(0x10920604)));
  /* 108f4b59 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f4b5c mov dword ptr [0x10920604], eax */
  w32((uint32_t)(0x10920604), (EAX));
  /* 108f4b61 mov ecx, dword ptr [0x10920604] */
  ECX = (r32((uint32_t)(0x10920604)));
  /* 108f4b67 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4b6a mov dword ptr [0x10920604], ecx */
  w32((uint32_t)(0x10920604), (ECX));
  /* 108f4b70 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4b73 mov eax, dword ptr [0x1092060c] */
  EAX = (r32((uint32_t)(0x1092060c)));
  /* 108f4b78 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f4b7b mov dword ptr [0x1092060c], eax */
  w32((uint32_t)(0x1092060c), (EAX));
  /* 108f4b80 mov ecx, dword ptr [0x1092060c] */
  ECX = (r32((uint32_t)(0x1092060c)));
  /* 108f4b86 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4b89 mov dword ptr [0x1092060c], ecx */
  w32((uint32_t)(0x1092060c), (ECX));
  /* 108f4b8f mov edx, dword ptr [0x1092060c] */
  EDX = (r32((uint32_t)(0x1092060c)));
  /* 108f4b95 cmp edx, dword ptr [0x10920610] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10920610))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4b9b jbe 0x108f4ba7 */
  if ((C.cf||C.zf)) goto L_108f4ba7;
  /* 108f4b9d mov eax, dword ptr [0x1092060c] */
  EAX = (r32((uint32_t)(0x1092060c)));
  /* 108f4ba2 mov dword ptr [0x10920610], eax */
  w32((uint32_t)(0x10920610), (EAX));
L_108f4ba7:;
  /* 108f4ba7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4baa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4bad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108f4bb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4bb3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f4bb6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4bb9 jbe 0x108f4bdf */
  if ((C.cf||C.zf)) goto L_108f4bdf;
  /* 108f4bbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4bbe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f4bc1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f4bc4 push edx */
  push32((uint32_t)(EDX));
  /* 108f4bc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f4bc7 mov al, byte ptr [0x1091ea92] */
  AL = (r8((uint32_t)(0x1091ea92)));
  /* 108f4bcc push eax */
  push32((uint32_t)(EAX));
  /* 108f4bcd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4bd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4bd3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4bd6 push edx */
  push32((uint32_t)(EDX));
  /* 108f4bd7 call 0x108f80f0 */
  push32(0x108f4bdcu); f_108f80f0();
  /* 108f4bdc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f4bdf:;
  /* 108f4bdf push 4 */
  push32((uint32_t)(0x4u));
  /* 108f4be1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f4be3 mov al, byte ptr [0x1091ea90] */
  AL = (r8((uint32_t)(0x1091ea90)));
  /* 108f4be8 push eax */
  push32((uint32_t)(EAX));
  /* 108f4be9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4bec add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4bef push ecx */
  push32((uint32_t)(ECX));
  /* 108f4bf0 call 0x108f80f0 */
  push32(0x108f4bf5u); f_108f80f0();
  /* 108f4bf5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4bf8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4bfc jne 0x108f4c19 */
  if (!C.zf) goto L_108f4c19;
  /* 108f4bfe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4c01 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f4c04 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108f4c07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4c0a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f4c0d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 108f4c10 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4c13 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f4c16 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_108f4c19:;
  /* 108f4c19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4c1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f4c1f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_108f4c22:;
  /* 108f4c22 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4c26 jne 0x108f4c57 */
  if (!C.zf) goto L_108f4c57;
  /* 108f4c28 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4c2c jne 0x108f4c36 */
  if (!C.zf) goto L_108f4c36;
  /* 108f4c2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4c31 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4c34 je 0x108f4c57 */
  if (C.zf) goto L_108f4c57;
L_108f4c36:;
  /* 108f4c36 push 0x1091b62c */
  push32((uint32_t)(0x1091b62cu));
  /* 108f4c3b push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4c3d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 108f4c42 push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f4c47 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f4c49 call 0x108f3440 */
  push32(0x108f4c4eu); f_108f3440();
  /* 108f4c4e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4c51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4c54 jne 0x108f4c57 */
  if (!C.zf) goto L_108f4c57;
  /* 108f4c56 int3  */
  x86_unimpl("int3 @ 0x108f4c56");
L_108f4c57:;
  /* 108f4c57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f4c59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f4c5b jne 0x108f4c22 */
  if (!C.zf) goto L_108f4c22;
  /* 108f4c5d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4c60 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4c63 je 0x108f4c6b */
  if (C.zf) goto L_108f4c6b;
  /* 108f4c65 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4c69 je 0x108f4c73 */
  if (C.zf) goto L_108f4c73;
L_108f4c6b:;
  /* 108f4c6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4c6e jmp 0x108f4d5a */
  goto L_108f4d5a;
L_108f4c73:;
  /* 108f4c73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4c76 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4c79 je 0x108f4c8b */
  if (C.zf) goto L_108f4c8b;
  /* 108f4c7b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4c7e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108f4c80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4c83 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f4c86 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108f4c89 jmp 0x108f4cc7 */
  goto L_108f4cc7;
L_108f4c8b:;
  /* 108f4c8b mov eax, dword ptr [0x10920600] */
  EAX = (r32((uint32_t)(0x10920600)));
  /* 108f4c90 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4c93 je 0x108f4cb6 */
  if (C.zf) goto L_108f4cb6;
  /* 108f4c95 push 0x1091b610 */
  push32((uint32_t)(0x1091b610u));
  /* 108f4c9a push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4c9c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 108f4ca1 push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f4ca6 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f4ca8 call 0x108f3440 */
  push32(0x108f4cadu); f_108f3440();
  /* 108f4cad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4cb0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4cb3 jne 0x108f4cb6 */
  if (!C.zf) goto L_108f4cb6;
  /* 108f4cb5 int3  */
  x86_unimpl("int3 @ 0x108f4cb5");
L_108f4cb6:;
  /* 108f4cb6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f4cb8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f4cba jne 0x108f4c8b */
  if (!C.zf) goto L_108f4c8b;
  /* 108f4cbc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4cbf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108f4cc2 mov dword ptr [0x10920600], eax */
  w32((uint32_t)(0x10920600), (EAX));
L_108f4cc7:;
  /* 108f4cc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4cca cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4cce je 0x108f4cdf */
  if (C.zf) goto L_108f4cdf;
  /* 108f4cd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4cd3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108f4cd6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4cd9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f4cdb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108f4cdd jmp 0x108f4d1a */
  goto L_108f4d1a;
L_108f4cdf:;
  /* 108f4cdf mov eax, dword ptr [0x10920608] */
  EAX = (r32((uint32_t)(0x10920608)));
  /* 108f4ce4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4ce7 je 0x108f4d0a */
  if (C.zf) goto L_108f4d0a;
  /* 108f4ce9 push 0x1091b5f4 */
  push32((uint32_t)(0x1091b5f4u));
  /* 108f4cee push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4cf0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 108f4cf5 push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f4cfa push 2 */
  push32((uint32_t)(0x2u));
  /* 108f4cfc call 0x108f3440 */
  push32(0x108f4d01u); f_108f3440();
  /* 108f4d01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4d04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4d07 jne 0x108f4d0a */
  if (!C.zf) goto L_108f4d0a;
  /* 108f4d09 int3  */
  x86_unimpl("int3 @ 0x108f4d09");
L_108f4d0a:;
  /* 108f4d0a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f4d0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f4d0e jne 0x108f4cdf */
  if (!C.zf) goto L_108f4cdf;
  /* 108f4d10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4d13 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108f4d15 mov dword ptr [0x10920608], eax */
  w32((uint32_t)(0x10920608), (EAX));
L_108f4d1a:;
  /* 108f4d1a cmp dword ptr [0x10920608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4d21 je 0x108f4d31 */
  if (C.zf) goto L_108f4d31;
  /* 108f4d23 mov ecx, dword ptr [0x10920608] */
  ECX = (r32((uint32_t)(0x10920608)));
  /* 108f4d29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4d2c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 108f4d2f jmp 0x108f4d39 */
  goto L_108f4d39;
L_108f4d31:;
  /* 108f4d31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4d34 mov dword ptr [0x10920600], eax */
  w32((uint32_t)(0x10920600), (EAX));
L_108f4d39:;
  /* 108f4d39 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4d3c mov edx, dword ptr [0x10920608] */
  EDX = (r32((uint32_t)(0x10920608)));
  /* 108f4d42 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 108f4d44 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4d47 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 108f4d4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f4d51 mov dword ptr [0x10920608], ecx */
  w32((uint32_t)(0x10920608), (ECX));
  /* 108f4d57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108f4d5a:;
  /* 108f4d5a pop edi */
  EDI = (pop32());
  /* 108f4d5b pop esi */
  ESI = (pop32());
  /* 108f4d5c pop ebx */
  EBX = (pop32());
  /* 108f4d5d mov esp, ebp */
  ESP = (EBP);
  /* 108f4d5f pop ebp */
  EBP = (pop32());
  /* 108f4d60 ret  */
  ESPCHK(0x108f4850u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d70 @ 0x108f4d70 (27 bytes, 13 insns) */
void f_108f4d70(void) {
  FTRACE(0x108f4d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f4d70 push ebp */
  push32((uint32_t)(EBP));
  /* 108f4d71 mov ebp, esp */
  EBP = (ESP);
  /* 108f4d73 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4d75 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4d77 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f4d79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f4d7c push eax */
  push32((uint32_t)(EAX));
  /* 108f4d7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f4d80 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4d81 call 0x108f4d90 */
  push32(0x108f4d86u); f_108f4d90();
  /* 108f4d86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4d89 pop ebp */
  EBP = (pop32());
  /* 108f4d8a ret  */
  ESPCHK(0x108f4d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d90 @ 0x108f4d90 (64 bytes, 27 insns) */
void f_108f4d90(void) {
  FTRACE(0x108f4d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f4d90 push ebp */
  push32((uint32_t)(EBP));
  /* 108f4d91 mov ebp, esp */
  EBP = (ESP);
  /* 108f4d93 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4d94 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f4d96 call 0x108f7d80 */
  push32(0x108f4d9bu); f_108f7d80();
  /* 108f4d9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4d9e push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4da0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f4da3 push eax */
  push32((uint32_t)(EAX));
  /* 108f4da4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f4da7 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4da8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f4dab push edx */
  push32((uint32_t)(EDX));
  /* 108f4dac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f4daf push eax */
  push32((uint32_t)(EAX));
  /* 108f4db0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f4db3 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4db4 call 0x108f4850 */
  push32(0x108f4db9u); f_108f4850();
  /* 108f4db9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4dbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f4dbf push 9 */
  push32((uint32_t)(0x9u));
  /* 108f4dc1 call 0x108f7e20 */
  push32(0x108f4dc6u); f_108f7e20();
  /* 108f4dc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4dc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4dcc mov esp, ebp */
  ESP = (EBP);
  /* 108f4dce pop ebp */
  EBP = (pop32());
  /* 108f4dcf ret  */
  ESPCHK(0x108f4d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004dd0 @ 0x108f4dd0 (19 bytes, 9 insns) */
void f_108f4dd0(void) {
  FTRACE(0x108f4dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f4dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f4dd1 mov ebp, esp */
  EBP = (ESP);
  /* 108f4dd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f4dd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f4dd8 push eax */
  push32((uint32_t)(EAX));
  /* 108f4dd9 call 0x108f4e10 */
  push32(0x108f4ddeu); f_108f4e10();
  /* 108f4dde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4de1 pop ebp */
  EBP = (pop32());
  /* 108f4de2 ret  */
  ESPCHK(0x108f4dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004df0 @ 0x108f4df0 (19 bytes, 9 insns) */
void f_108f4df0(void) {
  FTRACE(0x108f4df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f4df0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f4df1 mov ebp, esp */
  EBP = (ESP);
  /* 108f4df3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f4df5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f4df8 push eax */
  push32((uint32_t)(EAX));
  /* 108f4df9 call 0x108f4e40 */
  push32(0x108f4dfeu); f_108f4e40();
  /* 108f4dfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4e01 pop ebp */
  EBP = (pop32());
  /* 108f4e02 ret  */
  ESPCHK(0x108f4df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e10 @ 0x108f4e10 (41 bytes, 16 insns) */
void f_108f4e10(void) {
  FTRACE(0x108f4e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f4e10 push ebp */
  push32((uint32_t)(EBP));
  /* 108f4e11 mov ebp, esp */
  EBP = (ESP);
  /* 108f4e13 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f4e15 call 0x108f7d80 */
  push32(0x108f4e1au); f_108f7d80();
  /* 108f4e1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4e1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f4e20 push eax */
  push32((uint32_t)(EAX));
  /* 108f4e21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f4e24 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4e25 call 0x108f4e40 */
  push32(0x108f4e2au); f_108f4e40();
  /* 108f4e2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4e2d push 9 */
  push32((uint32_t)(0x9u));
  /* 108f4e2f call 0x108f7e20 */
  push32(0x108f4e34u); f_108f7e20();
  /* 108f4e34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4e37 pop ebp */
  EBP = (pop32());
  /* 108f4e38 ret  */
  ESPCHK(0x108f4e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e40 @ 0x108f4e40 (1004 bytes, 342 insns) */
void f_108f4e40(void) {
  FTRACE(0x108f4e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f4e40 push ebp */
  push32((uint32_t)(EBP));
  /* 108f4e41 mov ebp, esp */
  EBP = (ESP);
  /* 108f4e43 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4e44 push ebx */
  push32((uint32_t)(EBX));
  /* 108f4e45 push esi */
  push32((uint32_t)(ESI));
  /* 108f4e46 push edi */
  push32((uint32_t)(EDI));
  /* 108f4e47 mov eax, dword ptr [0x1091ea84] */
  EAX = (r32((uint32_t)(0x1091ea84)));
  /* 108f4e4c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108f4e4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f4e51 je 0x108f4e83 */
  if (C.zf) goto L_108f4e83;
L_108f4e53:;
  /* 108f4e53 call 0x108f5520 */
  push32(0x108f4e58u); f_108f5520();
  /* 108f4e58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f4e5a jne 0x108f4e7d */
  if (!C.zf) goto L_108f4e7d;
  /* 108f4e5c push 0x1091b5e0 */
  push32((uint32_t)(0x1091b5e0u));
  /* 108f4e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4e63 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 108f4e68 push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f4e6d push 2 */
  push32((uint32_t)(0x2u));
  /* 108f4e6f call 0x108f3440 */
  push32(0x108f4e74u); f_108f3440();
  /* 108f4e74 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4e77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4e7a jne 0x108f4e7d */
  if (!C.zf) goto L_108f4e7d;
  /* 108f4e7c int3  */
  x86_unimpl("int3 @ 0x108f4e7c");
L_108f4e7d:;
  /* 108f4e7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f4e7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f4e81 jne 0x108f4e53 */
  if (!C.zf) goto L_108f4e53;
L_108f4e83:;
  /* 108f4e83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4e87 jne 0x108f4e8e */
  if (!C.zf) goto L_108f4e8e;
  /* 108f4e89 jmp 0x108f5225 */
  goto L_108f5225;
L_108f4e8e:;
  /* 108f4e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4e90 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4e92 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4e94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f4e97 push edx */
  push32((uint32_t)(EDX));
  /* 108f4e98 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4e9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f4e9d push eax */
  push32((uint32_t)(EAX));
  /* 108f4e9e push 3 */
  push32((uint32_t)(0x3u));
  /* 108f4ea0 call dword ptr [0x1091ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1091ec90))), 0x108f4ea6u);
  /* 108f4ea6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4ea9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f4eab jne 0x108f4ed8 */
  if (!C.zf) goto L_108f4ed8;
L_108f4ead:;
  /* 108f4ead push 0x1091b8a4 */
  push32((uint32_t)(0x1091b8a4u));
  /* 108f4eb2 push 0x1091b574 */
  push32((uint32_t)(0x1091b574u));
  /* 108f4eb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4eb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4ebb push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4ebd push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4ebf call 0x108f3440 */
  push32(0x108f4ec4u); f_108f3440();
  /* 108f4ec4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4ec7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4eca jne 0x108f4ecd */
  if (!C.zf) goto L_108f4ecd;
  /* 108f4ecc int3  */
  x86_unimpl("int3 @ 0x108f4ecc");
L_108f4ecd:;
  /* 108f4ecd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f4ecf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f4ed1 jne 0x108f4ead */
  if (!C.zf) goto L_108f4ead;
  /* 108f4ed3 jmp 0x108f5225 */
  goto L_108f5225;
L_108f4ed8:;
  /* 108f4ed8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f4edb push edx */
  push32((uint32_t)(EDX));
  /* 108f4edc call 0x108f5980 */
  push32(0x108f4ee1u); f_108f5980();
  /* 108f4ee1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4ee4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f4ee6 jne 0x108f4f09 */
  if (!C.zf) goto L_108f4f09;
  /* 108f4ee8 push 0x1091b6e4 */
  push32((uint32_t)(0x1091b6e4u));
  /* 108f4eed push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4eef push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 108f4ef4 push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f4ef9 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f4efb call 0x108f3440 */
  push32(0x108f4f00u); f_108f3440();
  /* 108f4f00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4f03 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4f06 jne 0x108f4f09 */
  if (!C.zf) goto L_108f4f09;
  /* 108f4f08 int3  */
  x86_unimpl("int3 @ 0x108f4f08");
L_108f4f09:;
  /* 108f4f09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f4f0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f4f0d jne 0x108f4ed8 */
  if (!C.zf) goto L_108f4ed8;
  /* 108f4f0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f4f12 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f4f15 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108f4f18:;
  /* 108f4f18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4f1b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108f4f1e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f4f23 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4f26 je 0x108f4f6b */
  if (C.zf) goto L_108f4f6b;
  /* 108f4f28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4f2b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4f2f je 0x108f4f6b */
  if (C.zf) goto L_108f4f6b;
  /* 108f4f31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4f34 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108f4f37 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f4f3c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4f3f je 0x108f4f6b */
  if (C.zf) goto L_108f4f6b;
  /* 108f4f41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4f44 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4f48 je 0x108f4f6b */
  if (C.zf) goto L_108f4f6b;
  /* 108f4f4a push 0x1091b87c */
  push32((uint32_t)(0x1091b87cu));
  /* 108f4f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4f51 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 108f4f56 push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f4f5b push 2 */
  push32((uint32_t)(0x2u));
  /* 108f4f5d call 0x108f3440 */
  push32(0x108f4f62u); f_108f3440();
  /* 108f4f62 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4f65 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4f68 jne 0x108f4f6b */
  if (!C.zf) goto L_108f4f6b;
  /* 108f4f6a int3  */
  x86_unimpl("int3 @ 0x108f4f6a");
L_108f4f6b:;
  /* 108f4f6b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f4f6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f4f6f jne 0x108f4f18 */
  if (!C.zf) goto L_108f4f18;
  /* 108f4f71 mov eax, dword ptr [0x1091ea84] */
  EAX = (r32((uint32_t)(0x1091ea84)));
  /* 108f4f76 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108f4f79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f4f7b jne 0x108f5046 */
  if (!C.zf) goto L_108f5046;
  /* 108f4f81 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f4f83 mov cl, byte ptr [0x1091ea90] */
  CL = (r8((uint32_t)(0x1091ea90)));
  /* 108f4f89 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4f8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4f8d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4f90 push edx */
  push32((uint32_t)(EDX));
  /* 108f4f91 call 0x108f5490 */
  push32(0x108f4f96u); f_108f5490();
  /* 108f4f96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4f99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f4f9b jne 0x108f4fe0 */
  if (!C.zf) goto L_108f4fe0;
L_108f4f9d:;
  /* 108f4f9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4fa0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4fa3 push eax */
  push32((uint32_t)(EAX));
  /* 108f4fa4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4fa7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 108f4faa push edx */
  push32((uint32_t)(EDX));
  /* 108f4fab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4fae mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108f4fb1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f4fb7 mov edx, dword ptr [ecx*4 + 0x1091ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1091ea94)));
  /* 108f4fbe push edx */
  push32((uint32_t)(EDX));
  /* 108f4fbf push 0x1091b850 */
  push32((uint32_t)(0x1091b850u));
  /* 108f4fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f4fca push 1 */
  push32((uint32_t)(0x1u));
  /* 108f4fcc call 0x108f3440 */
  push32(0x108f4fd1u); f_108f3440();
  /* 108f4fd1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4fd4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f4fd7 jne 0x108f4fda */
  if (!C.zf) goto L_108f4fda;
  /* 108f4fd9 int3  */
  x86_unimpl("int3 @ 0x108f4fd9");
L_108f4fda:;
  /* 108f4fda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f4fdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f4fde jne 0x108f4f9d */
  if (!C.zf) goto L_108f4f9d;
L_108f4fe0:;
  /* 108f4fe0 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f4fe2 mov cl, byte ptr [0x1091ea90] */
  CL = (r8((uint32_t)(0x1091ea90)));
  /* 108f4fe8 push ecx */
  push32((uint32_t)(ECX));
  /* 108f4fe9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4fec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108f4fef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f4ff2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 108f4ff6 push edx */
  push32((uint32_t)(EDX));
  /* 108f4ff7 call 0x108f5490 */
  push32(0x108f4ffcu); f_108f5490();
  /* 108f4ffc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f4fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f5001 jne 0x108f5046 */
  if (!C.zf) goto L_108f5046;
L_108f5003:;
  /* 108f5003 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5006 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5009 push eax */
  push32((uint32_t)(EAX));
  /* 108f500a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f500d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 108f5010 push edx */
  push32((uint32_t)(EDX));
  /* 108f5011 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5014 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108f5017 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f501d mov edx, dword ptr [ecx*4 + 0x1091ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1091ea94)));
  /* 108f5024 push edx */
  push32((uint32_t)(EDX));
  /* 108f5025 push 0x1091b824 */
  push32((uint32_t)(0x1091b824u));
  /* 108f502a push 0 */
  push32((uint32_t)(0x0u));
  /* 108f502c push 0 */
  push32((uint32_t)(0x0u));
  /* 108f502e push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5030 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f5032 call 0x108f3440 */
  push32(0x108f5037u); f_108f3440();
  /* 108f5037 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f503a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f503d jne 0x108f5040 */
  if (!C.zf) goto L_108f5040;
  /* 108f503f int3  */
  x86_unimpl("int3 @ 0x108f503f");
L_108f5040:;
  /* 108f5040 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f5042 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f5044 jne 0x108f5003 */
  if (!C.zf) goto L_108f5003;
L_108f5046:;
  /* 108f5046 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5049 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f504d jne 0x108f50bb */
  if (!C.zf) goto L_108f50bb;
L_108f504f:;
  /* 108f504f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5052 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5059 jne 0x108f5064 */
  if (!C.zf) goto L_108f5064;
  /* 108f505b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f505e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5062 je 0x108f5085 */
  if (C.zf) goto L_108f5085;
L_108f5064:;
  /* 108f5064 push 0x1091b7e4 */
  push32((uint32_t)(0x1091b7e4u));
  /* 108f5069 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f506b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 108f5070 push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f5075 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f5077 call 0x108f3440 */
  push32(0x108f507cu); f_108f3440();
  /* 108f507c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f507f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5082 jne 0x108f5085 */
  if (!C.zf) goto L_108f5085;
  /* 108f5084 int3  */
  x86_unimpl("int3 @ 0x108f5084");
L_108f5085:;
  /* 108f5085 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f5087 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f5089 jne 0x108f504f */
  if (!C.zf) goto L_108f504f;
  /* 108f508b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f508e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108f5091 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5094 push eax */
  push32((uint32_t)(EAX));
  /* 108f5095 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f5097 mov cl, byte ptr [0x1091ea91] */
  CL = (r8((uint32_t)(0x1091ea91)));
  /* 108f509d push ecx */
  push32((uint32_t)(ECX));
  /* 108f509e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f50a1 push edx */
  push32((uint32_t)(EDX));
  /* 108f50a2 call 0x108f80f0 */
  push32(0x108f50a7u); f_108f80f0();
  /* 108f50a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f50aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f50ad push eax */
  push32((uint32_t)(EAX));
  /* 108f50ae call 0x108f84f0 */
  push32(0x108f50b3u); f_108f84f0();
  /* 108f50b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f50b6 jmp 0x108f5225 */
  goto L_108f5225;
L_108f50bb:;
  /* 108f50bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f50be cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f50c2 jne 0x108f50d1 */
  if (!C.zf) goto L_108f50d1;
  /* 108f50c4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f50c8 jne 0x108f50d1 */
  if (!C.zf) goto L_108f50d1;
  /* 108f50ca mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_108f50d1:;
  /* 108f50d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f50d4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108f50d7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f50da je 0x108f50fd */
  if (C.zf) goto L_108f50fd;
  /* 108f50dc push 0x1091b7c4 */
  push32((uint32_t)(0x1091b7c4u));
  /* 108f50e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f50e3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 108f50e8 push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f50ed push 2 */
  push32((uint32_t)(0x2u));
  /* 108f50ef call 0x108f3440 */
  push32(0x108f50f4u); f_108f3440();
  /* 108f50f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f50f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f50fa jne 0x108f50fd */
  if (!C.zf) goto L_108f50fd;
  /* 108f50fc int3  */
  x86_unimpl("int3 @ 0x108f50fc");
L_108f50fd:;
  /* 108f50fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f50ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f5101 jne 0x108f50d1 */
  if (!C.zf) goto L_108f50d1;
  /* 108f5103 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5106 mov eax, dword ptr [0x1092060c] */
  EAX = (r32((uint32_t)(0x1092060c)));
  /* 108f510b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f510e mov dword ptr [0x1092060c], eax */
  w32((uint32_t)(0x1092060c), (EAX));
  /* 108f5113 mov ecx, dword ptr [0x1091ea84] */
  ECX = (r32((uint32_t)(0x1091ea84)));
  /* 108f5119 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 108f511c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f511e jne 0x108f51fc */
  if (!C.zf) goto L_108f51fc;
  /* 108f5124 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5127 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f512a je 0x108f513c */
  if (C.zf) goto L_108f513c;
  /* 108f512c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f512f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f5131 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5134 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108f5137 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 108f513a jmp 0x108f517a */
  goto L_108f517a;
L_108f513c:;
  /* 108f513c mov ecx, dword ptr [0x10920600] */
  ECX = (r32((uint32_t)(0x10920600)));
  /* 108f5142 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5145 je 0x108f5168 */
  if (C.zf) goto L_108f5168;
  /* 108f5147 push 0x1091b7ac */
  push32((uint32_t)(0x1091b7acu));
  /* 108f514c push 0 */
  push32((uint32_t)(0x0u));
  /* 108f514e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 108f5153 push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f5158 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f515a call 0x108f3440 */
  push32(0x108f515fu); f_108f3440();
  /* 108f515f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5162 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5165 jne 0x108f5168 */
  if (!C.zf) goto L_108f5168;
  /* 108f5167 int3  */
  x86_unimpl("int3 @ 0x108f5167");
L_108f5168:;
  /* 108f5168 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f516a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f516c jne 0x108f513c */
  if (!C.zf) goto L_108f513c;
  /* 108f516e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5171 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f5174 mov dword ptr [0x10920600], ecx */
  w32((uint32_t)(0x10920600), (ECX));
L_108f517a:;
  /* 108f517a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f517d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5181 je 0x108f5192 */
  if (C.zf) goto L_108f5192;
  /* 108f5183 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5186 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f5189 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f518c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108f518e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108f5190 jmp 0x108f51cf */
  goto L_108f51cf;
L_108f5192:;
  /* 108f5192 mov ecx, dword ptr [0x10920608] */
  ECX = (r32((uint32_t)(0x10920608)));
  /* 108f5198 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f519b je 0x108f51be */
  if (C.zf) goto L_108f51be;
  /* 108f519d push 0x1091b794 */
  push32((uint32_t)(0x1091b794u));
  /* 108f51a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f51a4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 108f51a9 push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f51ae push 2 */
  push32((uint32_t)(0x2u));
  /* 108f51b0 call 0x108f3440 */
  push32(0x108f51b5u); f_108f3440();
  /* 108f51b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f51b8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f51bb jne 0x108f51be */
  if (!C.zf) goto L_108f51be;
  /* 108f51bd int3  */
  x86_unimpl("int3 @ 0x108f51bd");
L_108f51be:;
  /* 108f51be xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f51c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f51c2 jne 0x108f5192 */
  if (!C.zf) goto L_108f5192;
  /* 108f51c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f51c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f51c9 mov dword ptr [0x10920608], ecx */
  w32((uint32_t)(0x10920608), (ECX));
L_108f51cf:;
  /* 108f51cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f51d2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108f51d5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f51d8 push eax */
  push32((uint32_t)(EAX));
  /* 108f51d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f51db mov cl, byte ptr [0x1091ea91] */
  CL = (r8((uint32_t)(0x1091ea91)));
  /* 108f51e1 push ecx */
  push32((uint32_t)(ECX));
  /* 108f51e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f51e5 push edx */
  push32((uint32_t)(EDX));
  /* 108f51e6 call 0x108f80f0 */
  push32(0x108f51ebu); f_108f80f0();
  /* 108f51eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f51ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f51f1 push eax */
  push32((uint32_t)(EAX));
  /* 108f51f2 call 0x108f84f0 */
  push32(0x108f51f7u); f_108f84f0();
  /* 108f51f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f51fa jmp 0x108f5225 */
  goto L_108f5225;
L_108f51fc:;
  /* 108f51fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f51ff mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 108f5206 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5209 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108f520c push eax */
  push32((uint32_t)(EAX));
  /* 108f520d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f520f mov cl, byte ptr [0x1091ea91] */
  CL = (r8((uint32_t)(0x1091ea91)));
  /* 108f5215 push ecx */
  push32((uint32_t)(ECX));
  /* 108f5216 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5219 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f521c push edx */
  push32((uint32_t)(EDX));
  /* 108f521d call 0x108f80f0 */
  push32(0x108f5222u); f_108f80f0();
  /* 108f5222 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f5225:;
  /* 108f5225 pop edi */
  EDI = (pop32());
  /* 108f5226 pop esi */
  ESI = (pop32());
  /* 108f5227 pop ebx */
  EBX = (pop32());
  /* 108f5228 mov esp, ebp */
  ESP = (EBP);
  /* 108f522a pop ebp */
  EBP = (pop32());
  /* 108f522b ret  */
  ESPCHK(0x108f4e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005230 @ 0x108f5230 (19 bytes, 9 insns) */
void f_108f5230(void) {
  FTRACE(0x108f5230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f5230 push ebp */
  push32((uint32_t)(EBP));
  /* 108f5231 mov ebp, esp */
  EBP = (ESP);
  /* 108f5233 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f5235 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5238 push eax */
  push32((uint32_t)(EAX));
  /* 108f5239 call 0x108f5250 */
  push32(0x108f523eu); f_108f5250();
  /* 108f523e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5241 pop ebp */
  EBP = (pop32());
  /* 108f5242 ret  */
  ESPCHK(0x108f5230u, _esp0);
  ESP += 4; return;
}

/* FUN_10005250 @ 0x108f5250 (342 bytes, 119 insns) */
void f_108f5250(void) {
  FTRACE(0x108f5250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f5250 push ebp */
  push32((uint32_t)(EBP));
  /* 108f5251 mov ebp, esp */
  EBP = (ESP);
  /* 108f5253 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f5256 push ebx */
  push32((uint32_t)(EBX));
  /* 108f5257 push esi */
  push32((uint32_t)(ESI));
  /* 108f5258 push edi */
  push32((uint32_t)(EDI));
  /* 108f5259 mov eax, dword ptr [0x1091ea84] */
  EAX = (r32((uint32_t)(0x1091ea84)));
  /* 108f525e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108f5261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f5263 je 0x108f5295 */
  if (C.zf) goto L_108f5295;
L_108f5265:;
  /* 108f5265 call 0x108f5520 */
  push32(0x108f526au); f_108f5520();
  /* 108f526a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f526c jne 0x108f528f */
  if (!C.zf) goto L_108f528f;
  /* 108f526e push 0x1091b5e0 */
  push32((uint32_t)(0x1091b5e0u));
  /* 108f5273 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5275 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 108f527a push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f527f push 2 */
  push32((uint32_t)(0x2u));
  /* 108f5281 call 0x108f3440 */
  push32(0x108f5286u); f_108f3440();
  /* 108f5286 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5289 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f528c jne 0x108f528f */
  if (!C.zf) goto L_108f528f;
  /* 108f528e int3  */
  x86_unimpl("int3 @ 0x108f528e");
L_108f528f:;
  /* 108f528f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f5291 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f5293 jne 0x108f5265 */
  if (!C.zf) goto L_108f5265;
L_108f5295:;
  /* 108f5295 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f5297 call 0x108f7d80 */
  push32(0x108f529cu); f_108f7d80();
  /* 108f529c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f529f:;
  /* 108f529f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f52a2 push edx */
  push32((uint32_t)(EDX));
  /* 108f52a3 call 0x108f5980 */
  push32(0x108f52a8u); f_108f5980();
  /* 108f52a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f52ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f52ad jne 0x108f52d0 */
  if (!C.zf) goto L_108f52d0;
  /* 108f52af push 0x1091b6e4 */
  push32((uint32_t)(0x1091b6e4u));
  /* 108f52b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f52b6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 108f52bb push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f52c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f52c2 call 0x108f3440 */
  push32(0x108f52c7u); f_108f3440();
  /* 108f52c7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f52ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f52cd jne 0x108f52d0 */
  if (!C.zf) goto L_108f52d0;
  /* 108f52cf int3  */
  x86_unimpl("int3 @ 0x108f52cf");
L_108f52d0:;
  /* 108f52d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f52d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f52d4 jne 0x108f529f */
  if (!C.zf) goto L_108f529f;
  /* 108f52d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f52d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f52dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_108f52df:;
  /* 108f52df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f52e2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108f52e5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f52ea cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f52ed je 0x108f5332 */
  if (C.zf) goto L_108f5332;
  /* 108f52ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f52f2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f52f6 je 0x108f5332 */
  if (C.zf) goto L_108f5332;
  /* 108f52f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f52fb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108f52fe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f5303 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5306 je 0x108f5332 */
  if (C.zf) goto L_108f5332;
  /* 108f5308 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f530b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f530f je 0x108f5332 */
  if (C.zf) goto L_108f5332;
  /* 108f5311 push 0x1091b87c */
  push32((uint32_t)(0x1091b87cu));
  /* 108f5316 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5318 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 108f531d push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f5322 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f5324 call 0x108f3440 */
  push32(0x108f5329u); f_108f3440();
  /* 108f5329 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f532c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f532f jne 0x108f5332 */
  if (!C.zf) goto L_108f5332;
  /* 108f5331 int3  */
  x86_unimpl("int3 @ 0x108f5331");
L_108f5332:;
  /* 108f5332 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f5334 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f5336 jne 0x108f52df */
  if (!C.zf) goto L_108f52df;
  /* 108f5338 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f533b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f533f jne 0x108f534e */
  if (!C.zf) goto L_108f534e;
  /* 108f5341 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5345 jne 0x108f534e */
  if (!C.zf) goto L_108f534e;
  /* 108f5347 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_108f534e:;
  /* 108f534e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5351 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5355 je 0x108f5389 */
  if (C.zf) goto L_108f5389;
L_108f5357:;
  /* 108f5357 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f535a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108f535d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5360 je 0x108f5383 */
  if (C.zf) goto L_108f5383;
  /* 108f5362 push 0x1091b7c4 */
  push32((uint32_t)(0x1091b7c4u));
  /* 108f5367 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5369 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 108f536e push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f5373 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f5375 call 0x108f3440 */
  push32(0x108f537au); f_108f3440();
  /* 108f537a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f537d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5380 jne 0x108f5383 */
  if (!C.zf) goto L_108f5383;
  /* 108f5382 int3  */
  x86_unimpl("int3 @ 0x108f5382");
L_108f5383:;
  /* 108f5383 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f5385 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f5387 jne 0x108f5357 */
  if (!C.zf) goto L_108f5357;
L_108f5389:;
  /* 108f5389 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f538c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108f538f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f5392 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f5394 call 0x108f7e20 */
  push32(0x108f5399u); f_108f7e20();
  /* 108f5399 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f539c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f539f pop edi */
  EDI = (pop32());
  /* 108f53a0 pop esi */
  ESI = (pop32());
  /* 108f53a1 pop ebx */
  EBX = (pop32());
  /* 108f53a2 mov esp, ebp */
  ESP = (EBP);
  /* 108f53a4 pop ebp */
  EBP = (pop32());
  /* 108f53a5 ret  */
  ESPCHK(0x108f5250u, _esp0);
  ESP += 4; return;
}

/* FUN_100053b0 @ 0x108f53b0 (28 bytes, 11 insns) */
void f_108f53b0(void) {
  FTRACE(0x108f53b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f53b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f53b1 mov ebp, esp */
  EBP = (ESP);
  /* 108f53b3 push ecx */
  push32((uint32_t)(ECX));
  /* 108f53b4 mov eax, dword ptr [0x1091ea8c] */
  EAX = (r32((uint32_t)(0x1091ea8c)));
  /* 108f53b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f53bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f53bf mov dword ptr [0x1091ea8c], ecx */
  w32((uint32_t)(0x1091ea8c), (ECX));
  /* 108f53c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f53c8 mov esp, ebp */
  ESP = (EBP);
  /* 108f53ca pop ebp */
  EBP = (pop32());
  /* 108f53cb ret  */
  ESPCHK(0x108f53b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053d0 @ 0x108f53d0 (157 bytes, 59 insns) */
void f_108f53d0(void) {
  FTRACE(0x108f53d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f53d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f53d1 mov ebp, esp */
  EBP = (ESP);
  /* 108f53d3 push ecx */
  push32((uint32_t)(ECX));
  /* 108f53d4 push ebx */
  push32((uint32_t)(EBX));
  /* 108f53d5 push esi */
  push32((uint32_t)(ESI));
  /* 108f53d6 push edi */
  push32((uint32_t)(EDI));
  /* 108f53d7 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f53d9 call 0x108f7d80 */
  push32(0x108f53deu); f_108f7d80();
  /* 108f53de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f53e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f53e4 push eax */
  push32((uint32_t)(EAX));
  /* 108f53e5 call 0x108f5980 */
  push32(0x108f53eau); f_108f5980();
  /* 108f53ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f53ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f53ef je 0x108f545c */
  if (C.zf) goto L_108f545c;
  /* 108f53f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f53f4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f53f7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108f53fa:;
  /* 108f53fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f53fd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108f5400 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f5405 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5408 je 0x108f544d */
  if (C.zf) goto L_108f544d;
  /* 108f540a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f540d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5411 je 0x108f544d */
  if (C.zf) goto L_108f544d;
  /* 108f5413 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5416 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108f5419 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f541e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5421 je 0x108f544d */
  if (C.zf) goto L_108f544d;
  /* 108f5423 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5426 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f542a je 0x108f544d */
  if (C.zf) goto L_108f544d;
  /* 108f542c push 0x1091b87c */
  push32((uint32_t)(0x1091b87cu));
  /* 108f5431 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5433 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 108f5438 push 0x1091b5d4 */
  push32((uint32_t)(0x1091b5d4u));
  /* 108f543d push 2 */
  push32((uint32_t)(0x2u));
  /* 108f543f call 0x108f3440 */
  push32(0x108f5444u); f_108f3440();
  /* 108f5444 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5447 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f544a jne 0x108f544d */
  if (!C.zf) goto L_108f544d;
  /* 108f544c int3  */
  x86_unimpl("int3 @ 0x108f544c");
L_108f544d:;
  /* 108f544d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f544f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f5451 jne 0x108f53fa */
  if (!C.zf) goto L_108f53fa;
  /* 108f5453 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5456 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f5459 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_108f545c:;
  /* 108f545c push 9 */
  push32((uint32_t)(0x9u));
  /* 108f545e call 0x108f7e20 */
  push32(0x108f5463u); f_108f7e20();
  /* 108f5463 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5466 pop edi */
  EDI = (pop32());
  /* 108f5467 pop esi */
  ESI = (pop32());
  /* 108f5468 pop ebx */
  EBX = (pop32());
  /* 108f5469 mov esp, ebp */
  ESP = (EBP);
  /* 108f546b pop ebp */
  EBP = (pop32());
  /* 108f546c ret  */
  ESPCHK(0x108f53d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005470 @ 0x108f5470 (28 bytes, 11 insns) */
void f_108f5470(void) {
  FTRACE(0x108f5470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f5470 push ebp */
  push32((uint32_t)(EBP));
  /* 108f5471 mov ebp, esp */
  EBP = (ESP);
  /* 108f5473 push ecx */
  push32((uint32_t)(ECX));
  /* 108f5474 mov eax, dword ptr [0x1091ec90] */
  EAX = (r32((uint32_t)(0x1091ec90)));
  /* 108f5479 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f547c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f547f mov dword ptr [0x1091ec90], ecx */
  w32((uint32_t)(0x1091ec90), (ECX));
  /* 108f5485 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5488 mov esp, ebp */
  ESP = (EBP);
  /* 108f548a pop ebp */
  EBP = (pop32());
  /* 108f548b ret  */
  ESPCHK(0x108f5470u, _esp0);
  ESP += 4; return;
}

/* FUN_10005490 @ 0x108f5490 (136 bytes, 55 insns) */
void f_108f5490(void) {
  FTRACE(0x108f5490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f5490 push ebp */
  push32((uint32_t)(EBP));
  /* 108f5491 mov ebp, esp */
  EBP = (ESP);
  /* 108f5493 push ecx */
  push32((uint32_t)(ECX));
  /* 108f5494 push ebx */
  push32((uint32_t)(EBX));
  /* 108f5495 push esi */
  push32((uint32_t)(ESI));
  /* 108f5496 push edi */
  push32((uint32_t)(EDI));
  /* 108f5497 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_108f549e:;
  /* 108f549e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f54a1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f54a4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f54a7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 108f54aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f54ac je 0x108f550e */
  if (C.zf) goto L_108f550e;
  /* 108f54ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f54b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f54b3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108f54b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f54b8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f54be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f54c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f54c4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 108f54c7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f54c9 je 0x108f550c */
  if (C.zf) goto L_108f550c;
L_108f54cb:;
  /* 108f54cb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f54ce and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f54d3 push eax */
  push32((uint32_t)(EAX));
  /* 108f54d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f54d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f54d9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 108f54dc push edx */
  push32((uint32_t)(EDX));
  /* 108f54dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f54e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f54e3 push eax */
  push32((uint32_t)(EAX));
  /* 108f54e4 push 0x1091b8c0 */
  push32((uint32_t)(0x1091b8c0u));
  /* 108f54e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f54eb push 0 */
  push32((uint32_t)(0x0u));
  /* 108f54ed push 0 */
  push32((uint32_t)(0x0u));
  /* 108f54ef push 0 */
  push32((uint32_t)(0x0u));
  /* 108f54f1 call 0x108f3440 */
  push32(0x108f54f6u); f_108f3440();
  /* 108f54f6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f54f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f54fc jne 0x108f54ff */
  if (!C.zf) goto L_108f54ff;
  /* 108f54fe int3  */
  x86_unimpl("int3 @ 0x108f54fe");
L_108f54ff:;
  /* 108f54ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f5501 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f5503 jne 0x108f54cb */
  if (!C.zf) goto L_108f54cb;
  /* 108f5505 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108f550c:;
  /* 108f550c jmp 0x108f549e */
  goto L_108f549e;
L_108f550e:;
  /* 108f550e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5511 pop edi */
  EDI = (pop32());
  /* 108f5512 pop esi */
  ESI = (pop32());
  /* 108f5513 pop ebx */
  EBX = (pop32());
  /* 108f5514 mov esp, ebp */
  ESP = (EBP);
  /* 108f5516 pop ebp */
  EBP = (pop32());
  /* 108f5517 ret  */
  ESPCHK(0x108f5490u, _esp0);
  ESP += 4; return;
}

/* FUN_10005520 @ 0x108f5520 (863 bytes, 299 insns) [1 switch table(s)] */
void f_108f5520(void) {
  FTRACE(0x108f5520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f5520 push ebp */
  push32((uint32_t)(EBP));
  /* 108f5521 mov ebp, esp */
  EBP = (ESP);
  /* 108f5523 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f5526 push ebx */
  push32((uint32_t)(EBX));
  /* 108f5527 push esi */
  push32((uint32_t)(ESI));
  /* 108f5528 push edi */
  push32((uint32_t)(EDI));
  /* 108f5529 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108f5530 mov eax, dword ptr [0x1091ea84] */
  EAX = (r32((uint32_t)(0x1091ea84)));
  /* 108f5535 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 108f5538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f553a jne 0x108f5546 */
  if (!C.zf) goto L_108f5546;
  /* 108f553c mov eax, 1 */
  EAX = (0x1u);
  /* 108f5541 jmp 0x108f5878 */
  goto L_108f5878;
L_108f5546:;
  /* 108f5546 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f5548 call 0x108f7d80 */
  push32(0x108f554du); f_108f7d80();
  /* 108f554d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5550 call 0x108f8560 */
  push32(0x108f5555u); f_108f8560();
  /* 108f5555 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108f5558 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f555c je 0x108f5669 */
  if (C.zf) goto L_108f5669;
  /* 108f5562 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5566 je 0x108f5669 */
  if (C.zf) goto L_108f5669;
  /* 108f556c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f556f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 108f5572 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f5575 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5578 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108f557b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f557f ja 0x108f5632 */
  if ((!C.cf&&!C.zf)) goto L_108f5632;
  /* 108f5585 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f5588 jmp dword ptr [eax*4 + 0x108f587f] */
  switch (EAX) {
    case 0: goto L_108f560a;
    case 1: goto L_108f55e2;
    case 2: goto L_108f55ba;
    case 3: goto L_108f558f;
    default: x86_unimpl("switch@0x108f5588 out of table"); return;
  }
L_108f558f:;
  /* 108f558f push 0x1091ba14 */
  push32((uint32_t)(0x1091ba14u));
  /* 108f5594 push 0x1091b574 */
  push32((uint32_t)(0x1091b574u));
  /* 108f5599 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f559b push 0 */
  push32((uint32_t)(0x0u));
  /* 108f559d push 0 */
  push32((uint32_t)(0x0u));
  /* 108f559f push 0 */
  push32((uint32_t)(0x0u));
  /* 108f55a1 call 0x108f3440 */
  push32(0x108f55a6u); f_108f3440();
  /* 108f55a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f55a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f55ac jne 0x108f55af */
  if (!C.zf) goto L_108f55af;
  /* 108f55ae int3  */
  x86_unimpl("int3 @ 0x108f55ae");
L_108f55af:;
  /* 108f55af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f55b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f55b3 jne 0x108f558f */
  if (!C.zf) goto L_108f558f;
  /* 108f55b5 jmp 0x108f5658 */
  goto L_108f5658;
L_108f55ba:;
  /* 108f55ba push 0x1091b9f0 */
  push32((uint32_t)(0x1091b9f0u));
  /* 108f55bf push 0x1091b574 */
  push32((uint32_t)(0x1091b574u));
  /* 108f55c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f55c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f55c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f55ca push 0 */
  push32((uint32_t)(0x0u));
  /* 108f55cc call 0x108f3440 */
  push32(0x108f55d1u); f_108f3440();
  /* 108f55d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f55d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f55d7 jne 0x108f55da */
  if (!C.zf) goto L_108f55da;
  /* 108f55d9 int3  */
  x86_unimpl("int3 @ 0x108f55d9");
L_108f55da:;
  /* 108f55da xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f55dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f55de jne 0x108f55ba */
  if (!C.zf) goto L_108f55ba;
  /* 108f55e0 jmp 0x108f5658 */
  goto L_108f5658;
L_108f55e2:;
  /* 108f55e2 push 0x1091b9cc */
  push32((uint32_t)(0x1091b9ccu));
  /* 108f55e7 push 0x1091b574 */
  push32((uint32_t)(0x1091b574u));
  /* 108f55ec push 0 */
  push32((uint32_t)(0x0u));
  /* 108f55ee push 0 */
  push32((uint32_t)(0x0u));
  /* 108f55f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f55f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f55f4 call 0x108f3440 */
  push32(0x108f55f9u); f_108f3440();
  /* 108f55f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f55fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f55ff jne 0x108f5602 */
  if (!C.zf) goto L_108f5602;
  /* 108f5601 int3  */
  x86_unimpl("int3 @ 0x108f5601");
L_108f5602:;
  /* 108f5602 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f5604 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f5606 jne 0x108f55e2 */
  if (!C.zf) goto L_108f55e2;
  /* 108f5608 jmp 0x108f5658 */
  goto L_108f5658;
L_108f560a:;
  /* 108f560a push 0x1091b9a8 */
  push32((uint32_t)(0x1091b9a8u));
  /* 108f560f push 0x1091b574 */
  push32((uint32_t)(0x1091b574u));
  /* 108f5614 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5616 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5618 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f561a push 0 */
  push32((uint32_t)(0x0u));
  /* 108f561c call 0x108f3440 */
  push32(0x108f5621u); f_108f3440();
  /* 108f5621 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5624 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5627 jne 0x108f562a */
  if (!C.zf) goto L_108f562a;
  /* 108f5629 int3  */
  x86_unimpl("int3 @ 0x108f5629");
L_108f562a:;
  /* 108f562a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f562c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f562e jne 0x108f560a */
  if (!C.zf) goto L_108f560a;
  /* 108f5630 jmp 0x108f5658 */
  goto L_108f5658;
L_108f5632:;
  /* 108f5632 push 0x1091b97c */
  push32((uint32_t)(0x1091b97cu));
  /* 108f5637 push 0x1091b574 */
  push32((uint32_t)(0x1091b574u));
  /* 108f563c push 0 */
  push32((uint32_t)(0x0u));
  /* 108f563e push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5640 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5642 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5644 call 0x108f3440 */
  push32(0x108f5649u); f_108f3440();
  /* 108f5649 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f564c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f564f jne 0x108f5652 */
  if (!C.zf) goto L_108f5652;
  /* 108f5651 int3  */
  x86_unimpl("int3 @ 0x108f5651");
L_108f5652:;
  /* 108f5652 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f5654 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f5656 jne 0x108f5632 */
  if (!C.zf) goto L_108f5632;
L_108f5658:;
  /* 108f5658 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f565a call 0x108f7e20 */
  push32(0x108f565fu); f_108f7e20();
  /* 108f565f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5662 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f5664 jmp 0x108f5878 */
  goto L_108f5878;
L_108f5669:;
  /* 108f5669 mov eax, dword ptr [0x10920608] */
  EAX = (r32((uint32_t)(0x10920608)));
  /* 108f566e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f5671 jmp 0x108f567b */
  goto L_108f567b;
L_108f5673:;
  /* 108f5673 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5676 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f5678 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108f567b:;
  /* 108f567b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f567f je 0x108f586b */
  if (C.zf) goto L_108f586b;
  /* 108f5685 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 108f568c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f568f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108f5692 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f5698 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f569b je 0x108f56c0 */
  if (C.zf) goto L_108f56c0;
  /* 108f569d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f56a0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f56a4 je 0x108f56c0 */
  if (C.zf) goto L_108f56c0;
  /* 108f56a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f56a9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108f56ac and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f56b2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f56b5 je 0x108f56c0 */
  if (C.zf) goto L_108f56c0;
  /* 108f56b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f56ba cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f56be jne 0x108f56d8 */
  if (!C.zf) goto L_108f56d8;
L_108f56c0:;
  /* 108f56c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f56c3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108f56c6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f56cc mov edx, dword ptr [ecx*4 + 0x1091ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1091ea94)));
  /* 108f56d3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108f56d6 jmp 0x108f56df */
  goto L_108f56df;
L_108f56d8:;
  /* 108f56d8 mov dword ptr [ebp - 0x14], 0x1091b974 */
  w32((uint32_t)(EBP + -0x14), (0x1091b974u));
L_108f56df:;
  /* 108f56df push 4 */
  push32((uint32_t)(0x4u));
  /* 108f56e1 mov al, byte ptr [0x1091ea90] */
  AL = (r8((uint32_t)(0x1091ea90)));
  /* 108f56e6 push eax */
  push32((uint32_t)(EAX));
  /* 108f56e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f56ea add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f56ed push ecx */
  push32((uint32_t)(ECX));
  /* 108f56ee call 0x108f5490 */
  push32(0x108f56f3u); f_108f5490();
  /* 108f56f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f56f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f56f8 jne 0x108f5734 */
  if (!C.zf) goto L_108f5734;
L_108f56fa:;
  /* 108f56fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f56fd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5700 push edx */
  push32((uint32_t)(EDX));
  /* 108f5701 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5704 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 108f5707 push ecx */
  push32((uint32_t)(ECX));
  /* 108f5708 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f570b push edx */
  push32((uint32_t)(EDX));
  /* 108f570c push 0x1091b850 */
  push32((uint32_t)(0x1091b850u));
  /* 108f5711 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5713 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5715 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5717 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5719 call 0x108f3440 */
  push32(0x108f571eu); f_108f3440();
  /* 108f571e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5721 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5724 jne 0x108f5727 */
  if (!C.zf) goto L_108f5727;
  /* 108f5726 int3  */
  x86_unimpl("int3 @ 0x108f5726");
L_108f5727:;
  /* 108f5727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f5729 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f572b jne 0x108f56fa */
  if (!C.zf) goto L_108f56fa;
  /* 108f572d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_108f5734:;
  /* 108f5734 push 4 */
  push32((uint32_t)(0x4u));
  /* 108f5736 mov cl, byte ptr [0x1091ea90] */
  CL = (r8((uint32_t)(0x1091ea90)));
  /* 108f573c push ecx */
  push32((uint32_t)(ECX));
  /* 108f573d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5740 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108f5743 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5746 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 108f574a push edx */
  push32((uint32_t)(EDX));
  /* 108f574b call 0x108f5490 */
  push32(0x108f5750u); f_108f5490();
  /* 108f5750 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5753 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f5755 jne 0x108f5791 */
  if (!C.zf) goto L_108f5791;
L_108f5757:;
  /* 108f5757 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f575a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f575d push eax */
  push32((uint32_t)(EAX));
  /* 108f575e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5761 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 108f5764 push edx */
  push32((uint32_t)(EDX));
  /* 108f5765 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f5768 push eax */
  push32((uint32_t)(EAX));
  /* 108f5769 push 0x1091b824 */
  push32((uint32_t)(0x1091b824u));
  /* 108f576e push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5770 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5772 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5774 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5776 call 0x108f3440 */
  push32(0x108f577bu); f_108f3440();
  /* 108f577b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f577e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5781 jne 0x108f5784 */
  if (!C.zf) goto L_108f5784;
  /* 108f5783 int3  */
  x86_unimpl("int3 @ 0x108f5783");
L_108f5784:;
  /* 108f5784 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f5786 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f5788 jne 0x108f5757 */
  if (!C.zf) goto L_108f5757;
  /* 108f578a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_108f5791:;
  /* 108f5791 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5794 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5798 jne 0x108f57ea */
  if (!C.zf) goto L_108f57ea;
  /* 108f579a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f579d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108f57a0 push ecx */
  push32((uint32_t)(ECX));
  /* 108f57a1 mov dl, byte ptr [0x1091ea91] */
  DL = (r8((uint32_t)(0x1091ea91)));
  /* 108f57a7 push edx */
  push32((uint32_t)(EDX));
  /* 108f57a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f57ab add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f57ae push eax */
  push32((uint32_t)(EAX));
  /* 108f57af call 0x108f5490 */
  push32(0x108f57b4u); f_108f5490();
  /* 108f57b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f57b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f57b9 jne 0x108f57ea */
  if (!C.zf) goto L_108f57ea;
L_108f57bb:;
  /* 108f57bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f57be add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f57c1 push ecx */
  push32((uint32_t)(ECX));
  /* 108f57c2 push 0x1091b948 */
  push32((uint32_t)(0x1091b948u));
  /* 108f57c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f57c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f57cb push 0 */
  push32((uint32_t)(0x0u));
  /* 108f57cd push 0 */
  push32((uint32_t)(0x0u));
  /* 108f57cf call 0x108f3440 */
  push32(0x108f57d4u); f_108f3440();
  /* 108f57d4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f57d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f57da jne 0x108f57dd */
  if (!C.zf) goto L_108f57dd;
  /* 108f57dc int3  */
  x86_unimpl("int3 @ 0x108f57dc");
L_108f57dd:;
  /* 108f57dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f57df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f57e1 jne 0x108f57bb */
  if (!C.zf) goto L_108f57bb;
  /* 108f57e3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_108f57ea:;
  /* 108f57ea cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f57ee jne 0x108f5866 */
  if (!C.zf) goto L_108f5866;
  /* 108f57f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f57f3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f57f7 je 0x108f582c */
  if (C.zf) goto L_108f582c;
L_108f57f9:;
  /* 108f57f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f57fc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108f57ff push edx */
  push32((uint32_t)(EDX));
  /* 108f5800 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5803 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108f5806 push ecx */
  push32((uint32_t)(ECX));
  /* 108f5807 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f580a push edx */
  push32((uint32_t)(EDX));
  /* 108f580b push 0x1091b928 */
  push32((uint32_t)(0x1091b928u));
  /* 108f5810 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5812 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5814 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5816 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5818 call 0x108f3440 */
  push32(0x108f581du); f_108f3440();
  /* 108f581d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5820 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5823 jne 0x108f5826 */
  if (!C.zf) goto L_108f5826;
  /* 108f5825 int3  */
  x86_unimpl("int3 @ 0x108f5825");
L_108f5826:;
  /* 108f5826 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f5828 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f582a jne 0x108f57f9 */
  if (!C.zf) goto L_108f57f9;
L_108f582c:;
  /* 108f582c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f582f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 108f5832 push edx */
  push32((uint32_t)(EDX));
  /* 108f5833 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5836 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5839 push eax */
  push32((uint32_t)(EAX));
  /* 108f583a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f583d push ecx */
  push32((uint32_t)(ECX));
  /* 108f583e push 0x1091b8fc */
  push32((uint32_t)(0x1091b8fcu));
  /* 108f5843 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5845 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5847 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5849 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f584b call 0x108f3440 */
  push32(0x108f5850u); f_108f3440();
  /* 108f5850 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5853 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5856 jne 0x108f5859 */
  if (!C.zf) goto L_108f5859;
  /* 108f5858 int3  */
  x86_unimpl("int3 @ 0x108f5858");
L_108f5859:;
  /* 108f5859 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f585b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f585d jne 0x108f582c */
  if (!C.zf) goto L_108f582c;
  /* 108f585f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108f5866:;
  /* 108f5866 jmp 0x108f5673 */
  goto L_108f5673;
L_108f586b:;
  /* 108f586b push 9 */
  push32((uint32_t)(0x9u));
  /* 108f586d call 0x108f7e20 */
  push32(0x108f5872u); f_108f7e20();
  /* 108f5872 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108f5878:;
  /* 108f5878 pop edi */
  EDI = (pop32());
  /* 108f5879 pop esi */
  ESI = (pop32());
  /* 108f587a pop ebx */
  EBX = (pop32());
  /* 108f587b mov esp, ebp */
  ESP = (EBP);
  /* 108f587d pop ebp */
  EBP = (pop32());
  /* 108f587e ret  */
  ESPCHK(0x108f5520u, _esp0);
  ESP += 4; return;
}

/* FUN_10005890 @ 0x108f5890 (34 bytes, 13 insns) */
void f_108f5890(void) {
  FTRACE(0x108f5890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f5890 push ebp */
  push32((uint32_t)(EBP));
  /* 108f5891 mov ebp, esp */
  EBP = (ESP);
  /* 108f5893 push ecx */
  push32((uint32_t)(ECX));
  /* 108f5894 mov eax, dword ptr [0x1091ea84] */
  EAX = (r32((uint32_t)(0x1091ea84)));
  /* 108f5899 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f589c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f58a0 je 0x108f58ab */
  if (C.zf) goto L_108f58ab;
  /* 108f58a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f58a5 mov dword ptr [0x1091ea84], ecx */
  w32((uint32_t)(0x1091ea84), (ECX));
L_108f58ab:;
  /* 108f58ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f58ae mov esp, ebp */
  ESP = (EBP);
  /* 108f58b0 pop ebp */
  EBP = (pop32());
  /* 108f58b1 ret  */
  ESPCHK(0x108f5890u, _esp0);
  ESP += 4; return;
}

/* FUN_100058c0 @ 0x108f58c0 (103 bytes, 38 insns) */
void f_108f58c0(void) {
  FTRACE(0x108f58c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f58c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f58c1 mov ebp, esp */
  EBP = (ESP);
  /* 108f58c3 push ecx */
  push32((uint32_t)(ECX));
  /* 108f58c4 mov eax, dword ptr [0x1091ea84] */
  EAX = (r32((uint32_t)(0x1091ea84)));
  /* 108f58c9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 108f58cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f58ce jne 0x108f58d2 */
  if (!C.zf) goto L_108f58d2;
  /* 108f58d0 jmp 0x108f5923 */
  goto L_108f5923;
L_108f58d2:;
  /* 108f58d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f58d4 call 0x108f7d80 */
  push32(0x108f58d9u); f_108f7d80();
  /* 108f58d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f58dc mov ecx, dword ptr [0x10920608] */
  ECX = (r32((uint32_t)(0x10920608)));
  /* 108f58e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108f58e5 jmp 0x108f58ef */
  goto L_108f58ef;
L_108f58e7:;
  /* 108f58e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f58ea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108f58ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108f58ef:;
  /* 108f58ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f58f3 je 0x108f5919 */
  if (C.zf) goto L_108f5919;
  /* 108f58f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f58f8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 108f58fb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108f5901 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5904 jne 0x108f5917 */
  if (!C.zf) goto L_108f5917;
  /* 108f5906 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f5909 push eax */
  push32((uint32_t)(EAX));
  /* 108f590a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f590d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5910 push ecx */
  push32((uint32_t)(ECX));
  /* 108f5911 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x108f5914u);
  /* 108f5914 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f5917:;
  /* 108f5917 jmp 0x108f58e7 */
  goto L_108f58e7;
L_108f5919:;
  /* 108f5919 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f591b call 0x108f7e20 */
  push32(0x108f5920u); f_108f7e20();
  /* 108f5920 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f5923:;
  /* 108f5923 mov esp, ebp */
  ESP = (EBP);
  /* 108f5925 pop ebp */
  EBP = (pop32());
  /* 108f5926 ret  */
  ESPCHK(0x108f58c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x108f5930 (75 bytes, 28 insns) */
void f_108f5930(void) {
  FTRACE(0x108f5930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f5930 push ebp */
  push32((uint32_t)(EBP));
  /* 108f5931 mov ebp, esp */
  EBP = (ESP);
  /* 108f5933 push ecx */
  push32((uint32_t)(ECX));
  /* 108f5934 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5938 je 0x108f596d */
  if (C.zf) goto L_108f596d;
  /* 108f593a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f593d push eax */
  push32((uint32_t)(EAX));
  /* 108f593e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5941 push ecx */
  push32((uint32_t)(ECX));
  /* 108f5942 call dword ptr [0x109233c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233c4))), 0x108f5948u);
  /* 108f5948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f594a jne 0x108f596d */
  if (!C.zf) goto L_108f596d;
  /* 108f594c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5950 je 0x108f5964 */
  if (C.zf) goto L_108f5964;
  /* 108f5952 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f5955 push edx */
  push32((uint32_t)(EDX));
  /* 108f5956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5959 push eax */
  push32((uint32_t)(EAX));
  /* 108f595a call dword ptr [0x109233c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233c0))), 0x108f5960u);
  /* 108f5960 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f5962 jne 0x108f596d */
  if (!C.zf) goto L_108f596d;
L_108f5964:;
  /* 108f5964 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108f596b jmp 0x108f5974 */
  goto L_108f5974;
L_108f596d:;
  /* 108f596d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108f5974:;
  /* 108f5974 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5977 mov esp, ebp */
  ESP = (EBP);
  /* 108f5979 pop ebp */
  EBP = (pop32());
  /* 108f597a ret  */
  ESPCHK(0x108f5930u, _esp0);
  ESP += 4; return;
}

/* FUN_10005980 @ 0x108f5980 (134 bytes, 50 insns) */
void f_108f5980(void) {
  FTRACE(0x108f5980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f5980 push ebp */
  push32((uint32_t)(EBP));
  /* 108f5981 mov ebp, esp */
  EBP = (ESP);
  /* 108f5983 push ecx */
  push32((uint32_t)(ECX));
  /* 108f5984 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5988 jne 0x108f598e */
  if (!C.zf) goto L_108f598e;
  /* 108f598a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f598c jmp 0x108f5a02 */
  goto L_108f5a02;
L_108f598e:;
  /* 108f598e push 1 */
  push32((uint32_t)(0x1u));
  /* 108f5990 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 108f5992 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5995 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f5998 push eax */
  push32((uint32_t)(EAX));
  /* 108f5999 call 0x108f5930 */
  push32(0x108f599eu); f_108f5930();
  /* 108f599e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f59a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f59a3 jne 0x108f59a9 */
  if (!C.zf) goto L_108f59a9;
  /* 108f59a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f59a7 jmp 0x108f5a02 */
  goto L_108f5a02;
L_108f59a9:;
  /* 108f59a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f59ac sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f59af push ecx */
  push32((uint32_t)(ECX));
  /* 108f59b0 call 0x108f8680 */
  push32(0x108f59b5u); f_108f8680();
  /* 108f59b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f59b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f59bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f59bf je 0x108f59d6 */
  if (C.zf) goto L_108f59d6;
  /* 108f59c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f59c4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f59c7 push edx */
  push32((uint32_t)(EDX));
  /* 108f59c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f59cb push eax */
  push32((uint32_t)(EAX));
  /* 108f59cc call 0x108f86e0 */
  push32(0x108f59d1u); f_108f86e0();
  /* 108f59d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f59d4 jmp 0x108f5a02 */
  goto L_108f5a02;
L_108f59d6:;
  /* 108f59d6 mov ecx, dword ptr [0x109205bc] */
  ECX = (r32((uint32_t)(0x109205bc)));
  /* 108f59dc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 108f59e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f59e4 je 0x108f59ed */
  if (C.zf) goto L_108f59ed;
  /* 108f59e6 mov eax, 1 */
  EAX = (0x1u);
  /* 108f59eb jmp 0x108f5a02 */
  goto L_108f5a02;
L_108f59ed:;
  /* 108f59ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f59f0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f59f3 push edx */
  push32((uint32_t)(EDX));
  /* 108f59f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f59f6 mov eax, dword ptr [0x10921f6c] */
  EAX = (r32((uint32_t)(0x10921f6c)));
  /* 108f59fb push eax */
  push32((uint32_t)(EAX));
  /* 108f59fc call dword ptr [0x109233c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233c8))), 0x108f5a02u);
L_108f5a02:;
  /* 108f5a02 mov esp, ebp */
  ESP = (EBP);
  /* 108f5a04 pop ebp */
  EBP = (pop32());
  /* 108f5a05 ret  */
  ESPCHK(0x108f5980u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a10 @ 0x108f5a10 (227 bytes, 80 insns) */
void f_108f5a10(void) {
  FTRACE(0x108f5a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f5a10 push ebp */
  push32((uint32_t)(EBP));
  /* 108f5a11 mov ebp, esp */
  EBP = (ESP);
  /* 108f5a13 push ecx */
  push32((uint32_t)(ECX));
  /* 108f5a14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5a17 push eax */
  push32((uint32_t)(EAX));
  /* 108f5a18 call 0x108f5980 */
  push32(0x108f5a1du); f_108f5980();
  /* 108f5a1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5a20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f5a22 jne 0x108f5a2b */
  if (!C.zf) goto L_108f5a2b;
  /* 108f5a24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f5a26 jmp 0x108f5aef */
  goto L_108f5aef;
L_108f5a2b:;
  /* 108f5a2b push 9 */
  push32((uint32_t)(0x9u));
  /* 108f5a2d call 0x108f7d80 */
  push32(0x108f5a32u); f_108f7d80();
  /* 108f5a32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5a35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5a38 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f5a3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108f5a3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5a41 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108f5a44 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f5a49 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5a4c je 0x108f5a70 */
  if (C.zf) goto L_108f5a70;
  /* 108f5a4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5a51 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5a55 je 0x108f5a70 */
  if (C.zf) goto L_108f5a70;
  /* 108f5a57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5a5a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108f5a5d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f5a62 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5a65 je 0x108f5a70 */
  if (C.zf) goto L_108f5a70;
  /* 108f5a67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5a6a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5a6e jne 0x108f5ae3 */
  if (!C.zf) goto L_108f5ae3;
L_108f5a70:;
  /* 108f5a70 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f5a72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f5a75 push edx */
  push32((uint32_t)(EDX));
  /* 108f5a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5a79 push eax */
  push32((uint32_t)(EAX));
  /* 108f5a7a call 0x108f5930 */
  push32(0x108f5a7fu); f_108f5930();
  /* 108f5a7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5a82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f5a84 je 0x108f5ae3 */
  if (C.zf) goto L_108f5ae3;
  /* 108f5a86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5a89 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 108f5a8c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5a8f jne 0x108f5ae3 */
  if (!C.zf) goto L_108f5ae3;
  /* 108f5a91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5a94 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 108f5a97 cmp ecx, dword ptr [0x1091ea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1091ea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5a9d jg 0x108f5ae3 */
  if ((!C.zf&&C.sf==C.of)) goto L_108f5ae3;
  /* 108f5a9f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5aa3 je 0x108f5ab0 */
  if (C.zf) goto L_108f5ab0;
  /* 108f5aa5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f5aa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5aab mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 108f5aae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108f5ab0:;
  /* 108f5ab0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5ab4 je 0x108f5ac1 */
  if (C.zf) goto L_108f5ac1;
  /* 108f5ab6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f5ab9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5abc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108f5abf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108f5ac1:;
  /* 108f5ac1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5ac5 je 0x108f5ad2 */
  if (C.zf) goto L_108f5ad2;
  /* 108f5ac7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f5aca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5acd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108f5ad0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108f5ad2:;
  /* 108f5ad2 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f5ad4 call 0x108f7e20 */
  push32(0x108f5ad9u); f_108f7e20();
  /* 108f5ad9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5adc mov eax, 1 */
  EAX = (0x1u);
  /* 108f5ae1 jmp 0x108f5aef */
  goto L_108f5aef;
L_108f5ae3:;
  /* 108f5ae3 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f5ae5 call 0x108f7e20 */
  push32(0x108f5aeau); f_108f7e20();
  /* 108f5aea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5aed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108f5aef:;
  /* 108f5aef mov esp, ebp */
  ESP = (EBP);
  /* 108f5af1 pop ebp */
  EBP = (pop32());
  /* 108f5af2 ret  */
  ESPCHK(0x108f5a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b00 @ 0x108f5b00 (28 bytes, 11 insns) */
void f_108f5b00(void) {
  FTRACE(0x108f5b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f5b00 push ebp */
  push32((uint32_t)(EBP));
  /* 108f5b01 mov ebp, esp */
  EBP = (ESP);
  /* 108f5b03 push ecx */
  push32((uint32_t)(ECX));
  /* 108f5b04 mov eax, dword ptr [0x10921f78] */
  EAX = (r32((uint32_t)(0x10921f78)));
  /* 108f5b09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f5b0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5b0f mov dword ptr [0x10921f78], ecx */
  w32((uint32_t)(0x10921f78), (ECX));
  /* 108f5b15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5b18 mov esp, ebp */
  ESP = (EBP);
  /* 108f5b1a pop ebp */
  EBP = (pop32());
  /* 108f5b1b ret  */
  ESPCHK(0x108f5b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b20 @ 0x108f5b20 (362 bytes, 116 insns) */
void f_108f5b20(void) {
  FTRACE(0x108f5b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f5b20 push ebp */
  push32((uint32_t)(EBP));
  /* 108f5b21 mov ebp, esp */
  EBP = (ESP);
  /* 108f5b23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f5b26 push ebx */
  push32((uint32_t)(EBX));
  /* 108f5b27 push esi */
  push32((uint32_t)(ESI));
  /* 108f5b28 push edi */
  push32((uint32_t)(EDI));
  /* 108f5b29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5b2d jne 0x108f5b5a */
  if (!C.zf) goto L_108f5b5a;
L_108f5b2f:;
  /* 108f5b2f push 0x1091ba5c */
  push32((uint32_t)(0x1091ba5cu));
  /* 108f5b34 push 0x1091b574 */
  push32((uint32_t)(0x1091b574u));
  /* 108f5b39 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5b3b push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5b3d push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5b41 call 0x108f3440 */
  push32(0x108f5b46u); f_108f3440();
  /* 108f5b46 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5b49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5b4c jne 0x108f5b4f */
  if (!C.zf) goto L_108f5b4f;
  /* 108f5b4e int3  */
  x86_unimpl("int3 @ 0x108f5b4e");
L_108f5b4f:;
  /* 108f5b4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f5b51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f5b53 jne 0x108f5b2f */
  if (!C.zf) goto L_108f5b2f;
  /* 108f5b55 jmp 0x108f5c83 */
  goto L_108f5c83;
L_108f5b5a:;
  /* 108f5b5a push 9 */
  push32((uint32_t)(0x9u));
  /* 108f5b5c call 0x108f7d80 */
  push32(0x108f5b61u); f_108f7d80();
  /* 108f5b61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5b64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5b67 mov edx, dword ptr [0x10920608] */
  EDX = (r32((uint32_t)(0x10920608)));
  /* 108f5b6d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 108f5b6f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108f5b76 jmp 0x108f5b81 */
  goto L_108f5b81;
L_108f5b78:;
  /* 108f5b78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5b7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5b7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108f5b81:;
  /* 108f5b81 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5b85 jge 0x108f5ba5 */
  if ((C.sf==C.of)) goto L_108f5ba5;
  /* 108f5b87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5b8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5b8d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 108f5b95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5b98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5b9b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 108f5ba3 jmp 0x108f5b78 */
  goto L_108f5b78;
L_108f5ba5:;
  /* 108f5ba5 mov edx, dword ptr [0x10920608] */
  EDX = (r32((uint32_t)(0x10920608)));
  /* 108f5bab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108f5bae jmp 0x108f5bb8 */
  goto L_108f5bb8;
L_108f5bb0:;
  /* 108f5bb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5bb3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f5bb5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_108f5bb8:;
  /* 108f5bb8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5bbc je 0x108f5c61 */
  if (C.zf) goto L_108f5c61;
  /* 108f5bc2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5bc5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108f5bc8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f5bcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f5bcf jl 0x108f5c37 */
  if ((C.sf!=C.of)) goto L_108f5c37;
  /* 108f5bd1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5bd4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 108f5bd7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108f5bdd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5be0 jge 0x108f5c37 */
  if ((C.sf==C.of)) goto L_108f5c37;
  /* 108f5be2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5be5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108f5be8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f5bee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5bf1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 108f5bf5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5bf8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5bfb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 108f5bfe and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108f5c04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5c07 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 108f5c0b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5c0e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108f5c11 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f5c16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5c19 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 108f5c1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5c20 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5c23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5c26 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 108f5c29 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f5c2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5c31 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 108f5c35 jmp 0x108f5c5c */
  goto L_108f5c5c;
L_108f5c37:;
  /* 108f5c37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5c3a push edx */
  push32((uint32_t)(EDX));
  /* 108f5c3b push 0x1091ba38 */
  push32((uint32_t)(0x1091ba38u));
  /* 108f5c40 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5c44 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5c46 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5c48 call 0x108f3440 */
  push32(0x108f5c4du); f_108f3440();
  /* 108f5c4d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5c50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5c53 jne 0x108f5c56 */
  if (!C.zf) goto L_108f5c56;
  /* 108f5c55 int3  */
  x86_unimpl("int3 @ 0x108f5c55");
L_108f5c56:;
  /* 108f5c56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f5c58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f5c5a jne 0x108f5c37 */
  if (!C.zf) goto L_108f5c37;
L_108f5c5c:;
  /* 108f5c5c jmp 0x108f5bb0 */
  goto L_108f5bb0;
L_108f5c61:;
  /* 108f5c61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5c64 mov edx, dword ptr [0x10920610] */
  EDX = (r32((uint32_t)(0x10920610)));
  /* 108f5c6a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 108f5c6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5c70 mov ecx, dword ptr [0x10920604] */
  ECX = (r32((uint32_t)(0x10920604)));
  /* 108f5c76 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 108f5c79 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f5c7b call 0x108f7e20 */
  push32(0x108f5c80u); f_108f7e20();
  /* 108f5c80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f5c83:;
  /* 108f5c83 pop edi */
  EDI = (pop32());
  /* 108f5c84 pop esi */
  ESI = (pop32());
  /* 108f5c85 pop ebx */
  EBX = (pop32());
  /* 108f5c86 mov esp, ebp */
  ESP = (EBP);
  /* 108f5c88 pop ebp */
  EBP = (pop32());
  /* 108f5c89 ret  */
  ESPCHK(0x108f5b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c90 @ 0x108f5c90 (291 bytes, 95 insns) */
void f_108f5c90(void) {
  FTRACE(0x108f5c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f5c90 push ebp */
  push32((uint32_t)(EBP));
  /* 108f5c91 mov ebp, esp */
  EBP = (ESP);
  /* 108f5c93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f5c96 push ebx */
  push32((uint32_t)(EBX));
  /* 108f5c97 push esi */
  push32((uint32_t)(ESI));
  /* 108f5c98 push edi */
  push32((uint32_t)(EDI));
  /* 108f5c99 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108f5ca0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5ca4 je 0x108f5cb2 */
  if (C.zf) goto L_108f5cb2;
  /* 108f5ca6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5caa je 0x108f5cb2 */
  if (C.zf) goto L_108f5cb2;
  /* 108f5cac cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5cb0 jne 0x108f5ce0 */
  if (!C.zf) goto L_108f5ce0;
L_108f5cb2:;
  /* 108f5cb2 push 0x1091ba84 */
  push32((uint32_t)(0x1091ba84u));
  /* 108f5cb7 push 0x1091b574 */
  push32((uint32_t)(0x1091b574u));
  /* 108f5cbc push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5cbe push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5cc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5cc4 call 0x108f3440 */
  push32(0x108f5cc9u); f_108f3440();
  /* 108f5cc9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5ccc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5ccf jne 0x108f5cd2 */
  if (!C.zf) goto L_108f5cd2;
  /* 108f5cd1 int3  */
  x86_unimpl("int3 @ 0x108f5cd1");
L_108f5cd2:;
  /* 108f5cd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f5cd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f5cd6 jne 0x108f5cb2 */
  if (!C.zf) goto L_108f5cb2;
  /* 108f5cd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f5cdb jmp 0x108f5dac */
  goto L_108f5dac;
L_108f5ce0:;
  /* 108f5ce0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108f5ce7 jmp 0x108f5cf2 */
  goto L_108f5cf2;
L_108f5ce9:;
  /* 108f5ce9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5cec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5cef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108f5cf2:;
  /* 108f5cf2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5cf6 jge 0x108f5d7c */
  if ((C.sf==C.of)) goto L_108f5d7c;
  /* 108f5cfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5cff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f5d02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5d05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 108f5d08 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 108f5d0c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f5d10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5d13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5d16 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 108f5d1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5d1d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f5d20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5d23 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 108f5d26 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 108f5d2a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f5d2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5d31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5d34 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 108f5d38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5d3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5d3e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5d43 jne 0x108f5d52 */
  if (!C.zf) goto L_108f5d52;
  /* 108f5d45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5d48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5d4b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5d50 je 0x108f5d77 */
  if (C.zf) goto L_108f5d77;
L_108f5d52:;
  /* 108f5d52 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5d56 je 0x108f5d77 */
  if (C.zf) goto L_108f5d77;
  /* 108f5d58 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5d5c jne 0x108f5d70 */
  if (!C.zf) goto L_108f5d70;
  /* 108f5d5e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5d62 jne 0x108f5d77 */
  if (!C.zf) goto L_108f5d77;
  /* 108f5d64 mov eax, dword ptr [0x1091ea84] */
  EAX = (r32((uint32_t)(0x1091ea84)));
  /* 108f5d69 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 108f5d6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f5d6e je 0x108f5d77 */
  if (C.zf) goto L_108f5d77;
L_108f5d70:;
  /* 108f5d70 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_108f5d77:;
  /* 108f5d77 jmp 0x108f5ce9 */
  goto L_108f5ce9;
L_108f5d7c:;
  /* 108f5d7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f5d7f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f5d82 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 108f5d85 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f5d88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5d8b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 108f5d8e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f5d91 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f5d94 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 108f5d97 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f5d9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5d9d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 108f5da0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5da3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108f5da9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_108f5dac:;
  /* 108f5dac pop edi */
  EDI = (pop32());
  /* 108f5dad pop esi */
  ESI = (pop32());
  /* 108f5dae pop ebx */
  EBX = (pop32());
  /* 108f5daf mov esp, ebp */
  ESP = (EBP);
  /* 108f5db1 pop ebp */
  EBP = (pop32());
  /* 108f5db2 ret  */
  ESPCHK(0x108f5c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dc0 @ 0x108f5dc0 (697 bytes, 253 insns) */
void f_108f5dc0(void) {
  FTRACE(0x108f5dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f5dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f5dc1 mov ebp, esp */
  EBP = (ESP);
  /* 108f5dc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f5dc6 push ebx */
  push32((uint32_t)(EBX));
  /* 108f5dc7 push esi */
  push32((uint32_t)(ESI));
  /* 108f5dc8 push edi */
  push32((uint32_t)(EDI));
  /* 108f5dc9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108f5dd0 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f5dd2 call 0x108f7d80 */
  push32(0x108f5dd7u); f_108f7d80();
  /* 108f5dd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f5dda:;
  /* 108f5dda push 0x1091bb7c */
  push32((uint32_t)(0x1091bb7cu));
  /* 108f5ddf push 0x1091b574 */
  push32((uint32_t)(0x1091b574u));
  /* 108f5de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5de6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5dea push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5dec call 0x108f3440 */
  push32(0x108f5df1u); f_108f3440();
  /* 108f5df1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5df4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5df7 jne 0x108f5dfa */
  if (!C.zf) goto L_108f5dfa;
  /* 108f5df9 int3  */
  x86_unimpl("int3 @ 0x108f5df9");
L_108f5dfa:;
  /* 108f5dfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f5dfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f5dfe jne 0x108f5dda */
  if (!C.zf) goto L_108f5dda;
  /* 108f5e00 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5e04 je 0x108f5e0e */
  if (C.zf) goto L_108f5e0e;
  /* 108f5e06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f5e09 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f5e0b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108f5e0e:;
  /* 108f5e0e mov eax, dword ptr [0x10920608] */
  EAX = (r32((uint32_t)(0x10920608)));
  /* 108f5e13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f5e16 jmp 0x108f5e20 */
  goto L_108f5e20;
L_108f5e18:;
  /* 108f5e18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5e1b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f5e1d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108f5e20:;
  /* 108f5e20 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5e24 je 0x108f6042 */
  if (C.zf) goto L_108f6042;
  /* 108f5e2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5e2d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5e30 je 0x108f6042 */
  if (C.zf) goto L_108f6042;
  /* 108f5e36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5e39 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 108f5e3c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108f5e42 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5e45 je 0x108f5e74 */
  if (C.zf) goto L_108f5e74;
  /* 108f5e47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5e4a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108f5e4d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f5e53 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f5e55 je 0x108f5e74 */
  if (C.zf) goto L_108f5e74;
  /* 108f5e57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5e5a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108f5e5d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f5e62 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5e65 jne 0x108f5e79 */
  if (!C.zf) goto L_108f5e79;
  /* 108f5e67 mov ecx, dword ptr [0x1091ea84] */
  ECX = (r32((uint32_t)(0x1091ea84)));
  /* 108f5e6d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 108f5e70 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f5e72 jne 0x108f5e79 */
  if (!C.zf) goto L_108f5e79;
L_108f5e74:;
  /* 108f5e74 jmp 0x108f603d */
  goto L_108f603d;
L_108f5e79:;
  /* 108f5e79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5e7c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5e80 je 0x108f5ef2 */
  if (C.zf) goto L_108f5ef2;
  /* 108f5e82 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5e84 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f5e86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5e89 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108f5e8c push ecx */
  push32((uint32_t)(ECX));
  /* 108f5e8d call 0x108f5930 */
  push32(0x108f5e92u); f_108f5930();
  /* 108f5e92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5e95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f5e97 jne 0x108f5ec3 */
  if (!C.zf) goto L_108f5ec3;
L_108f5e99:;
  /* 108f5e99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5e9c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108f5e9f push eax */
  push32((uint32_t)(EAX));
  /* 108f5ea0 push 0x1091bb68 */
  push32((uint32_t)(0x1091bb68u));
  /* 108f5ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5ea9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5eab push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5ead call 0x108f3440 */
  push32(0x108f5eb2u); f_108f3440();
  /* 108f5eb2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5eb5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5eb8 jne 0x108f5ebb */
  if (!C.zf) goto L_108f5ebb;
  /* 108f5eba int3  */
  x86_unimpl("int3 @ 0x108f5eba");
L_108f5ebb:;
  /* 108f5ebb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f5ebd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f5ebf jne 0x108f5e99 */
  if (!C.zf) goto L_108f5e99;
  /* 108f5ec1 jmp 0x108f5ef2 */
  goto L_108f5ef2;
L_108f5ec3:;
  /* 108f5ec3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5ec6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108f5ec9 push eax */
  push32((uint32_t)(EAX));
  /* 108f5eca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5ecd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108f5ed0 push edx */
  push32((uint32_t)(EDX));
  /* 108f5ed1 push 0x1091bb5c */
  push32((uint32_t)(0x1091bb5cu));
  /* 108f5ed6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5ed8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5eda push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5edc push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5ede call 0x108f3440 */
  push32(0x108f5ee3u); f_108f3440();
  /* 108f5ee3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5ee6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5ee9 jne 0x108f5eec */
  if (!C.zf) goto L_108f5eec;
  /* 108f5eeb int3  */
  x86_unimpl("int3 @ 0x108f5eeb");
L_108f5eec:;
  /* 108f5eec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f5eee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f5ef0 jne 0x108f5ec3 */
  if (!C.zf) goto L_108f5ec3;
L_108f5ef2:;
  /* 108f5ef2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5ef5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 108f5ef8 push edx */
  push32((uint32_t)(EDX));
  /* 108f5ef9 push 0x1091bb54 */
  push32((uint32_t)(0x1091bb54u));
  /* 108f5efe push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5f02 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5f04 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5f06 call 0x108f3440 */
  push32(0x108f5f0bu); f_108f3440();
  /* 108f5f0b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5f0e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5f11 jne 0x108f5f14 */
  if (!C.zf) goto L_108f5f14;
  /* 108f5f13 int3  */
  x86_unimpl("int3 @ 0x108f5f13");
L_108f5f14:;
  /* 108f5f14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f5f16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f5f18 jne 0x108f5ef2 */
  if (!C.zf) goto L_108f5ef2;
  /* 108f5f1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5f1d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 108f5f20 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108f5f26 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5f29 jne 0x108f5f9c */
  if (!C.zf) goto L_108f5f9c;
L_108f5f2b:;
  /* 108f5f2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5f2e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108f5f31 push ecx */
  push32((uint32_t)(ECX));
  /* 108f5f32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5f35 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108f5f38 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 108f5f3b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f5f40 push eax */
  push32((uint32_t)(EAX));
  /* 108f5f41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5f44 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5f47 push ecx */
  push32((uint32_t)(ECX));
  /* 108f5f48 push 0x1091bb20 */
  push32((uint32_t)(0x1091bb20u));
  /* 108f5f4d push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5f51 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5f53 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5f55 call 0x108f3440 */
  push32(0x108f5f5au); f_108f3440();
  /* 108f5f5a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5f5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5f60 jne 0x108f5f63 */
  if (!C.zf) goto L_108f5f63;
  /* 108f5f62 int3  */
  x86_unimpl("int3 @ 0x108f5f62");
L_108f5f63:;
  /* 108f5f63 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f5f65 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f5f67 jne 0x108f5f2b */
  if (!C.zf) goto L_108f5f2b;
  /* 108f5f69 cmp dword ptr [0x10921f78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10921f78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5f70 je 0x108f5f8b */
  if (C.zf) goto L_108f5f8b;
  /* 108f5f72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5f75 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108f5f78 push ecx */
  push32((uint32_t)(ECX));
  /* 108f5f79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5f7c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5f7f push edx */
  push32((uint32_t)(EDX));
  /* 108f5f80 call dword ptr [0x10921f78] */
  call_ind((uint32_t)(r32((uint32_t)(0x10921f78))), 0x108f5f86u);
  /* 108f5f86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5f89 jmp 0x108f5f97 */
  goto L_108f5f97;
L_108f5f8b:;
  /* 108f5f8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5f8e push eax */
  push32((uint32_t)(EAX));
  /* 108f5f8f call 0x108f6080 */
  push32(0x108f5f94u); f_108f6080();
  /* 108f5f94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f5f97:;
  /* 108f5f97 jmp 0x108f603d */
  goto L_108f603d;
L_108f5f9c:;
  /* 108f5f9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5f9f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5fa3 jne 0x108f5fe2 */
  if (!C.zf) goto L_108f5fe2;
L_108f5fa5:;
  /* 108f5fa5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5fa8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108f5fab push eax */
  push32((uint32_t)(EAX));
  /* 108f5fac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5faf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5fb2 push ecx */
  push32((uint32_t)(ECX));
  /* 108f5fb3 push 0x1091baf8 */
  push32((uint32_t)(0x1091baf8u));
  /* 108f5fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5fba push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5fbc push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5fbe push 0 */
  push32((uint32_t)(0x0u));
  /* 108f5fc0 call 0x108f3440 */
  push32(0x108f5fc5u); f_108f3440();
  /* 108f5fc5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5fc8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5fcb jne 0x108f5fce */
  if (!C.zf) goto L_108f5fce;
  /* 108f5fcd int3  */
  x86_unimpl("int3 @ 0x108f5fcd");
L_108f5fce:;
  /* 108f5fce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f5fd0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f5fd2 jne 0x108f5fa5 */
  if (!C.zf) goto L_108f5fa5;
  /* 108f5fd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5fd7 push eax */
  push32((uint32_t)(EAX));
  /* 108f5fd8 call 0x108f6080 */
  push32(0x108f5fddu); f_108f6080();
  /* 108f5fdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f5fe0 jmp 0x108f603d */
  goto L_108f603d;
L_108f5fe2:;
  /* 108f5fe2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5fe5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 108f5fe8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108f5fee cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f5ff1 jne 0x108f603d */
  if (!C.zf) goto L_108f603d;
L_108f5ff3:;
  /* 108f5ff3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5ff6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108f5ff9 push ecx */
  push32((uint32_t)(ECX));
  /* 108f5ffa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f5ffd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108f6000 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 108f6003 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f6008 push eax */
  push32((uint32_t)(EAX));
  /* 108f6009 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f600c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f600f push ecx */
  push32((uint32_t)(ECX));
  /* 108f6010 push 0x1091bac4 */
  push32((uint32_t)(0x1091bac4u));
  /* 108f6015 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6017 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6019 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f601b push 0 */
  push32((uint32_t)(0x0u));
  /* 108f601d call 0x108f3440 */
  push32(0x108f6022u); f_108f3440();
  /* 108f6022 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6025 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6028 jne 0x108f602b */
  if (!C.zf) goto L_108f602b;
  /* 108f602a int3  */
  x86_unimpl("int3 @ 0x108f602a");
L_108f602b:;
  /* 108f602b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f602d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f602f jne 0x108f5ff3 */
  if (!C.zf) goto L_108f5ff3;
  /* 108f6031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6034 push eax */
  push32((uint32_t)(EAX));
  /* 108f6035 call 0x108f6080 */
  push32(0x108f603au); f_108f6080();
  /* 108f603a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f603d:;
  /* 108f603d jmp 0x108f5e18 */
  goto L_108f5e18;
L_108f6042:;
  /* 108f6042 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f6044 call 0x108f7e20 */
  push32(0x108f6049u); f_108f7e20();
  /* 108f6049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f604c:;
  /* 108f604c push 0x1091baac */
  push32((uint32_t)(0x1091baacu));
  /* 108f6051 push 0x1091b574 */
  push32((uint32_t)(0x1091b574u));
  /* 108f6056 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6058 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f605a push 0 */
  push32((uint32_t)(0x0u));
  /* 108f605c push 0 */
  push32((uint32_t)(0x0u));
  /* 108f605e call 0x108f3440 */
  push32(0x108f6063u); f_108f3440();
  /* 108f6063 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6066 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6069 jne 0x108f606c */
  if (!C.zf) goto L_108f606c;
  /* 108f606b int3  */
  x86_unimpl("int3 @ 0x108f606b");
L_108f606c:;
  /* 108f606c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f606e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f6070 jne 0x108f604c */
  if (!C.zf) goto L_108f604c;
  /* 108f6072 pop edi */
  EDI = (pop32());
  /* 108f6073 pop esi */
  ESI = (pop32());
  /* 108f6074 pop ebx */
  EBX = (pop32());
  /* 108f6075 mov esp, ebp */
  ESP = (EBP);
  /* 108f6077 pop ebp */
  EBP = (pop32());
  /* 108f6078 ret  */
  ESPCHK(0x108f5dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006080 @ 0x108f6080 (276 bytes, 89 insns) */
void f_108f6080(void) {
  FTRACE(0x108f6080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f6080 push ebp */
  push32((uint32_t)(EBP));
  /* 108f6081 mov ebp, esp */
  EBP = (ESP);
  /* 108f6083 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f6086 push ebx */
  push32((uint32_t)(EBX));
  /* 108f6087 push esi */
  push32((uint32_t)(ESI));
  /* 108f6088 push edi */
  push32((uint32_t)(EDI));
  /* 108f6089 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 108f6090 jmp 0x108f609b */
  goto L_108f609b;
L_108f6092:;
  /* 108f6092 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 108f6095 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6098 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_108f609b:;
  /* 108f609b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f609e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f60a2 jge 0x108f60af */
  if ((C.sf==C.of)) goto L_108f60af;
  /* 108f60a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f60a7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108f60aa mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 108f60ad jmp 0x108f60b6 */
  goto L_108f60b6;
L_108f60af:;
  /* 108f60af mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_108f60b6:;
  /* 108f60b6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 108f60b9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f60bc jge 0x108f615c */
  if ((C.sf==C.of)) goto L_108f615c;
  /* 108f60c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f60c5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f60c8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 108f60cb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 108f60ce cmp dword ptr [0x1091eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1091eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f60d5 jle 0x108f60f3 */
  if ((C.zf||C.sf!=C.of)) goto L_108f60f3;
  /* 108f60d7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 108f60dc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f60df and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f60e5 push ecx */
  push32((uint32_t)(ECX));
  /* 108f60e6 call 0x108fa390 */
  push32(0x108f60ebu); f_108fa390();
  /* 108f60eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f60ee mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 108f60f1 jmp 0x108f6110 */
  goto L_108f6110;
L_108f60f3:;
  /* 108f60f3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f60f6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108f60fc mov eax, dword ptr [0x1091ec98] */
  EAX = (r32((uint32_t)(0x1091ec98)));
  /* 108f6101 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f6103 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 108f6107 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 108f610d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_108f6110:;
  /* 108f6110 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6114 je 0x108f6124 */
  if (C.zf) goto L_108f6124;
  /* 108f6116 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f6119 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108f611f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 108f6122 jmp 0x108f612b */
  goto L_108f612b;
L_108f6124:;
  /* 108f6124 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_108f612b:;
  /* 108f612b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 108f612e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 108f6131 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 108f6135 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108f6138 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108f613e push edx */
  push32((uint32_t)(EDX));
  /* 108f613f push 0x1091bba0 */
  push32((uint32_t)(0x1091bba0u));
  /* 108f6144 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 108f6147 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f614a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 108f614e push ecx */
  push32((uint32_t)(ECX));
  /* 108f614f call 0x108fa290 */
  push32(0x108f6154u); f_108fa290();
  /* 108f6154 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6157 jmp 0x108f6092 */
  goto L_108f6092;
L_108f615c:;
  /* 108f615c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 108f615f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_108f6164:;
  /* 108f6164 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 108f6167 push eax */
  push32((uint32_t)(EAX));
  /* 108f6168 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 108f616b push ecx */
  push32((uint32_t)(ECX));
  /* 108f616c push 0x1091bb90 */
  push32((uint32_t)(0x1091bb90u));
  /* 108f6171 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6173 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6175 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6177 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6179 call 0x108f3440 */
  push32(0x108f617eu); f_108f3440();
  /* 108f617e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6181 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6184 jne 0x108f6187 */
  if (!C.zf) goto L_108f6187;
  /* 108f6186 int3  */
  x86_unimpl("int3 @ 0x108f6186");
L_108f6187:;
  /* 108f6187 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f6189 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f618b jne 0x108f6164 */
  if (!C.zf) goto L_108f6164;
  /* 108f618d pop edi */
  EDI = (pop32());
  /* 108f618e pop esi */
  ESI = (pop32());
  /* 108f618f pop ebx */
  EBX = (pop32());
  /* 108f6190 mov esp, ebp */
  ESP = (EBP);
  /* 108f6192 pop ebp */
  EBP = (pop32());
  /* 108f6193 ret  */
  ESPCHK(0x108f6080u, _esp0);
  ESP += 4; return;
}

/* FUN_100061a0 @ 0x108f61a0 (116 bytes, 46 insns) */
void f_108f61a0(void) {
  FTRACE(0x108f61a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f61a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f61a1 mov ebp, esp */
  EBP = (ESP);
  /* 108f61a3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f61a6 push ebx */
  push32((uint32_t)(EBX));
  /* 108f61a7 push esi */
  push32((uint32_t)(ESI));
  /* 108f61a8 push edi */
  push32((uint32_t)(EDI));
  /* 108f61a9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 108f61ac push eax */
  push32((uint32_t)(EAX));
  /* 108f61ad call 0x108f5b20 */
  push32(0x108f61b2u); f_108f5b20();
  /* 108f61b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f61b5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f61b9 jne 0x108f61d4 */
  if (!C.zf) goto L_108f61d4;
  /* 108f61bb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f61bf jne 0x108f61d4 */
  if (!C.zf) goto L_108f61d4;
  /* 108f61c1 mov ecx, dword ptr [0x1091ea84] */
  ECX = (r32((uint32_t)(0x1091ea84)));
  /* 108f61c7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 108f61ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f61cc je 0x108f620b */
  if (C.zf) goto L_108f620b;
  /* 108f61ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f61d2 je 0x108f620b */
  if (C.zf) goto L_108f620b;
L_108f61d4:;
  /* 108f61d4 push 0x1091bba8 */
  push32((uint32_t)(0x1091bba8u));
  /* 108f61d9 push 0x1091b574 */
  push32((uint32_t)(0x1091b574u));
  /* 108f61de push 0 */
  push32((uint32_t)(0x0u));
  /* 108f61e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f61e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f61e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f61e6 call 0x108f3440 */
  push32(0x108f61ebu); f_108f3440();
  /* 108f61eb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f61ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f61f1 jne 0x108f61f4 */
  if (!C.zf) goto L_108f61f4;
  /* 108f61f3 int3  */
  x86_unimpl("int3 @ 0x108f61f3");
L_108f61f4:;
  /* 108f61f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f61f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f61f8 jne 0x108f61d4 */
  if (!C.zf) goto L_108f61d4;
  /* 108f61fa push 0 */
  push32((uint32_t)(0x0u));
  /* 108f61fc call 0x108f5dc0 */
  push32(0x108f6201u); f_108f5dc0();
  /* 108f6201 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6204 mov eax, 1 */
  EAX = (0x1u);
  /* 108f6209 jmp 0x108f620d */
  goto L_108f620d;
L_108f620b:;
  /* 108f620b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108f620d:;
  /* 108f620d pop edi */
  EDI = (pop32());
  /* 108f620e pop esi */
  ESI = (pop32());
  /* 108f620f pop ebx */
  EBX = (pop32());
  /* 108f6210 mov esp, ebp */
  ESP = (EBP);
  /* 108f6212 pop ebp */
  EBP = (pop32());
  /* 108f6213 ret  */
  ESPCHK(0x108f61a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006220 @ 0x108f6220 (197 bytes, 79 insns) */
void f_108f6220(void) {
  FTRACE(0x108f6220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f6220 push ebp */
  push32((uint32_t)(EBP));
  /* 108f6221 mov ebp, esp */
  EBP = (ESP);
  /* 108f6223 push ecx */
  push32((uint32_t)(ECX));
  /* 108f6224 push ebx */
  push32((uint32_t)(EBX));
  /* 108f6225 push esi */
  push32((uint32_t)(ESI));
  /* 108f6226 push edi */
  push32((uint32_t)(EDI));
  /* 108f6227 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f622b jne 0x108f6232 */
  if (!C.zf) goto L_108f6232;
  /* 108f622d jmp 0x108f62de */
  goto L_108f62de;
L_108f6232:;
  /* 108f6232 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108f6239 jmp 0x108f6244 */
  goto L_108f6244;
L_108f623b:;
  /* 108f623b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f623e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6241 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108f6244:;
  /* 108f6244 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6248 jge 0x108f628e */
  if ((C.sf==C.of)) goto L_108f628e;
L_108f624a:;
  /* 108f624a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f624d mov edx, dword ptr [ecx*4 + 0x1091ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1091ea94)));
  /* 108f6254 push edx */
  push32((uint32_t)(EDX));
  /* 108f6255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6258 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f625b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 108f625f push edx */
  push32((uint32_t)(EDX));
  /* 108f6260 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6263 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f6266 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 108f626a push edx */
  push32((uint32_t)(EDX));
  /* 108f626b push 0x1091bc04 */
  push32((uint32_t)(0x1091bc04u));
  /* 108f6270 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6272 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6274 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6276 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6278 call 0x108f3440 */
  push32(0x108f627du); f_108f3440();
  /* 108f627d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6280 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6283 jne 0x108f6286 */
  if (!C.zf) goto L_108f6286;
  /* 108f6285 int3  */
  x86_unimpl("int3 @ 0x108f6285");
L_108f6286:;
  /* 108f6286 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f6288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f628a jne 0x108f624a */
  if (!C.zf) goto L_108f624a;
  /* 108f628c jmp 0x108f623b */
  goto L_108f623b;
L_108f628e:;
  /* 108f628e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f6291 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 108f6294 push edx */
  push32((uint32_t)(EDX));
  /* 108f6295 push 0x1091bbe0 */
  push32((uint32_t)(0x1091bbe0u));
  /* 108f629a push 0 */
  push32((uint32_t)(0x0u));
  /* 108f629c push 0 */
  push32((uint32_t)(0x0u));
  /* 108f629e push 0 */
  push32((uint32_t)(0x0u));
  /* 108f62a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f62a2 call 0x108f3440 */
  push32(0x108f62a7u); f_108f3440();
  /* 108f62a7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f62aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f62ad jne 0x108f62b0 */
  if (!C.zf) goto L_108f62b0;
  /* 108f62af int3  */
  x86_unimpl("int3 @ 0x108f62af");
L_108f62b0:;
  /* 108f62b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f62b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f62b4 jne 0x108f628e */
  if (!C.zf) goto L_108f628e;
L_108f62b6:;
  /* 108f62b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f62b9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 108f62bc push edx */
  push32((uint32_t)(EDX));
  /* 108f62bd push 0x1091bbc0 */
  push32((uint32_t)(0x1091bbc0u));
  /* 108f62c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f62c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f62c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f62c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f62ca call 0x108f3440 */
  push32(0x108f62cfu); f_108f3440();
  /* 108f62cf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f62d2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f62d5 jne 0x108f62d8 */
  if (!C.zf) goto L_108f62d8;
  /* 108f62d7 int3  */
  x86_unimpl("int3 @ 0x108f62d7");
L_108f62d8:;
  /* 108f62d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f62da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f62dc jne 0x108f62b6 */
  if (!C.zf) goto L_108f62b6;
L_108f62de:;
  /* 108f62de pop edi */
  EDI = (pop32());
  /* 108f62df pop esi */
  ESI = (pop32());
  /* 108f62e0 pop ebx */
  EBX = (pop32());
  /* 108f62e1 mov esp, ebp */
  ESP = (EBP);
  /* 108f62e3 pop ebp */
  EBP = (pop32());
  /* 108f62e4 ret  */
  ESPCHK(0x108f6220u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f0 @ 0x108f62f0 (329 bytes, 102 insns) */
void f_108f62f0(void) {
  FTRACE(0x108f62f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f62f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f62f1 mov ebp, esp */
  EBP = (ESP);
  /* 108f62f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f62f6 cmp dword ptr [0x109220f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109220f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f62fd jne 0x108f6304 */
  if (!C.zf) goto L_108f6304;
  /* 108f62ff call 0x108fac30 */
  push32(0x108f6304u); f_108fac30();
L_108f6304:;
  /* 108f6304 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108f630b mov eax, dword ptr [0x109205a4] */
  EAX = (r32((uint32_t)(0x109205a4)));
  /* 108f6310 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108f6313:;
  /* 108f6313 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6316 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108f6319 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f631b je 0x108f6349 */
  if (C.zf) goto L_108f6349;
  /* 108f631d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6320 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108f6323 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6326 je 0x108f6331 */
  if (C.zf) goto L_108f6331;
  /* 108f6328 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f632b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f632e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108f6331:;
  /* 108f6331 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6334 push eax */
  push32((uint32_t)(EAX));
  /* 108f6335 call 0x108f71b0 */
  push32(0x108f633au); f_108f71b0();
  /* 108f633a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f633d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6340 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 108f6344 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f6347 jmp 0x108f6313 */
  goto L_108f6313;
L_108f6349:;
  /* 108f6349 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 108f634b push 0x1091bc24 */
  push32((uint32_t)(0x1091bc24u));
  /* 108f6350 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f6352 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f6355 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 108f635c push ecx */
  push32((uint32_t)(ECX));
  /* 108f635d call 0x108f4380 */
  push32(0x108f6362u); f_108f4380();
  /* 108f6362 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6365 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108f6368 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f636b mov dword ptr [0x109205d8], edx */
  w32((uint32_t)(0x109205d8), (EDX));
  /* 108f6371 cmp dword ptr [0x109205d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109205d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6378 jne 0x108f6384 */
  if (!C.zf) goto L_108f6384;
  /* 108f637a push 9 */
  push32((uint32_t)(0x9u));
  /* 108f637c call 0x108f32f0 */
  push32(0x108f6381u); f_108f32f0();
  /* 108f6381 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f6384:;
  /* 108f6384 mov eax, dword ptr [0x109205a4] */
  EAX = (r32((uint32_t)(0x109205a4)));
  /* 108f6389 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f638c jmp 0x108f6397 */
  goto L_108f6397;
L_108f638e:;
  /* 108f638e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6391 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6394 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108f6397:;
  /* 108f6397 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f639a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108f639d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f639f je 0x108f6407 */
  if (C.zf) goto L_108f6407;
  /* 108f63a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f63a4 push ecx */
  push32((uint32_t)(ECX));
  /* 108f63a5 call 0x108f71b0 */
  push32(0x108f63aau); f_108f71b0();
  /* 108f63aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f63ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f63b0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108f63b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f63b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108f63b9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f63bc je 0x108f6405 */
  if (C.zf) goto L_108f6405;
  /* 108f63be push 0x79 */
  push32((uint32_t)(0x79u));
  /* 108f63c0 push 0x1091bc24 */
  push32((uint32_t)(0x1091bc24u));
  /* 108f63c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f63c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f63ca push ecx */
  push32((uint32_t)(ECX));
  /* 108f63cb call 0x108f4380 */
  push32(0x108f63d0u); f_108f4380();
  /* 108f63d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f63d3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f63d6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 108f63d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f63db cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f63de jne 0x108f63ea */
  if (!C.zf) goto L_108f63ea;
  /* 108f63e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f63e2 call 0x108f32f0 */
  push32(0x108f63e7u); f_108f32f0();
  /* 108f63e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f63ea:;
  /* 108f63ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f63ed push ecx */
  push32((uint32_t)(ECX));
  /* 108f63ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f63f1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108f63f3 push eax */
  push32((uint32_t)(EAX));
  /* 108f63f4 call 0x108f7330 */
  push32(0x108f63f9u); f_108f7330();
  /* 108f63f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f63fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f63ff add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6402 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_108f6405:;
  /* 108f6405 jmp 0x108f638e */
  goto L_108f638e;
L_108f6407:;
  /* 108f6407 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f6409 mov edx, dword ptr [0x109205a4] */
  EDX = (r32((uint32_t)(0x109205a4)));
  /* 108f640f push edx */
  push32((uint32_t)(EDX));
  /* 108f6410 call 0x108f4e10 */
  push32(0x108f6415u); f_108f4e10();
  /* 108f6415 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6418 mov dword ptr [0x109205a4], 0 */
  w32((uint32_t)(0x109205a4), (0x0u));
  /* 108f6422 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f6425 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108f642b mov dword ptr [0x109220e0], 1 */
  w32((uint32_t)(0x109220e0), (0x1u));
  /* 108f6435 mov esp, ebp */
  ESP = (EBP);
  /* 108f6437 pop ebp */
  EBP = (pop32());
  /* 108f6438 ret  */
  ESPCHK(0x108f62f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006440 @ 0x108f6440 (216 bytes, 69 insns) */
void f_108f6440(void) {
  FTRACE(0x108f6440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f6440 push ebp */
  push32((uint32_t)(EBP));
  /* 108f6441 mov ebp, esp */
  EBP = (ESP);
  /* 108f6443 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f6446 cmp dword ptr [0x109220f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109220f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f644d jne 0x108f6454 */
  if (!C.zf) goto L_108f6454;
  /* 108f644f call 0x108fac30 */
  push32(0x108f6454u); f_108fac30();
L_108f6454:;
  /* 108f6454 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 108f6459 push 0x10920614 */
  push32((uint32_t)(0x10920614u));
  /* 108f645e push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6460 call dword ptr [0x10923384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923384))), 0x108f6466u);
  /* 108f6466 mov dword ptr [0x109205e8], 0x10920614 */
  w32((uint32_t)(0x109205e8), (0x10920614u));
  /* 108f6470 mov eax, dword ptr [0x1092210c] */
  EAX = (r32((uint32_t)(0x1092210c)));
  /* 108f6475 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108f6478 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f647a jne 0x108f6487 */
  if (!C.zf) goto L_108f6487;
  /* 108f647c mov edx, dword ptr [0x109205e8] */
  EDX = (r32((uint32_t)(0x109205e8)));
  /* 108f6482 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108f6485 jmp 0x108f648f */
  goto L_108f648f;
L_108f6487:;
  /* 108f6487 mov eax, dword ptr [0x1092210c] */
  EAX = (r32((uint32_t)(0x1092210c)));
  /* 108f648c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_108f648f:;
  /* 108f648f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f6492 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108f6495 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 108f6498 push edx */
  push32((uint32_t)(EDX));
  /* 108f6499 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 108f649c push eax */
  push32((uint32_t)(EAX));
  /* 108f649d push 0 */
  push32((uint32_t)(0x0u));
  /* 108f649f push 0 */
  push32((uint32_t)(0x0u));
  /* 108f64a1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f64a4 push ecx */
  push32((uint32_t)(ECX));
  /* 108f64a5 call 0x108f6520 */
  push32(0x108f64aau); f_108f6520();
  /* 108f64aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f64ad push 0x80 */
  push32((uint32_t)(0x80u));
  /* 108f64b2 push 0x1091bc30 */
  push32((uint32_t)(0x1091bc30u));
  /* 108f64b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f64b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f64bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f64bf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 108f64c2 push ecx */
  push32((uint32_t)(ECX));
  /* 108f64c3 call 0x108f4380 */
  push32(0x108f64c8u); f_108f4380();
  /* 108f64c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f64cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f64ce cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f64d2 jne 0x108f64de */
  if (!C.zf) goto L_108f64de;
  /* 108f64d4 push 8 */
  push32((uint32_t)(0x8u));
  /* 108f64d6 call 0x108f32f0 */
  push32(0x108f64dbu); f_108f32f0();
  /* 108f64db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f64de:;
  /* 108f64de lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 108f64e1 push edx */
  push32((uint32_t)(EDX));
  /* 108f64e2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 108f64e5 push eax */
  push32((uint32_t)(EAX));
  /* 108f64e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f64e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f64ec lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 108f64ef push eax */
  push32((uint32_t)(EAX));
  /* 108f64f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f64f3 push ecx */
  push32((uint32_t)(ECX));
  /* 108f64f4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f64f7 push edx */
  push32((uint32_t)(EDX));
  /* 108f64f8 call 0x108f6520 */
  push32(0x108f64fdu); f_108f6520();
  /* 108f64fd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6500 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f6503 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f6506 mov dword ptr [0x109205cc], eax */
  w32((uint32_t)(0x109205cc), (EAX));
  /* 108f650b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f650e mov dword ptr [0x109205d0], ecx */
  w32((uint32_t)(0x109205d0), (ECX));
  /* 108f6514 mov esp, ebp */
  ESP = (EBP);
  /* 108f6516 pop ebp */
  EBP = (pop32());
  /* 108f6517 ret  */
  ESPCHK(0x108f6440u, _esp0);
  ESP += 4; return;
}

/* FUN_10006520 @ 0x108f6520 (1060 bytes, 360 insns) */
void f_108f6520(void) {
  FTRACE(0x108f6520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f6520 push ebp */
  push32((uint32_t)(EBP));
  /* 108f6521 mov ebp, esp */
  EBP = (ESP);
  /* 108f6523 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f6526 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f6529 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108f652f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f6532 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 108f6538 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f653b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f653e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6542 je 0x108f6555 */
  if (C.zf) goto L_108f6555;
  /* 108f6544 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f6547 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f654a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108f654c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f654f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6552 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_108f6555:;
  /* 108f6555 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6558 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108f655b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f655e jne 0x108f662d */
  if (!C.zf) goto L_108f662d;
L_108f6564:;
  /* 108f6564 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6567 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f656a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f656d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6570 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108f6573 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6576 je 0x108f65f2 */
  if (C.zf) goto L_108f65f2;
  /* 108f6578 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f657b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108f657e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f6580 je 0x108f65f2 */
  if (C.zf) goto L_108f65f2;
  /* 108f6582 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6585 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f6587 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108f6589 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f658b mov al, byte ptr [edx + 0x10921e41] */
  AL = (r8((uint32_t)(EDX + 0x10921e41)));
  /* 108f6591 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108f6594 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f6596 je 0x108f65c7 */
  if (C.zf) goto L_108f65c7;
  /* 108f6598 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f659b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f659d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f65a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f65a3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108f65a5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f65a9 je 0x108f65c7 */
  if (C.zf) goto L_108f65c7;
  /* 108f65ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f65ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f65b1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108f65b3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108f65b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f65b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f65bb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 108f65be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f65c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f65c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108f65c7:;
  /* 108f65c7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f65ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f65cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f65cf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f65d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108f65d4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f65d8 je 0x108f65ed */
  if (C.zf) goto L_108f65ed;
  /* 108f65da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f65dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f65e0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108f65e2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108f65e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f65e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f65ea mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_108f65ed:;
  /* 108f65ed jmp 0x108f6564 */
  goto L_108f6564;
L_108f65f2:;
  /* 108f65f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f65f5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f65f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f65fa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f65fd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108f65ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6603 je 0x108f6614 */
  if (C.zf) goto L_108f6614;
  /* 108f6605 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f6608 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 108f660b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f660e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6611 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_108f6614:;
  /* 108f6614 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6617 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108f661a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f661d jne 0x108f6628 */
  if (!C.zf) goto L_108f6628;
  /* 108f661f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6622 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6625 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108f6628:;
  /* 108f6628 jmp 0x108f66fc */
  goto L_108f66fc;
L_108f662d:;
  /* 108f662d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f6630 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f6632 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6635 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f6638 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108f663a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f663e je 0x108f6653 */
  if (C.zf) goto L_108f6653;
  /* 108f6640 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f6643 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6646 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108f6648 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108f664a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f664d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6650 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_108f6653:;
  /* 108f6653 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6656 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108f6658 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 108f665b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f665e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6661 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f6664 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f6667 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f666d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f666f mov dl, byte ptr [ecx + 0x10921e41] */
  DL = (r8((uint32_t)(ECX + 0x10921e41)));
  /* 108f6675 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 108f6678 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f667a je 0x108f66ab */
  if (C.zf) goto L_108f66ab;
  /* 108f667c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f667f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f6681 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6684 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f6687 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108f6689 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f668d je 0x108f66a2 */
  if (C.zf) goto L_108f66a2;
  /* 108f668f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f6692 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6695 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108f6697 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108f6699 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f669c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f669f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_108f66a2:;
  /* 108f66a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f66a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f66a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108f66ab:;
  /* 108f66ab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f66ae and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108f66b4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f66b7 je 0x108f66d7 */
  if (C.zf) goto L_108f66d7;
  /* 108f66b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f66bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f66c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f66c3 je 0x108f66d7 */
  if (C.zf) goto L_108f66d7;
  /* 108f66c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f66c8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f66ce cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f66d1 jne 0x108f662d */
  if (!C.zf) goto L_108f662d;
L_108f66d7:;
  /* 108f66d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f66da and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108f66e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f66e2 jne 0x108f66ef */
  if (!C.zf) goto L_108f66ef;
  /* 108f66e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f66e7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f66ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f66ed jmp 0x108f66fc */
  goto L_108f66fc;
L_108f66ef:;
  /* 108f66ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f66f3 je 0x108f66fc */
  if (C.zf) goto L_108f66fc;
  /* 108f66f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f66f8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_108f66fc:;
  /* 108f66fc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_108f6703:;
  /* 108f6703 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6706 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108f6709 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f670b je 0x108f672e */
  if (C.zf) goto L_108f672e;
L_108f670d:;
  /* 108f670d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6710 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108f6713 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6716 je 0x108f6723 */
  if (C.zf) goto L_108f6723;
  /* 108f6718 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f671b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108f671e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6721 jne 0x108f672e */
  if (!C.zf) goto L_108f672e;
L_108f6723:;
  /* 108f6723 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6726 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6729 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f672c jmp 0x108f670d */
  goto L_108f670d;
L_108f672e:;
  /* 108f672e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6731 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108f6734 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f6736 jne 0x108f673d */
  if (!C.zf) goto L_108f673d;
  /* 108f6738 jmp 0x108f691b */
  goto L_108f691b;
L_108f673d:;
  /* 108f673d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6741 je 0x108f6754 */
  if (C.zf) goto L_108f6754;
  /* 108f6743 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f6746 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f6749 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 108f674b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f674e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6751 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_108f6754:;
  /* 108f6754 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f6757 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108f6759 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f675c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f675f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_108f6761:;
  /* 108f6761 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 108f6768 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_108f676f:;
  /* 108f676f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6772 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108f6775 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6778 jne 0x108f678e */
  if (!C.zf) goto L_108f678e;
  /* 108f677a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f677d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6780 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108f6783 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f6786 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6789 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108f678c jmp 0x108f676f */
  goto L_108f676f;
L_108f678e:;
  /* 108f678e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6791 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108f6794 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6797 jne 0x108f67ea */
  if (!C.zf) goto L_108f67ea;
  /* 108f6799 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f679c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f679e mov ecx, 2 */
  ECX = (0x2u);
  /* 108f67a3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108f67a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f67a7 jne 0x108f67e2 */
  if (!C.zf) goto L_108f67e2;
  /* 108f67a9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f67ad je 0x108f67cf */
  if (C.zf) goto L_108f67cf;
  /* 108f67af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f67b2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 108f67b6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f67b9 jne 0x108f67c6 */
  if (!C.zf) goto L_108f67c6;
  /* 108f67bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f67be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f67c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108f67c4 jmp 0x108f67cd */
  goto L_108f67cd;
L_108f67c6:;
  /* 108f67c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_108f67cd:;
  /* 108f67cd jmp 0x108f67d6 */
  goto L_108f67d6;
L_108f67cf:;
  /* 108f67cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_108f67d6:;
  /* 108f67d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f67d8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f67dc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 108f67df mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_108f67e2:;
  /* 108f67e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f67e5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108f67e7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_108f67ea:;
  /* 108f67ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f67ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f67f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f67f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108f67f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f67f8 je 0x108f681e */
  if (C.zf) goto L_108f681e;
  /* 108f67fa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f67fe je 0x108f680f */
  if (C.zf) goto L_108f680f;
  /* 108f6800 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f6803 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 108f6806 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f6809 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f680c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_108f680f:;
  /* 108f680f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f6812 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108f6814 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6817 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f681a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108f681c jmp 0x108f67ea */
  goto L_108f67ea;
L_108f681e:;
  /* 108f681e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6821 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108f6824 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f6826 je 0x108f6844 */
  if (C.zf) goto L_108f6844;
  /* 108f6828 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f682c jne 0x108f6849 */
  if (!C.zf) goto L_108f6849;
  /* 108f682e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6831 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108f6834 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6837 je 0x108f6844 */
  if (C.zf) goto L_108f6844;
  /* 108f6839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f683c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108f683f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6842 jne 0x108f6849 */
  if (!C.zf) goto L_108f6849;
L_108f6844:;
  /* 108f6844 jmp 0x108f68f4 */
  goto L_108f68f4;
L_108f6849:;
  /* 108f6849 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f684d je 0x108f68e6 */
  if (C.zf) goto L_108f68e6;
  /* 108f6853 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6857 je 0x108f68ad */
  if (C.zf) goto L_108f68ad;
  /* 108f6859 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f685c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f685e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108f6860 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f6862 mov cl, byte ptr [eax + 0x10921e41] */
  CL = (r8((uint32_t)(EAX + 0x10921e41)));
  /* 108f6868 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 108f686b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f686d je 0x108f6898 */
  if (C.zf) goto L_108f6898;
  /* 108f686f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f6872 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6875 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108f6877 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 108f6879 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f687c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f687f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 108f6882 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6885 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6888 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f688b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f688e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f6890 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6893 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f6896 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_108f6898:;
  /* 108f6898 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f689b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f689e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108f68a0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108f68a2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f68a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f68a8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 108f68ab jmp 0x108f68d9 */
  goto L_108f68d9;
L_108f68ad:;
  /* 108f68ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f68b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f68b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108f68b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f68b6 mov cl, byte ptr [eax + 0x10921e41] */
  CL = (r8((uint32_t)(EAX + 0x10921e41)));
  /* 108f68bc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 108f68bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f68c1 je 0x108f68d9 */
  if (C.zf) goto L_108f68d9;
  /* 108f68c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f68c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f68c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f68cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f68cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f68d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f68d4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f68d7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108f68d9:;
  /* 108f68d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f68dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f68de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f68e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f68e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108f68e6:;
  /* 108f68e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f68e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f68ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f68ef jmp 0x108f6761 */
  goto L_108f6761;
L_108f68f4:;
  /* 108f68f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f68f8 je 0x108f6909 */
  if (C.zf) goto L_108f6909;
  /* 108f68fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f68fd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 108f6900 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f6903 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6906 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_108f6909:;
  /* 108f6909 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f690c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f690e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6911 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108f6914 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108f6916 jmp 0x108f6703 */
  goto L_108f6703;
L_108f691b:;
  /* 108f691b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f691f je 0x108f6933 */
  if (C.zf) goto L_108f6933;
  /* 108f6921 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f6924 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108f692a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f692d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6930 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_108f6933:;
  /* 108f6933 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f6936 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108f6938 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f693b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f693e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108f6940 mov esp, ebp */
  ESP = (EBP);
  /* 108f6942 pop ebp */
  EBP = (pop32());
  /* 108f6943 ret  */
  ESPCHK(0x108f6520u, _esp0);
  ESP += 4; return;
}

/* FUN_10006950 @ 0x108f6950 (537 bytes, 173 insns) */
void f_108f6950(void) {
  FTRACE(0x108f6950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f6950 push ebp */
  push32((uint32_t)(EBP));
  /* 108f6951 mov ebp, esp */
  EBP = (ESP);
  /* 108f6953 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f6956 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 108f695d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 108f6964 cmp dword ptr [0x10920718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f696b jne 0x108f69aa */
  if (!C.zf) goto L_108f69aa;
  /* 108f696d call dword ptr [0x10923354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923354))), 0x108f6973u);
  /* 108f6973 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108f6976 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f697a je 0x108f6988 */
  if (C.zf) goto L_108f6988;
  /* 108f697c mov dword ptr [0x10920718], 1 */
  w32((uint32_t)(0x10920718), (0x1u));
  /* 108f6986 jmp 0x108f69aa */
  goto L_108f69aa;
L_108f6988:;
  /* 108f6988 call dword ptr [0x10923358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923358))), 0x108f698eu);
  /* 108f698e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108f6991 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6995 je 0x108f69a3 */
  if (C.zf) goto L_108f69a3;
  /* 108f6997 mov dword ptr [0x10920718], 2 */
  w32((uint32_t)(0x10920718), (0x2u));
  /* 108f69a1 jmp 0x108f69aa */
  goto L_108f69aa;
L_108f69a3:;
  /* 108f69a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f69a5 jmp 0x108f6b65 */
  goto L_108f6b65;
L_108f69aa:;
  /* 108f69aa cmp dword ptr [0x10920718], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10920718))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f69b1 jne 0x108f6aae */
  if (!C.zf) goto L_108f6aae;
  /* 108f69b7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f69bb jne 0x108f69d3 */
  if (!C.zf) goto L_108f69d3;
  /* 108f69bd call dword ptr [0x10923354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923354))), 0x108f69c3u);
  /* 108f69c3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108f69c6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f69ca jne 0x108f69d3 */
  if (!C.zf) goto L_108f69d3;
  /* 108f69cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f69ce jmp 0x108f6b65 */
  goto L_108f6b65;
L_108f69d3:;
  /* 108f69d3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f69d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108f69d9:;
  /* 108f69d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f69dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f69de mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 108f69e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f69e3 je 0x108f6a05 */
  if (C.zf) goto L_108f6a05;
  /* 108f69e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f69e8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f69eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f69ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f69f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f69f3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 108f69f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f69f8 jne 0x108f6a03 */
  if (!C.zf) goto L_108f6a03;
  /* 108f69fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f69fd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6a00 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108f6a03:;
  /* 108f6a03 jmp 0x108f69d9 */
  goto L_108f69d9;
L_108f6a05:;
  /* 108f6a05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f6a08 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f6a0b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 108f6a0d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6a10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108f6a13 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6a15 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6a17 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6a1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6a1e push edx */
  push32((uint32_t)(EDX));
  /* 108f6a1f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f6a22 push eax */
  push32((uint32_t)(EAX));
  /* 108f6a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6a27 call dword ptr [0x10923394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923394))), 0x108f6a2du);
  /* 108f6a2d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108f6a30 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6a34 je 0x108f6a54 */
  if (C.zf) goto L_108f6a54;
  /* 108f6a36 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 108f6a38 push 0x1091bc3c */
  push32((uint32_t)(0x1091bc3cu));
  /* 108f6a3d push 2 */
  push32((uint32_t)(0x2u));
  /* 108f6a3f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f6a42 push ecx */
  push32((uint32_t)(ECX));
  /* 108f6a43 call 0x108f4380 */
  push32(0x108f6a48u); f_108f4380();
  /* 108f6a48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6a4b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108f6a4e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6a52 jne 0x108f6a65 */
  if (!C.zf) goto L_108f6a65;
L_108f6a54:;
  /* 108f6a54 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f6a57 push edx */
  push32((uint32_t)(EDX));
  /* 108f6a58 call dword ptr [0x109233d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233d0))), 0x108f6a5eu);
  /* 108f6a5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f6a60 jmp 0x108f6b65 */
  goto L_108f6b65;
L_108f6a65:;
  /* 108f6a65 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6a67 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6a69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f6a6c push eax */
  push32((uint32_t)(EAX));
  /* 108f6a6d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f6a70 push ecx */
  push32((uint32_t)(ECX));
  /* 108f6a71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6a74 push edx */
  push32((uint32_t)(EDX));
  /* 108f6a75 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f6a78 push eax */
  push32((uint32_t)(EAX));
  /* 108f6a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6a7d call dword ptr [0x10923394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923394))), 0x108f6a83u);
  /* 108f6a83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f6a85 jne 0x108f6a9c */
  if (!C.zf) goto L_108f6a9c;
  /* 108f6a87 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f6a89 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f6a8c push ecx */
  push32((uint32_t)(ECX));
  /* 108f6a8d call 0x108f4e10 */
  push32(0x108f6a92u); f_108f4e10();
  /* 108f6a92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6a95 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_108f6a9c:;
  /* 108f6a9c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f6a9f push edx */
  push32((uint32_t)(EDX));
  /* 108f6aa0 call dword ptr [0x109233d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233d0))), 0x108f6aa6u);
  /* 108f6aa6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f6aa9 jmp 0x108f6b65 */
  goto L_108f6b65;
L_108f6aae:;
  /* 108f6aae cmp dword ptr [0x10920718], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10920718))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6ab5 jne 0x108f6b63 */
  if (!C.zf) goto L_108f6b63;
  /* 108f6abb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6abf jne 0x108f6ad7 */
  if (!C.zf) goto L_108f6ad7;
  /* 108f6ac1 call dword ptr [0x10923358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923358))), 0x108f6ac7u);
  /* 108f6ac7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108f6aca cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6ace jne 0x108f6ad7 */
  if (!C.zf) goto L_108f6ad7;
  /* 108f6ad0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f6ad2 jmp 0x108f6b65 */
  goto L_108f6b65;
L_108f6ad7:;
  /* 108f6ad7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f6ada mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_108f6add:;
  /* 108f6add mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f6ae0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108f6ae3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f6ae5 je 0x108f6b05 */
  if (C.zf) goto L_108f6b05;
  /* 108f6ae7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f6aea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6aed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108f6af0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f6af3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108f6af6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f6af8 jne 0x108f6b03 */
  if (!C.zf) goto L_108f6b03;
  /* 108f6afa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f6afd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6b00 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_108f6b03:;
  /* 108f6b03 jmp 0x108f6add */
  goto L_108f6add;
L_108f6b05:;
  /* 108f6b05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f6b08 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f6b0b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6b0e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108f6b11 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 108f6b16 push 0x1091bc3c */
  push32((uint32_t)(0x1091bc3cu));
  /* 108f6b1b push 2 */
  push32((uint32_t)(0x2u));
  /* 108f6b1d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f6b20 push edx */
  push32((uint32_t)(EDX));
  /* 108f6b21 call 0x108f4380 */
  push32(0x108f6b26u); f_108f4380();
  /* 108f6b26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6b29 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108f6b2c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6b30 jne 0x108f6b40 */
  if (!C.zf) goto L_108f6b40;
  /* 108f6b32 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f6b35 push eax */
  push32((uint32_t)(EAX));
  /* 108f6b36 call dword ptr [0x109233cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233cc))), 0x108f6b3cu);
  /* 108f6b3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f6b3e jmp 0x108f6b65 */
  goto L_108f6b65;
L_108f6b40:;
  /* 108f6b40 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f6b43 push ecx */
  push32((uint32_t)(ECX));
  /* 108f6b44 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f6b47 push edx */
  push32((uint32_t)(EDX));
  /* 108f6b48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f6b4b push eax */
  push32((uint32_t)(EAX));
  /* 108f6b4c call 0x108fac60 */
  push32(0x108f6b51u); f_108fac60();
  /* 108f6b51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6b54 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f6b57 push ecx */
  push32((uint32_t)(ECX));
  /* 108f6b58 call dword ptr [0x109233cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233cc))), 0x108f6b5eu);
  /* 108f6b5e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f6b61 jmp 0x108f6b65 */
  goto L_108f6b65;
L_108f6b63:;
  /* 108f6b63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108f6b65:;
  /* 108f6b65 mov esp, ebp */
  ESP = (EBP);
  /* 108f6b67 pop ebp */
  EBP = (pop32());
  /* 108f6b68 ret  */
  ESPCHK(0x108f6950u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b70 @ 0x108f6b70 (77 bytes, 25 insns) */
void f_108f6b70(void) {
  FTRACE(0x108f6b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f6b70 push ebp */
  push32((uint32_t)(EBP));
  /* 108f6b71 mov ebp, esp */
  EBP = (ESP);
  /* 108f6b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6b75 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 108f6b7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f6b7c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6b80 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 108f6b83 push eax */
  push32((uint32_t)(EAX));
  /* 108f6b84 call dword ptr [0x1092334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092334c))), 0x108f6b8au);
  /* 108f6b8a mov dword ptr [0x10921f6c], eax */
  w32((uint32_t)(0x10921f6c), (EAX));
  /* 108f6b8f cmp dword ptr [0x10921f6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10921f6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6b96 jne 0x108f6b9c */
  if (!C.zf) goto L_108f6b9c;
  /* 108f6b98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f6b9a jmp 0x108f6bbb */
  goto L_108f6bbb;
L_108f6b9c:;
  /* 108f6b9c call 0x108f8620 */
  push32(0x108f6ba1u); f_108f8620();
  /* 108f6ba1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f6ba3 jne 0x108f6bb6 */
  if (!C.zf) goto L_108f6bb6;
  /* 108f6ba5 mov ecx, dword ptr [0x10921f6c] */
  ECX = (r32((uint32_t)(0x10921f6c)));
  /* 108f6bab push ecx */
  push32((uint32_t)(ECX));
  /* 108f6bac call dword ptr [0x10923350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923350))), 0x108f6bb2u);
  /* 108f6bb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f6bb4 jmp 0x108f6bbb */
  goto L_108f6bbb;
L_108f6bb6:;
  /* 108f6bb6 mov eax, 1 */
  EAX = (0x1u);
L_108f6bbb:;
  /* 108f6bbb pop ebp */
  EBP = (pop32());
  /* 108f6bbc ret  */
  ESPCHK(0x108f6b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bc0 @ 0x108f6bc0 (156 bytes, 48 insns) */
void f_108f6bc0(void) {
  FTRACE(0x108f6bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f6bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f6bc1 mov ebp, esp */
  EBP = (ESP);
  /* 108f6bc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f6bc6 mov eax, dword ptr [0x10921f68] */
  EAX = (r32((uint32_t)(0x10921f68)));
  /* 108f6bcb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f6bce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108f6bd5 jmp 0x108f6be0 */
  goto L_108f6be0;
L_108f6bd7:;
  /* 108f6bd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6bda add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6bdd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108f6be0:;
  /* 108f6be0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6be3 cmp edx, dword ptr [0x10921f64] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10921f64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6be9 jge 0x108f6c36 */
  if ((C.sf==C.of)) goto L_108f6c36;
  /* 108f6beb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 108f6bf0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 108f6bf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f6bf8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108f6bfb push ecx */
  push32((uint32_t)(ECX));
  /* 108f6bfc call dword ptr [0x10923344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923344))), 0x108f6c02u);
  /* 108f6c02 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 108f6c07 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6c09 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f6c0c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108f6c0f push eax */
  push32((uint32_t)(EAX));
  /* 108f6c10 call dword ptr [0x10923344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923344))), 0x108f6c16u);
  /* 108f6c16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f6c19 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 108f6c1c push edx */
  push32((uint32_t)(EDX));
  /* 108f6c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6c1f mov eax, dword ptr [0x10921f6c] */
  EAX = (r32((uint32_t)(0x10921f6c)));
  /* 108f6c24 push eax */
  push32((uint32_t)(EAX));
  /* 108f6c25 call dword ptr [0x10923348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923348))), 0x108f6c2bu);
  /* 108f6c2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f6c2e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6c31 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108f6c34 jmp 0x108f6bd7 */
  goto L_108f6bd7;
L_108f6c36:;
  /* 108f6c36 mov edx, dword ptr [0x10921f68] */
  EDX = (r32((uint32_t)(0x10921f68)));
  /* 108f6c3c push edx */
  push32((uint32_t)(EDX));
  /* 108f6c3d push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6c3f mov eax, dword ptr [0x10921f6c] */
  EAX = (r32((uint32_t)(0x10921f6c)));
  /* 108f6c44 push eax */
  push32((uint32_t)(EAX));
  /* 108f6c45 call dword ptr [0x10923348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923348))), 0x108f6c4bu);
  /* 108f6c4b mov ecx, dword ptr [0x10921f6c] */
  ECX = (r32((uint32_t)(0x10921f6c)));
  /* 108f6c51 push ecx */
  push32((uint32_t)(ECX));
  /* 108f6c52 call dword ptr [0x10923350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923350))), 0x108f6c58u);
  /* 108f6c58 mov esp, ebp */
  ESP = (EBP);
  /* 108f6c5a pop ebp */
  EBP = (pop32());
  /* 108f6c5b ret  */
  ESPCHK(0x108f6bc0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x108f6c60 (73 bytes, 19 insns) */
void f_108f6c60(void) {
  FTRACE(0x108f6c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f6c60 push ebp */
  push32((uint32_t)(EBP));
  /* 108f6c61 mov ebp, esp */
  EBP = (ESP);
  /* 108f6c63 cmp dword ptr [0x109205ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109205ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6c6a je 0x108f6c7e */
  if (C.zf) goto L_108f6c7e;
  /* 108f6c6c cmp dword ptr [0x109205ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109205ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6c73 jne 0x108f6ca7 */
  if (!C.zf) goto L_108f6ca7;
  /* 108f6c75 cmp dword ptr [0x109205b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109205b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6c7c jne 0x108f6ca7 */
  if (!C.zf) goto L_108f6ca7;
L_108f6c7e:;
  /* 108f6c7e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 108f6c83 call 0x108f6cb0 */
  push32(0x108f6c88u); f_108f6cb0();
  /* 108f6c88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6c8b cmp dword ptr [0x1092071c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1092071c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6c92 je 0x108f6c9a */
  if (C.zf) goto L_108f6c9a;
  /* 108f6c94 call dword ptr [0x1092071c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092071c))), 0x108f6c9au);
L_108f6c9a:;
  /* 108f6c9a push 0xff */
  push32((uint32_t)(0xffu));
  /* 108f6c9f call 0x108f6cb0 */
  push32(0x108f6ca4u); f_108f6cb0();
  /* 108f6ca4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f6ca7:;
  /* 108f6ca7 pop ebp */
  EBP = (pop32());
  /* 108f6ca8 ret  */
  ESPCHK(0x108f6c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cb0 @ 0x108f6cb0 (447 bytes, 131 insns) */
void f_108f6cb0(void) {
  FTRACE(0x108f6cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f6cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f6cb1 mov ebp, esp */
  EBP = (ESP);
  /* 108f6cb3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f6cb9 push ebx */
  push32((uint32_t)(EBX));
  /* 108f6cba push esi */
  push32((uint32_t)(ESI));
  /* 108f6cbb push edi */
  push32((uint32_t)(EDI));
  /* 108f6cbc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108f6cc3 jmp 0x108f6cce */
  goto L_108f6cce;
L_108f6cc5:;
  /* 108f6cc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f6cc8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6ccb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108f6cce:;
  /* 108f6cce cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6cd2 jae 0x108f6ce7 */
  if (!C.cf) goto L_108f6ce7;
  /* 108f6cd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f6cd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f6cda cmp edx, dword ptr [ecx*8 + 0x1091eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1091eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6ce1 jne 0x108f6ce5 */
  if (!C.zf) goto L_108f6ce5;
  /* 108f6ce3 jmp 0x108f6ce7 */
  goto L_108f6ce7;
L_108f6ce5:;
  /* 108f6ce5 jmp 0x108f6cc5 */
  goto L_108f6cc5;
L_108f6ce7:;
  /* 108f6ce7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f6cea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f6ced cmp ecx, dword ptr [eax*8 + 0x1091eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1091eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6cf4 jne 0x108f6e68 */
  if (!C.zf) goto L_108f6e68;
  /* 108f6cfa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6d01 je 0x108f6d24 */
  if (C.zf) goto L_108f6d24;
  /* 108f6d03 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f6d06 mov eax, dword ptr [edx*8 + 0x1091eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1091eab4)));
  /* 108f6d0d push eax */
  push32((uint32_t)(EAX));
  /* 108f6d0e push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6d14 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f6d16 call 0x108f3440 */
  push32(0x108f6d1bu); f_108f3440();
  /* 108f6d1b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6d1e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6d21 jne 0x108f6d24 */
  if (!C.zf) goto L_108f6d24;
  /* 108f6d23 int3  */
  x86_unimpl("int3 @ 0x108f6d23");
L_108f6d24:;
  /* 108f6d24 cmp dword ptr [0x109205ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109205ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6d2b je 0x108f6d3f */
  if (C.zf) goto L_108f6d3f;
  /* 108f6d2d cmp dword ptr [0x109205ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109205ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6d34 jne 0x108f6d78 */
  if (!C.zf) goto L_108f6d78;
  /* 108f6d36 cmp dword ptr [0x109205b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109205b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6d3d jne 0x108f6d78 */
  if (!C.zf) goto L_108f6d78;
L_108f6d3f:;
  /* 108f6d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6d41 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 108f6d44 push ecx */
  push32((uint32_t)(ECX));
  /* 108f6d45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f6d48 mov eax, dword ptr [edx*8 + 0x1091eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1091eab4)));
  /* 108f6d4f push eax */
  push32((uint32_t)(EAX));
  /* 108f6d50 call 0x108f71b0 */
  push32(0x108f6d55u); f_108f71b0();
  /* 108f6d55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6d58 push eax */
  push32((uint32_t)(EAX));
  /* 108f6d59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f6d5c mov edx, dword ptr [ecx*8 + 0x1091eab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1091eab4)));
  /* 108f6d63 push edx */
  push32((uint32_t)(EDX));
  /* 108f6d64 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 108f6d66 call dword ptr [0x10923368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923368))), 0x108f6d6cu);
  /* 108f6d6c push eax */
  push32((uint32_t)(EAX));
  /* 108f6d6d call dword ptr [0x1092336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092336c))), 0x108f6d73u);
  /* 108f6d73 jmp 0x108f6e68 */
  goto L_108f6e68;
L_108f6d78:;
  /* 108f6d78 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6d7f je 0x108f6e68 */
  if (C.zf) goto L_108f6e68;
  /* 108f6d85 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 108f6d8a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 108f6d90 push eax */
  push32((uint32_t)(EAX));
  /* 108f6d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6d93 call dword ptr [0x10923384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923384))), 0x108f6d99u);
  /* 108f6d99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f6d9b jne 0x108f6db1 */
  if (!C.zf) goto L_108f6db1;
  /* 108f6d9d push 0x1091b4a4 */
  push32((uint32_t)(0x1091b4a4u));
  /* 108f6da2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 108f6da8 push ecx */
  push32((uint32_t)(ECX));
  /* 108f6da9 call 0x108f7330 */
  push32(0x108f6daeu); f_108f7330();
  /* 108f6dae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f6db1:;
  /* 108f6db1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 108f6db7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108f6dba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f6dbd push eax */
  push32((uint32_t)(EAX));
  /* 108f6dbe call 0x108f71b0 */
  push32(0x108f6dc3u); f_108f71b0();
  /* 108f6dc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6dc6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6dc9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6dcc jbe 0x108f6dfa */
  if ((C.cf||C.zf)) goto L_108f6dfa;
  /* 108f6dce lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 108f6dd4 push ecx */
  push32((uint32_t)(ECX));
  /* 108f6dd5 call 0x108f71b0 */
  push32(0x108f6ddau); f_108f71b0();
  /* 108f6dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6ddd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f6de0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 108f6de4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108f6de7 push 3 */
  push32((uint32_t)(0x3u));
  /* 108f6de9 push 0x1091b4a0 */
  push32((uint32_t)(0x1091b4a0u));
  /* 108f6dee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f6df1 push ecx */
  push32((uint32_t)(ECX));
  /* 108f6df2 call 0x108f7ba0 */
  push32(0x108f6df7u); f_108f7ba0();
  /* 108f6df7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f6dfa:;
  /* 108f6dfa push 0x1091bef8 */
  push32((uint32_t)(0x1091bef8u));
  /* 108f6dff lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 108f6e05 push edx */
  push32((uint32_t)(EDX));
  /* 108f6e06 call 0x108f7330 */
  push32(0x108f6e0bu); f_108f7330();
  /* 108f6e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6e0e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f6e11 push eax */
  push32((uint32_t)(EAX));
  /* 108f6e12 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 108f6e18 push ecx */
  push32((uint32_t)(ECX));
  /* 108f6e19 call 0x108f7340 */
  push32(0x108f6e1eu); f_108f7340();
  /* 108f6e1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6e21 push 0x1091b418 */
  push32((uint32_t)(0x1091b418u));
  /* 108f6e26 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 108f6e2c push edx */
  push32((uint32_t)(EDX));
  /* 108f6e2d call 0x108f7340 */
  push32(0x108f6e32u); f_108f7340();
  /* 108f6e32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6e35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f6e38 mov ecx, dword ptr [eax*8 + 0x1091eab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1091eab4)));
  /* 108f6e3f push ecx */
  push32((uint32_t)(ECX));
  /* 108f6e40 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 108f6e46 push edx */
  push32((uint32_t)(EDX));
  /* 108f6e47 call 0x108f7340 */
  push32(0x108f6e4cu); f_108f7340();
  /* 108f6e4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6e4f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 108f6e54 push 0x1091bed0 */
  push32((uint32_t)(0x1091bed0u));
  /* 108f6e59 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 108f6e5f push eax */
  push32((uint32_t)(EAX));
  /* 108f6e60 call 0x108f7ae0 */
  push32(0x108f6e65u); f_108f7ae0();
  /* 108f6e65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f6e68:;
  /* 108f6e68 pop edi */
  EDI = (pop32());
  /* 108f6e69 pop esi */
  ESI = (pop32());
  /* 108f6e6a pop ebx */
  EBX = (pop32());
  /* 108f6e6b mov esp, ebp */
  ESP = (EBP);
  /* 108f6e6d pop ebp */
  EBP = (pop32());
  /* 108f6e6e ret  */
  ESPCHK(0x108f6cb0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x108f6e70 (80 bytes, 27 insns) */
void f_108f6e70(void) {
  FTRACE(0x108f6e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f6e70 push ebp */
  push32((uint32_t)(EBP));
  /* 108f6e71 mov ebp, esp */
  EBP = (ESP);
  /* 108f6e73 push ecx */
  push32((uint32_t)(ECX));
  /* 108f6e74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108f6e7b jmp 0x108f6e86 */
  goto L_108f6e86;
L_108f6e7d:;
  /* 108f6e7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6e80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6e83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108f6e86:;
  /* 108f6e86 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6e8a jae 0x108f6e9f */
  if (!C.cf) goto L_108f6e9f;
  /* 108f6e8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6e8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f6e92 cmp edx, dword ptr [ecx*8 + 0x1091eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1091eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6e99 jne 0x108f6e9d */
  if (!C.zf) goto L_108f6e9d;
  /* 108f6e9b jmp 0x108f6e9f */
  goto L_108f6e9f;
L_108f6e9d:;
  /* 108f6e9d jmp 0x108f6e7d */
  goto L_108f6e7d;
L_108f6e9f:;
  /* 108f6e9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6ea2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f6ea5 cmp ecx, dword ptr [eax*8 + 0x1091eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1091eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6eac jne 0x108f6eba */
  if (!C.zf) goto L_108f6eba;
  /* 108f6eae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6eb1 mov eax, dword ptr [edx*8 + 0x1091eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1091eab4)));
  /* 108f6eb8 jmp 0x108f6ebc */
  goto L_108f6ebc;
L_108f6eba:;
  /* 108f6eba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108f6ebc:;
  /* 108f6ebc mov esp, ebp */
  ESP = (EBP);
  /* 108f6ebe pop ebp */
  EBP = (pop32());
  /* 108f6ebf ret  */
  ESPCHK(0x108f6e70u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x108f6ec0 (66 bytes, 28 insns) */
void f_108f6ec0(void) {
  FTRACE(0x108f6ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f6ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f6ec1 mov ebp, esp */
  EBP = (ESP);
  /* 108f6ec3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6ec7 jne 0x108f6ee7 */
  if (!C.zf) goto L_108f6ee7;
  /* 108f6ec9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6ecd jge 0x108f6ee7 */
  if ((C.sf==C.of)) goto L_108f6ee7;
  /* 108f6ecf push 1 */
  push32((uint32_t)(0x1u));
  /* 108f6ed1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f6ed4 push eax */
  push32((uint32_t)(EAX));
  /* 108f6ed5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f6ed8 push ecx */
  push32((uint32_t)(ECX));
  /* 108f6ed9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f6edc push edx */
  push32((uint32_t)(EDX));
  /* 108f6edd call 0x108f6f10 */
  push32(0x108f6ee2u); f_108f6f10();
  /* 108f6ee2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6ee5 jmp 0x108f6efd */
  goto L_108f6efd;
L_108f6ee7:;
  /* 108f6ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f6ee9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f6eec push eax */
  push32((uint32_t)(EAX));
  /* 108f6eed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f6ef0 push ecx */
  push32((uint32_t)(ECX));
  /* 108f6ef1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f6ef4 push edx */
  push32((uint32_t)(EDX));
  /* 108f6ef5 call 0x108f6f10 */
  push32(0x108f6efau); f_108f6f10();
  /* 108f6efa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f6efd:;
  /* 108f6efd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f6f00 pop ebp */
  EBP = (pop32());
  /* 108f6f01 ret  */
  ESPCHK(0x108f6ec0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x108f6f10 (194 bytes, 71 insns) */
void f_108f6f10(void) {
  FTRACE(0x108f6f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f6f10 push ebp */
  push32((uint32_t)(EBP));
  /* 108f6f11 mov ebp, esp */
  EBP = (ESP);
  /* 108f6f13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f6f16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f6f19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f6f1c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6f20 je 0x108f6f39 */
  if (C.zf) goto L_108f6f39;
  /* 108f6f22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6f25 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 108f6f28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6f2b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6f2e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f6f31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f6f34 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108f6f36 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_108f6f39:;
  /* 108f6f39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6f3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_108f6f3f:;
  /* 108f6f3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f6f42 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f6f44 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108f6f47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108f6f4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f6f4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f6f4f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108f6f52 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108f6f55 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6f59 jbe 0x108f6f71 */
  if ((C.cf||C.zf)) goto L_108f6f71;
  /* 108f6f5b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f6f5e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6f61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6f64 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108f6f66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6f69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6f6c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108f6f6f jmp 0x108f6f85 */
  goto L_108f6f85;
L_108f6f71:;
  /* 108f6f71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f6f74 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6f77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6f7a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108f6f7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6f7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6f82 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108f6f85:;
  /* 108f6f85 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6f89 ja 0x108f6f3f */
  if ((!C.cf&&!C.zf)) goto L_108f6f3f;
  /* 108f6f8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6f8e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 108f6f91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6f94 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f6f97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108f6f9a:;
  /* 108f6f9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6f9d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108f6f9f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 108f6fa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6fa5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f6fa8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108f6faa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108f6fac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f6faf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 108f6fb2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 108f6fb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f6fb7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f6fba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f6fbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f6fc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f6fc3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f6fc6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f6fc9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6fcc jb 0x108f6f9a */
  if (C.cf) goto L_108f6f9a;
  /* 108f6fce mov esp, ebp */
  ESP = (EBP);
  /* 108f6fd0 pop ebp */
  EBP = (pop32());
  /* 108f6fd1 ret  */
  ESPCHK(0x108f6f10u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x108f6fe0 (63 bytes, 24 insns) */
void f_108f6fe0(void) {
  FTRACE(0x108f6fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f6fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f6fe1 mov ebp, esp */
  EBP = (ESP);
  /* 108f6fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 108f6fe4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6fe8 jne 0x108f6ff9 */
  if (!C.zf) goto L_108f6ff9;
  /* 108f6fea cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f6fee jge 0x108f6ff9 */
  if ((C.sf==C.of)) goto L_108f6ff9;
  /* 108f6ff0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108f6ff7 jmp 0x108f7000 */
  goto L_108f7000;
L_108f6ff9:;
  /* 108f6ff9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108f7000:;
  /* 108f7000 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7003 push eax */
  push32((uint32_t)(EAX));
  /* 108f7004 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f7007 push ecx */
  push32((uint32_t)(ECX));
  /* 108f7008 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f700b push edx */
  push32((uint32_t)(EDX));
  /* 108f700c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f700f push eax */
  push32((uint32_t)(EAX));
  /* 108f7010 call 0x108f6f10 */
  push32(0x108f7015u); f_108f6f10();
  /* 108f7015 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7018 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f701b mov esp, ebp */
  ESP = (EBP);
  /* 108f701d pop ebp */
  EBP = (pop32());
  /* 108f701e ret  */
  ESPCHK(0x108f6fe0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x108f7020 (30 bytes, 14 insns) */
void f_108f7020(void) {
  FTRACE(0x108f7020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7020 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7021 mov ebp, esp */
  EBP = (ESP);
  /* 108f7023 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f7025 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f7028 push eax */
  push32((uint32_t)(EAX));
  /* 108f7029 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f702c push ecx */
  push32((uint32_t)(ECX));
  /* 108f702d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f7030 push edx */
  push32((uint32_t)(EDX));
  /* 108f7031 call 0x108f6f10 */
  push32(0x108f7036u); f_108f6f10();
  /* 108f7036 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7039 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f703c pop ebp */
  EBP = (pop32());
  /* 108f703d ret  */
  ESPCHK(0x108f7020u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x108f7040 (72 bytes, 28 insns) */
void f_108f7040(void) {
  FTRACE(0x108f7040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7040 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7041 mov ebp, esp */
  EBP = (ESP);
  /* 108f7043 push ecx */
  push32((uint32_t)(ECX));
  /* 108f7044 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7048 jne 0x108f7061 */
  if (!C.zf) goto L_108f7061;
  /* 108f704a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f704e jg 0x108f7061 */
  if ((!C.zf&&C.sf==C.of)) goto L_108f7061;
  /* 108f7050 jl 0x108f7058 */
  if ((C.sf!=C.of)) goto L_108f7058;
  /* 108f7052 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7056 jae 0x108f7061 */
  if (!C.cf) goto L_108f7061;
L_108f7058:;
  /* 108f7058 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108f705f jmp 0x108f7068 */
  goto L_108f7068;
L_108f7061:;
  /* 108f7061 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108f7068:;
  /* 108f7068 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f706b push eax */
  push32((uint32_t)(EAX));
  /* 108f706c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f706f push ecx */
  push32((uint32_t)(ECX));
  /* 108f7070 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f7073 push edx */
  push32((uint32_t)(EDX));
  /* 108f7074 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f7077 push eax */
  push32((uint32_t)(EAX));
  /* 108f7078 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f707b push ecx */
  push32((uint32_t)(ECX));
  /* 108f707c call 0x108f7090 */
  push32(0x108f7081u); f_108f7090();
  /* 108f7081 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f7084 mov esp, ebp */
  ESP = (EBP);
  /* 108f7086 pop ebp */
  EBP = (pop32());
  /* 108f7087 ret  */
  ESPCHK(0x108f7040u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x108f7090 (242 bytes, 91 insns) */
void f_108f7090(void) {
  FTRACE(0x108f7090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7090 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7091 mov ebp, esp */
  EBP = (ESP);
  /* 108f7093 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f7096 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f7099 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f709c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f70a0 je 0x108f70c4 */
  if (C.zf) goto L_108f70c4;
  /* 108f70a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f70a5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 108f70a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f70ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f70ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f70b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f70b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108f70b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f70b9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f70bc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108f70be mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108f70c1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_108f70c4:;
  /* 108f70c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f70c7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108f70ca:;
  /* 108f70ca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f70cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f70cf push ecx */
  push32((uint32_t)(ECX));
  /* 108f70d0 push eax */
  push32((uint32_t)(EAX));
  /* 108f70d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f70d4 push edx */
  push32((uint32_t)(EDX));
  /* 108f70d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f70d8 push eax */
  push32((uint32_t)(EAX));
  /* 108f70d9 call 0x108fb010 */
  push32(0x108f70deu); f_108fb010();
  /* 108f70de mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108f70e1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f70e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f70e6 push edx */
  push32((uint32_t)(EDX));
  /* 108f70e7 push ecx */
  push32((uint32_t)(ECX));
  /* 108f70e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f70eb push eax */
  push32((uint32_t)(EAX));
  /* 108f70ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f70ef push ecx */
  push32((uint32_t)(ECX));
  /* 108f70f0 call 0x108fafa0 */
  push32(0x108f70f5u); f_108fafa0();
  /* 108f70f5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108f70f8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 108f70fb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f70ff jbe 0x108f7117 */
  if ((C.cf||C.zf)) goto L_108f7117;
  /* 108f7101 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f7104 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7107 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f710a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108f710c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f710f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7112 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108f7115 jmp 0x108f712b */
  goto L_108f712b;
L_108f7117:;
  /* 108f7117 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f711a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f711d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7120 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108f7122 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7125 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7128 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108f712b:;
  /* 108f712b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f712f ja 0x108f70ca */
  if ((!C.cf&&!C.zf)) goto L_108f70ca;
  /* 108f7131 jb 0x108f7139 */
  if (C.cf) goto L_108f7139;
  /* 108f7133 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7137 ja 0x108f70ca */
  if ((!C.cf&&!C.zf)) goto L_108f70ca;
L_108f7139:;
  /* 108f7139 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f713c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 108f713f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7142 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f7145 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108f7148:;
  /* 108f7148 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f714b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108f714d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 108f7150 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7153 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7156 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108f7158 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108f715a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f715d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 108f7160 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 108f7162 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7165 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f7168 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f716b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f716e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7171 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f7174 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7177 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f717a jb 0x108f7148 */
  if (C.cf) goto L_108f7148;
  /* 108f717c mov esp, ebp */
  ESP = (EBP);
  /* 108f717e pop ebp */
  EBP = (pop32());
  /* 108f717f ret 0x14 */
  ESPCHK(0x108f7090u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x108f7190 (31 bytes, 15 insns) */
void f_108f7190(void) {
  FTRACE(0x108f7190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7190 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7191 mov ebp, esp */
  EBP = (ESP);
  /* 108f7193 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f7195 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f7198 push eax */
  push32((uint32_t)(EAX));
  /* 108f7199 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f719c push ecx */
  push32((uint32_t)(ECX));
  /* 108f719d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f71a0 push edx */
  push32((uint32_t)(EDX));
  /* 108f71a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f71a4 push eax */
  push32((uint32_t)(EAX));
  /* 108f71a5 call 0x108f7090 */
  push32(0x108f71aau); f_108f7090();
  /* 108f71aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f71ad pop ebp */
  EBP = (pop32());
  /* 108f71ae ret  */
  ESPCHK(0x108f7190u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x108f71b0 (123 bytes, 44 insns) */
void f_108f71b0(void) {
  FTRACE(0x108f71b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f71b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 108f71b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 108f71ba je 0x108f71d0 */
  if (C.zf) goto L_108f71d0;
L_108f71bc:;
  /* 108f71bc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 108f71be inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 108f71bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108f71c1 je 0x108f7203 */
  if (C.zf) goto L_108f7203;
  /* 108f71c3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 108f71c9 jne 0x108f71bc */
  if (!C.zf) goto L_108f71bc;
  /* 108f71cb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_108f71d0:;
  /* 108f71d0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 108f71d2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 108f71d7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f71d9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f71dc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108f71de add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f71e1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 108f71e6 je 0x108f71d0 */
  if (C.zf) goto L_108f71d0;
  /* 108f71e8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 108f71eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108f71ed je 0x108f7221 */
  if (C.zf) goto L_108f7221;
  /* 108f71ef test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 108f71f1 je 0x108f7217 */
  if (C.zf) goto L_108f7217;
  /* 108f71f3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 108f71f8 je 0x108f720d */
  if (C.zf) goto L_108f720d;
  /* 108f71fa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 108f71ff je 0x108f7203 */
  if (C.zf) goto L_108f7203;
  /* 108f7201 jmp 0x108f71d0 */
  goto L_108f71d0;
L_108f7203:;
  /* 108f7203 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 108f7206 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 108f720a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f720c ret  */
  ESPCHK(0x108f71b0u, _esp0);
  ESP += 4; return;
L_108f720d:;
  /* 108f720d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 108f7210 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 108f7214 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f7216 ret  */
  ESPCHK(0x108f71b0u, _esp0);
  ESP += 4; return;
L_108f7217:;
  /* 108f7217 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 108f721a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 108f721e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f7220 ret  */
  ESPCHK(0x108f71b0u, _esp0);
  ESP += 4; return;
L_108f7221:;
  /* 108f7221 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 108f7224 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 108f7228 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f722a ret  */
  ESPCHK(0x108f71b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007230 @ 0x108f7230 (249 bytes, 93 insns) */
void f_108f7230(void) {
  FTRACE(0x108f7230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7230 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7231 mov ebp, esp */
  EBP = (ESP);
  /* 108f7233 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f7236 push ebx */
  push32((uint32_t)(EBX));
  /* 108f7237 push esi */
  push32((uint32_t)(ESI));
  /* 108f7238 push edi */
  push32((uint32_t)(EDI));
  /* 108f7239 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 108f723c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108f723f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 108f7242 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_108f7245:;
  /* 108f7245 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7249 jne 0x108f7269 */
  if (!C.zf) goto L_108f7269;
  /* 108f724b push 0x1091bf30 */
  push32((uint32_t)(0x1091bf30u));
  /* 108f7250 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f7252 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 108f7254 push 0x1091bf24 */
  push32((uint32_t)(0x1091bf24u));
  /* 108f7259 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f725b call 0x108f3440 */
  push32(0x108f7260u); f_108f3440();
  /* 108f7260 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7263 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7266 jne 0x108f7269 */
  if (!C.zf) goto L_108f7269;
  /* 108f7268 int3  */
  x86_unimpl("int3 @ 0x108f7268");
L_108f7269:;
  /* 108f7269 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f726b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f726d jne 0x108f7245 */
  if (!C.zf) goto L_108f7245;
L_108f726f:;
  /* 108f726f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7273 jne 0x108f7293 */
  if (!C.zf) goto L_108f7293;
  /* 108f7275 push 0x1091bf14 */
  push32((uint32_t)(0x1091bf14u));
  /* 108f727a push 0 */
  push32((uint32_t)(0x0u));
  /* 108f727c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 108f727e push 0x1091bf24 */
  push32((uint32_t)(0x1091bf24u));
  /* 108f7283 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f7285 call 0x108f3440 */
  push32(0x108f728au); f_108f3440();
  /* 108f728a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f728d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7290 jne 0x108f7293 */
  if (!C.zf) goto L_108f7293;
  /* 108f7292 int3  */
  x86_unimpl("int3 @ 0x108f7292");
L_108f7293:;
  /* 108f7293 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f7295 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f7297 jne 0x108f726f */
  if (!C.zf) goto L_108f726f;
  /* 108f7299 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f729c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 108f72a3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f72a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f72a9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108f72ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f72af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f72b2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 108f72b4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f72b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f72ba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 108f72bd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108f72c0 push edx */
  push32((uint32_t)(EDX));
  /* 108f72c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f72c4 push eax */
  push32((uint32_t)(EAX));
  /* 108f72c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f72c8 push ecx */
  push32((uint32_t)(ECX));
  /* 108f72c9 call 0x108fb310 */
  push32(0x108f72ceu); f_108fb310();
  /* 108f72ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f72d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108f72d4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f72d7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108f72da sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f72dd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f72e0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 108f72e3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f72e6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f72ea jl 0x108f730e */
  if ((C.sf!=C.of)) goto L_108f730e;
  /* 108f72ec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f72ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f72f1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 108f72f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f72f6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108f72fc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 108f72ff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f7302 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f7304 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7307 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f730a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108f730c jmp 0x108f731f */
  goto L_108f731f;
L_108f730e:;
  /* 108f730e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f7311 push eax */
  push32((uint32_t)(EAX));
  /* 108f7312 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f7314 call 0x108fb090 */
  push32(0x108f7319u); f_108fb090();
  /* 108f7319 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f731c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_108f731f:;
  /* 108f731f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f7322 pop edi */
  EDI = (pop32());
  /* 108f7323 pop esi */
  ESI = (pop32());
  /* 108f7324 pop ebx */
  EBX = (pop32());
  /* 108f7325 mov esp, ebp */
  ESP = (EBP);
  /* 108f7327 pop ebp */
  EBP = (pop32());
  /* 108f7328 ret  */
  ESPCHK(0x108f7230u, _esp0);
  ESP += 4; return;
}

/* FUN_10007330 @ 0x108f7330 (7 bytes, 3 insns) */
void f_108f7330(void) {
  FTRACE(0x108f7330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7330 push edi */
  push32((uint32_t)(EDI));
  /* 108f7331 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 108f7335 jmp 0x108f73a1 */
  jmp_ind(0x108f73a1u); return;
}

/* FUN_10007340 @ 0x108f7340 (224 bytes, 84 insns) */
void f_108f7340(void) {
  FTRACE(0x108f7340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7340 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 108f7344 push edi */
  push32((uint32_t)(EDI));
  /* 108f7345 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 108f734b je 0x108f735c */
  if (C.zf) goto L_108f735c;
L_108f734d:;
  /* 108f734d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 108f734f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 108f7350 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108f7352 je 0x108f738f */
  if (C.zf) goto L_108f738f;
  /* 108f7354 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 108f735a jne 0x108f734d */
  if (!C.zf) goto L_108f734d;
L_108f735c:;
  /* 108f735c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 108f735e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 108f7363 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7365 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f7368 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108f736a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f736d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 108f7372 je 0x108f735c */
  if (C.zf) goto L_108f735c;
  /* 108f7374 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 108f7377 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108f7379 je 0x108f739e */
  if (C.zf) goto L_108f739e;
  /* 108f737b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 108f737d je 0x108f7399 */
  if (C.zf) goto L_108f7399;
  /* 108f737f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 108f7384 je 0x108f7394 */
  if (C.zf) goto L_108f7394;
  /* 108f7386 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 108f738b je 0x108f738f */
  if (C.zf) goto L_108f738f;
  /* 108f738d jmp 0x108f735c */
  goto L_108f735c;
L_108f738f:;
  /* 108f738f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 108f7392 jmp 0x108f73a1 */
  goto L_108f73a1;
L_108f7394:;
  /* 108f7394 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 108f7397 jmp 0x108f73a1 */
  goto L_108f73a1;
L_108f7399:;
  /* 108f7399 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 108f739c jmp 0x108f73a1 */
  goto L_108f73a1;
L_108f739e:;
  /* 108f739e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_108f73a1:;
  /* 108f73a1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 108f73a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 108f73ab je 0x108f73c6 */
  if (C.zf) goto L_108f73c6;
L_108f73ad:;
  /* 108f73ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108f73af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 108f73b0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 108f73b2 je 0x108f7418 */
  if (C.zf) goto L_108f7418;
  /* 108f73b4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 108f73b6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108f73b7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 108f73bd jne 0x108f73ad */
  if (!C.zf) goto L_108f73ad;
  /* 108f73bf jmp 0x108f73c6 */
  goto L_108f73c6;
L_108f73c1:;
  /* 108f73c1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 108f73c3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_108f73c6:;
  /* 108f73c6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 108f73cb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 108f73cd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f73cf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f73d2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108f73d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f73d6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f73d9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 108f73de je 0x108f73c1 */
  if (C.zf) goto L_108f73c1;
  /* 108f73e0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 108f73e2 je 0x108f7418 */
  if (C.zf) goto L_108f7418;
  /* 108f73e4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 108f73e6 je 0x108f740f */
  if (C.zf) goto L_108f740f;
  /* 108f73e8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 108f73ee je 0x108f7402 */
  if (C.zf) goto L_108f7402;
  /* 108f73f0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 108f73f6 je 0x108f73fa */
  if (C.zf) goto L_108f73fa;
  /* 108f73f8 jmp 0x108f73c1 */
  goto L_108f73c1;
L_108f73fa:;
  /* 108f73fa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 108f73fc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 108f7400 pop edi */
  EDI = (pop32());
  /* 108f7401 ret  */
  ESPCHK(0x108f7340u, _esp0);
  ESP += 4; return;
L_108f7402:;
  /* 108f7402 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 108f7405 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 108f7409 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 108f740d pop edi */
  EDI = (pop32());
  /* 108f740e ret  */
  ESPCHK(0x108f7340u, _esp0);
  ESP += 4; return;
L_108f740f:;
  /* 108f740f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 108f7412 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 108f7416 pop edi */
  EDI = (pop32());
  /* 108f7417 ret  */
  ESPCHK(0x108f7340u, _esp0);
  ESP += 4; return;
L_108f7418:;
  /* 108f7418 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 108f741a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 108f741e pop edi */
  EDI = (pop32());
  /* 108f741f ret  */
  ESPCHK(0x108f7340u, _esp0);
  ESP += 4; return;
}

/* FUN_10007420 @ 0x108f7420 (243 bytes, 91 insns) */
void f_108f7420(void) {
  FTRACE(0x108f7420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7420 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7421 mov ebp, esp */
  EBP = (ESP);
  /* 108f7423 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f7426 push ebx */
  push32((uint32_t)(EBX));
  /* 108f7427 push esi */
  push32((uint32_t)(ESI));
  /* 108f7428 push edi */
  push32((uint32_t)(EDI));
  /* 108f7429 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 108f742c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_108f742f:;
  /* 108f742f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7433 jne 0x108f7453 */
  if (!C.zf) goto L_108f7453;
  /* 108f7435 push 0x1091bf30 */
  push32((uint32_t)(0x1091bf30u));
  /* 108f743a push 0 */
  push32((uint32_t)(0x0u));
  /* 108f743c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 108f743e push 0x1091bf40 */
  push32((uint32_t)(0x1091bf40u));
  /* 108f7443 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f7445 call 0x108f3440 */
  push32(0x108f744au); f_108f3440();
  /* 108f744a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f744d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7450 jne 0x108f7453 */
  if (!C.zf) goto L_108f7453;
  /* 108f7452 int3  */
  x86_unimpl("int3 @ 0x108f7452");
L_108f7453:;
  /* 108f7453 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f7455 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f7457 jne 0x108f742f */
  if (!C.zf) goto L_108f742f;
L_108f7459:;
  /* 108f7459 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f745d jne 0x108f747d */
  if (!C.zf) goto L_108f747d;
  /* 108f745f push 0x1091bf14 */
  push32((uint32_t)(0x1091bf14u));
  /* 108f7464 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f7466 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 108f7468 push 0x1091bf40 */
  push32((uint32_t)(0x1091bf40u));
  /* 108f746d push 2 */
  push32((uint32_t)(0x2u));
  /* 108f746f call 0x108f3440 */
  push32(0x108f7474u); f_108f3440();
  /* 108f7474 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7477 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f747a jne 0x108f747d */
  if (!C.zf) goto L_108f747d;
  /* 108f747c int3  */
  x86_unimpl("int3 @ 0x108f747c");
L_108f747d:;
  /* 108f747d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f747f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f7481 jne 0x108f7459 */
  if (!C.zf) goto L_108f7459;
  /* 108f7483 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f7486 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 108f748d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f7490 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f7493 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 108f7496 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f7499 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f749c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108f749e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f74a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f74a4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 108f74a7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108f74aa push ecx */
  push32((uint32_t)(ECX));
  /* 108f74ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f74ae push edx */
  push32((uint32_t)(EDX));
  /* 108f74af mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f74b2 push eax */
  push32((uint32_t)(EAX));
  /* 108f74b3 call 0x108fb310 */
  push32(0x108f74b8u); f_108fb310();
  /* 108f74b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f74bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108f74be mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f74c1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f74c4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f74c7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f74ca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108f74cd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f74d0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f74d4 jl 0x108f74f8 */
  if ((C.sf!=C.of)) goto L_108f74f8;
  /* 108f74d6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f74d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108f74db mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 108f74de xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108f74e0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108f74e6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 108f74e9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f74ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108f74ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f74f1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f74f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108f74f6 jmp 0x108f7509 */
  goto L_108f7509;
L_108f74f8:;
  /* 108f74f8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108f74fb push edx */
  push32((uint32_t)(EDX));
  /* 108f74fc push 0 */
  push32((uint32_t)(0x0u));
  /* 108f74fe call 0x108fb090 */
  push32(0x108f7503u); f_108fb090();
  /* 108f7503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7506 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_108f7509:;
  /* 108f7509 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108f750c pop edi */
  EDI = (pop32());
  /* 108f750d pop esi */
  ESI = (pop32());
  /* 108f750e pop ebx */
  EBX = (pop32());
  /* 108f750f mov esp, ebp */
  ESP = (EBP);
  /* 108f7511 pop ebp */
  EBP = (pop32());
  /* 108f7512 ret  */
  ESPCHK(0x108f7420u, _esp0);
  ESP += 4; return;
}

/* FUN_10007520 @ 0x108f7520 (47 bytes, 17 insns) */
void f_108f7520(void) {
  FTRACE(0x108f7520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7520 push ecx */
  push32((uint32_t)(ECX));
  /* 108f7521 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7526 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 108f752a jb 0x108f7540 */
  if (C.cf) goto L_108f7540;
L_108f752c:;
  /* 108f752c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f7532 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f7537 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 108f7539 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f753e jae 0x108f752c */
  if (!C.cf) goto L_108f752c;
L_108f7540:;
  /* 108f7540 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f7542 mov eax, esp */
  EAX = (ESP);
  /* 108f7544 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 108f7546 mov esp, ecx */
  ESP = (ECX);
  /* 108f7548 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f754a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f754d push eax */
  push32((uint32_t)(EAX));
  /* 108f754e ret  */
  ESPCHK(0x108f7520u, _esp0);
  ESP += 4; return;
}

/* FUN_10007550 @ 0x108f7550 (507 bytes, 151 insns) [1 switch table(s)] */
void f_108f7550(void) {
  FTRACE(0x108f7550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7550 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7551 mov ebp, esp */
  EBP = (ESP);
  /* 108f7553 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f7556 push esi */
  push32((uint32_t)(ESI));
  /* 108f7557 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f755b je 0x108f7563 */
  if (C.zf) goto L_108f7563;
  /* 108f755d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7561 jne 0x108f7568 */
  if (!C.zf) goto L_108f7568;
L_108f7563:;
  /* 108f7563 jmp 0x108f7738 */
  goto L_108f7738;
L_108f7568:;
  /* 108f7568 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f756c je 0x108f7584 */
  if (C.zf) goto L_108f7584;
  /* 108f756e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7572 je 0x108f7584 */
  if (C.zf) goto L_108f7584;
  /* 108f7574 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7578 je 0x108f7584 */
  if (C.zf) goto L_108f7584;
  /* 108f757a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f757e jne 0x108f7661 */
  if (!C.zf) goto L_108f7661;
L_108f7584:;
  /* 108f7584 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f7586 call 0x108f7d80 */
  push32(0x108f758bu); f_108f7d80();
  /* 108f758b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f758e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7592 je 0x108f759a */
  if (C.zf) goto L_108f759a;
  /* 108f7594 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7598 jne 0x108f75df */
  if (!C.zf) goto L_108f75df;
L_108f759a:;
  /* 108f759a cmp dword ptr [0x10920730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f75a1 jne 0x108f75df */
  if (!C.zf) goto L_108f75df;
  /* 108f75a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f75a5 push 0x108f7780 */
  push32((uint32_t)(0x108f7780u));
  /* 108f75aa call dword ptr [0x10923340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923340))), 0x108f75b0u);
  /* 108f75b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f75b3 jne 0x108f75c1 */
  if (!C.zf) goto L_108f75c1;
  /* 108f75b5 mov dword ptr [0x10920730], 1 */
  w32((uint32_t)(0x10920730), (0x1u));
  /* 108f75bf jmp 0x108f75df */
  goto L_108f75df;
L_108f75c1:;
  /* 108f75c1 call dword ptr [0x109233ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233ac))), 0x108f75c7u);
  /* 108f75c7 mov esi, eax */
  ESI = (EAX);
  /* 108f75c9 call 0x108fc260 */
  push32(0x108f75ceu); f_108fc260();
  /* 108f75ce mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 108f75d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f75d2 call 0x108f7e20 */
  push32(0x108f75d7u); f_108f7e20();
  /* 108f75d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f75da jmp 0x108f7738 */
  goto L_108f7738;
L_108f75df:;
  /* 108f75df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f75e2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108f75e5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f75e8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f75eb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108f75ee cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f75f2 ja 0x108f7652 */
  if ((!C.cf&&!C.zf)) goto L_108f7652;
  /* 108f75f4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f75f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f75f9 mov dl, byte ptr [eax + 0x108f775f] */
  DL = (r8((uint32_t)(EAX + 0x108f775f)));
  /* 108f75ff jmp dword ptr [edx*4 + 0x108f774b] */
  switch (EDX) {
    case 0: goto L_108f7606;
    case 1: goto L_108f7640;
    case 2: goto L_108f761a;
    case 3: goto L_108f762d;
    case 4: goto L_108f7652;
    default: x86_unimpl("switch@0x108f75ff out of table"); return;
  }
L_108f7606:;
  /* 108f7606 mov ecx, dword ptr [0x10920720] */
  ECX = (r32((uint32_t)(0x10920720)));
  /* 108f760c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108f760f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f7612 mov dword ptr [0x10920720], edx */
  w32((uint32_t)(0x10920720), (EDX));
  /* 108f7618 jmp 0x108f7652 */
  goto L_108f7652;
L_108f761a:;
  /* 108f761a mov eax, dword ptr [0x10920724] */
  EAX = (r32((uint32_t)(0x10920724)));
  /* 108f761f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108f7622 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f7625 mov dword ptr [0x10920724], ecx */
  w32((uint32_t)(0x10920724), (ECX));
  /* 108f762b jmp 0x108f7652 */
  goto L_108f7652;
L_108f762d:;
  /* 108f762d mov edx, dword ptr [0x10920728] */
  EDX = (r32((uint32_t)(0x10920728)));
  /* 108f7633 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108f7636 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f7639 mov dword ptr [0x10920728], eax */
  w32((uint32_t)(0x10920728), (EAX));
  /* 108f763e jmp 0x108f7652 */
  goto L_108f7652;
L_108f7640:;
  /* 108f7640 mov ecx, dword ptr [0x1092072c] */
  ECX = (r32((uint32_t)(0x1092072c)));
  /* 108f7646 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108f7649 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f764c mov dword ptr [0x1092072c], edx */
  w32((uint32_t)(0x1092072c), (EDX));
L_108f7652:;
  /* 108f7652 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f7654 call 0x108f7e20 */
  push32(0x108f7659u); f_108f7e20();
  /* 108f7659 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f765c jmp 0x108f7733 */
  goto L_108f7733;
L_108f7661:;
  /* 108f7661 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7665 je 0x108f7678 */
  if (C.zf) goto L_108f7678;
  /* 108f7667 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f766b je 0x108f7678 */
  if (C.zf) goto L_108f7678;
  /* 108f766d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7671 je 0x108f7678 */
  if (C.zf) goto L_108f7678;
  /* 108f7673 jmp 0x108f7738 */
  goto L_108f7738;
L_108f7678:;
  /* 108f7678 call 0x108f3dc0 */
  push32(0x108f767du); f_108f3dc0();
  /* 108f767d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f7680 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7683 cmp dword ptr [eax + 0x50], 0x1091ec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1091ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f768a jne 0x108f76d5 */
  if (!C.zf) goto L_108f76d5;
  /* 108f768c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 108f7691 push 0x1091bf4c */
  push32((uint32_t)(0x1091bf4cu));
  /* 108f7696 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f7698 mov ecx, dword ptr [0x1091ec80] */
  ECX = (r32((uint32_t)(0x1091ec80)));
  /* 108f769e push ecx */
  push32((uint32_t)(ECX));
  /* 108f769f call 0x108f4380 */
  push32(0x108f76a4u); f_108f4380();
  /* 108f76a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f76a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f76aa mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 108f76ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f76b0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f76b4 je 0x108f76d3 */
  if (C.zf) goto L_108f76d3;
  /* 108f76b6 mov ecx, dword ptr [0x1091ec80] */
  ECX = (r32((uint32_t)(0x1091ec80)));
  /* 108f76bc push ecx */
  push32((uint32_t)(ECX));
  /* 108f76bd push 0x1091ec00 */
  push32((uint32_t)(0x1091ec00u));
  /* 108f76c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f76c5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 108f76c8 push eax */
  push32((uint32_t)(EAX));
  /* 108f76c9 call 0x108fac60 */
  push32(0x108f76ceu); f_108fac60();
  /* 108f76ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f76d1 jmp 0x108f76d5 */
  goto L_108f76d5;
L_108f76d3:;
  /* 108f76d3 jmp 0x108f7738 */
  goto L_108f7738;
L_108f76d5:;
  /* 108f76d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f76d8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 108f76db push edx */
  push32((uint32_t)(EDX));
  /* 108f76dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f76df push eax */
  push32((uint32_t)(EAX));
  /* 108f76e0 call 0x108f7a60 */
  push32(0x108f76e5u); f_108f7a60();
  /* 108f76e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f76e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f76eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f76ef jne 0x108f76f3 */
  if (!C.zf) goto L_108f76f3;
  /* 108f76f1 jmp 0x108f7738 */
  goto L_108f7738;
L_108f76f3:;
  /* 108f76f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f76f6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108f76f9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_108f76fc:;
  /* 108f76fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f76ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f7702 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7705 jne 0x108f7733 */
  if (!C.zf) goto L_108f7733;
  /* 108f7707 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f770a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f770d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108f7710 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7713 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7716 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108f7719 mov edx, dword ptr [0x1091ec84] */
  EDX = (r32((uint32_t)(0x1091ec84)));
  /* 108f771f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f7722 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7725 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 108f7728 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f772a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f772d jb 0x108f7731 */
  if (C.cf) goto L_108f7731;
  /* 108f772f jmp 0x108f7733 */
  goto L_108f7733;
L_108f7731:;
  /* 108f7731 jmp 0x108f76fc */
  goto L_108f76fc;
L_108f7733:;
  /* 108f7733 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f7736 jmp 0x108f7746 */
  goto L_108f7746;
L_108f7738:;
  /* 108f7738 call 0x108fc250 */
  push32(0x108f773du); f_108fc250();
  /* 108f773d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 108f7743 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_108f7746:;
  /* 108f7746 pop esi */
  ESI = (pop32());
  /* 108f7747 mov esp, ebp */
  ESP = (EBP);
  /* 108f7749 pop ebp */
  EBP = (pop32());
  /* 108f774a ret  */
  ESPCHK(0x108f7550u, _esp0);
  ESP += 4; return;
}

/* FUN_10007780 @ 0x108f7780 (146 bytes, 45 insns) */
void f_108f7780(void) {
  FTRACE(0x108f7780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7780 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7781 mov ebp, esp */
  EBP = (ESP);
  /* 108f7783 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f7786 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f7788 call 0x108f7d80 */
  push32(0x108f778du); f_108f7d80();
  /* 108f778d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7790 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7794 jne 0x108f77ae */
  if (!C.zf) goto L_108f77ae;
  /* 108f7796 mov dword ptr [ebp - 8], 0x10920720 */
  w32((uint32_t)(EBP + -0x8), (0x10920720u));
  /* 108f779d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f77a0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108f77a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108f77a5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 108f77ac jmp 0x108f77c4 */
  goto L_108f77c4;
L_108f77ae:;
  /* 108f77ae mov dword ptr [ebp - 8], 0x10920724 */
  w32((uint32_t)(EBP + -0x8), (0x10920724u));
  /* 108f77b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f77b8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108f77ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108f77bd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_108f77c4:;
  /* 108f77c4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f77c8 jne 0x108f77d8 */
  if (!C.zf) goto L_108f77d8;
  /* 108f77ca push 1 */
  push32((uint32_t)(0x1u));
  /* 108f77cc call 0x108f7e20 */
  push32(0x108f77d1u); f_108f7e20();
  /* 108f77d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f77d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f77d6 jmp 0x108f780c */
  goto L_108f780c;
L_108f77d8:;
  /* 108f77d8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f77dc je 0x108f77fd */
  if (C.zf) goto L_108f77fd;
  /* 108f77de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f77e1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 108f77e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f77e9 call 0x108f7e20 */
  push32(0x108f77eeu); f_108f7e20();
  /* 108f77ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f77f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f77f4 push edx */
  push32((uint32_t)(EDX));
  /* 108f77f5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x108f77f8u);
  /* 108f77f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f77fb jmp 0x108f7807 */
  goto L_108f7807;
L_108f77fd:;
  /* 108f77fd push 1 */
  push32((uint32_t)(0x1u));
  /* 108f77ff call 0x108f7e20 */
  push32(0x108f7804u); f_108f7e20();
  /* 108f7804 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f7807:;
  /* 108f7807 mov eax, 1 */
  EAX = (0x1u);
L_108f780c:;
  /* 108f780c mov esp, ebp */
  ESP = (EBP);
  /* 108f780e pop ebp */
  EBP = (pop32());
  /* 108f780f ret 4 */
  ESPCHK(0x108f7780u, _esp0);
  ESP += 8; return;
}

/* FUN_10007820 @ 0x108f7820 (522 bytes, 162 insns) [1 switch table(s)] */
void f_108f7820(void) {
  FTRACE(0x108f7820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7820 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7821 mov ebp, esp */
  EBP = (ESP);
  /* 108f7823 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f7826 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108f782d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f7830 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108f7833 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f7836 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f7839 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 108f783c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7840 ja 0x108f78ee */
  if ((!C.cf&&!C.zf)) goto L_108f78ee;
  /* 108f7846 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108f7849 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f784b mov dl, byte ptr [eax + 0x108f7a42] */
  DL = (r8((uint32_t)(EAX + 0x108f7a42)));
  /* 108f7851 jmp dword ptr [edx*4 + 0x108f7a2a] */
  switch (EDX) {
    case 0: goto L_108f7858;
    case 1: goto L_108f78c3;
    case 2: goto L_108f78a9;
    case 3: goto L_108f7875;
    case 4: goto L_108f788f;
    case 5: goto L_108f78ee;
    default: x86_unimpl("switch@0x108f7851 out of table"); return;
  }
L_108f7858:;
  /* 108f7858 mov dword ptr [ebp - 0x18], 0x10920720 */
  w32((uint32_t)(EBP + -0x18), (0x10920720u));
  /* 108f785f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f7862 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f7864 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108f7867 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f786a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f786d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108f7870 jmp 0x108f78f6 */
  goto L_108f78f6;
L_108f7875:;
  /* 108f7875 mov dword ptr [ebp - 0x18], 0x10920724 */
  w32((uint32_t)(EBP + -0x18), (0x10920724u));
  /* 108f787c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f787f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f7881 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108f7884 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f7887 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f788a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108f788d jmp 0x108f78f6 */
  goto L_108f78f6;
L_108f788f:;
  /* 108f788f mov dword ptr [ebp - 0x18], 0x10920728 */
  w32((uint32_t)(EBP + -0x18), (0x10920728u));
  /* 108f7896 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f7899 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f789b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108f789e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f78a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f78a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108f78a7 jmp 0x108f78f6 */
  goto L_108f78f6;
L_108f78a9:;
  /* 108f78a9 mov dword ptr [ebp - 0x18], 0x1092072c */
  w32((uint32_t)(EBP + -0x18), (0x1092072cu));
  /* 108f78b0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f78b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f78b5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108f78b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f78bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f78be mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108f78c1 jmp 0x108f78f6 */
  goto L_108f78f6;
L_108f78c3:;
  /* 108f78c3 call 0x108f3dc0 */
  push32(0x108f78c8u); f_108f3dc0();
  /* 108f78c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f78cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f78ce mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 108f78d1 push edx */
  push32((uint32_t)(EDX));
  /* 108f78d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f78d5 push eax */
  push32((uint32_t)(EAX));
  /* 108f78d6 call 0x108f7a60 */
  push32(0x108f78dbu); f_108f7a60();
  /* 108f78db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f78de add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f78e1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108f78e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f78e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f78e9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108f78ec jmp 0x108f78f6 */
  goto L_108f78f6;
L_108f78ee:;
  /* 108f78ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f78f1 jmp 0x108f7a26 */
  goto L_108f7a26;
L_108f78f6:;
  /* 108f78f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f78fa je 0x108f7906 */
  if (C.zf) goto L_108f7906;
  /* 108f78fc push 1 */
  push32((uint32_t)(0x1u));
  /* 108f78fe call 0x108f7d80 */
  push32(0x108f7903u); f_108f7d80();
  /* 108f7903 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f7906:;
  /* 108f7906 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f790a jne 0x108f7923 */
  if (!C.zf) goto L_108f7923;
  /* 108f790c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7910 je 0x108f791c */
  if (C.zf) goto L_108f791c;
  /* 108f7912 push 1 */
  push32((uint32_t)(0x1u));
  /* 108f7914 call 0x108f7e20 */
  push32(0x108f7919u); f_108f7e20();
  /* 108f7919 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f791c:;
  /* 108f791c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f791e jmp 0x108f7a26 */
  goto L_108f7a26;
L_108f7923:;
  /* 108f7923 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7927 jne 0x108f7940 */
  if (!C.zf) goto L_108f7940;
  /* 108f7929 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f792d je 0x108f7939 */
  if (C.zf) goto L_108f7939;
  /* 108f792f push 1 */
  push32((uint32_t)(0x1u));
  /* 108f7931 call 0x108f7e20 */
  push32(0x108f7936u); f_108f7e20();
  /* 108f7936 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f7939:;
  /* 108f7939 push 3 */
  push32((uint32_t)(0x3u));
  /* 108f793b call 0x108f3b40 */
  push32(0x108f7940u); f_108f3b40();
L_108f7940:;
  /* 108f7940 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7944 je 0x108f7952 */
  if (C.zf) goto L_108f7952;
  /* 108f7946 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f794a je 0x108f7952 */
  if (C.zf) goto L_108f7952;
  /* 108f794c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7950 jne 0x108f797e */
  if (!C.zf) goto L_108f797e;
L_108f7952:;
  /* 108f7952 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7955 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 108f7958 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108f795b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f795e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 108f7965 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7969 jne 0x108f797e */
  if (!C.zf) goto L_108f797e;
  /* 108f796b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f796e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 108f7971 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108f7974 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7977 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_108f797e:;
  /* 108f797e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7982 jne 0x108f79c0 */
  if (!C.zf) goto L_108f79c0;
  /* 108f7984 mov eax, dword ptr [0x1091ec78] */
  EAX = (r32((uint32_t)(0x1091ec78)));
  /* 108f7989 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108f798c jmp 0x108f7997 */
  goto L_108f7997;
L_108f798e:;
  /* 108f798e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f7991 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7994 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_108f7997:;
  /* 108f7997 mov edx, dword ptr [0x1091ec78] */
  EDX = (r32((uint32_t)(0x1091ec78)));
  /* 108f799d add edx, dword ptr [0x1091ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1091ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f79a3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f79a6 jge 0x108f79be */
  if ((C.sf==C.of)) goto L_108f79be;
  /* 108f79a8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f79ab imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f79ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f79b1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 108f79b4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 108f79bc jmp 0x108f798e */
  goto L_108f798e;
L_108f79be:;
  /* 108f79be jmp 0x108f79c9 */
  goto L_108f79c9;
L_108f79c0:;
  /* 108f79c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f79c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_108f79c9:;
  /* 108f79c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f79cd je 0x108f79d9 */
  if (C.zf) goto L_108f79d9;
  /* 108f79cf push 1 */
  push32((uint32_t)(0x1u));
  /* 108f79d1 call 0x108f7e20 */
  push32(0x108f79d6u); f_108f7e20();
  /* 108f79d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f79d9:;
  /* 108f79d9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f79dd jne 0x108f79f0 */
  if (!C.zf) goto L_108f79f0;
  /* 108f79df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f79e2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 108f79e5 push edx */
  push32((uint32_t)(EDX));
  /* 108f79e6 push 8 */
  push32((uint32_t)(0x8u));
  /* 108f79e8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x108f79ebu);
  /* 108f79eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f79ee jmp 0x108f79fa */
  goto L_108f79fa;
L_108f79f0:;
  /* 108f79f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f79f3 push eax */
  push32((uint32_t)(EAX));
  /* 108f79f4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x108f79f7u);
  /* 108f79f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f79fa:;
  /* 108f79fa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f79fe je 0x108f7a0c */
  if (C.zf) goto L_108f7a0c;
  /* 108f7a00 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7a04 je 0x108f7a0c */
  if (C.zf) goto L_108f7a0c;
  /* 108f7a06 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7a0a jne 0x108f7a24 */
  if (!C.zf) goto L_108f7a24;
L_108f7a0c:;
  /* 108f7a0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7a0f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f7a12 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 108f7a15 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7a19 jne 0x108f7a24 */
  if (!C.zf) goto L_108f7a24;
  /* 108f7a1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7a1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7a21 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_108f7a24:;
  /* 108f7a24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108f7a26:;
  /* 108f7a26 mov esp, ebp */
  ESP = (EBP);
  /* 108f7a28 pop ebp */
  EBP = (pop32());
  /* 108f7a29 ret  */
  ESPCHK(0x108f7820u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a60 @ 0x108f7a60 (91 bytes, 35 insns) */
void f_108f7a60(void) {
  FTRACE(0x108f7a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7a60 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7a61 mov ebp, esp */
  EBP = (ESP);
  /* 108f7a63 push ecx */
  push32((uint32_t)(ECX));
  /* 108f7a64 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f7a67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108f7a6a:;
  /* 108f7a6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7a6d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108f7a70 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7a73 je 0x108f7a93 */
  if (C.zf) goto L_108f7a93;
  /* 108f7a75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7a78 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7a7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f7a7e mov ecx, dword ptr [0x1091ec84] */
  ECX = (r32((uint32_t)(0x1091ec84)));
  /* 108f7a84 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f7a87 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f7a8a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7a8c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7a8f jae 0x108f7a93 */
  if (!C.cf) goto L_108f7a93;
  /* 108f7a91 jmp 0x108f7a6a */
  goto L_108f7a6a;
L_108f7a93:;
  /* 108f7a93 mov eax, dword ptr [0x1091ec84] */
  EAX = (r32((uint32_t)(0x1091ec84)));
  /* 108f7a98 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f7a9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f7a9e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7aa0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7aa3 jae 0x108f7ab5 */
  if (!C.cf) goto L_108f7ab5;
  /* 108f7aa5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7aa8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108f7aab cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7aae jne 0x108f7ab5 */
  if (!C.zf) goto L_108f7ab5;
  /* 108f7ab0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7ab3 jmp 0x108f7ab7 */
  goto L_108f7ab7;
L_108f7ab5:;
  /* 108f7ab5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108f7ab7:;
  /* 108f7ab7 mov esp, ebp */
  ESP = (EBP);
  /* 108f7ab9 pop ebp */
  EBP = (pop32());
  /* 108f7aba ret  */
  ESPCHK(0x108f7a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ac0 @ 0x108f7ac0 (13 bytes, 6 insns) */
void f_108f7ac0(void) {
  FTRACE(0x108f7ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7ac1 mov ebp, esp */
  EBP = (ESP);
  /* 108f7ac3 call 0x108f3dc0 */
  push32(0x108f7ac8u); f_108f3dc0();
  /* 108f7ac8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7acb pop ebp */
  EBP = (pop32());
  /* 108f7acc ret  */
  ESPCHK(0x108f7ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ad0 @ 0x108f7ad0 (13 bytes, 6 insns) */
void f_108f7ad0(void) {
  FTRACE(0x108f7ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7ad1 mov ebp, esp */
  EBP = (ESP);
  /* 108f7ad3 call 0x108f3dc0 */
  push32(0x108f7ad8u); f_108f3dc0();
  /* 108f7ad8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7adb pop ebp */
  EBP = (pop32());
  /* 108f7adc ret  */
  ESPCHK(0x108f7ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ae0 @ 0x108f7ae0 (187 bytes, 54 insns) */
void f_108f7ae0(void) {
  FTRACE(0x108f7ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7ae1 mov ebp, esp */
  EBP = (ESP);
  /* 108f7ae3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f7ae6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108f7aed cmp dword ptr [0x10920734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7af4 jne 0x108f7b53 */
  if (!C.zf) goto L_108f7b53;
  /* 108f7af6 push 0x1091b378 */
  push32((uint32_t)(0x1091b378u));
  /* 108f7afb call dword ptr [0x1092337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092337c))), 0x108f7b01u);
  /* 108f7b01 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f7b04 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7b08 je 0x108f7b27 */
  if (C.zf) goto L_108f7b27;
  /* 108f7b0a push 0x1091bf7c */
  push32((uint32_t)(0x1091bf7cu));
  /* 108f7b0f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7b12 push eax */
  push32((uint32_t)(EAX));
  /* 108f7b13 call dword ptr [0x10923378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923378))), 0x108f7b19u);
  /* 108f7b19 mov dword ptr [0x10920734], eax */
  w32((uint32_t)(0x10920734), (EAX));
  /* 108f7b1e cmp dword ptr [0x10920734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7b25 jne 0x108f7b2b */
  if (!C.zf) goto L_108f7b2b;
L_108f7b27:;
  /* 108f7b27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f7b29 jmp 0x108f7b97 */
  goto L_108f7b97;
L_108f7b2b:;
  /* 108f7b2b push 0x1091bf6c */
  push32((uint32_t)(0x1091bf6cu));
  /* 108f7b30 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7b33 push ecx */
  push32((uint32_t)(ECX));
  /* 108f7b34 call dword ptr [0x10923378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923378))), 0x108f7b3au);
  /* 108f7b3a mov dword ptr [0x10920738], eax */
  w32((uint32_t)(0x10920738), (EAX));
  /* 108f7b3f push 0x1091bf58 */
  push32((uint32_t)(0x1091bf58u));
  /* 108f7b44 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7b47 push edx */
  push32((uint32_t)(EDX));
  /* 108f7b48 call dword ptr [0x10923378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923378))), 0x108f7b4eu);
  /* 108f7b4e mov dword ptr [0x1092073c], eax */
  w32((uint32_t)(0x1092073c), (EAX));
L_108f7b53:;
  /* 108f7b53 cmp dword ptr [0x10920738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10920738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7b5a je 0x108f7b65 */
  if (C.zf) goto L_108f7b65;
  /* 108f7b5c call dword ptr [0x10920738] */
  call_ind((uint32_t)(r32((uint32_t)(0x10920738))), 0x108f7b62u);
  /* 108f7b62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108f7b65:;
  /* 108f7b65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7b69 je 0x108f7b81 */
  if (C.zf) goto L_108f7b81;
  /* 108f7b6b cmp dword ptr [0x1092073c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1092073c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7b72 je 0x108f7b81 */
  if (C.zf) goto L_108f7b81;
  /* 108f7b74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7b77 push eax */
  push32((uint32_t)(EAX));
  /* 108f7b78 call dword ptr [0x1092073c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092073c))), 0x108f7b7eu);
  /* 108f7b7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108f7b81:;
  /* 108f7b81 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108f7b84 push ecx */
  push32((uint32_t)(ECX));
  /* 108f7b85 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f7b88 push edx */
  push32((uint32_t)(EDX));
  /* 108f7b89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f7b8c push eax */
  push32((uint32_t)(EAX));
  /* 108f7b8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7b90 push ecx */
  push32((uint32_t)(ECX));
  /* 108f7b91 call dword ptr [0x10920734] */
  call_ind((uint32_t)(r32((uint32_t)(0x10920734))), 0x108f7b97u);
L_108f7b97:;
  /* 108f7b97 mov esp, ebp */
  ESP = (EBP);
  /* 108f7b99 pop ebp */
  EBP = (pop32());
  /* 108f7b9a ret  */
  ESPCHK(0x108f7ae0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x108f7ba0 (254 bytes, 109 insns) */
void f_108f7ba0(void) {
  FTRACE(0x108f7ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7ba0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 108f7ba4 push edi */
  push32((uint32_t)(EDI));
  /* 108f7ba5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108f7ba7 je 0x108f7c23 */
  if (C.zf) goto L_108f7c23;
  /* 108f7ba9 push esi */
  push32((uint32_t)(ESI));
  /* 108f7baa push ebx */
  push32((uint32_t)(EBX));
  /* 108f7bab mov ebx, ecx */
  EBX = (ECX);
  /* 108f7bad mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 108f7bb1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 108f7bb7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 108f7bbb jne 0x108f7bc4 */
  if (!C.zf) goto L_108f7bc4;
  /* 108f7bbd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108f7bc0 jne 0x108f7c31 */
  if (!C.zf) goto L_108f7c31;
  /* 108f7bc2 jmp 0x108f7be5 */
  goto L_108f7be5;
L_108f7bc4:;
  /* 108f7bc4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108f7bc6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 108f7bc7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108f7bc9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108f7bca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 108f7bcb je 0x108f7bf2 */
  if (C.zf) goto L_108f7bf2;
  /* 108f7bcd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108f7bcf je 0x108f7bfa */
  if (C.zf) goto L_108f7bfa;
  /* 108f7bd1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 108f7bd7 jne 0x108f7bc4 */
  if (!C.zf) goto L_108f7bc4;
  /* 108f7bd9 mov ebx, ecx */
  EBX = (ECX);
  /* 108f7bdb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108f7bde jne 0x108f7c31 */
  if (!C.zf) goto L_108f7c31;
L_108f7be0:;
  /* 108f7be0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 108f7be3 je 0x108f7bf2 */
  if (C.zf) goto L_108f7bf2;
L_108f7be5:;
  /* 108f7be5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108f7be7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 108f7be8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108f7bea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108f7beb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108f7bed je 0x108f7c1e */
  if (C.zf) goto L_108f7c1e;
  /* 108f7bef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 108f7bf0 jne 0x108f7be5 */
  if (!C.zf) goto L_108f7be5;
L_108f7bf2:;
  /* 108f7bf2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 108f7bf6 pop ebx */
  EBX = (pop32());
  /* 108f7bf7 pop esi */
  ESI = (pop32());
  /* 108f7bf8 pop edi */
  EDI = (pop32());
  /* 108f7bf9 ret  */
  ESPCHK(0x108f7ba0u, _esp0);
  ESP += 4; return;
L_108f7bfa:;
  /* 108f7bfa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 108f7c00 je 0x108f7c14 */
  if (C.zf) goto L_108f7c14;
L_108f7c02:;
  /* 108f7c02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108f7c04 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108f7c05 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 108f7c06 je 0x108f7c96 */
  if (C.zf) goto L_108f7c96;
  /* 108f7c0c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 108f7c12 jne 0x108f7c02 */
  if (!C.zf) goto L_108f7c02;
L_108f7c14:;
  /* 108f7c14 mov ebx, ecx */
  EBX = (ECX);
  /* 108f7c16 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108f7c19 jne 0x108f7c87 */
  if (!C.zf) goto L_108f7c87;
L_108f7c1b:;
  /* 108f7c1b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108f7c1d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_108f7c1e:;
  /* 108f7c1e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 108f7c1f jne 0x108f7c1b */
  if (!C.zf) goto L_108f7c1b;
  /* 108f7c21 pop ebx */
  EBX = (pop32());
  /* 108f7c22 pop esi */
  ESI = (pop32());
L_108f7c23:;
  /* 108f7c23 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 108f7c27 pop edi */
  EDI = (pop32());
  /* 108f7c28 ret  */
  ESPCHK(0x108f7ba0u, _esp0);
  ESP += 4; return;
L_108f7c29:;
  /* 108f7c29 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 108f7c2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7c2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 108f7c2f je 0x108f7be0 */
  if (C.zf) goto L_108f7be0;
L_108f7c31:;
  /* 108f7c31 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 108f7c36 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 108f7c38 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7c3a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f7c3d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108f7c3f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 108f7c41 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7c44 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 108f7c49 je 0x108f7c29 */
  if (C.zf) goto L_108f7c29;
  /* 108f7c4b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 108f7c4d je 0x108f7c7b */
  if (C.zf) goto L_108f7c7b;
  /* 108f7c4f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 108f7c51 je 0x108f7c71 */
  if (C.zf) goto L_108f7c71;
  /* 108f7c53 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 108f7c59 je 0x108f7c67 */
  if (C.zf) goto L_108f7c67;
  /* 108f7c5b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 108f7c61 jne 0x108f7c29 */
  if (!C.zf) goto L_108f7c29;
  /* 108f7c63 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 108f7c65 jmp 0x108f7c7f */
  goto L_108f7c7f;
L_108f7c67:;
  /* 108f7c67 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108f7c6d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 108f7c6f jmp 0x108f7c7f */
  goto L_108f7c7f;
L_108f7c71:;
  /* 108f7c71 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108f7c77 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 108f7c79 jmp 0x108f7c7f */
  goto L_108f7c7f;
L_108f7c7b:;
  /* 108f7c7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108f7c7d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_108f7c7f:;
  /* 108f7c7f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7c82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f7c84 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 108f7c85 je 0x108f7c91 */
  if (C.zf) goto L_108f7c91;
L_108f7c87:;
  /* 108f7c87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108f7c89:;
  /* 108f7c89 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 108f7c8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7c8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 108f7c8f jne 0x108f7c89 */
  if (!C.zf) goto L_108f7c89;
L_108f7c91:;
  /* 108f7c91 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 108f7c94 jne 0x108f7c1b */
  if (!C.zf) goto L_108f7c1b;
L_108f7c96:;
  /* 108f7c96 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 108f7c9a pop ebx */
  EBX = (pop32());
  /* 108f7c9b pop esi */
  ESI = (pop32());
  /* 108f7c9c pop edi */
  EDI = (pop32());
  /* 108f7c9d ret  */
  ESPCHK(0x108f7ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ca0 @ 0x108f7ca0 (55 bytes, 16 insns) */
void f_108f7ca0(void) {
  FTRACE(0x108f7ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7ca1 mov ebp, esp */
  EBP = (ESP);
  /* 108f7ca3 mov eax, dword ptr [0x1091eb84] */
  EAX = (r32((uint32_t)(0x1091eb84)));
  /* 108f7ca8 push eax */
  push32((uint32_t)(EAX));
  /* 108f7ca9 call dword ptr [0x1092333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092333c))), 0x108f7cafu);
  /* 108f7caf mov ecx, dword ptr [0x1091eb74] */
  ECX = (r32((uint32_t)(0x1091eb74)));
  /* 108f7cb5 push ecx */
  push32((uint32_t)(ECX));
  /* 108f7cb6 call dword ptr [0x1092333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092333c))), 0x108f7cbcu);
  /* 108f7cbc mov edx, dword ptr [0x1091eb64] */
  EDX = (r32((uint32_t)(0x1091eb64)));
  /* 108f7cc2 push edx */
  push32((uint32_t)(EDX));
  /* 108f7cc3 call dword ptr [0x1092333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092333c))), 0x108f7cc9u);
  /* 108f7cc9 mov eax, dword ptr [0x1091eb44] */
  EAX = (r32((uint32_t)(0x1091eb44)));
  /* 108f7cce push eax */
  push32((uint32_t)(EAX));
  /* 108f7ccf call dword ptr [0x1092333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092333c))), 0x108f7cd5u);
  /* 108f7cd5 pop ebp */
  EBP = (pop32());
  /* 108f7cd6 ret  */
  ESPCHK(0x108f7ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ce0 @ 0x108f7ce0 (159 bytes, 47 insns) */
void f_108f7ce0(void) {
  FTRACE(0x108f7ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7ce1 mov ebp, esp */
  EBP = (ESP);
  /* 108f7ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 108f7ce4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108f7ceb jmp 0x108f7cf6 */
  goto L_108f7cf6;
L_108f7ced:;
  /* 108f7ced mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7cf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7cf3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108f7cf6:;
  /* 108f7cf6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7cfa jge 0x108f7d49 */
  if ((C.sf==C.of)) goto L_108f7d49;
  /* 108f7cfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7cff cmp dword ptr [ecx*4 + 0x1091eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1091eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7d07 je 0x108f7d47 */
  if (C.zf) goto L_108f7d47;
  /* 108f7d09 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7d0d je 0x108f7d47 */
  if (C.zf) goto L_108f7d47;
  /* 108f7d0f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7d13 je 0x108f7d47 */
  if (C.zf) goto L_108f7d47;
  /* 108f7d15 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7d19 je 0x108f7d47 */
  if (C.zf) goto L_108f7d47;
  /* 108f7d1b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7d1f je 0x108f7d47 */
  if (C.zf) goto L_108f7d47;
  /* 108f7d21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7d24 mov eax, dword ptr [edx*4 + 0x1091eb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1091eb40)));
  /* 108f7d2b push eax */
  push32((uint32_t)(EAX));
  /* 108f7d2c call dword ptr [0x109233bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233bc))), 0x108f7d32u);
  /* 108f7d32 push 2 */
  push32((uint32_t)(0x2u));
  /* 108f7d34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7d37 mov edx, dword ptr [ecx*4 + 0x1091eb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1091eb40)));
  /* 108f7d3e push edx */
  push32((uint32_t)(EDX));
  /* 108f7d3f call 0x108f4e10 */
  push32(0x108f7d44u); f_108f4e10();
  /* 108f7d44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f7d47:;
  /* 108f7d47 jmp 0x108f7ced */
  goto L_108f7ced;
L_108f7d49:;
  /* 108f7d49 mov eax, dword ptr [0x1091eb64] */
  EAX = (r32((uint32_t)(0x1091eb64)));
  /* 108f7d4e push eax */
  push32((uint32_t)(EAX));
  /* 108f7d4f call dword ptr [0x109233bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233bc))), 0x108f7d55u);
  /* 108f7d55 mov ecx, dword ptr [0x1091eb74] */
  ECX = (r32((uint32_t)(0x1091eb74)));
  /* 108f7d5b push ecx */
  push32((uint32_t)(ECX));
  /* 108f7d5c call dword ptr [0x109233bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233bc))), 0x108f7d62u);
  /* 108f7d62 mov edx, dword ptr [0x1091eb84] */
  EDX = (r32((uint32_t)(0x1091eb84)));
  /* 108f7d68 push edx */
  push32((uint32_t)(EDX));
  /* 108f7d69 call dword ptr [0x109233bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233bc))), 0x108f7d6fu);
  /* 108f7d6f mov eax, dword ptr [0x1091eb44] */
  EAX = (r32((uint32_t)(0x1091eb44)));
  /* 108f7d74 push eax */
  push32((uint32_t)(EAX));
  /* 108f7d75 call dword ptr [0x109233bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109233bc))), 0x108f7d7bu);
  /* 108f7d7b mov esp, ebp */
  ESP = (EBP);
  /* 108f7d7d pop ebp */
  EBP = (pop32());
  /* 108f7d7e ret  */
  ESPCHK(0x108f7ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d80 @ 0x108f7d80 (151 bytes, 46 insns) */
void f_108f7d80(void) {
  FTRACE(0x108f7d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7d80 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7d81 mov ebp, esp */
  EBP = (ESP);
  /* 108f7d83 push ecx */
  push32((uint32_t)(ECX));
  /* 108f7d84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f7d87 cmp dword ptr [eax*4 + 0x1091eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1091eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7d8f jne 0x108f7e02 */
  if (!C.zf) goto L_108f7e02;
  /* 108f7d91 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 108f7d96 push 0x1091bf88 */
  push32((uint32_t)(0x1091bf88u));
  /* 108f7d9b push 2 */
  push32((uint32_t)(0x2u));
  /* 108f7d9d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 108f7d9f call 0x108f4380 */
  push32(0x108f7da4u); f_108f4380();
  /* 108f7da4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7da7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f7daa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7dae jne 0x108f7dba */
  if (!C.zf) goto L_108f7dba;
  /* 108f7db0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 108f7db2 call 0x108f32f0 */
  push32(0x108f7db7u); f_108f32f0();
  /* 108f7db7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f7dba:;
  /* 108f7dba push 0x11 */
  push32((uint32_t)(0x11u));
  /* 108f7dbc call 0x108f7d80 */
  push32(0x108f7dc1u); f_108f7d80();
  /* 108f7dc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7dc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f7dc7 cmp dword ptr [ecx*4 + 0x1091eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1091eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7dcf jne 0x108f7dea */
  if (!C.zf) goto L_108f7dea;
  /* 108f7dd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7dd4 push edx */
  push32((uint32_t)(EDX));
  /* 108f7dd5 call dword ptr [0x1092333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092333c))), 0x108f7ddbu);
  /* 108f7ddb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f7dde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7de1 mov dword ptr [eax*4 + 0x1091eb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1091eb40), (ECX));
  /* 108f7de8 jmp 0x108f7df8 */
  goto L_108f7df8;
L_108f7dea:;
  /* 108f7dea push 2 */
  push32((uint32_t)(0x2u));
  /* 108f7dec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f7def push edx */
  push32((uint32_t)(EDX));
  /* 108f7df0 call 0x108f4e10 */
  push32(0x108f7df5u); f_108f4e10();
  /* 108f7df5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f7df8:;
  /* 108f7df8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 108f7dfa call 0x108f7e20 */
  push32(0x108f7dffu); f_108f7e20();
  /* 108f7dff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f7e02:;
  /* 108f7e02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f7e05 mov ecx, dword ptr [eax*4 + 0x1091eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1091eb40)));
  /* 108f7e0c push ecx */
  push32((uint32_t)(ECX));
  /* 108f7e0d call dword ptr [0x10923338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923338))), 0x108f7e13u);
  /* 108f7e13 mov esp, ebp */
  ESP = (EBP);
  /* 108f7e15 pop ebp */
  EBP = (pop32());
  /* 108f7e16 ret  */
  ESPCHK(0x108f7d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e20 @ 0x108f7e20 (22 bytes, 8 insns) */
void f_108f7e20(void) {
  FTRACE(0x108f7e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7e20 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7e21 mov ebp, esp */
  EBP = (ESP);
  /* 108f7e23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f7e26 mov ecx, dword ptr [eax*4 + 0x1091eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1091eb40)));
  /* 108f7e2d push ecx */
  push32((uint32_t)(ECX));
  /* 108f7e2e call dword ptr [0x10923334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923334))), 0x108f7e34u);
  /* 108f7e34 pop ebp */
  EBP = (pop32());
  /* 108f7e35 ret  */
  ESPCHK(0x108f7e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e40 @ 0x108f7e40 (26 bytes, 10 insns) */
void f_108f7e40(void) {
  FTRACE(0x108f7e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7e40 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7e41 mov ebp, esp */
  EBP = (ESP);
  /* 108f7e43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f7e46 push eax */
  push32((uint32_t)(EAX));
  /* 108f7e47 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f7e49 call dword ptr [0x10923330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923330))), 0x108f7e4fu);
  /* 108f7e4f push 0xff */
  push32((uint32_t)(0xffu));
  /* 108f7e54 call dword ptr [0x10923388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923388))), 0x108f7e5au);
  /* 108f7e5a pop ebp */
  EBP = (pop32());
  /* 108f7e5b ret  */
  ESPCHK(0x108f7e40u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x108f7e60 (446 bytes, 130 insns) */
void f_108f7e60(void) {
  FTRACE(0x108f7e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f7e60 push ebp */
  push32((uint32_t)(EBP));
  /* 108f7e61 mov ebp, esp */
  EBP = (ESP);
  /* 108f7e63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f7e66 call 0x108f3dc0 */
  push32(0x108f7e6bu); f_108f3dc0();
  /* 108f7e6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f7e6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7e71 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 108f7e74 push ecx */
  push32((uint32_t)(ECX));
  /* 108f7e75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f7e78 push edx */
  push32((uint32_t)(EDX));
  /* 108f7e79 call 0x108f8020 */
  push32(0x108f7e7eu); f_108f8020();
  /* 108f7e7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7e81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108f7e84 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7e88 je 0x108f7e93 */
  if (C.zf) goto L_108f7e93;
  /* 108f7e8a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f7e8d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7e91 jne 0x108f7ea2 */
  if (!C.zf) goto L_108f7ea2;
L_108f7e93:;
  /* 108f7e93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f7e96 push ecx */
  push32((uint32_t)(ECX));
  /* 108f7e97 call dword ptr [0x1092332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1092332c))), 0x108f7e9du);
  /* 108f7e9d jmp 0x108f801a */
  goto L_108f801a;
L_108f7ea2:;
  /* 108f7ea2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f7ea5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7ea9 jne 0x108f7ebf */
  if (!C.zf) goto L_108f7ebf;
  /* 108f7eab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f7eae mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 108f7eb5 mov eax, 1 */
  EAX = (0x1u);
  /* 108f7eba jmp 0x108f801a */
  goto L_108f801a;
L_108f7ebf:;
  /* 108f7ebf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f7ec2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7ec6 jne 0x108f7ed0 */
  if (!C.zf) goto L_108f7ed0;
  /* 108f7ec8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108f7ecb jmp 0x108f801a */
  goto L_108f801a;
L_108f7ed0:;
  /* 108f7ed0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f7ed3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108f7ed6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f7ed9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7edc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 108f7edf mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108f7ee2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7ee5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f7ee8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 108f7eeb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f7eee cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7ef2 jne 0x108f7ff7 */
  if (!C.zf) goto L_108f7ff7;
  /* 108f7ef8 mov eax, dword ptr [0x1091ec78] */
  EAX = (r32((uint32_t)(0x1091ec78)));
  /* 108f7efd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108f7f00 jmp 0x108f7f0b */
  goto L_108f7f0b;
L_108f7f02:;
  /* 108f7f02 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f7f05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7f08 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_108f7f0b:;
  /* 108f7f0b mov edx, dword ptr [0x1091ec78] */
  EDX = (r32((uint32_t)(0x1091ec78)));
  /* 108f7f11 add edx, dword ptr [0x1091ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1091ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7f17 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7f1a jge 0x108f7f32 */
  if ((C.sf==C.of)) goto L_108f7f32;
  /* 108f7f1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f7f1f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f7f22 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7f25 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 108f7f28 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 108f7f30 jmp 0x108f7f02 */
  goto L_108f7f02;
L_108f7f32:;
  /* 108f7f32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7f35 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 108f7f38 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108f7f3b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f7f3e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7f44 jne 0x108f7f55 */
  if (!C.zf) goto L_108f7f55;
  /* 108f7f46 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7f49 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 108f7f50 jmp 0x108f7fdd */
  goto L_108f7fdd;
L_108f7f55:;
  /* 108f7f55 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f7f58 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7f5e jne 0x108f7f6c */
  if (!C.zf) goto L_108f7f6c;
  /* 108f7f60 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7f63 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 108f7f6a jmp 0x108f7fdd */
  goto L_108f7fdd;
L_108f7f6c:;
  /* 108f7f6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f7f6f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7f75 jne 0x108f7f83 */
  if (!C.zf) goto L_108f7f83;
  /* 108f7f77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7f7a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 108f7f81 jmp 0x108f7fdd */
  goto L_108f7fdd;
L_108f7f83:;
  /* 108f7f83 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f7f86 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7f8c jne 0x108f7f9a */
  if (!C.zf) goto L_108f7f9a;
  /* 108f7f8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7f91 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 108f7f98 jmp 0x108f7fdd */
  goto L_108f7fdd;
L_108f7f9a:;
  /* 108f7f9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f7f9d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7fa3 jne 0x108f7fb1 */
  if (!C.zf) goto L_108f7fb1;
  /* 108f7fa5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7fa8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 108f7faf jmp 0x108f7fdd */
  goto L_108f7fdd;
L_108f7fb1:;
  /* 108f7fb1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f7fb4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7fba jne 0x108f7fc8 */
  if (!C.zf) goto L_108f7fc8;
  /* 108f7fbc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7fbf mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 108f7fc6 jmp 0x108f7fdd */
  goto L_108f7fdd;
L_108f7fc8:;
  /* 108f7fc8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f7fcb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f7fd1 jne 0x108f7fdd */
  if (!C.zf) goto L_108f7fdd;
  /* 108f7fd3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7fd6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_108f7fdd:;
  /* 108f7fdd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7fe0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 108f7fe3 push edx */
  push32((uint32_t)(EDX));
  /* 108f7fe4 push 8 */
  push32((uint32_t)(0x8u));
  /* 108f7fe6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x108f7fe9u);
  /* 108f7fe9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f7fec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f7fef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f7ff2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 108f7ff5 jmp 0x108f800e */
  goto L_108f800e;
L_108f7ff7:;
  /* 108f7ff7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f7ffa mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 108f8001 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f8004 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108f8007 push ecx */
  push32((uint32_t)(ECX));
  /* 108f8008 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x108f800bu);
  /* 108f800b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f800e:;
  /* 108f800e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f8011 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108f8014 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 108f8017 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_108f801a:;
  /* 108f801a mov esp, ebp */
  ESP = (EBP);
  /* 108f801c pop ebp */
  EBP = (pop32());
  /* 108f801d ret  */
  ESPCHK(0x108f7e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008020 @ 0x108f8020 (89 bytes, 35 insns) */
void f_108f8020(void) {
  FTRACE(0x108f8020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f8020 push ebp */
  push32((uint32_t)(EBP));
  /* 108f8021 mov ebp, esp */
  EBP = (ESP);
  /* 108f8023 push ecx */
  push32((uint32_t)(ECX));
  /* 108f8024 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f8027 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108f802a:;
  /* 108f802a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f802d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108f802f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8032 je 0x108f8052 */
  if (C.zf) goto L_108f8052;
  /* 108f8034 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f8037 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f803a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f803d mov ecx, dword ptr [0x1091ec84] */
  ECX = (r32((uint32_t)(0x1091ec84)));
  /* 108f8043 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f8046 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f8049 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f804b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f804e jae 0x108f8052 */
  if (!C.cf) goto L_108f8052;
  /* 108f8050 jmp 0x108f802a */
  goto L_108f802a;
L_108f8052:;
  /* 108f8052 mov eax, dword ptr [0x1091ec84] */
  EAX = (r32((uint32_t)(0x1091ec84)));
  /* 108f8057 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108f805a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f805d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f805f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8062 jae 0x108f806e */
  if (!C.cf) goto L_108f806e;
  /* 108f8064 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f8067 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108f8069 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f806c je 0x108f8072 */
  if (C.zf) goto L_108f8072;
L_108f806e:;
  /* 108f806e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f8070 jmp 0x108f8075 */
  goto L_108f8075;
L_108f8072:;
  /* 108f8072 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108f8075:;
  /* 108f8075 mov esp, ebp */
  ESP = (EBP);
  /* 108f8077 pop ebp */
  EBP = (pop32());
  /* 108f8078 ret  */
  ESPCHK(0x108f8020u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x108f8080 (48 bytes, 17 insns) */
void f_108f8080(void) {
  FTRACE(0x108f8080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f8080 push ebp */
  push32((uint32_t)(EBP));
  /* 108f8081 mov ebp, esp */
  EBP = (ESP);
  /* 108f8083 push ecx */
  push32((uint32_t)(ECX));
  /* 108f8084 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f8086 call 0x108f7d80 */
  push32(0x108f808bu); f_108f7d80();
  /* 108f808b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f808e mov eax, dword ptr [0x109207a4] */
  EAX = (r32((uint32_t)(0x109207a4)));
  /* 108f8093 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f8096 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8099 mov dword ptr [0x109207a4], ecx */
  w32((uint32_t)(0x109207a4), (ECX));
  /* 108f809f push 9 */
  push32((uint32_t)(0x9u));
  /* 108f80a1 call 0x108f7e20 */
  push32(0x108f80a6u); f_108f7e20();
  /* 108f80a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f80a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f80ac mov esp, ebp */
  ESP = (EBP);
  /* 108f80ae pop ebp */
  EBP = (pop32());
  /* 108f80af ret  */
  ESPCHK(0x108f8080u, _esp0);
  ESP += 4; return;
}

/* FUN_100080b0 @ 0x108f80b0 (10 bytes, 5 insns) */
void f_108f80b0(void) {
  FTRACE(0x108f80b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f80b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f80b1 mov ebp, esp */
  EBP = (ESP);
  /* 108f80b3 mov eax, dword ptr [0x109207a4] */
  EAX = (r32((uint32_t)(0x109207a4)));
  /* 108f80b8 pop ebp */
  EBP = (pop32());
  /* 108f80b9 ret  */
  ESPCHK(0x108f80b0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x108f80c0 (45 bytes, 19 insns) */
void f_108f80c0(void) {
  FTRACE(0x108f80c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f80c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f80c1 mov ebp, esp */
  EBP = (ESP);
  /* 108f80c3 push ecx */
  push32((uint32_t)(ECX));
  /* 108f80c4 mov eax, dword ptr [0x109207a4] */
  EAX = (r32((uint32_t)(0x109207a4)));
  /* 108f80c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f80cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f80d0 je 0x108f80e0 */
  if (C.zf) goto L_108f80e0;
  /* 108f80d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f80d5 push ecx */
  push32((uint32_t)(ECX));
  /* 108f80d6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x108f80d9u);
  /* 108f80d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f80dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f80de jne 0x108f80e4 */
  if (!C.zf) goto L_108f80e4;
L_108f80e0:;
  /* 108f80e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f80e2 jmp 0x108f80e9 */
  goto L_108f80e9;
L_108f80e4:;
  /* 108f80e4 mov eax, 1 */
  EAX = (0x1u);
L_108f80e9:;
  /* 108f80e9 mov esp, ebp */
  ESP = (EBP);
  /* 108f80eb pop ebp */
  EBP = (pop32());
  /* 108f80ec ret  */
  ESPCHK(0x108f80c0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x108f80f0 (88 bytes, 40 insns) */
void f_108f80f0(void) {
  FTRACE(0x108f80f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f80f0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 108f80f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 108f80f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f80fa je 0x108f8143 */
  if (C.zf) goto L_108f8143;
  /* 108f80fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f80fe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 108f8102 push edi */
  push32((uint32_t)(EDI));
  /* 108f8103 mov edi, ecx */
  EDI = (ECX);
  /* 108f8105 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8108 jb 0x108f8137 */
  if (C.cf) goto L_108f8137;
  /* 108f810a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108f810c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 108f810f je 0x108f8119 */
  if (C.zf) goto L_108f8119;
  /* 108f8111 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_108f8113:;
  /* 108f8113 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108f8115 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108f8116 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 108f8117 jne 0x108f8113 */
  if (!C.zf) goto L_108f8113;
L_108f8119:;
  /* 108f8119 mov ecx, eax */
  ECX = (EAX);
  /* 108f811b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 108f811e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8120 mov ecx, eax */
  ECX = (EAX);
  /* 108f8122 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 108f8125 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8127 mov ecx, edx */
  ECX = (EDX);
  /* 108f8129 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 108f812c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108f812f je 0x108f8137 */
  if (C.zf) goto L_108f8137;
  /* 108f8131 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108f8133 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108f8135 je 0x108f813d */
  if (C.zf) goto L_108f813d;
L_108f8137:;
  /* 108f8137 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108f8139 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108f813a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 108f813b jne 0x108f8137 */
  if (!C.zf) goto L_108f8137;
L_108f813d:;
  /* 108f813d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 108f8141 pop edi */
  EDI = (pop32());
  /* 108f8142 ret  */
  ESPCHK(0x108f80f0u, _esp0);
  ESP += 4; return;
L_108f8143:;
  /* 108f8143 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 108f8147 ret  */
  ESPCHK(0x108f80f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008150 @ 0x108f8150 (23 bytes, 10 insns) */
void f_108f8150(void) {
  FTRACE(0x108f8150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f8150 push ebp */
  push32((uint32_t)(EBP));
  /* 108f8151 mov ebp, esp */
  EBP = (ESP);
  /* 108f8153 mov eax, dword ptr [0x109207a0] */
  EAX = (r32((uint32_t)(0x109207a0)));
  /* 108f8158 push eax */
  push32((uint32_t)(EAX));
  /* 108f8159 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f815c push ecx */
  push32((uint32_t)(ECX));
  /* 108f815d call 0x108f8170 */
  push32(0x108f8162u); f_108f8170();
  /* 108f8162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8165 pop ebp */
  EBP = (pop32());
  /* 108f8166 ret  */
  ESPCHK(0x108f8150u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x108f8170 (87 bytes, 34 insns) */
void f_108f8170(void) {
  FTRACE(0x108f8170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f8170 push ebp */
  push32((uint32_t)(EBP));
  /* 108f8171 mov ebp, esp */
  EBP = (ESP);
  /* 108f8173 push ecx */
  push32((uint32_t)(ECX));
  /* 108f8174 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8178 jbe 0x108f817e */
  if ((C.cf||C.zf)) goto L_108f817e;
  /* 108f817a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f817c jmp 0x108f81c3 */
  goto L_108f81c3;
L_108f817e:;
  /* 108f817e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8182 ja 0x108f8195 */
  if ((!C.cf&&!C.zf)) goto L_108f8195;
  /* 108f8184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8187 push eax */
  push32((uint32_t)(EAX));
  /* 108f8188 call 0x108f81d0 */
  push32(0x108f818du); f_108f81d0();
  /* 108f818d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8190 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f8193 jmp 0x108f819c */
  goto L_108f819c;
L_108f8195:;
  /* 108f8195 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108f819c:;
  /* 108f819c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f81a0 jne 0x108f81a8 */
  if (!C.zf) goto L_108f81a8;
  /* 108f81a2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f81a6 jne 0x108f81ad */
  if (!C.zf) goto L_108f81ad;
L_108f81a8:;
  /* 108f81a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f81ab jmp 0x108f81c3 */
  goto L_108f81c3;
L_108f81ad:;
  /* 108f81ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f81b0 push ecx */
  push32((uint32_t)(ECX));
  /* 108f81b1 call 0x108f80c0 */
  push32(0x108f81b6u); f_108f80c0();
  /* 108f81b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f81b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f81bb jne 0x108f81c1 */
  if (!C.zf) goto L_108f81c1;
  /* 108f81bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f81bf jmp 0x108f81c3 */
  goto L_108f81c3;
L_108f81c1:;
  /* 108f81c1 jmp 0x108f817e */
  goto L_108f817e;
L_108f81c3:;
  /* 108f81c3 mov esp, ebp */
  ESP = (EBP);
  /* 108f81c5 pop ebp */
  EBP = (pop32());
  /* 108f81c6 ret  */
  ESPCHK(0x108f8170u, _esp0);
  ESP += 4; return;
}

/* FUN_100081d0 @ 0x108f81d0 (109 bytes, 37 insns) */
void f_108f81d0(void) {
  FTRACE(0x108f81d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f81d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f81d1 mov ebp, esp */
  EBP = (ESP);
  /* 108f81d3 push ecx */
  push32((uint32_t)(ECX));
  /* 108f81d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f81d7 cmp eax, dword ptr [0x1091ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1091ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f81dd ja 0x108f820d */
  if ((!C.cf&&!C.zf)) goto L_108f820d;
  /* 108f81df push 9 */
  push32((uint32_t)(0x9u));
  /* 108f81e1 call 0x108f7d80 */
  push32(0x108f81e6u); f_108f7d80();
  /* 108f81e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f81e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f81ec push ecx */
  push32((uint32_t)(ECX));
  /* 108f81ed call 0x108f8d10 */
  push32(0x108f81f2u); f_108f8d10();
  /* 108f81f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f81f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f81f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f81fa call 0x108f7e20 */
  push32(0x108f81ffu); f_108f7e20();
  /* 108f81ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8202 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8206 je 0x108f820d */
  if (C.zf) goto L_108f820d;
  /* 108f8208 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f820b jmp 0x108f8239 */
  goto L_108f8239;
L_108f820d:;
  /* 108f820d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8211 jne 0x108f821a */
  if (!C.zf) goto L_108f821a;
  /* 108f8213 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_108f821a:;
  /* 108f821a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f821d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8220 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 108f8223 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 108f8226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8229 push eax */
  push32((uint32_t)(EAX));
  /* 108f822a push 0 */
  push32((uint32_t)(0x0u));
  /* 108f822c mov ecx, dword ptr [0x10921f6c] */
  ECX = (r32((uint32_t)(0x10921f6c)));
  /* 108f8232 push ecx */
  push32((uint32_t)(ECX));
  /* 108f8233 call dword ptr [0x10923328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923328))), 0x108f8239u);
L_108f8239:;
  /* 108f8239 mov esp, ebp */
  ESP = (EBP);
  /* 108f823b pop ebp */
  EBP = (pop32());
  /* 108f823c ret  */
  ESPCHK(0x108f81d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008240 @ 0x108f8240 (10 bytes, 5 insns) */
void f_108f8240(void) {
  FTRACE(0x108f8240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f8240 push ebp */
  push32((uint32_t)(EBP));
  /* 108f8241 mov ebp, esp */
  EBP = (ESP);
  /* 108f8243 mov eax, 1 */
  EAX = (0x1u);
  /* 108f8248 pop ebp */
  EBP = (pop32());
  /* 108f8249 ret  */
  ESPCHK(0x108f8240u, _esp0);
  ESP += 4; return;
}

/* FUN_10008250 @ 0x108f8250 (173 bytes, 59 insns) */
void f_108f8250(void) {
  FTRACE(0x108f8250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f8250 push ebp */
  push32((uint32_t)(EBP));
  /* 108f8251 mov ebp, esp */
  EBP = (ESP);
  /* 108f8253 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8256 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f825a jbe 0x108f8263 */
  if ((C.cf||C.zf)) goto L_108f8263;
  /* 108f825c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f825e jmp 0x108f82f9 */
  goto L_108f82f9;
L_108f8263:;
  /* 108f8263 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f8265 call 0x108f7d80 */
  push32(0x108f826au); f_108f7d80();
  /* 108f826a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f826d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8270 push eax */
  push32((uint32_t)(EAX));
  /* 108f8271 call 0x108f8680 */
  push32(0x108f8276u); f_108f8680();
  /* 108f8276 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8279 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f827c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8280 je 0x108f82c1 */
  if (C.zf) goto L_108f82c1;
  /* 108f8282 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108f8289 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f828c cmp ecx, dword ptr [0x1091ec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1091ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8292 ja 0x108f82b2 */
  if ((!C.cf&&!C.zf)) goto L_108f82b2;
  /* 108f8294 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f8297 push edx */
  push32((uint32_t)(EDX));
  /* 108f8298 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f829b push eax */
  push32((uint32_t)(EAX));
  /* 108f829c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f829f push ecx */
  push32((uint32_t)(ECX));
  /* 108f82a0 call 0x108f9550 */
  push32(0x108f82a5u); f_108f9550();
  /* 108f82a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f82a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f82aa je 0x108f82b2 */
  if (C.zf) goto L_108f82b2;
  /* 108f82ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f82af mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108f82b2:;
  /* 108f82b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f82b4 call 0x108f7e20 */
  push32(0x108f82b9u); f_108f7e20();
  /* 108f82b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f82bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f82bf jmp 0x108f82f9 */
  goto L_108f82f9;
L_108f82c1:;
  /* 108f82c1 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f82c3 call 0x108f7e20 */
  push32(0x108f82c8u); f_108f7e20();
  /* 108f82c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f82cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f82cf jne 0x108f82d8 */
  if (!C.zf) goto L_108f82d8;
  /* 108f82d1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_108f82d8:;
  /* 108f82d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f82db add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f82de and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 108f82e0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 108f82e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f82e6 push ecx */
  push32((uint32_t)(ECX));
  /* 108f82e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f82ea push edx */
  push32((uint32_t)(EDX));
  /* 108f82eb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 108f82ed mov eax, dword ptr [0x10921f6c] */
  EAX = (r32((uint32_t)(0x10921f6c)));
  /* 108f82f2 push eax */
  push32((uint32_t)(EAX));
  /* 108f82f3 call dword ptr [0x10923324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923324))), 0x108f82f9u);
L_108f82f9:;
  /* 108f82f9 mov esp, ebp */
  ESP = (EBP);
  /* 108f82fb pop ebp */
  EBP = (pop32());
  /* 108f82fc ret  */
  ESPCHK(0x108f8250u, _esp0);
  ESP += 4; return;
}

/* FUN_10008300 @ 0x108f8300 (490 bytes, 165 insns) */
void f_108f8300(void) {
  FTRACE(0x108f8300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f8300 push ebp */
  push32((uint32_t)(EBP));
  /* 108f8301 mov ebp, esp */
  EBP = (ESP);
  /* 108f8303 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8306 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f830a jne 0x108f831d */
  if (!C.zf) goto L_108f831d;
  /* 108f830c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f830f push eax */
  push32((uint32_t)(EAX));
  /* 108f8310 call 0x108f8150 */
  push32(0x108f8315u); f_108f8150();
  /* 108f8315 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8318 jmp 0x108f84e6 */
  goto L_108f84e6;
L_108f831d:;
  /* 108f831d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8321 jne 0x108f8336 */
  if (!C.zf) goto L_108f8336;
  /* 108f8323 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8326 push ecx */
  push32((uint32_t)(ECX));
  /* 108f8327 call 0x108f84f0 */
  push32(0x108f832cu); f_108f84f0();
  /* 108f832c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f832f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f8331 jmp 0x108f84e6 */
  goto L_108f84e6;
L_108f8336:;
  /* 108f8336 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108f833d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8341 ja 0x108f84b9 */
  if ((!C.cf&&!C.zf)) goto L_108f84b9;
  /* 108f8347 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f8349 call 0x108f7d80 */
  push32(0x108f834eu); f_108f7d80();
  /* 108f834e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8351 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8354 push edx */
  push32((uint32_t)(EDX));
  /* 108f8355 call 0x108f8680 */
  push32(0x108f835au); f_108f8680();
  /* 108f835a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f835d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108f8360 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8364 je 0x108f847c */
  if (C.zf) goto L_108f847c;
  /* 108f836a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f836d cmp eax, dword ptr [0x1091ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1091ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8373 ja 0x108f83f0 */
  if ((!C.cf&&!C.zf)) goto L_108f83f0;
  /* 108f8375 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f8378 push ecx */
  push32((uint32_t)(ECX));
  /* 108f8379 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f837c push edx */
  push32((uint32_t)(EDX));
  /* 108f837d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f8380 push eax */
  push32((uint32_t)(EAX));
  /* 108f8381 call 0x108f9550 */
  push32(0x108f8386u); f_108f9550();
  /* 108f8386 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8389 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f838b je 0x108f8395 */
  if (C.zf) goto L_108f8395;
  /* 108f838d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8390 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108f8393 jmp 0x108f83f0 */
  goto L_108f83f0;
L_108f8395:;
  /* 108f8395 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f8398 push edx */
  push32((uint32_t)(EDX));
  /* 108f8399 call 0x108f8d10 */
  push32(0x108f839eu); f_108f8d10();
  /* 108f839e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f83a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f83a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f83a8 je 0x108f83f0 */
  if (C.zf) goto L_108f83f0;
  /* 108f83aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f83ad mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 108f83b0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f83b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108f83b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f83b9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f83bc jae 0x108f83c6 */
  if (!C.cf) goto L_108f83c6;
  /* 108f83be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f83c1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108f83c4 jmp 0x108f83cc */
  goto L_108f83cc;
L_108f83c6:;
  /* 108f83c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f83c9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_108f83cc:;
  /* 108f83cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108f83cf push edx */
  push32((uint32_t)(EDX));
  /* 108f83d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f83d3 push eax */
  push32((uint32_t)(EAX));
  /* 108f83d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f83d7 push ecx */
  push32((uint32_t)(ECX));
  /* 108f83d8 call 0x108fac60 */
  push32(0x108f83ddu); f_108fac60();
  /* 108f83dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f83e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f83e3 push edx */
  push32((uint32_t)(EDX));
  /* 108f83e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f83e7 push eax */
  push32((uint32_t)(EAX));
  /* 108f83e8 call 0x108f8740 */
  push32(0x108f83edu); f_108f8740();
  /* 108f83ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f83f0:;
  /* 108f83f0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f83f4 jne 0x108f8470 */
  if (!C.zf) goto L_108f8470;
  /* 108f83f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f83fa jne 0x108f8403 */
  if (!C.zf) goto L_108f8403;
  /* 108f83fc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_108f8403:;
  /* 108f8403 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f8406 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8409 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 108f840c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 108f840f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f8412 push edx */
  push32((uint32_t)(EDX));
  /* 108f8413 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f8415 mov eax, dword ptr [0x10921f6c] */
  EAX = (r32((uint32_t)(0x10921f6c)));
  /* 108f841a push eax */
  push32((uint32_t)(EAX));
  /* 108f841b call dword ptr [0x10923328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923328))), 0x108f8421u);
  /* 108f8421 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108f8424 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8428 je 0x108f8470 */
  if (C.zf) goto L_108f8470;
  /* 108f842a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f842d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 108f8430 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108f8433 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108f8436 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f8439 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f843c jae 0x108f8446 */
  if (!C.cf) goto L_108f8446;
  /* 108f843e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f8441 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108f8444 jmp 0x108f844c */
  goto L_108f844c;
L_108f8446:;
  /* 108f8446 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f8449 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_108f844c:;
  /* 108f844c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108f844f push eax */
  push32((uint32_t)(EAX));
  /* 108f8450 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8453 push ecx */
  push32((uint32_t)(ECX));
  /* 108f8454 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f8457 push edx */
  push32((uint32_t)(EDX));
  /* 108f8458 call 0x108fac60 */
  push32(0x108f845du); f_108fac60();
  /* 108f845d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8463 push eax */
  push32((uint32_t)(EAX));
  /* 108f8464 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108f8467 push ecx */
  push32((uint32_t)(ECX));
  /* 108f8468 call 0x108f8740 */
  push32(0x108f846du); f_108f8740();
  /* 108f846d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108f8470:;
  /* 108f8470 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f8472 call 0x108f7e20 */
  push32(0x108f8477u); f_108f7e20();
  /* 108f8477 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f847a jmp 0x108f84b9 */
  goto L_108f84b9;
L_108f847c:;
  /* 108f847c push 9 */
  push32((uint32_t)(0x9u));
  /* 108f847e call 0x108f7e20 */
  push32(0x108f8483u); f_108f7e20();
  /* 108f8483 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8486 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f848a jne 0x108f8493 */
  if (!C.zf) goto L_108f8493;
  /* 108f848c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_108f8493:;
  /* 108f8493 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f8496 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8499 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 108f849c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 108f849f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f84a2 push eax */
  push32((uint32_t)(EAX));
  /* 108f84a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f84a6 push ecx */
  push32((uint32_t)(ECX));
  /* 108f84a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f84a9 mov edx, dword ptr [0x10921f6c] */
  EDX = (r32((uint32_t)(0x10921f6c)));
  /* 108f84af push edx */
  push32((uint32_t)(EDX));
  /* 108f84b0 call dword ptr [0x10923324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923324))), 0x108f84b6u);
  /* 108f84b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108f84b9:;
  /* 108f84b9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f84bd jne 0x108f84c8 */
  if (!C.zf) goto L_108f84c8;
  /* 108f84bf cmp dword ptr [0x109207a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109207a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f84c6 jne 0x108f84cd */
  if (!C.zf) goto L_108f84cd;
L_108f84c8:;
  /* 108f84c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108f84cb jmp 0x108f84e6 */
  goto L_108f84e6;
L_108f84cd:;
  /* 108f84cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108f84d0 push eax */
  push32((uint32_t)(EAX));
  /* 108f84d1 call 0x108f80c0 */
  push32(0x108f84d6u); f_108f80c0();
  /* 108f84d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f84d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108f84db jne 0x108f84e1 */
  if (!C.zf) goto L_108f84e1;
  /* 108f84dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108f84df jmp 0x108f84e6 */
  goto L_108f84e6;
L_108f84e1:;
  /* 108f84e1 jmp 0x108f8336 */
  goto L_108f8336;
L_108f84e6:;
  /* 108f84e6 mov esp, ebp */
  ESP = (EBP);
  /* 108f84e8 pop ebp */
  EBP = (pop32());
  /* 108f84e9 ret  */
  ESPCHK(0x108f8300u, _esp0);
  ESP += 4; return;
}

/* FUN_100084f0 @ 0x108f84f0 (104 bytes, 38 insns) */
void f_108f84f0(void) {
  FTRACE(0x108f84f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108f84f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108f84f1 mov ebp, esp */
  EBP = (ESP);
  /* 108f84f3 push ecx */
  push32((uint32_t)(ECX));
  /* 108f84f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f84f8 jne 0x108f84fc */
  if (!C.zf) goto L_108f84fc;
  /* 108f84fa jmp 0x108f8554 */
  goto L_108f8554;
L_108f84fc:;
  /* 108f84fc push 9 */
  push32((uint32_t)(0x9u));
  /* 108f84fe call 0x108f7d80 */
  push32(0x108f8503u); f_108f7d80();
  /* 108f8503 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8506 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8509 push eax */
  push32((uint32_t)(EAX));
  /* 108f850a call 0x108f8680 */
  push32(0x108f850fu); f_108f8680();
  /* 108f850f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8512 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108f8515 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108f8519 je 0x108f8537 */
  if (C.zf) goto L_108f8537;
  /* 108f851b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f851e push ecx */
  push32((uint32_t)(ECX));
  /* 108f851f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108f8522 push edx */
  push32((uint32_t)(EDX));
  /* 108f8523 call 0x108f8740 */
  push32(0x108f8528u); f_108f8740();
  /* 108f8528 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f852b push 9 */
  push32((uint32_t)(0x9u));
  /* 108f852d call 0x108f7e20 */
  push32(0x108f8532u); f_108f7e20();
  /* 108f8532 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8535 jmp 0x108f8554 */
  goto L_108f8554;
L_108f8537:;
  /* 108f8537 push 9 */
  push32((uint32_t)(0x9u));
  /* 108f8539 call 0x108f7e20 */
  push32(0x108f853eu); f_108f7e20();
  /* 108f853e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108f8541 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108f8544 push eax */
  push32((uint32_t)(EAX));
  /* 108f8545 push 0 */
  push32((uint32_t)(0x0u));
  /* 108f8547 mov ecx, dword ptr [0x10921f6c] */
  ECX = (r32((uint32_t)(0x10921f6c)));
  /* 108f854d push ecx */
  push32((uint32_t)(ECX));
  /* 108f854e call dword ptr [0x10923348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10923348))), 0x108f8554u);
L_108f8554:;
  /* 108f8554 mov esp, ebp */
  ESP = (EBP);
  /* 108f8556 pop ebp */
  EBP = (pop32());
  /* 108f8557 ret  */
  ESPCHK(0x108f84f0u, _esp0);
  ESP += 4; return;
}

